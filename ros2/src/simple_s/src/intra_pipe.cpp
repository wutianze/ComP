#include <chrono>
#include <cinttypes>
#include <cstdio>
#include <memory>
#include <string>
#include <utility>
#include<cmath>
#include<numeric>
#include <message_filters/subscriber.h>
#include <message_filters/synchronizer.h>
#include <message_filters/sync_policies/approximate_time.h>
#include <message_filters/time_synchronizer.h>

#include "test_interfaces/msg/test.hpp"     // CHANGE
#include "rclcpp/rclcpp.hpp"

using namespace std::chrono_literals;
using namespace std;
using namespace message_filters;

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

struct Producer : public rclcpp::Node
{
	Producer(const std::string & name, const int &sleep_ms, const int64_t &str_size, const std::string &channel_name)
		: Node(name, rclcpp::NodeOptions().use_intra_process_comms(true))
	{
		rclcpp::QoS qos_(rclcpp::QoSInitialization::from_rmw(rmw_qos_profile_sensor_data));
		//Create a publisher on the output topic.
		pub_ = this->create_publisher<test_interfaces::msg::Test>(channel_name, qos_);
		std::weak_ptr<std::remove_pointer<decltype(pub_.get())>::type> captured_pub = pub_;
		//Create a timer which publishes on the output topic at ~1Hz.
		auto callback = [captured_pub, str_size, this]() -> void {
			auto pub_ptr = captured_pub.lock();
			if (!pub_ptr) {
				return;
			}
			static int32_t count = 0;
			test_interfaces::msg::Test::UniquePtr msg(new test_interfaces::msg::Test());
			msg->header.frame_id = count++;
			msg->content = string(str_size,'a');
			printf(
					"Published message with content size: %lu, and address: 0x%" PRIXPTR "\n", (msg->content).size(),
					reinterpret_cast<std::uintptr_t>(msg.get()));
			
			msg->header.stamp = this->now();
			pub_ptr->publish(std::move(msg));
		};
		timer_ = this->create_wall_timer(std::chrono::duration<int,std::milli>(sleep_ms), callback);
	}

	rclcpp::Publisher<test_interfaces::msg::Test>::SharedPtr pub_;
	rclcpp::TimerBase::SharedPtr timer_;
};

//Node that consumes messages.
struct Consumer : public rclcpp::Node
{
	Consumer(const std::string & name, const std::string & channel_name, const int& channel_num)
		: Node(name, rclcpp::NodeOptions().use_intra_process_comms(true))
	{
		for(int i=0;i<channel_num;i++){
			vector<uint64_t>tmp;
			latency.push_back(tmp);
		}

		//Create a subscription on the input topic which prints on receipt of new messages.
		if(channel_num == 1){
		sub_ = this->create_subscription<test_interfaces::msg::Test>(
				channel_name,
				10,
				[this](test_interfaces::msg::Test::UniquePtr msg) {
				//uint64_t rec_time = this->now().nanoseconds();
				
				rclcpp::Time rec_time = this->now();
				RCLCPP_INFO(this->get_logger(),"heard one");
				//RCLCPP_INFO(this->get_logger(), "I heard: '%d',rec_time:'%lu', content size:%lu", msg->id,rec_time,(msg->content).size());              // CHANGE
				latency[0].push_back((rec_time-msg->header.stamp).nanoseconds());
				//printf(
				//		" Received message content size: %lu, and address: 0x%" PRIXPTR "\n", (msg->content).size(),
				//		reinterpret_cast<std::uintptr_t>(msg.get()));
				});
		}else if(channel_num == 2){
			sub1.subscribe(this,channel_name+'0',rmw_qos_profile_sensor_data);
			sub2.subscribe(this,channel_name+'1',rmw_qos_profile_sensor_data);
			//this->sync_ = new TimeSynchronizer<test_interfaces::msg::Test,test_interfaces::msg::Test>(sub1,sub2,10);
			//this->sync_->registerCallback(&MinimalSubscriber::topic_callback2,this);
			this->sync_= std::make_shared<Synchronizer<sync_policies::ApproximateTime<test_interfaces::msg::Test,test_interfaces::msg::Test>>>(sync_policies::ApproximateTime<test_interfaces::msg::Test,test_interfaces::msg::Test>(10),sub1,sub2);
			this->sync_->registerCallback(&Consumer::topic_callback2,this);

		}
	}
	~Consumer(){
		for(unsigned int i =0;i<latency.size();i++){
			vector<double> res = analyze_latency(latency[i]);
			cout<<"result:"<<i<<endl;
			for(unsigned int j=0;j<res.size();j++){
				cout<<res[j]<<endl;
			}
		}
	}
	void topic_callback2(const test_interfaces::msg::Test::SharedPtr msg0,const test_interfaces::msg::Test::SharedPtr msg1)
	{
		rclcpp::Time rec_time = this->now();
		RCLCPP_INFO(this->get_logger(), "I heard two");              // CHANGE
		latency[0].push_back((rec_time - msg0->header.stamp).nanoseconds());
		latency[1].push_back((rec_time - msg1->header.stamp).nanoseconds());
	}
	rclcpp::Subscription<test_interfaces::msg::Test>::SharedPtr sub_;
	message_filters::Subscriber<test_interfaces::msg::Test>sub1;
	message_filters::Subscriber<test_interfaces::msg::Test>sub2;
	shared_ptr<Synchronizer<sync_policies::ApproximateTime<test_interfaces::msg::Test,test_interfaces::msg::Test>>>sync_;
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
	for(int i=0;i<pub_num;i++){
	auto producer = std::make_shared<Producer>("producer"+to_string(i),atoi(argv[2]),atoll(argv[3]),string(argv[1]));// for 1 to 1 
	//auto producer = std::make_shared<Producer>("producer"+to_string(i),atoi(argv[2]),atoll(argv[3]),string(argv[1])+to_string(i)); //for N to 1
	pvec.push_back(producer);
	executor.add_node(producer);
	}
	for(int i=0;i<sub_num;i++){	
	auto consumer = std::make_shared<Consumer>("consumer"+to_string(i),string(argv[1]),atoi(argv[4]));
	cvec.push_back(consumer);
	executor.add_node(consumer);
	}
	executor.spin();

	rclcpp::shutdown();

	return 0;
}