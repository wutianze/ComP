#include <pluginlib/class_list_macros.h>
#include <nodelet/nodelet.h>
#include <ros/ros.h>
#include <stdio.h>
#include <pthread.h>
#include "example_pkg/Num.h"
#include <std_msgs/String.h>
#include <fstream>
namespace example_pkg
{
	class A:public nodelet::Nodelet{
		public:
		ros::Publisher pub;
		pthread_t tid;
		int hz;
		int con;

		~A(){
	pthread_join(tid,NULL);
	}
	static void* PubMainLoop(void* tmp)
	{
		A* a = (A*) tmp;
		ros::Rate loop_rate(a->hz);
		uint64_t now_time = ros::Time::now().toNSec();
		int reach = 120*a->hz*a->con;
		NumPtr output(new Num());
			output->content = std::string(1024,'a');

				for(int j=1;j<=reach;j++) {
				
			output->id = j;
			output->timestamp = now_time;
			a->pub.publish(output);
			loop_rate.sleep();
		}}
		private:
       	void onInit()
		        {
						ros::NodeHandle& private_nh = getPrivateNodeHandle();
	         				private_nh.getParam("hz", hz);
						private_nh.getParam("con",con);
					        ROS_INFO("A hz:%d,con:%d",hz,con);
    pub = private_nh.advertise<Num>("out", 1);
	pthread_create(&tid, NULL,PubMainLoop, this);
			}
};
}
// watch the capitalization carefully
PLUGINLIB_EXPORT_CLASS(example_pkg::A, nodelet::Nodelet)
