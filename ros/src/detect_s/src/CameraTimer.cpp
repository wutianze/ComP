#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include "detect_s/TestImage.h"
#include <dirent.h>
#include <vector>
using namespace std;
int main(int argc, char** argv)
{
	ros::init(argc, argv, "image_publisher");
	ros::NodeHandle nh;
	image_transport::ImageTransport it(nh);
	ros::Publisher pub = nh.advertise<detect_s::TestImage>(std::string(argv[1]), 1);
	cv::Mat image = cv::imread(argv[2], CV_LOAD_IMAGE_COLOR);
	/*vector<string>f_names;
	int send_place = 0;
	string dirName = "/home/baofu/xxx/FL/";
	DIR *dir;
	dir = opendir(dirName.c_str());
	struct dirent *ent;
	while ((ent = readdir (dir)) != NULL) {//don’t put too many pictures in the dir
		string ent_n=ent->d_name;
		if(ent_n == "."||ent_n == "..")continue;
		std::string imgPath(dirName + ent->d_name);
		f_names.push_back(imgPath);
	}
	closedir (dir);
*/
	ros::Rate loop_rate(5);
	while (nh.ok()) {
		//cv::Mat image = cv::imread(f_names[send_place],CV_LOAD_IMAGE_COLOR);
		//if(!video.read(image))return -1;
		//ROS_INFO("send one");
		detect_s::TestImage msg;
		msg.image = *(cv_bridge::CvImage(std_msgs::Header(), "bgr8", image).toImageMsg());
		//msg.deliver_time = ros::Time::now();
	msg.header.stamp = ros::Time::now();
		pub.publish(msg);
		//send_place = (send_place+1)%(f_names.size());
		//ros::spinOnce();
		loop_rate.sleep();
	}
}
