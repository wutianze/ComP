#include "ros/ros.h"
#include "std_msgs/String.h"
#include "simple_distrib/Test.h"
#include <fstream>
#include <vector>
#include <signal.h>
#include<numeric>
using namespace std;

ros::Publisher pub;

string node_name = ros::this_node::getName();


void chatterCallback1(const simple_distrib::Test::ConstPtr& msg)
{
	cout<<to_string((ros::Time::now() - msg->header.stamp).toNSec())<<endl;
        pub.publish(msg);
}

int main(int argc, char **argv)
{
	ros::init(argc, argv, "listen_talker");
	ros::NodeHandle n;
	
	ros::Subscriber sub = n.subscribe("msg", 1, chatterCallback1,ros::TransportHints().udp().maxDatagramSize(1500));  //UDP
//	ros::Subscriber sub = n.subscribe("msg", 1, chatterCallback1);    //TCP
        pub= n.advertise<simple_distrib::Test>("msg_back",1);
	ros::spin();
	
	return 0;
}
