#include "ros/ros.h"
#include "std_msgs/String.h"
#include "simple_distrib/Test.h"
#include <sstream>
using namespace std;

ros::Publisher publisher;
simple_distrib::Test msg;
string to_send;
void timerCallback(const ros::TimerEvent& e){
	//msg.id = count_num;
	//msg.timestamp = ros::Time::now().toNSec();
	msg.header.stamp = ros::Time::now();
	//ROS_INFO("time send:%d",msg.header.stamp.nsec);
	publisher.publish(msg);
	//ROS_INFO("publisher one");
}
int main(int argc, char **argv)
{
	ros::init(argc, argv, "talker");
	ros::NodeHandle n;

	int sleep_ms = atoi(argv[1]);
	int64_t str_size = atoll(argv[2]);

	publisher = n.advertise<simple_distrib::Test>("msg", 1);
	to_send = std::string(str_size,'a');  //1024 8192 16384 65536 262144 524288 1048576 2097152 4194304 8388608
	msg.content = to_send;
	ros::Timer timer = n.createTimer(ros::Duration(double(sleep_ms)/1000.0), timerCallback);
	ros::spin();
	return 0;
}
