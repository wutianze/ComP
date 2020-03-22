#include <nodelet/nodelet.h>
#include <pluginlib/class_list_macros.h>
#include <ros/ros.h>
#include <std_msgs/String.h>
#include <stdio.h>
#include <pthread.h>
namespace example_pkg
{

class A : public nodelet::Nodelet
{
public:
~A(){
pthread_join(tid,NULL);
}
/*static void* PubMainLoop(void* tmp)
{
A* pub = (A*) tmp;
ros::Rate loop_rate(1);
while (ros::ok()) {
ROS_INFO("publish!");
std_msgs::StringPtr output(new std_msgs::String());
output->data = value_;
pub->pub.publish(output);
ros::spinOnce();
loop_rate.sleep();
}}
*/
std::string value_;
void callback(const std_msgs::StringConstPtr& input);
ros::Publisher pub;
ros::Subscriber sub;
ros::Subscriber sub2;
pthread_t tid;
uint64_t record;
private:         virtual void onInit();
};

}
