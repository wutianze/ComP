#include <memory>
#include<vector>
#include<cmath>
#include<numeric>
#include <message_filters/subscriber.h>
#include <message_filters/synchronizer.h>
#include <message_filters/sync_policies/approximate_time.h>
#include <message_filters/time_synchronizer.h>

#include "rclcpp/qos.hpp"
#include "rclcpp/rclcpp.hpp"
#include "test_interfaces/msg/test.hpp"     // CHANGE
//using std::placeholders::_1;
//using std::placeholders::_2;
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

class MinimalSubscriber : public rclcpp::Node
{
	public:
		MinimalSubscriber(string channel_name, int channel_num)
			:Node("minimal_subscriber"), count_(0)
		{
			for(int i=0;i<channel_num;i++){
				vector<uint64_t>tmp;
				latency.push_back(tmp);
			}
			
			//rclcpp::QoS qos_(rclcpp::QoSInitialization::from_rmw(rmw_qos_profile_sensor_data));
			rclcpp::QoS qos_(rclcpp::QoSInitialization::from_rmw(rmw_qos_profile_default));
			if(channel_num == 1){
			subscription_ = this->create_subscription<test_interfaces::msg::Test>(          // CHANGE
					channel_name, qos_, std::bind(&MinimalSubscriber::topic_callback, this, std::placeholders::_1));
			}else if(channel_num == 2){
			sub1.subscribe(this,channel_name+'0',rmw_qos_profile_default);
			sub2.subscribe(this,channel_name+'1',rmw_qos_profile_default);
			//this->sync_ = new TimeSynchronizer<test_interfaces::msg::Test,test_interfaces::msg::Test>(sub1,sub2,10);
			//this->sync_->registerCallback(&MinimalSubscriber::topic_callback2,this);
			this->sync_= std::make_shared<Synchronizer<sync_policies::ApproximateTime<test_interfaces::msg::Test,test_interfaces::msg::Test>>>(sync_policies::ApproximateTime<test_interfaces::msg::Test,test_interfaces::msg::Test>(10),sub1,sub2);
			this->sync_->registerCallback(&MinimalSubscriber::topic_callback2,this);
			}
			
		}
		~MinimalSubscriber(){
			for(unsigned int i =0;i<latency.size();i++){
				vector<double> res = analyze_latency(latency[i]);
				cout<<"result:"<<i<<endl;
				for(unsigned int j=0;j<res.size();j++){
					cout<<res[j]<<endl;
				}
			}
		}

		void topic_callback(const test_interfaces::msg::Test::SharedPtr msg)       // CHANGE
		{
			uint64_t rec_la = (this->now()-(msg->header).stamp).nanoseconds();
			RCLCPP_INFO(this->get_logger(), "I heard: '%d',rec_la:'%lu'", (msg->header).frame_id,rec_la);              // CHANGE
			latency[0].push_back(rec_la);
			this->count_++;
		}
		void topic_callback2(const test_interfaces::msg::Test::SharedPtr& msg0,const test_interfaces::msg::Test::SharedPtr& msg1)
		{
			rclcpp::Time rec_time = this->now();
			//uint64_t rec_la = (this->now()-(msg->header).stamp).nanoseconds();
			RCLCPP_INFO(this->get_logger(), "I heard two");              // CHANGE
			latency[0].push_back((rec_time - msg0->header.stamp).nanoseconds());
			latency[1].push_back((rec_time - msg1->header.stamp).nanoseconds());
			this->count_++;
		}	
		int count_;
		rclcpp::Subscription<test_interfaces::msg::Test>::SharedPtr subscription_;       // CHANGE
		message_filters::Subscriber<test_interfaces::msg::Test>sub1;
		message_filters::Subscriber<test_interfaces::msg::Test>sub2;

		shared_ptr<Synchronizer<sync_policies::ApproximateTime<test_interfaces::msg::Test,test_interfaces::msg::Test>>>sync_;
		//TimeSynchronizer<test_interfaces::msg::Test,test_interfaces::msg::Test>*sync_;

};

int main(int argc, char * argv[])
{
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<MinimalSubscriber>(string(argv[1]),atoi(argv[2])));
	rclcpp::shutdown();
	return 0;
}
