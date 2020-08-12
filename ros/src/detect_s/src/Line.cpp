#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include <signal.h>
#include "detect_s/TestImage.h"
#include "detect_s/PointDetect.h"
#include "detect_s/LinesResult.h"
#include "line_detect.h"
#include "detect_s/store.h"
ros::Publisher pub;
/*string node_name = ros::this_node::getName();
vector<vector<uint64_t>>tra_la;
vector<vector<uint64_t>>cal_la;
*/
StoreBundle sb;
void mySigIntHandler(int sig){
	ROS_INFO("Line sig handler");
sb.write_file();	
	/*std::fstream writer;
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
	ros::shutdown();
}
void imageCallback(const detect_s::TestImage::ConstPtr& msg)
{
	ros::Time rec_time = ros::Time::now();
	//ROS_INFO("in Line");

	sb.tra_la[0].push_back((rec_time-msg->header.stamp).toNSec());
try{
cv_bridge::CvImagePtr cv_ptr = cv_bridge::toCvCopy(msg->image,sensor_msgs::image_encodings::BGR8); 
cv::Mat rec = cv_ptr->image;
Point*result = new Point[4];

	ros::Time start_time = ros::Time::now();
lines_process(rec,result);
	//ROS_INFO("Line cal finished");
	ros::Time end_time = ros::Time::now();
	sb.cal_la[0].push_back((end_time-start_time).toNSec());
detect_s::LinesResult to_send;
to_send.left1.x = result[0].x;
to_send.left1.y = result[0].y;
to_send.left2.x = result[1].x;
to_send.left2.y = result[1].y;
to_send.right1.x = result[2].x;
to_send.right1.y = result[2].y;
to_send.right2.x = result[3].x;
to_send.right2.y = result[3].y;
		to_send.header.stamp = ros::Time::now();
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
ros::init(argc, argv, "line_detect",ros::init_options::NoSigintHandler);
	signal(SIGINT,mySigIntHandler);
sb.init(ros::this_node::getName(),1);
	ros::NodeHandle nh;

//cv::namedWindow("view");
//cv::startWindowThread();
//image_transport::ImageTransport it(nh);
ros::Subscriber sub = nh.subscribe(string(argv[1]), 1, imageCallback);
pub = nh.advertise<detect_s::LinesResult>(string(argv[2]),1);
ros::spin();
//cv::destroyWindow("view");
}
