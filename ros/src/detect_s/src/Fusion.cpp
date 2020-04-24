#include <ros/ros.h>
//#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
//#include <cv_bridge/cv_bridge.h>
#include <detect_s/TrackerResult.h>
#include <detect_s/LinesResult.h>
void linesCallback(const detect_s::LinesResult::ConstPtr& msg)
{
	ros::Time rec_time = ros::Time::now();
	ROS_INFO("fusion get ");
	//ROS_INFO("fusion transfer time:%d",(rec_time.toNSec()-msg->deliver_time.toNSec()));
/*try{
//cv::imshow("view", cv_bridge::toCvShare(msg, "bgr8")->image);
}
catch (cv_bridge::Exception& e)
{
ROS_ERROR("Could not convert from '%s' to 'bgr8'.", msg->image.encoding.c_str());
}*/
}
void trackerCallback(const detect_s::TrackerResult::ConstPtr& msg)
{
	ros::Time rec_time = ros::Time::now();
	ROS_INFO("fusion get ");
	//ROS_INFO("transfer time:%d",(rec_time.toNSec()-msg->deliver_time.toNSec()));
/*try{
//cv::imshow("view", cv_bridge::toCvShare(msg, "bgr8")->image);
}
catch (cv_bridge::Exception& e)
{
ROS_ERROR("Could not convert from '%s' to 'bgr8'.", msg->image.encoding.c_str());
}*/
}
int main(int argc, char **argv)
{
ros::init(argc, argv, "fusion");
ros::NodeHandle nh;
//cv::namedWindow("view");
//cv::startWindowThread();
//image_transport::ImageTransport it(nh);
ros::Subscriber sub1 = nh.subscribe("l1", 1, linesCallback);
ros::Subscriber sub2 = nh.subscribe("t1", 1, trackerCallback);
//pub = nh.advertise<detect_s::LinesResult>("l1",1);
ros::MultiThreadedSpinner spinner(4);
spinner.spin();
//ros::spin();
//cv::destroyWindow("view");
}
