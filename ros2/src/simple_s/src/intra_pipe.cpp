#include <chrono>
#include <cinttypes>
#include <cstdio>
#include <memory>
#include <string>
#include <utility>
#include<cmath>
#include<numeric>
#include<fstream>
#include <message_filters/subscriber.h>
#include <message_filters/synchronizer.h>
#include <message_filters/sync_policies/approximate_time.h>
#include <message_filters/time_synchronizer.h>

#include "test_interfaces/msg/test.hpp"     // CHANGE
#include "rclcpp/rclcpp.hpp"

using namespace std::chrono_literals;
using namespace std;
using namespace message_filters;
fstream writer;
/*
vector<vector<uint64_t>>latency;
vector<double>analyze_latency(vector<uint64_t>&p){
	vector<double>res;
	sort(p.begin(),p.end());
	int size = p.size();
	res.push_back(p[static_cast<int>((size-1)*0.95)]);// 95th
	res.push_back(p[static_cast<int>((size-1)*0.99)]);// 99th

	// for box-plot
	res.push_back(p[0]);// smallest latency
	res.push_back(p[static_cast<int>((size-1)*0.25)]);// 25th
	res.push_back(p[static_cast<int>((size-1)*0.5)]);// 50th
	res.push_back(p[static_cast<int>((size-1)*0.75)]);// 75th
	res.push_back(p[size-1]);// biggest latency

	double sum = std::accumulate(std::begin(p), std::end(p), 0.0);
	double mean =  sum / size;

	double accum  = 0.0;
	std::for_each (std::begin(p), std::end(p), [&](const double d) {
			accum  += (d-mean)*(d-mean);
			});
	double stdev = sqrt(accum/(size-1));
	res.push_back(mean);
	res.push_back(stdev);
	return res;
}
*/
struct Producer : public rclcpp::Node
{
	Producer(const std::string & name, const int &sleep_ms, const int64_t &str_size, const std::string &channel_name)
		: Node(name, rclcpp::NodeOptions().use_intra_process_comms(true))
	{
		//rclcpp::QoS qos_(rclcpp::QoSInitialization::from_rmw(rmw_qos_profile_sensor_data));
		//Create a publisher on the output topic.
		//pub_ = this->create_publisher<test_interfaces::msg::Test>(channel_name, qos_);
		count=0;
		pub_ = this->create_publisher<test_interfaces::msg::Test>(channel_name, 1);
		std::weak_ptr<std::remove_pointer<decltype(pub_.get())>::type> captured_pub = pub_;
		//Create a timer which publishes on the output topic at ~1Hz.
		auto callback = [captured_pub, str_size, this]() -> void {
			auto pub_ptr = captured_pub.lock();
			if (!pub_ptr) {
				return;
			}
			test_interfaces::msg::Test::UniquePtr msg(new test_interfaces::msg::Test());
			msg->count = count;
			count++;
			msg->content = string(str_size,'a');
			//printf(
			//		"Published message with content size: %lu, and address: 0x%" PRIXPTR "\n", (msg->content).size(),
			//		reinterpret_cast<std::uintptr_t>(msg.get()));
			
			msg->header.stamp = this->now();
			pub_ptr->publish(std::move(msg));
		};
		timer_ = this->create_wall_timer(std::chrono::duration<int,std::milli>(sleep_ms), callback);
	}

	rclcpp::Publisher<test_interfaces::msg::Test>::SharedPtr pub_;
	rclcpp::TimerBase::SharedPtr timer_;
	uint64_t count = 0;
};

//Node that consumes messages.
struct Consumer : public rclcpp::Node
{
	Consumer(const std::string & name, const std::string & channel_name, const int& channel_num)
		: Node(name, rclcpp::NodeOptions().use_intra_process_comms(true))
	{
		file_name = name;
		for(int i=0;i<channel_num;i++){
			vector<uint64_t>tmp;
			latency.push_back(tmp);
			//countV.push_back(tmp1);
		}
		rec_count = 0;
		rec_max = 0;
		//Create a subscription on the input topic which prints on receipt of new messages.
		if(channel_num == 1){
		sub_ = this->create_subscription<test_interfaces::msg::Test>(
				channel_name,
				1,
				[this](test_interfaces::msg::Test::UniquePtr msg) {
				//uint64_t rec_time = this->now().nanoseconds();
				rclcpp::Time rec_time = this->now();
				if(rec_max < msg->count){
				rec_max = msg->count;
				}	
				rec_count++;
				//RCLCPP_INFO(this->get_logger(),"heard one,count:%d,max:%d",rec_count,rec_max);
				//RCLCPP_INFO(this->get_logger(), "I heard: '%d',rec_time:'%lu', content size:%lu", msg->id,rec_time,(msg->content).size());              // CHANGE
				latency[0].push_back((rec_time-msg->header.stamp).nanoseconds());
				//countV[0].push_back(msg->count);
				//printf(
				//		" Received message content size: %lu, and address: 0x%" PRIXPTR "\n", (msg->content).size(),
				//		reinterpret_cast<std::uintptr_t>(msg.get()));
				});
		}else{
			sub0.subscribe(this,channel_name+'0',rmw_qos_profile_sensor_data);
			sub1.subscribe(this,channel_name+'1',rmw_qos_profile_sensor_data);
			sub2.subscribe(this,channel_name+'2',rmw_qos_profile_sensor_data);
			sub3.subscribe(this,channel_name+'3',rmw_qos_profile_sensor_data);
			//this->sync_ = new TimeSynchronizer<test_interfaces::msg::Test,test_interfaces::msg::Test>(sub1,sub2,10);
			//this->sync_->registerCallback(&MinimalSubscriber::topic_callback2,this);
			this->sync_= std::make_shared<Synchronizer<sync_policies::ApproximateTime<test_interfaces::msg::Test,test_interfaces::msg::Test,test_interfaces::msg::Test,test_interfaces::msg::Test>>>(sync_policies::ApproximateTime<test_interfaces::msg::Test,test_interfaces::msg::Test,test_interfaces::msg::Test,test_interfaces::msg::Test>(10),sub0,sub1,sub2,sub3);
			this->sync_->registerCallback(&Consumer::topic_callback2,this);

		}
	}
	~Consumer(){
		//string loss_rate = to_string(double(rec_count-1)/double(rec_max));
		RCLCPP_INFO(this->get_logger(), "latency num:%d",latency.size());              // CHANGE
		for(unsigned int i =0;i<latency.size();i++){
			/*vector<double> res = analyze_latency(latency[i]);
			cout<<"result:"<<i<<endl;
			for(unsigned int j=0;j<res.size();j++){
				cout<<res[j]<<endl;
			}*/
			cout<<"release Consumer"<<endl;
			writer.open("/ros2_test/log/test/tmp/"+file_name+'_'+to_string(i),std::ios::trunc|std::ios::out);
			for(unsigned int j=0;j<latency[i].size();j++){
			writer<<latency[i][j]<<endl;//<<','<<countV[i][j]<<endl;
			}
			writer.close();
		}
	}
	void topic_callback2(const test_interfaces::msg::Test::SharedPtr msg0,const test_interfaces::msg::Test::SharedPtr msg1,const test_interfaces::msg::Test::SharedPtr msg2,const test_interfaces::msg::Test::SharedPtr msg3)
	{
		rclcpp::Time rec_time = this->now();
		//RCLCPP_INFO(this->get_logger(), "I heard two");              // CHANGE
		latency[0].push_back((rec_time - msg0->header.stamp).nanoseconds());
		latency[1].push_back((rec_time - msg1->header.stamp).nanoseconds());
		latency[2].push_back((rec_time - msg2->header.stamp).nanoseconds());
		latency[3].push_back((rec_time - msg3->header.stamp).nanoseconds());
	}
	rclcpp::Subscription<test_interfaces::msg::Test>::SharedPtr sub_;
	message_filters::Subscriber<test_interfaces::msg::Test>sub0;
	message_filters::Subscriber<test_interfaces::msg::Test>sub1;
	message_filters::Subscriber<test_interfaces::msg::Test>sub2;
	message_filters::Subscriber<test_interfaces::msg::Test>sub3;
	shared_ptr<Synchronizer<sync_policies::ApproximateTime<test_interfaces::msg::Test,test_interfaces::msg::Test,test_interfaces::msg::Test,test_interfaces::msg::Test>>>sync_;
	string file_name;
	vector<vector<uint64_t>>latency;
	//vector<vector<uint64_t>>countV;
	uint64_t rec_count;
	uint64_t rec_max;
};

int main(int argc, char * argv[])
{
	setvbuf(stdout, NULL, _IONBF, BUFSIZ);
	rclcpp::init(argc, argv);
	rclcpp::executors::SingleThreadedExecutor executor;
	int pub_num = atoi(argv[5]);
	int sub_num = atoi(argv[6]);
	cout<<"pub_num"<<pub_num<<" sub_num"<<sub_num<<endl;
	vector<shared_ptr<Producer>>pvec;
	vector<shared_ptr<Consumer>>cvec;
	int sleep_times[4]{};
	if(atoi(argv[2])==0){
	sleep_times[0]=10;
	sleep_times[1]=10;
	sleep_times[2]=10;
	sleep_times[3]=10;
	}else if(atoi(argv[2])==1){
	sleep_times[0]=10;
	sleep_times[1]=20;
	sleep_times[2]=50;
	sleep_times[3]=100;
	}else if(atoi(argv[2])==2){
	sleep_times[0]=100;
	sleep_times[1]=50;
	sleep_times[2]=20;
	sleep_times[3]=10;
	}
	if(pub_num == 1){
	sleep_times[0] = atoi(argv[2]);
	}
	for(int i=0;i<sub_num;i++){	
	//auto consumer = std::make_shared<Consumer>("c_"+to_string(i),string(argv[1]),atoi(argv[4]));
	auto consumer = std::make_shared<Consumer>("c_"+to_string(i),string(argv[1])+to_string(i),atoi(argv[4]));
	cvec.push_back(consumer);
	executor.add_node(consumer);
	}
	for(int i=0;i<pub_num;i++){
	//auto producer = std::make_shared<Producer>("producer"+to_string(i),atoi(argv[2]),atoll(argv[3]),string(argv[1]));// for 1 to 1 
	auto producer = std::make_shared<Producer>("producer"+to_string(i),sleep_times[i],atoll(argv[3]),string(argv[1])+to_string(i)); //for N to 1
	pvec.push_back(producer);
	executor.add_node(producer);
	}
	executor.spin();

	rclcpp::shutdown();

	return 0;
}
