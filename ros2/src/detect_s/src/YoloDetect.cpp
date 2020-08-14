#include <memory>
#include<vector>
#include<cmath>
#include<numeric>
#include <message_filters/subscriber.h>
#include <message_filters/synchronizer.h>
#include <message_filters/sync_policies/approximate_time.h>
#include <message_filters/time_synchronizer.h>

#include<fstream>
#include "rclcpp/qos.hpp"
#include "rclcpp/rclcpp.hpp"
#include "test_interfaces/msg/test_image.hpp"     // CHANGE
#include <opencv2/highgui/highgui.hpp>
#include "sensor_msgs/fill_image.hpp"
#include "test_interfaces/msg/yolo_result.hpp"
#include "yolo_v2_class.hpp"
#include "detect_s/store.h"
//using std::placeholders::_1;
//using std::placeholders::_2;
using namespace std;
class YoloDetect : public rclcpp::Node
{
	public:
		YoloDetect(string sub_channel_name, string pub_channel_name, string fname)
			:Node("yolo"), count_(0),file_name(fname)
		{
			sb.init('/'+fname,1);
std::string  names_file = "/ros2_test/darknet/data/bdd.names";
std::string  cfg_file = "/ros2_test/darknet/cfg/tiny.cfg";
std::string  weights_file = "/ros2_test/darknet/yolov3-tiny-prn.weights";
detector = new Detector(cfg_file, weights_file);
//obj_names = objects_names_from_file(names_file);
			rec_max = 0;	
			//rclcpp::QoS qos_(rclcpp::QoSInitialization::from_rmw(rmw_qos_profile_sensor_data));
			rclcpp::QoS qos_(rclcpp::QoSInitialization::from_rmw(rmw_qos_profile_default));
			publisher_ = this->create_publisher<test_interfaces::msg::YoloResult>(pub_channel_name, qos_);    // CHANGE
			subscription_ = this->create_subscription<test_interfaces::msg::TestImage>(          // CHANGE
					sub_channel_name, qos_, std::bind(&YoloDetect::topic_callback, this, std::placeholders::_1));
		}
		~YoloDetect(){

	sb.write_file();
					}

		void topic_callback(const test_interfaces::msg::TestImage::SharedPtr msg)       // CHANGE
		{
			uint64_t rec_la = (this->now()-msg->header.stamp).nanoseconds();
			cout<<"yolo tra:"<<rec_la<<endl;
			sb.tra_la[0].push_back(rec_la);
			cv::Mat tmp(msg->image_data.height,msg->image_data.width,msg->elt_type);
			int datasize = msg->image_data.height * msg->image_data.width * msg->elt_size;
			memcpy((unsigned char*)tmp.data,(unsigned char*)&(msg->image_data.data[0]),datasize);
			rclcpp::Time start_t = this->now();
std::vector<bbox_t> result_vec = detector->detect(tmp);
			rclcpp::Time end_t = this->now();
			cout<<"yolo cal:"<<(end_t-start_t).nanoseconds()<<endl;
			sb.cal_la[0].push_back((end_t-start_t).nanoseconds());
cout<< "detect:"<<result_vec.size()<<endl;
			test_interfaces::msg::YoloResult::UniquePtr to_send_result(new test_interfaces::msg::YoloResult());
			for(unsigned int i=0;i<result_vec.size();i++){
	test_interfaces::msg::YoloPiece to_send;
to_send.x = result_vec[i].x;
to_send.y = result_vec[i].y;
to_send.w = result_vec[i].w;
to_send.h = result_vec[i].h;
to_send.prob = result_vec[i].prob;
to_send.obj_id = result_vec[i].obj_id;
to_send.track_id = result_vec[i].track_id;
to_send.frames_counter = result_vec[i].frames_counter;
to_send_result->result_array.push_back(to_send);
}
to_send_result->result_num = result_vec.size();
cout<<"yolo result_num:"<<to_send_result->result_num<<endl;
		to_send_result->header.stamp = this->now();
	publisher_->publish(move(to_send_result));
		}

		int count_;
		rclcpp::Subscription<test_interfaces::msg::TestImage>::SharedPtr subscription_;       // CHANGE
		rclcpp::Publisher<test_interfaces::msg::YoloResult>::SharedPtr publisher_;         // CHANGE

		string file_name;
		uint64_t rec_max;
		StoreBundle sb;
		Detector* detector;

};

int main(int argc, char * argv[])
{
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<YoloDetect>(string(argv[1]),string(argv[2]),string(argv[3])));
	rclcpp::shutdown();
	return 0;
}
