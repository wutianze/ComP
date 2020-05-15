#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include <detect_s/TestImage.h>
#include <detect_s/YoloResult.h>
#include "yolo_v2_class.hpp"
ros::Publisher pub;
Detector* detector;
std::vector<std::string> obj_names;
std::vector<std::string> objects_names_from_file(std::string const filename) {
	std::ifstream file(filename);
	std::vector<std::string> file_lines;
	if (!file.is_open()) return file_lines;
	for(std::string line; getline(file, line);) file_lines.push_back(line);
	std::cout << "object names loaded \n";
	return file_lines;
}
void imageCallback(const detect_s::TestImage::ConstPtr& msg)
{
	ros::Time rec_time = ros::Time::now();
	ROS_INFO("transfer tracker time:%d",(rec_time.toNSec()-msg->deliver_time.toNSec()));

	try{
cv_bridge::CvImagePtr cv_ptr = cv_bridge::toCvCopy(msg->image,sensor_msgs::image_encodings::BGR8); 
cv::Mat rec = cv_ptr->image;
ROS_INFO("image cols:%d",rec.cols);

std::vector<bbox_t> result_vec = detector->detect(rec);
ROS_INFO("box find:%d",result_vec.size());
//cv::imshow("view", cv_bridge::toCvShare(msg, "bgr8")->image);
detect_s::YoloResult to_send;
to_send.x = result_vec[0].x;
to_send.y = result_vec[0].y;
to_send.w = result_vec[0].w;
to_send.h = result_vec[0].h;
to_send.prob = result_vec[0].prob;
to_send.obj_id = result_vec[0].obj_id;
to_send.track_id = result_vec[0].track_id;
to_send.frames_counter = result_vec[0].frames_counter;
	pub.publish(to_send);
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
ros::init(argc, argv, "yolo");
ros::NodeHandle nh;
std::string  names_file = "/ros_test/darknet/data/bdd.names";
std::string  cfg_file = "/ros_test/darknet/cfg/tiny.cfg";
std::string  weights_file = "/ros_test/darknet/yolov3-tiny-prn.weights";
detector = new Detector(cfg_file, weights_file);
obj_names = objects_names_from_file(names_file);
ros::Subscriber sub = nh.subscribe("camera/image", 1, imageCallback);
pub = nh.advertise<detect_s::YoloResult>("y1",1);
ros::spin();
//cv::destroyWindow("view");
}
