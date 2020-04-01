#include <nodelet/nodelet.h>
#include <pluginlib/class_list_macros.h>
#include <ros/ros.h>
#include <stdio.h>
#include <fstream>
#include "example_pkg/Num.h"
namespace example_pkg
{
	class B:public nodelet::Nodelet{
	private:
		std::fstream writer;
		ros::Subscriber sub;
	uint64_t count = 0;	
	uint64_t max_id = 0;
	std::string record;
	std::string channel_name;
		void onInit()
		        {
				        NODELET_DEBUG("Initializing nodelet B");
		ros::NodeHandle& private_nh = getPrivateNodeHandle();
    private_nh.getParam("channel_name",channel_name);
    private_nh.getParam("record",record);
    sub = private_nh.subscribe("/A/"+channel_name, 1, &B::callback, this);    
		writer.open("/ros_test/log/multi/"+record,std::ios::trunc|std::ios::out);
		writer.close();
			}

	    void callback(const Num::ConstPtr& input)
		      {
			      uint64_t lan = ros::Time::now().toNSec()-input->timestamp;
writer.open("/ros_test/log/multi/"+record,std::ios::app|std::ios::out);
writer<<lan<<std::endl;
writer.close();
count++;
ROS_INFO("%s:loss rate:%f",record.c_str(),double(input->id-count)/double(input->id));
		      }
};}

// watch the capitalization carefully
PLUGINLIB_EXPORT_CLASS(example_pkg::B, nodelet::Nodelet)
