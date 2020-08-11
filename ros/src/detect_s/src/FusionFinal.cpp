#include <ros/ros.h>
//#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
//#include <cv_bridge/cv_bridge.h>
#include "detect_s/FusionResult.h"
#include <message_filters/subscriber.h>
#include <message_filters/synchronizer.h>
#include <message_filters/sync_policies/approximate_time.h>
#include <signal.h>
#include "detect_s/store.h"

using namespace message_filters;
StoreBundle sb;
void mySigIntHandler(int sig){
	ROS_INFO("sig handler");
sb.write_file();	
		ros::shutdown();
}
void fusionCallback(const detect_s::FusionResult::ConstPtr& msg0,const detect_s::FusionResult::ConstPtr& msg1)
{
	ros::Time rec_time = ros::Time::now();
	//ROS_INFO("transfer tracker time:%d",(rec_time.toNSec()-msg->deliver_time.toNSec()));

	sb.tra_la[0].push_back((rec_time-msg0->header.stamp).toNSec());
	sb.tra_la[1].push_back((rec_time-msg1->header.stamp).toNSec());

}
int main(int argc, char **argv)
{
ros::init(argc, argv, "fusionFinal",ros::init_options::NoSigintHandler);
	signal(SIGINT,mySigIntHandler);
ros::NodeHandle nh;
sb.init(ros::this_node::getName(),2);
		message_filters::Subscriber<detect_s::FusionResult> sub0(nh, string(argv[1]), 1,ros::TransportHints().tcpNoDelay());
message_filters::Subscriber<detect_s::FusionResult> sub1(nh,string(argv[2]), 1,ros::TransportHints().tcpNoDelay());
		typedef sync_policies::ApproximateTime<detect_s::FusionResult,detect_s::FusionResult> MySyncPolicy;
		Synchronizer<MySyncPolicy> sync(MySyncPolicy(10),sub0,sub1);
		sync.registerCallback(boost::bind(&fusionCallback, _1,_2));
ros::spin();
}
