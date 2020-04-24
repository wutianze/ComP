#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include <detect_s/TestImage.h>
void imageCallback(const detect_s::TestImage::ConstPtr& msg)
{
	ros::Time rec_time = ros::Time::now();
	ROS_INFO("transfer time:%d",(rec_time.toNSec()-msg->deliver_time.toNSec()));
try{
cv_bridge::CvImagePtr cv_ptr = cv_bridge::toCvCopy(msg->image,sensor_msgs::image_encodings::BGR8); 
cv::Mat rec = cv_ptr->image;
//cv::imshow("view", cv_bridge::toCvShare(msg, "bgr8")->image);
 }
catch (cv_bridge::Exception& e)
{
ROS_ERROR("Could not convert from '%s' to 'bgr8'.", msg->image.encoding.c_str());
}
}
int main(int argc, char **argv)
{
ros::init(argc, argv, "image_listener");
ros::NodeHandle nh;
//cv::namedWindow("view");
//cv::startWindowThread();
//image_transport::ImageTransport it(nh);
ros::Subscriber sub = nh.subscribe("camera/image", 1, imageCallback);
ros::spin();
//cv::destroyWindow("view");
}
