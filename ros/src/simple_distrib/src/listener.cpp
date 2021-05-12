#include "ros/ros.h"
#include "std_msgs/String.h"
#include "simple_distrib/Test.h"
#include <fstream>
#include <vector>
#include <signal.h>
#include<numeric>
using namespace std;

string node_name = ros::this_node::getName();

void chatterCallback1(const simple_distrib::Test::ConstPtr& msg)
{
	cout<<to_string((ros::Time::now() - msg->header.stamp).toNSec())<<endl;
}

int main(int argc, char **argv)
{
	ros::init(argc, argv, "listener");
	ros::NodeHandle n;
	
	node_name = ros::this_node::getName();

	ros::Subscriber sub = n.subscribe("msg_back", 1, chatterCallback1,ros::TransportHints().udp().maxDatagramSize(1500));   //UDP
//	ros::Subscriber sub = n.subscribe("msg_back", 1, chatterCallback1);   //TCP 
	ros::spin();

	return 0;
}
