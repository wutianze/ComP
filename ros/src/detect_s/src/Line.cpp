#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include <detect_s/TestImage.h>
#include <detect_s/PointDetect.h>
#include <detect_s/LinesResult.h>
#include "line_detect.h"
ros::Publisher pub;
void imageCallback(const detect_s::TestImage::ConstPtr& msg)
{
	ros::Time rec_time = ros::Time::now();
	ROS_INFO("transfer time:%d",(rec_time.toNSec()-msg->deliver_time.toNSec()));
try{
cv_bridge::CvImagePtr cv_ptr = cv_bridge::toCvCopy(msg->image,sensor_msgs::image_encodings::BGR8); 
cv::Mat rec = cv_ptr->image;
Point*result = new Point[4];
lines_process(rec,result);
detect_s::LinesResult to_send;
to_send.left1.x = result[0].x;
to_send.left1.y = result[0].y;
to_send.left2.x = result[1].x;
to_send.left2.y = result[1].y;
to_send.right1.x = result[2].x;
to_send.right1.y = result[2].y;
to_send.right2.x = result[3].x;
to_send.right2.y = result[3].y;
pub.publish(to_send);
//cv::imshow("view", cv_bridge::toCvShare(msg, "bgr8")->image);
 }
catch (cv_bridge::Exception& e)
{
ROS_ERROR("Could not convert from '%s' to 'bgr8'.", msg->image.encoding.c_str());
}
}
int main(int argc, char **argv)
{
ros::init(argc, argv, "line_detect");
ros::NodeHandle nh;
//cv::namedWindow("view");
//cv::startWindowThread();
//image_transport::ImageTransport it(nh);
ros::Subscriber sub = nh.subscribe("camera/image", 1, imageCallback);
pub = nh.advertise<detect_s::LinesResult>("l1",1);
ros::spin();
//cv::destroyWindow("view");
}
