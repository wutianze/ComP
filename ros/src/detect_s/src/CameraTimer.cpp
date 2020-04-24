#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include <detect_s/TestImage.h>
int main(int argc, char** argv)
{
ros::init(argc, argv, "image_publisher");
ros::NodeHandle nh;
//image_transport::ImageTransport it(nh);
ros::Publisher pub = nh.advertise<detect_s::TestImage>("camera/image", 1);
cv::Mat image = cv::imread(argv[1], CV_LOAD_IMAGE_COLOR);
detect_s::TestImage msg;
msg.image = *(cv_bridge::CvImage(std_msgs::Header(), "bgr8", image).toImageMsg());
//sensor_msgs::ImagePtr msg = cv_bridge::CvImage(std_msgs::Header(), "bgr8", image).toImageMsg();
ros::Rate loop_rate(5);
while (nh.ok()) {
msg.deliver_time = ros::Time::now();
pub.publish(msg);
//ros::spinOnce();
loop_rate.sleep();
}
}
