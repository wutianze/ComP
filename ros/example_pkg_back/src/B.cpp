#include <example_pkg/B.h>
namespace example_pkg
{
	    void B::onInit()
		        {
				        NODELET_DEBUG("Initializing nodelet B");
		ros::NodeHandle& private_nh = getPrivateNodeHandle();
		int size;
	         private_nh.getParam("value", size);
		ROS_INFO("B msg size:%d",size);
		 value_ = std::string(size,'a');
    pub = private_nh.advertise<std_msgs::String>("out", 1);
    sub = private_nh.subscribe("in", 1, &B::callback, this);    
			}

	    void B::callback(const std_msgs::StringConstPtr& input)
		      {
std_msgs::StringPtr output(new std_msgs::String);
output->data = value_;
pub.publish(output);					       
		      }
}

// watch the capitalization carefully
PLUGINLIB_EXPORT_CLASS(example_pkg::B, nodelet::Nodelet)
