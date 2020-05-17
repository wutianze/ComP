#include "ros/ros.h"
#include "std_msgs/String.h"
#include "simple_s/Test.h"
#include <sstream>
using namespace std;

ros::Publisher publisher;
int64_t count_num = 0;
simple_s::Test msg;
string to_send;
void timerCallback(const ros::TimerEvent& e){
	count_num = count_num + 1;
	//msg.id = count_num;
	//msg.timestamp = ros::Time::now().toNSec();
	msg.header.frame_id = to_string(count_num);
	msg.header.stamp = ros::Time::now();
	publisher.publish(msg);
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
	count_num = 0;
	to_send = std::string(str_size,'a');
	msg.content = to_send;
	ros::Timer timer = n.createTimer(ros::Duration(double(sleep_ms)/1000.0), timerCallback);
	ros::spin();
	return 0;
}
