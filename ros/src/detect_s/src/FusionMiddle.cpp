#include <ros/ros.h>
//#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
//#include <cv_bridge/cv_bridge.h>
#include "detect_s/TrackerResult.h"
#include "detect_s/LinesResult.h"
#include "detect_s/YoloResult.h"
#include "detect_s/FusionResult.h"
#include <message_filters/subscriber.h>
#include <message_filters/synchronizer.h>
#include <message_filters/sync_policies/approximate_time.h>
#include <signal.h>
#include "detect_s/store.h"

using namespace message_filters;
StoreBundle sb;
void mySigIntHandler(int sig){
	ROS_INFO("sig handler");
sb.write_file();	
		ros::shutdown();
}
ros::Publisher pub;
void fusionCallback(const detect_s::LinesResult::ConstPtr& msg0,const detect_s::YoloResult::ConstPtr& msg1,const detect_s::TrackerResult::ConstPtr& msg2)
{
	ros::Time rec_time = ros::Time::now();
	//ROS_INFO("transfer tracker time:%d",(rec_time.toNSec()-msg->deliver_time.toNSec()));
	ROS_INFO("in FusionMiddle");

	sb.tra_la[0].push_back((rec_time-msg0->header.stamp).toNSec());
	sb.tra_la[1].push_back((rec_time-msg1->header.stamp).toNSec());
	sb.tra_la[2].push_back((rec_time-msg2->header.stamp).toNSec());
	detect_s::FusionResult to_send;
	to_send.fusion_result= "aa";
	to_send.header.stamp = ros::Time::now();
	pub.publish(to_send);

}
/*
void linesCallback(const detect_s::LinesResult::ConstPtr& msg)
{
	ros::Time rec_time = ros::Time::now();
	ROS_INFO("fusion get ");
}
void trackerCallback(const detect_s::TrackerResult::ConstPtr& msg)
{
	ros::Time rec_time = ros::Time::now();
	ROS_INFO("fusion get ");
}*/
int main(int argc, char **argv)
{
ros::init(argc, argv, "fusionMiddle",ros::init_options::NoSigintHandler);
	signal(SIGINT,mySigIntHandler);
ros::NodeHandle nh;
//ros::Subscriber sub2 = nh.subscribe("t1", 1, trackerCallback);
//ros::MultiThreadedSpinner spinner(4);
//spinner.spin();
sb.init(ros::this_node::getName(),3);
//cv::namedWindow("view");
//cv::startWindowThread();
//image_transport::ImageTransport it(nh);
		message_filters::Subscriber<detect_s::LinesResult> sub0(nh, string(argv[1]), 1,ros::TransportHints().tcpNoDelay());
message_filters::Subscriber<detect_s::YoloResult> sub1(nh,string(argv[2]), 1,ros::TransportHints().tcpNoDelay());
message_filters::Subscriber<detect_s::TrackerResult> sub2(nh,string(argv[3]), 1,ros::TransportHints().tcpNoDelay());
		typedef sync_policies::ApproximateTime<detect_s::LinesResult,detect_s::YoloResult,detect_s::TrackerResult> MySyncPolicy;
		Synchronizer<MySyncPolicy> sync(MySyncPolicy(10),sub0,sub1,sub2);
		sync.registerCallback(boost::bind(&fusionCallback, _1,_2,_3));

pub = nh.advertise<detect_s::FusionResult>(argv[4],1);
ros::spin();
}
