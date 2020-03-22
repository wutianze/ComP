#include <nodelet/nodelet.h>
#include <pluginlib/class_list_macros.h>
#include <ros/ros.h>
#include <std_msgs/String.h>
#include <stdio.h>
#include <pthread.h>
namespace example_pkg
{

class B : public nodelet::Nodelet
{
private:         virtual void onInit();
void callback(const std_msgs::StringConstPtr& input);
ros::Publisher pub;
ros::Subscriber sub;
std::string value_;
};

}
