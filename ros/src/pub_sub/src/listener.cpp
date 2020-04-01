#include "ros/ros.h"
#include "std_msgs/String.h"
#include "pub_sub/Num.h"
#include <fstream>
/**
 *  * This tutorial demonstrates simple receipt of messages over the ROS system.
 *   */
std::fstream writer;
uint64_t count = 0;
std::string record_name;
void chatterCallback(const pub_sub::Num::ConstPtr& msg)
{
	uint64_t lan = ros::Time::now().toNSec()-msg->timestamp;
	      writer.open("/ros_test/log/multi/"+record_name,std::ios::app|std::ios::out);
writer<<lan<<std::endl;
writer.close();
count++;
//ROS_INFO("loss:%d,%d",msg->id,count);
ROS_INFO("%s loss rate:%f",record_name.c_str(),double(msg->id-count)/double(msg->id));
	//ROS_INFO("I heard: [%s]", msg->data.c_str());
}

int main(int argc, char **argv)
{
	  ros::init(argc, argv, "listener");
	std::string channel_lis = argv[1];
	record_name = argv[2];
	    ros::NodeHandle n;
	      ros::Subscriber sub = n.subscribe(channel_lis, 1, chatterCallback);
	      writer.open("/ros_test/log/multi/"+record_name,std::ios::trunc|std::ios::out);
writer.close();
	        ros::spin();
		  return 0;
}
