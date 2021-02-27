#include "ros/ros.h"
#include "std_msgs/String.h"
#include "simple_s/Test.h"
#include <sstream>
using namespace std;

ros::Publisher publisher;
simple_s::Test msg;
string to_send;
int count_num = 0;
void timerCallback(const ros::TimerEvent& e){
	msg.id = count_num;
	//msg.timestamp = ros::Time::now().toNSec();
	msg.header.stamp = ros::Time::now();
	//ROS_INFO("time send:%d",msg.header.stamp.nsec);
	publisher.publish(msg);
	count_num++;
	//ROS_INFO("publisher one");
}
int main(int argc, char **argv)
{
	ros::init(argc, argv, "talker");
	ros::NodeHandle n;

	int sleep_ms = atoi(argv[1]);
	int64_t str_size = atoll(argv[2]);
	std::string channel_name = argv[3];
        ROS_INFO("channel_name:%s,sleep_ms:%d",channel_name.c_str(),sleep_ms);	
	publisher = n.advertise<simple_s::Test>(channel_name, 1);
	to_send = std::string(str_size,'a');
	msg.content = to_send;
	ros::Timer timer = n.createTimer(ros::Duration(double(sleep_ms)/1000.0), timerCallback);
	ros::spin();
	return 0;
}
