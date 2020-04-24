#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include <detect_s/TestImage.h>
#include <detect_s/TrackerResult.h>
#include "tracker_opencv.h"
ros::Publisher pub;
bool tracker_flag = false;
Rect2d resultbox;
void imageCallback(const detect_s::TestImage::ConstPtr& msg)
{
	ros::Time rec_time = ros::Time::now();
	ROS_INFO("transfer tracker time:%d",(rec_time.toNSec()-msg->deliver_time.toNSec()));

	try{
cv_bridge::CvImagePtr cv_ptr = cv_bridge::toCvCopy(msg->image,sensor_msgs::image_encodings::BGR8); 
cv::Mat rec = cv_ptr->image;
ROS_INFO("image cols:%d",rec.cols);
resultbox = Rect2d(287, 23, 86, 320);
if(!tracker_flag){
tracker_init(rec,resultbox);
tracker_flag = true;
}else{
if(track_test(rec,resultbox)){
	detect_s::TrackerResult to_send;
	to_send.x = resultbox.x;
	to_send.y = resultbox.y;
	to_send.width = resultbox.width;
	to_send.height = resultbox.height;
pub.publish(to_send);
}else{
tracker_flag = false;
}
}

//cv::imshow("view", cv_bridge::toCvShare(msg, "bgr8")->image);
 }
catch (cv_bridge::Exception& e)
{
ROS_ERROR("Could not convert from '%s' to 'bgr8'.", msg->image.encoding.c_str());
}catch (cv::Exception& e){

ROS_ERROR("cv exception '%s''.", e.what());
}
}
int main(int argc, char **argv)
{
	tracker_create("KCF");
ros::init(argc, argv, "tracker");
ros::NodeHandle nh;
//cv::namedWindow("view");
//cv::startWindowThread();
//image_transport::ImageTransport it(nh);
ros::Subscriber sub = nh.subscribe("camera/image", 1, imageCallback);
pub = nh.advertise<detect_s::TrackerResult>("t1",1);
ros::spin();
//cv::destroyWindow("view");
}
