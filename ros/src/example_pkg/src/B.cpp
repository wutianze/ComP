#include <nodelet/nodelet.h>
#include <pluginlib/class_list_macros.h>
#include <ros/ros.h>
#include <stdio.h>
#include <fstream>
#include <vector>
#include<numeric>
#include "example_pkg/Test.h"
using namespace std;
void a(vector<uint64_t>&p){
cout<<"in a:"<<p.size();
}
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

namespace example_pkg
{

	class B:public nodelet::Nodelet{
		private:
			std::fstream writer;
			ros::Subscriber sub;
			uint64_t count = 0;	
			uint64_t max_id = 0;
			std::string record;
			std::string channel_name;
			double init_time;
			//bool flag = true;

			vector<vector<uint64_t>>latency;

			
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
			void onInit()
			{
				NODELET_DEBUG("Initializing nodelet B");
				ros::NodeHandle& private_nh = getPrivateNodeHandle();
				private_nh.getParam("channel_name",channel_name);
				private_nh.getParam("record",record);
				sub = private_nh.subscribe(channel_name, 1, &B::callback, this);    
				vector<uint64_t>tmp;
				latency.push_back(tmp);
				//writer.open("/ros_test/log/multi/"+record,std::ios::trunc|std::ios::out);
				//writer.close();
			}

			void callback(const Test::ConstPtr& input)
			{
				ROS_INFO("receive one");
				count++;
				/*if(flag){
					init_time=ros::Time::now().toSec();
					flag = false;
				}
				*/
				//ROS_INFO("%lf",double(count)/(ros::Time::now().toSec()-init_time));
				latency[0].push_back((ros::Time::now() - input->header.stamp).toNSec());
				/*uint64_t lan = ros::Time::now().toNSec()-input->timestamp;
				  writer.open("/ros_test/log/multi/"+record,std::ios::app|std::ios::out);
				  writer<<lan<<std::endl;
				  writer.close();
				  count++;
				  ROS_INFO("%s:loss rate:%f",record.c_str(),double(input->id-count)/double(input->id));*/
			}
	};}

// watch the capitalization carefully
PLUGINLIB_EXPORT_CLASS(example_pkg::B, nodelet::Nodelet)
