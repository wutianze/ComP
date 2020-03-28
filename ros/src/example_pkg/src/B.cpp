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
		void onInit()
		        {
				        NODELET_DEBUG("Initializing nodelet B");
		ros::NodeHandle& private_nh = getPrivateNodeHandle();
    sub = private_nh.subscribe("in", 1, &B::callback, this);    
		writer.open("/ros_test/log/tmp",std::ios::trunc|std::ios::out);
		writer.close();
			}

	    void callback(const Num::ConstPtr& input)
		      {
			      uint64_t lan = ros::Time::now().toNSec()-input->timestamp;
writer.open("/ros_test/log/tmp",std::ios::app|std::ios::out);
writer<<lan<<std::endl;
writer.close();
count++;
if(input->id > max_id){
	max_id = input->id;
}

ROS_INFO("loss rate:%f",double(max_id-count)/double(max_id));
		      }
};}

// watch the capitalization carefully
PLUGINLIB_EXPORT_CLASS(example_pkg::B, nodelet::Nodelet)
