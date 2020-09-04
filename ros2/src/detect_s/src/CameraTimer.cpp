#include <cstdio>
#include <chrono>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "test_interfaces/msg/test_image.hpp"     // CHANGE
#include "rclcpp/qos.hpp"
#include <opencv2/highgui/highgui.hpp>
#include "sensor_msgs/fill_image.hpp"
#include <dirent.h>
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
			send_place = 0;
			string dirName = "/home/baofu/docker/FL/";
			DIR *dir;
			dir = opendir(dirName.c_str());
			struct dirent *ent;
			while ((ent = readdir (dir)) != NULL) {//don’t put too many pictures in the dir
				string ent_n=ent->d_name;
				if(ent_n == "."||ent_n == "..")continue;
				std::string imgPath(dirName + ent->d_name);
				f_names.push_back(imgPath);
			}
			closedir (dir);
		}

	private:
		void timer_callback()
		{
			test_interfaces::msg::TestImage::UniquePtr message(new test_interfaces::msg::TestImage());                               // CHANGE
			cv::Mat image = cv::imread(f_names[send_place]);
			message->elt_type = image.type();
			message->elt_size = (int)image.elemSize();
			sensor_msgs::fillImage(message->image_data,sensor_msgs::image_encodings::BGR8,image.rows,image.cols,image.step,image.data);
		message->header.stamp = this->now();
			publisher_->publish(std::move(message));
			send_place=(send_place+1)%(f_names.size());
		}
		rclcpp::TimerBase::SharedPtr timer_;
		rclcpp::Publisher<test_interfaces::msg::TestImage>::SharedPtr publisher_;         // CHANGE
		size_t count_;
		vector<std::string>f_names;
		int send_place;
};

int main(int argc, char ** argv)
{
  
	//cout<<"start"<<endl;
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<CameraTimer>(atoi(argv[1]),string(argv[2])));
	rclcpp::shutdown();
	return 0;
}
