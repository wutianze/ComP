#include <nodelet/nodelet.h>
#include <pluginlib/class_list_macros.h>
#include <ros/ros.h>
#include <std_msgs/Float64.h>
#include <stdio.h>
#include <pthread.h>
namespace example_pkg
{

class MyNodeletClass : public nodelet::Nodelet
{
public:
MyNodeletClass():value_(0)
{}
/*~MyNodeletClass(){
pthread_join(tid,NULL);
}
static void* MyNodeletClass::PubMainLoop(void* tmp)
{
MyNodeletClass* pub = (MyNodeletClass*) tmp;
ros::Rate loop_rate(1);
while (ros::ok()) {
ROS_INFO("publish!");
std_msgs::Float64Ptr output(new std_msgs::Float64());
output->data = 3.1;
pub->pub.publish(output);
ros::spinOnce();
loop_rate.sleep();
}}*/

private:         virtual void onInit();
void callback(const std_msgs::Float64::ConstPtr& input);
ros::Publisher pub;
ros::Subscriber sub;
double value_;
//pthread_t tid;

};

}
