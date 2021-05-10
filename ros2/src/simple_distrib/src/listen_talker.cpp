#include <memory>
#include<vector>
#include<cmath>
#include<numeric>
#include <cstdio>
#include<fstream>
#include "rclcpp/qos.hpp"
#include "rclcpp/rclcpp.hpp"
#include "test_interfaces/msg/test.hpp"     // CHANGE
//using std::placeholders::_1;
//using std::placeholders::_2;
using namespace std;

class Subscriber_talker : public rclcpp::Node
{
	public:
		Subscriber_talker()
			:Node("subscriber_talker"), count_(0)
		{

			subscription_ = this->create_subscription<test_interfaces::msg::Test>(          // CHANGE
					"message", 1, std::bind(&Subscriber_talker::topic_callback, this, std::placeholders::_1));

			publisher_ = this->create_publisher<test_interfaces::msg::Test>("message_back", 1);    // CHANGE
			
		}


		void topic_callback(const test_interfaces::msg::Test::SharedPtr msg)       // CHANGE
		{
			uint64_t rec_la = (this->now()-msg->header.stamp).nanoseconds();
			cout<<std::to_string(rec_la)<<endl;
			publisher_->publish(msg);
		}
	
		int count_;
		rclcpp::Subscription<test_interfaces::msg::Test>::SharedPtr subscription_;       // CHANGE
		rclcpp::Publisher<test_interfaces::msg::Test>::SharedPtr publisher_; 
};

int main(int argc, char * argv[])
{
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<Subscriber_talker>());
	rclcpp::shutdown();
	return 0;
}
