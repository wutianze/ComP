#include <nodelet/nodelet.h>
#include <pluginlib/class_list_macros.h>
#include <ros/ros.h>
#include <stdio.h>
#include <fstream>
#include <vector>
#include<numeric>
#include <message_filters/subscriber.h>
#include <message_filters/synchronizer.h>
#include <message_filters/sync_policies/approximate_time.h>
#include "example_pkg/Test.h"
using namespace std;
using namespace message_filters;
vector<vector<uint64_t>>latency;
uint64_t count_num = 0;	
vector<double>analyze_latency(vector<uint64_t>&p){
				vector<double>res;
				sort(p.begin(),p.end());
				int size = p.size();
				res.push_back(p[static_cast<int>((size-1)*0.95)]);// 95th
				res.push_back(p[static_cast<int>((size-1)*0.99)]);// 99th
				// for box-plot
				res.push_back(p[0]);// smallest latency
				res.push_back(p[static_cast<int>((size-1)*0.25)]);// 25th
				res.push_back(p[static_cast<int>((size-1)*0.5)]);// 50th
				res.push_back(p[static_cast<int>((size-1)*0.75)]);// 75th
				res.push_back(p[size-1]);// biggest latency

				double sum = std::accumulate(std::begin(p), std::end(p), 0.0);
				double mean =  sum / size;
				double accum  = 0.0;
				std::for_each (std::begin(p), std::end(p), [&](const double d) {
						accum  += (d-mean)*(d-mean);
						});
				
				double stdev = sqrt(accum/(size-1));
				res.push_back(mean);
				res.push_back(stdev);
				return res;
			}

void callback2(const example_pkg::Test::ConstPtr& msg0,const example_pkg::Test::ConstPtr& msg1)
			{
				ros::Time rec_time = ros::Time::now();
				latency[0].push_back((rec_time - msg0->header.stamp).toNSec());
				latency[1].push_back((rec_time - msg1->header.stamp).toNSec());
				count_num++;
				ROS_INFO("receive two");
			}

namespace example_pkg
{

	class B:public nodelet::Nodelet{
		private:
			//std::fstream writer;
			std::string channel_name;
			int channel_num;
			//bool flag = true;
			ros::Subscriber sub;
			message_filters::Subscriber<example_pkg::Test> *sub1;
			message_filters::Subscriber<example_pkg::Test> *sub2;
			Synchronizer<sync_policies::ApproximateTime<example_pkg::Test,example_pkg::Test>> *sync;


			//vector<vector<uint64_t>>latency;
			
			~B(){
				std::cout<<"release B"<<latency.size()<<endl;
				
				for(unsigned int i =0;i<latency.size();i++){
					vector<double> res = analyze_latency(latency[i]);
					cout<<"result:"<<i<<endl;
					for(unsigned int j=0;j<res.size();j++){
						cout<<res[j]<<endl;
					}
				}
			}
			void callback(const Test::ConstPtr& input)
			{
				ROS_INFO("receive one");
				count_num++;
				/*if(flag){
				  init_time=ros::Time::now().toSec();
				  flag = false;
				  }
				  */
				//ROS_INFO("%lf",double(count_num)/(ros::Time::now().toSec()-init_time));
				latency[0].push_back((ros::Time::now() - input->header.stamp).toNSec());
				/*uint64_t lan = ros::Time::now().toNSec()-input->timestamp;
				  writer.open("/ros_test/log/multi/"+record,std::ios::app|std::ios::out);
				  writer<<lan<<std::endl;
				  writer.close();
				  count_num++;
				  ROS_INFO("%s:loss rate:%f",record.c_str(),double(input->id-count_num)/double(input->id));*/
			}
			
			
			void onInit()
			{
				NODELET_DEBUG("Initializing nodelet B");
				ros::NodeHandle& private_nh = getPrivateNodeHandle();
				private_nh.getParam("channel_name",channel_name);
				private_nh.getParam("channel_num",channel_num);
					ROS_INFO("channel num %d",channel_num);
				if(channel_num == 1){
				sub = private_nh.subscribe("/A0/"+channel_name, 1, &B::callback, this);    
				}else{
				//message_filters::Subscriber<example_pkg::Test> sub1(private_nh, "/A0/"+channel_name, 1);
				//message_filters::Subscriber<example_pkg::Test> sub2(private_nh, "/A1/"+channel_name, 1);
				//Synchronizer<sync_policies::ApproximateTime<example_pkg::Test,example_pkg::Test>>sync(sync_policies::ApproximateTime<example_pkg::Test,example_pkg::Test>(10),sub1,sub2);
				sub1 = new message_filters::Subscriber<example_pkg::Test>(private_nh, "/A0/"+channel_name, 1);
				sub2 = new message_filters::Subscriber<example_pkg::Test>(private_nh, "/A1/"+channel_name, 1);
				sync = new Synchronizer<sync_policies::ApproximateTime<example_pkg::Test,example_pkg::Test>>(sync_policies::ApproximateTime<example_pkg::Test,example_pkg::Test>(10),*sub1,*sub2);
				sync->registerCallback(boost::bind(&callback2, _1,_2));
				}
				for(int i=0;i<channel_num;i++){
				vector<uint64_t>tmp;
				latency.push_back(tmp);
				}
								//writer.open("/ros_test/log/multi/"+record,std::ios::trunc|std::ios::out);
			
				//writer.close();
			}

			
			

	};}

// watch the capitalization carefully
PLUGINLIB_EXPORT_CLASS(example_pkg::B, nodelet::Nodelet)
