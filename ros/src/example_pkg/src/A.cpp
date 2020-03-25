#include <example_pkg/A.h>
#include <fstream>
namespace example_pkg
{
	int count = 0;
	int reach = 400000;
	std::fstream writer;
	void* PubMainLoop(void* tmp)
	{
		A* pub = (A*) tmp;
		ros::Rate loop_rate(1);
		while (ros::ok()) {
			ROS_INFO("publish!");
			std_msgs::StringPtr output(new std_msgs::String());
			output->data = pub->value_;
			pub->pub.publish(output);
			ros::spinOnce();
			loop_rate.sleep();
		}}
	    void A::onInit()
		        {
				        NODELET_DEBUG("Initializing nodelet...");
						ros::NodeHandle& private_nh = getPrivateNodeHandle();
	         int size;
						private_nh.getParam("value", size);
					        ROS_INFO("A msg size:%d",size);
						value_ = std::string(size,'a');
    pub = private_nh.advertise<std_msgs::String>("out", 1);
    sub = private_nh.subscribe("in", 1, &A::callback, this); 
    sub2 = private_nh.subscribe("start", 1, &A::callback2, this); 
 writer.open("/ros_test/log/tmp",std::ios::trunc|std::ios::out);   
//pthread_create(&tid, NULL,PubMainLoop, this);
			}

	    void A::callback(const std_msgs::StringConstPtr& input)
		      {
ROS_INFO("receive one");
			      uint64_t end_time = ros::Time::now().toNSec();
			      if(count !=0){
			    uint64_t ttl = end_time - record;
			   writer<<ttl<<"\n";
			      }
if(count == reach){
ROS_INFO("finish whole");
writer.close();
return;
}
count++;
//ros::Duration(1).sleep();
std_msgs::StringPtr output(new std_msgs::String);
output->data = value_;
record = ros::Time::now().toNSec();
pub.publish(output);					       
		      }
void A::callback2(const std_msgs::StringConstPtr& tmp){
	std_msgs::StringPtr once(new std_msgs::String);
	ROS_INFO("receive start sig");
	pub.publish(once);
}
}

// watch the capitalization carefully
PLUGINLIB_EXPORT_CLASS(example_pkg::A, nodelet::Nodelet)
