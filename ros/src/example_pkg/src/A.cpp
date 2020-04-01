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
		int num;
		int ssize;

		~A(){
	pthread_join(tid,NULL);
	}
	static void* PubMainLoop(void* tmp)
	{
		A* a = (A*) tmp;
		ros::Rate loop_rate(a->hz);
		int reach = 120*a->hz;
		uint64_t count = 0;
		NumPtr output(new Num());
			output->content = std::string(a->ssize,'a');

				for(int j=0;j<=reach;j++) {
			for(int k =0;k<a->con;k++){
			count++;	
			output->id = count;
		uint64_t now_time = ros::Time::now().toNSec();
			output->timestamp = now_time;
			a->pub.publish(output);
			}
			loop_rate.sleep();
		//ROS_INFO("now j:%d",j);
				}}
		private:
       	void onInit()
		        {
						ros::NodeHandle& private_nh = getPrivateNodeHandle();
	         				private_nh.getParam("hz", hz);
						private_nh.getParam("con",con);
						private_nh.getParam("num",num);
						private_nh.getParam("ssize",ssize);

					        ROS_INFO("A hz:%d,con:%d,num:%d,ssize:%d",hz,con,num,ssize);
    pub = private_nh.advertise<Num>("out", 1);
    ros::Duration(5).sleep();
	pthread_create(&tid, NULL,PubMainLoop, this);
			}
};
}
// watch the capitalization carefully
PLUGINLIB_EXPORT_CLASS(example_pkg::A, nodelet::Nodelet)
