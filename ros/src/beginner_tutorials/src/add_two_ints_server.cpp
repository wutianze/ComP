#include "ros/ros.h"
#include "beginner_tutorials/AddTwoInts.h"
std::string to_send;
bool add(beginner_tutorials::AddTwoInts::Request  &req,
		         beginner_tutorials::AddTwoInts::Response &res)
{
	res.b = to_send;
	      //ROS_INFO("sending back response");
	        return true;
}

int main(int argc, char **argv)
{
	int64_t size = atoll(argv[1]);
	to_send = std::string(size,'b');
	ROS_INFO("size:%ld",size);
	  ros::init(argc, argv, "add_two_ints_server");
	    ros::NodeHandle n;

	      ros::ServiceServer service = n.advertiseService("add_two_ints", add);
	        ROS_INFO("Ready to add two ints.");
		  ros::spin();

		    return 0;
}
