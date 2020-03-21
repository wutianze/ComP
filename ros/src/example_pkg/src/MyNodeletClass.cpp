#include <example_pkg/MyNodeletClass.h>
namespace example_pkg
{
	    void MyNodeletClass::onInit()
		        {
				        NODELET_DEBUG("Initializing nodelet...");
					        ROS_INFO("Nodelet is Ok for test!!");
						ros::NodeHandle& private_nh = getPrivateNodeHandle();
	         private_nh.getParam("value", value_);
    pub = private_nh.advertise<std_msgs::Float64>("out", 10);
    sub = private_nh.subscribe("in", 10, &MyNodeletClass::callback, this);    
//pthread_create(&tid, NULL,MyNodeletClass::PubMainLoop, this);
			}

	    void MyNodeletClass::callback(const std_msgs::Float64::ConstPtr& input)
		      {
			          std_msgs::Float64Ptr output(new std_msgs::Float64());
				      output->data = input->data + value_;
				          NODELET_DEBUG("Adding %f to get %f", value_, output->data);
					      pub.publish(output);
					        }
}

// watch the capitalization carefully
PLUGINLIB_EXPORT_CLASS(example_pkg::MyNodeletClass, nodelet::Nodelet)
