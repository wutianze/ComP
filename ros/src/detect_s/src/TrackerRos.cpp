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
bool tracker_flag = false;
Rect2d resultbox;
void mySigIntHandler(int sig){
	ROS_INFO("sig handler");
sb.write_file();	
		ros::shutdown();
}
void imageCallback(const detect_s::TestImage::ConstPtr& msg0,const detect_s::YoloResult::ConstPtr& msg1)
{
	ros::Time rec_time = ros::Time::now();
	//ROS_INFO("transfer tracker time:%d",(rec_time.toNSec()-msg->deliver_time.toNSec()));

	sb.tra_la[0].push_back((rec_time-msg0->header.stamp).toNSec());
	sb.tra_la[1].push_back((rec_time-msg1->header.stamp).toNSec());

	try{
cv_bridge::CvImagePtr cv_ptr = cv_bridge::toCvCopy(msg0->image,sensor_msgs::image_encodings::BGR8); 
cv::Mat rec = cv_ptr->image;
ROS_INFO("image cols:%d",rec.cols);
//resultbox = Rect2d(287, 23, 86, 320);
if(!tracker_flag){
	if(msg1->result_num>0){
resultbox = Rect2d(msg1->result_array[0].x, msg1->result_array[0].y, msg1->result_array[0].w, msg1->result_array[0].h);
	}else{
resultbox = Rect2d(287, 23, 86, 320);
	}
tracker_init(rec,resultbox);
tracker_flag = true;
}else{
if(track_test(rec,resultbox)){
	detect_s::TrackerResult to_send;
	to_send.x = resultbox.x;
	to_send.y = resultbox.y;
	to_send.width = resultbox.width;
	to_send.height = resultbox.height;
	to_send.header.stamp = ros::Time::now();
pub.publish(to_send);
}else{
tracker_flag = false;
}
}

//cv::imshow("view", cv_bridge::toCvShare(msg, "bgr8")->image);
 }
catch (cv_bridge::Exception& e)
{
ROS_ERROR("Could not convert from '%s' to 'bgr8'.", msg0->image.encoding.c_str());
}catch (cv::Exception& e){

ROS_ERROR("cv exception '%s''.", e.what());
}
}
int main(int argc, char **argv)
{
	tracker_create("KCF");
ros::init(argc, argv, "tracker",ros::init_options::NoSigintHandler);
	signal(SIGINT,mySigIntHandler);
ros::NodeHandle nh;
sb.init(ros::this_node::getName(),1);
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
