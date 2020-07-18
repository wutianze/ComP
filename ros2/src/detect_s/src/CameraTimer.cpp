#include <cstdio>
#include <chrono>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "test_interfaces/msg/test_image.hpp"     // CHANGE
#include "rclcpp/qos.hpp"
#include <opencv2/highgui/highgui.hpp>
//using namespace std::chrono_literals;
using namespace std;
class CameraTimer : public rclcpp::Node
{
	public:
		CameraTimer(int sleep_ms, string channel_name)
			: Node("camera"),  count_(0)
		{
			rclcpp::QoS qos_(rclcpp::QoSInitialization::from_rmw(rmw_qos_profile_sensor_data));
			//rclcpp::QoS qos_(rclcpp::QoSInitialization::from_rmw(rmw_qos_profile_default));
			
			publisher_ = this->create_publisher<test_interfaces::msg::TestImage>(channel_name, qos_);    // CHANGE
			RCLCPP_INFO(this->get_logger(), "init 1");    // CHANGE
			timer_ = this->create_wall_timer(
				std::chrono::duration<int,std::milli>(sleep_ms), std::bind(&CameraTimer::timer_callback, this));
			message = test_interfaces::msg::TestImage();                               // CHANGE
			cv::Mat image = cv::imread("/ros2_test/AD_Middle_Test/ros2/src/detect_s/a.jpg");
			RCLCPP_INFO(this->get_logger(), "rows:%d, cols:%d",image.rows,image.cols);    // CHANGE
			message.rows = image.rows;
			message.cols = image.cols;
			message.elt_type = image.type();
			message.elt_size = (int)image.elemSize();
			string tmpData = string((char*)image.data,(char*)image.data+image.rows*image.cols*image.elemSize());
			message.mat_data = tmpData;
		}

	private:
		void timer_callback()
		{
			//RCLCPP_INFO(this->get_logger(), to_string(strtoull(message.header.frame_id.c_str(),NULL,0)));              // CHANGE
			this->count_++;
			if(this->count_ > 1)return;
			message.header.stamp = this->now();
			RCLCPP_INFO(this->get_logger(), "Publishing: '%lu'", message.header.stamp);    // CHANGE
			publisher_->publish(message);
		}
		rclcpp::TimerBase::SharedPtr timer_;
		rclcpp::Publisher<test_interfaces::msg::TestImage>::SharedPtr publisher_;         // CHANGE
		size_t count_;
		test_interfaces::msg::TestImage message;
};

int main(int argc, char ** argv)
{
  
	cout<<"start"<<endl;
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<CameraTimer>(atoi(argv[1]),string(argv[2])));
	rclcpp::shutdown();
	return 0;
}
