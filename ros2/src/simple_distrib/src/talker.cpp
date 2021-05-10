#include <chrono>
#include <cstdio>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "test_interfaces/msg/test.hpp"     // CHANGE
#include "rclcpp/qos.hpp"
//using namespace std::chrono_literals;
using namespace std;
class MinimalPublisher : public rclcpp::Node
{
	public:
		MinimalPublisher(int sleep_ms, int64_t str_size)
			: Node("minimal_publisher"),  count_(0)
		{			
			publisher_ = this->create_publisher<test_interfaces::msg::Test>("message", 1);    // CHANGE
			timer_ = this->create_wall_timer(
				std::chrono::duration<int,std::milli>(sleep_ms), std::bind(&MinimalPublisher::timer_callback, this));
			message = test_interfaces::msg::Test();                               // CHANGE
			message.content = string(str_size,'a'); //1024 8192 16384 65536 262144 524288 1048576 2097152 4194304 8388608
		}

	private:
		void timer_callback()
		{
			message.count = this->count_;                                        // CHANGE
			this->count_++;
			message.header.stamp = this->now();
			publisher_->publish(message);
		}
		rclcpp::TimerBase::SharedPtr timer_;
		rclcpp::Publisher<test_interfaces::msg::Test>::SharedPtr publisher_;         // CHANGE
		size_t count_;
		test_interfaces::msg::Test message;
};

int main(int argc, char * argv[])
{
	rclcpp::init(argc, argv);

	rclcpp::spin(std::make_shared<MinimalPublisher>(atoi(argv[1]),atoll(argv[2])));
	rclcpp::shutdown();
	return 0;
}
