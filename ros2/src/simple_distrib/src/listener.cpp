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


class MinimalSubscriber : public rclcpp::Node
{
	public:
		MinimalSubscriber()
			:Node("minimal_subscriber"), count_(0)
		{

			subscription_ = this->create_subscription<test_interfaces::msg::Test>(          // CHANGE
					"message_back", 1, std::bind(&MinimalSubscriber::topic_callback, this, std::placeholders::_1));
	
		}

		void topic_callback(const test_interfaces::msg::Test::SharedPtr msg)       // CHANGE
		{
			uint64_t rec_la = (this->now()-msg->header.stamp).nanoseconds();
			cout<<std::to_string(rec_la)<<endl;
		}
	
		int count_;
		rclcpp::Subscription<test_interfaces::msg::Test>::SharedPtr subscription_;       // CHANGE

};

int main(int argc, char * argv[])
{
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<MinimalSubscriber>());
	rclcpp::shutdown();
	return 0;
}
