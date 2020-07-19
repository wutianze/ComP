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
			//rclcpp::QoS qos_(rclcpp::QoSInitialization::from_rmw(rmw_qos_profile_sensor_data));
			rclcpp::QoS qos_(rclcpp::QoSInitialization::from_rmw(rmw_qos_profile_default));
			
			publisher_ = this->create_publisher<test_interfaces::msg::TestImage>(channel_name, qos_);    // CHANGE
			RCLCPP_INFO(this->get_logger(), "init 1");    // CHANGE
			timer_ = this->create_wall_timer(
				std::chrono::duration<int,std::milli>(sleep_ms), std::bind(&CameraTimer::timer_callback, this));
			//message = test_interfaces::msg::TestImage();                               // CHANGE
					}

	private:
		void timer_callback()
		{
			//RCLCPP_INFO(this->get_logger(), to_string(strtoull(message.header.frame_id.c_str(),NULL,0)));              // CHANGE
			this->count_++;
			if(this->count_ > 1)return;
			test_interfaces::msg::TestImage::UniquePtr message(new test_interfaces::msg::TestImage());                               // CHANGE
			cv::Mat image = cv::imread("/ros2_test/AD_Middle_Test/ros2/src/detect_s/a.jpg");
			RCLCPP_INFO(this->get_logger(), "rows:%d, cols:%d",image.rows,image.cols);    // CHANGE
			message->rows = image.rows;
			message->cols = image.cols;
			message->elt_type = image.type();
			message->elt_size = (int)image.elemSize();
			//string tmpData = string((char*)image.data,image.rows*image.cols*image.elemSize());
			//string testS(10,'a');
			size_t dataSize = image.rows*image.cols*image.elemSize();
			cout<<"dataSize:"<<dataSize<<endl;
			//cout<<"dataSize2:"<<image.rows*image.step<<endl;
			message->mat_data.resize(dataSize);
			cout<<"resize finish"<<endl;
			//memcpy((char*)(&(message->mat_data[0])),(char*)image.data,dataSize);
			int imgS = 0;
			bool show = true;
			for(int i=0;i<image.rows;i++){
				for(int j=0;j<image.cols;j++){
					for(size_t k =0;k<image.elemSize();k++){
				//cout<<"value"<<image.data[i]<<"i:"<<i<<endl;
			message->mat_data[imgS] = image.at<cv::Vec3b>(i,j)[k];
			if(message->mat_data[imgS] == '\n' && show){
				cout<<"one null in:"<<imgS<<endl;
				show = false;
			}
				imgS++;
					}
				}
			}
			cout<<"cp finish, imgS:"<<imgS<<" data size:"<<(message->mat_data).size()<<endl;
			//cout<<"mat total size:"<<sizeof(image.data)<<"mat array size:"<<sizeof(image.data)/sizeof(image.data[0])<<endl;
			//cout<<"array total size:"<<sizeof(message->mat_data)<<"array size:"<<sizeof(message->mat_data)/sizeof(message->mat_data[0])<<endl;
			//cout<<message->mat_data<<endl;
			//message->mat_data = testS;
			//message->mat_data = message->mat_data + '\0';
			//RCLCPP_INFO(this->get_logger(), "mat_data size::%d",(message->mat_data).size());    // CHANGE
			//message->mat_data[0] = 'a';
			//message->mat_data[1] = 'b';
			message->header.stamp = this->now();
			//RCLCPP_INFO(this->get_logger(), "Publishing: '%lu'", message->header.stamp);    // CHANGE
			publisher_->publish(std::move(message));
		}
		rclcpp::TimerBase::SharedPtr timer_;
		rclcpp::Publisher<test_interfaces::msg::TestImage>::SharedPtr publisher_;         // CHANGE
		size_t count_;
};

int main(int argc, char ** argv)
{
  
	cout<<"start"<<endl;
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<CameraTimer>(atoi(argv[1]),string(argv[2])));
	rclcpp::shutdown();
	return 0;
}
