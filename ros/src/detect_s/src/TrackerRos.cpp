#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include "detect_s/TestImage.h"
#include "detect_s/YoloResult.h"
#include "detect_s/TrackerResult.h"
#include <message_filters/subscriber.h>
#include <message_filters/synchronizer.h>
#include <message_filters/sync_policies/approximate_time.h>

#include "tracker_opencv.h"
#include <signal.h>
#include "detect_s/store.h"
using namespace message_filters;
ros::Publisher pub;
StoreBundle sb;
CvTracker cvtra;
bool tracker_flag = false;
Rect2d resultbox;
void mySigIntHandler(int sig){
	ROS_INFO("TrackerRos sig handler");
sb.write_file();	
		ros::shutdown();
}
void imageCallback(const detect_s::TestImage::ConstPtr& msg0,const detect_s::YoloResult::ConstPtr& msg1)
{
	ros::Time rec_time = ros::Time::now();
	ROS_INFO("in Tracker");

	sb.tra_la[0].push_back((rec_time-msg0->header.stamp).toNSec());
	sb.tra_la[1].push_back((rec_time-msg1->header.stamp).toNSec());

	try{
cv_bridge::CvImagePtr cv_ptr = cv_bridge::toCvCopy(msg0->image,sensor_msgs::image_encodings::BGR8); 
cv::Mat rec = cv_ptr->image;
ROS_INFO("image cols:%d",rec.cols);

		resultbox = Rect2d(287, 23, 86, 320);
if(!tracker_flag){
	ROS_INFO("Tracker init");
	if(msg1->result_num>0){
resultbox = Rect2d(msg1->result_array[0].x, msg1->result_array[0].y, msg1->result_array[0].w, msg1->result_array[0].h);
	}else{
resultbox = Rect2d(287, 23, 86, 320);
	}
cvtra.tracker_init(rec,resultbox);
	ROS_INFO("Tracker init finished");
tracker_flag = true;
}else{
	ROS_INFO("Tracker test");
	ros::Time start_time = ros::Time::now();
if(cvtra.track_test(rec,resultbox)){
	ros::Time end_time = ros::Time::now();
	sb.cal_la[0].push_back((end_time-start_time).toNSec());
	ROS_INFO("Tracker test finished");
	detect_s::TrackerResult to_send;
	to_send.x = resultbox.x;
	to_send.y = resultbox.y;
	to_send.width = resultbox.width;
	to_send.height = resultbox.height;
	to_send.header.stamp = ros::Time::now();
	ROS_INFO("Tracker finished");
pub.publish(to_send);
}else{
	ros::Time end_time = ros::Time::now();
	sb.cal_la[0].push_back((end_time-start_time).toNSec());
	ROS_INFO("Tracker test fail");
tracker_flag = false;
}
}

 }
catch(exception& e){
ROS_INFO("tracker exception:%s",e.what());
}
}
int main(int argc, char **argv)
{
	//cvtra = new CvTracker();
	cvtra.tracker_create("KCF");
ros::init(argc, argv, "tracker",ros::init_options::NoSigintHandler);
//ros::init(argc, argv, "tracker");
	signal(SIGINT,mySigIntHandler);
ros::NodeHandle nh;
sb.init(ros::this_node::getName(),2);
//cv::namedWindow("view");
//cv::startWindowThread();
//image_transport::ImageTransport it(nh);
		message_filters::Subscriber<detect_s::TestImage> sub0(nh, string(argv[1]), 1,ros::TransportHints().tcpNoDelay());

message_filters::Subscriber<detect_s::YoloResult> sub1(nh,string(argv[2]), 1,ros::TransportHints().tcpNoDelay());
		typedef sync_policies::ApproximateTime<detect_s::TestImage,detect_s::YoloResult> MySyncPolicy;
		Synchronizer<MySyncPolicy> sync(MySyncPolicy(10),sub0,sub1);
		sync.registerCallback(boost::bind(&imageCallback, _1,_2));

//ros::Subscriber sub = nh.subscribe(string(argv[1], 1, imageCallback);
pub = nh.advertise<detect_s::TrackerResult>(argv[3],2);
ros::spin();
//cv::destroyWindow("view");
}
