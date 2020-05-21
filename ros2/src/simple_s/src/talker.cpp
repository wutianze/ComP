#include <chrono>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "test_interfaces/msg/test.hpp"     // CHANGE

//using namespace std::chrono_literals;
using namespace std;
class MinimalPublisher : public rclcpp::Node
{
	public:
		MinimalPublisher(int sleep_ms, int64_t str_size, string channel_name)
			: Node("minimal_publisher"), count_(0)
		{
			publisher_ = this->create_publisher<test_interfaces::msg::Test>(channel_name, 1);    // CHANGE
			timer_ = this->create_wall_timer(
				std::chrono::duration<int,std::milli>(sleep_ms), std::bind(&MinimalPublisher::timer_callback, this));
			message = test_interfaces::msg::Test();                               // CHANGE
			message.content = string(str_size,'a');
		}

	private:
		void timer_callback()
		{
			message.id = this->count_++;                                        // CHANGE
			message.timestamp = this->now().nanoseconds();
			RCLCPP_INFO(this->get_logger(), "Publishing: '%lu'", message.timestamp);    // CHANGE
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
	rclcpp::spin(std::make_shared<MinimalPublisher>(atoi(argv[1]),atoll(argv[2]),string(argv[3])));
	rclcpp::shutdown();
	return 0;
}
