#include <memory>
#include<vector>
#include<cmath>
#include<numeric>
#include<fstream>
#include "rclcpp/qos.hpp"
#include "rclcpp/rclcpp.hpp"
#include "test_interfaces/msg/test_image.hpp"     // CHANGE
#include <opencv2/highgui/highgui.hpp>
#include "test_interfaces/msg/lines_result.hpp"
#include "detect_s/store.h"
#include "line_detect.h"
class Line : public rclcpp::Node
{
	public:
		Line(string sub_channel_name, string pub_channel_name, string fname)
			:Node("line"), count_(0),file_name(fname)
		{
			sb.init('/'+fname,1);
			rec_max = 0;	
			//rclcpp::QoS qos_(rclcpp::QoSInitialization::from_rmw(rmw_qos_profile_sensor_data));
			rclcpp::QoS qos_(rclcpp::QoSInitialization::from_rmw(rmw_qos_profile_default));
			publisher_ = this->create_publisher<test_interfaces::msg::LinesResult>(pub_channel_name, qos_);    // CHANGE
			subscription_ = this->create_subscription<test_interfaces::msg::TestImage>(          // CHANGE
					sub_channel_name, qos_, std::bind(&Line::topic_callback, this, std::placeholders::_1));
		}
		~Line(){

	sb.write_file();
					}

		void topic_callback(const test_interfaces::msg::TestImage::SharedPtr msg)       // CHANGE
		{
			uint64_t rec_la = (this->now()-msg->header.stamp).nanoseconds();
			cout<<"line tra:"<<rec_la<<endl;
			sb.tra_la[0].push_back(rec_la);
			cv::Mat tmp(msg->image_data.height,msg->image_data.width,msg->elt_type);
			int datasize = msg->image_data.height * msg->image_data.width * msg->elt_size;
			memcpy((unsigned char*)tmp.data,(unsigned char*)&(msg->image_data.data[0]),datasize);
			rclcpp::Time start_t = this->now();
Point*result = new Point[4];
lines_process(tmp,result);
			rclcpp::Time end_t = this->now();
			cout<<"line cal:"<<(end_t-start_t).nanoseconds()<<endl;
			sb.cal_la[0].push_back((end_t-start_t).nanoseconds());
			test_interfaces::msg::LinesResult::UniquePtr to_send(new test_interfaces::msg::LinesResult());
to_send->left1.x = result[0].x;
to_send->left1.y = result[0].y;
to_send->left2.x = result[1].x;
to_send->left2.y = result[1].y;
to_send->right1.x = result[2].x;
to_send->right1.y = result[2].y;
to_send->right2.x = result[3].x;
to_send->right2.y = result[3].y;
		to_send->header.stamp = this->now();
	publisher_->publish(move(to_send));
		}

		int count_;
		rclcpp::Subscription<test_interfaces::msg::TestImage>::SharedPtr subscription_;       // CHANGE
		rclcpp::Publisher<test_interfaces::msg::LinesResult>::SharedPtr publisher_;         // CHANGE

		string file_name;
		uint64_t rec_max;
		StoreBundle sb;
};

int main(int argc, char * argv[])
{
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<Line>(string(argv[1]),string(argv[2]),string(argv[3])));
	rclcpp::shutdown();
	return 0;
}
