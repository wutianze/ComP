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
#include "test_interfaces/msg/tracker_result.hpp"
#include "test_interfaces/msg/yolo_result.hpp"
#include "detect_s/store.h"
#include "tracker_opencv.h"
//using std::placeholders::_1;
//using std::placeholders::_2;
using namespace std;
using namespace message_filters;
class TrackerRos2 : public rclcpp::Node
{
	public:
		TrackerRos2(string image_channel_name,string yolo_channel_name, string pub_channel_name, string fname)
			:Node("yolo"), count_(0),file_name(fname)
		{
			sb.init('/'+fname,2);
			rec_max = 0;
		tracker_flag = false;	
	cvtra.tracker_create("KCF");
			rclcpp::QoS qos_(rclcpp::QoSInitialization::from_rmw(rmw_qos_profile_default));
			publisher_ = this->create_publisher<test_interfaces::msg::TrackerResult>(pub_channel_name, qos_);    // CHANGE
			sub1.subscribe(this,image_channel_name,rmw_qos_profile_default);
			sub2.subscribe(this,yolo_channel_name,rmw_qos_profile_default);
			this->sync_= std::make_shared<Synchronizer<sync_policies::ApproximateTime<test_interfaces::msg::TestImage,test_interfaces::msg::YoloResult>>>(sync_policies::ApproximateTime<test_interfaces::msg::TestImage,test_interfaces::msg::YoloResult>(10),sub1,sub2);
			this->sync_->registerCallback(&TrackerRos2::topic_callback,this);
		}
		~TrackerRos2(){

	sb.write_file();
					}

		void topic_callback(const test_interfaces::msg::TestImage::SharedPtr msg0, const test_interfaces::msg::YoloResult::SharedPtr msg1)       // CHANGE
		{
			rclcpp::Time rec_time = this->now();
			cout<<"tracker receive"<<endl;
			sb.tra_la[0].push_back((rec_time-msg0->header.stamp).nanoseconds());
			sb.tra_la[1].push_back((rec_time-msg1->header.stamp).nanoseconds());
			cv::Mat tmp(msg0->image_data.height,msg0->image_data.width,msg0->elt_type);
			int datasize = msg0->image_data.height * msg0->image_data.width * msg0->elt_size;
			memcpy((unsigned char*)tmp.data,(unsigned char*)&(msg0->image_data.data[0]),datasize);
Rect2d resultbox = Rect2d(287, 23, 86, 320);
if(!tracker_flag){
	if(msg1->result_num>0){
resultbox = Rect2d(msg1->result_array[0].x, msg1->result_array[0].y, msg1->result_array[0].w, msg1->result_array[0].h);
	}
	cvtra.tracker_init(tmp,resultbox);
tracker_flag = true;
}else{

			rclcpp::Time start_t = this->now();
if(cvtra.track_test(tmp,resultbox)){
rclcpp::Time end_t = this->now();
			cout<<"tracker cal:"<<(end_t-start_t).nanoseconds()<<endl;
			sb.cal_la[0].push_back((end_t-start_t).nanoseconds());
	test_interfaces::msg::TrackerResult::UniquePtr to_send(new test_interfaces::msg::TrackerResult());
	to_send->x = resultbox.x;
	to_send->y = resultbox.y;
	to_send->width = resultbox.width;
	to_send->height = resultbox.height;
	to_send->header.stamp = this->now();
publisher_->publish(move(to_send));
			}else{
	cout<<"Tracker test fail"<<endl;
tracker_flag = false;
}
}
}
		int count_;
		rclcpp::Publisher<test_interfaces::msg::TrackerResult>::SharedPtr publisher_;         // CHANGE

		string file_name;
		uint64_t rec_max;
		StoreBundle sb;
		bool tracker_flag;
message_filters::Subscriber<test_interfaces::msg::TestImage>sub1;
		message_filters::Subscriber<test_interfaces::msg::YoloResult>sub2;

		shared_ptr<Synchronizer<sync_policies::ApproximateTime<test_interfaces::msg::TestImage,test_interfaces::msg::YoloResult>>>sync_;
CvTracker cvtra;
};

int main(int argc, char * argv[])
{
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<TrackerRos2>(string(argv[1]),string(argv[2]),string(argv[3]),string(argv[4])));
	rclcpp::shutdown();
	return 0;
}
