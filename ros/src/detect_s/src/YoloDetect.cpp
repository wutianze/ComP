#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include "detect_s/TestImage.h"
#include "detect_s/YoloResult.h"
#include <signal.h>
#include "yolo_v2_class.hpp"
#include "detect_s/store.h"
ros::Publisher pub;
Detector* detector;
StoreBundle sb;
/*string node_name = ros::this_node::getName();
vector<vector<uint64_t>>tra_la;
vector<vector<uint64_t>>cal_la;*/
void mySigIntHandler(int sig){
	ROS_INFO("Yolo sig handler");
	/*
	std::fstream writer;
	//string loss_rate = to_string(double(count_num-1.0)/double(rec_num));
	for(unsigned int i =0;i<tra_la.size();i++){
	writer.open("/ros_test/log/test/tmp/tra_"+node_name+"_"+to_string(i),std::ios::trunc|std::ios::out);

		for(unsigned int j =0;j<tra_la[i].size();j++){
		writer<<tra_la[i][j]<<endl;
		}
	writer.close();
	}
for(unsigned int i =0;i<cal_la.size();i++){
	writer.open("/ros_test/log/test/tmp/cal_"+node_name+"_"+to_string(i),std::ios::trunc|std::ios::out);

		for(unsigned int j =0;j<cal_la[i].size();j++){
		writer<<cal_la[i][j]<<endl;
		}
	writer.close();
	}*/
	sb.write_file();
	ros::shutdown();
}

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
	ROS_INFO("transfer yolo time:%d",((rec_time-msg->header.stamp).toNSec()));

	sb.tra_la[0].push_back((rec_time-msg->header.stamp).toNSec());

	try{
cv_bridge::CvImagePtr cv_ptr = cv_bridge::toCvCopy(msg->image,sensor_msgs::image_encodings::BGR8); 
cv::Mat rec = cv_ptr->image;
ROS_INFO("image cols:%d",rec.cols);

	ros::Time start_time = ros::Time::now();
std::vector<bbox_t> result_vec = detector->detect(rec);
	ros::Time end_time = ros::Time::now();
	ROS_INFO("YoloDetect finished");
	sb.cal_la[0].push_back((end_time-start_time).toNSec());
ROS_INFO("box find:%d",result_vec.size());
//cv::imshow("view", cv_bridge::toCvShare(msg, "bgr8")->image);
detect_s::YoloResult to_send_result;
for(unsigned int i=0;i<result_vec.size();i++){
detect_s::YoloPiece to_send;
to_send.x = result_vec[0].x;
to_send.y = result_vec[0].y;
to_send.w = result_vec[0].w;
to_send.h = result_vec[0].h;
to_send.prob = result_vec[0].prob;
to_send.obj_id = result_vec[0].obj_id;
to_send.track_id = result_vec[0].track_id;
to_send.frames_counter = result_vec[0].frames_counter;
to_send_result.result_array.push_back(to_send);
}
to_send_result.result_num = result_vec.size();
		to_send_result.header.stamp = ros::Time::now();
	pub.publish(to_send_result);
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
ros::init(argc, argv, "yolo",ros::init_options::NoSigintHandler);
	signal(SIGINT,mySigIntHandler);
ros::NodeHandle nh;
sb.init(ros::this_node::getName(),1);
std::string  names_file = "/ros_test/darknet/data/bdd.names";
std::string  cfg_file = "/ros_test/darknet/cfg/tiny.cfg";
std::string  weights_file = "/ros_test/darknet/yolov3-tiny-prn.weights";
detector = new Detector(cfg_file, weights_file);
obj_names = objects_names_from_file(names_file);
ros::Subscriber sub = nh.subscribe(string(argv[1]), 1, imageCallback);
pub = nh.advertise<detect_s::YoloResult>(string(argv[2]),1);
ros::spin();
//cv::destroyWindow("view");
}
