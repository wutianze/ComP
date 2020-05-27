#include <pluginlib/class_list_macros.h>
#include <nodelet/nodelet.h>
#include <ros/ros.h>
#include <stdio.h>
#include <pthread.h>
#include "nodelet_s/Test.h"
#include <std_msgs/String.h>
#include <fstream>
int hz;
int ssize;
std::string channel_name;
int count_num;
namespace nodelet_s
{
	class A:public nodelet::Nodelet{
		public:
			ros::Publisher pub;
			//pthread_t tid;
			ros::Timer timer_;
			~A(){
				//pthread_join(tid,NULL);
			}
			/*static void* PubMainLoop(void* tmp)
			{
				A* a = (A*) tmp;
				ros::Rate loop_rate(a->hz);
				uint64_t count = 0;
				TestPtr output(new Test());
				output->content = std::string(a->ssize,'a');
			while(true){
				count++;	
				output->header.frame_id = count;
				output->header.stamp = ros::Time::now();
				a->pub.publish(output);
				loop_rate.sleep();
			}
			}*/
			void CB(const ros::TimerEvent& event){
			ROS_INFO("publish one");
			TestPtr output(new Test());
			output->content = std::string(ssize,'a');
			output->header.stamp = ros::Time::now();
			output->header.frame_id = count_num;
			count_num++;
			pub.publish(output);
			}
		private:
			void onInit()
			{
				ros::NodeHandle& private_nh = getPrivateNodeHandle();
				private_nh.getParam("hz", hz);
				private_nh.getParam("ssize",ssize);
				private_nh.getParam("channel_name",channel_name);
				count_num =0;
				ROS_INFO("A hz:%d,ssize:%d",hz,ssize);

				pub = private_nh.advertise<Test>(channel_name, 1);
				//ros::Duration(5).sleep();
				
				//pthread_create(&tid, NULL,PubMainLoop, this);
				timer_ = private_nh.createTimer(ros::Duration(1.0/double(hz)),boost::bind(&A::CB,this,_1));
			}
	};
}
// watch the capitalization carefully
PLUGINLIB_EXPORT_CLASS(nodelet_s::A, nodelet::Nodelet)
