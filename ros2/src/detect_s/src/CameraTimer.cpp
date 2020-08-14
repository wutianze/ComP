#include <cstdio>
#include <chrono>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "test_interfaces/msg/test_image.hpp"     // CHANGE
#include "rclcpp/qos.hpp"
#include <opencv2/highgui/highgui.hpp>
#include "sensor_msgs/fill_image.hpp"
//using namespace std::chrono_literals;
using namespace std;
class CameraTimer : public rclcpp::Node
{
	public:
		CameraTimer(int sleep_ms, string channel_name)
			: Node("camera"),  count_(0)
		{
			//rclcpp::QoS qos_(rclcpp::QoSInitialization::from_rmw(rmw_qos_profile_sensor_data));
			rclcpp::QoS qos_(rclcpp::QoSInitialization::from_rmw(rmw_qos_profile_default));
			publisher_ = this->create_publisher<test_interfaces::msg::TestImage>(channel_name, qos_);    // CHANGE
			timer_ = this->create_wall_timer(
				std::chrono::duration<int,std::milli>(sleep_ms), std::bind(&CameraTimer::timer_callback, this));
					}

	private:
		void timer_callback()
		{
			test_interfaces::msg::TestImage::UniquePtr message(new test_interfaces::msg::TestImage());                               // CHANGE
			cv::Mat image = cv::imread("/ros2_test/AD_Middle_Test/ros2/src/detect_s/a.jpg");
			message->elt_type = image.type();
			message->elt_size = (int)image.elemSize();
			sensor_msgs::fillImage(message->image_data,sensor_msgs::image_encodings::BGR8,image.rows,image.cols,image.step,image.data);
		message->header.stamp = this->now();
			publisher_->publish(std::move(message));
		}
		rclcpp::TimerBase::SharedPtr timer_;
		rclcpp::Publisher<test_interfaces::msg::TestImage>::SharedPtr publisher_;         // CHANGE
		size_t count_;
};

int main(int argc, char ** argv)
{
  
	//cout<<"start"<<endl;
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<CameraTimer>(atoi(argv[1]),string(argv[2])));
	rclcpp::shutdown();
	return 0;
}
