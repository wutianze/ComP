#include "ros/ros.h"
#include "std_msgs/String.h"
#include "simple_s/Test.h"
#include <fstream>
#include <vector>
#include <signal.h>
#include <message_filters/subscriber.h>
#include <message_filters/synchronizer.h>
#include <message_filters/sync_policies/approximate_time.h>
#include<numeric>
using namespace std;
using namespace message_filters;
string node_name = ros::this_node::getName();
std::fstream writer;
uint64_t count_num = 0;
int num_sub = 0;
vector<vector<uint64_t>>latency;


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
void mySigIntHandler(int sig){
	ROS_INFO("sig handler");
	writer.open("/ros_test/log/multi/"+node_name,std::ios::trunc|std::ios::out);
	for(unsigned int i =0;i<latency.size();i++){
		vector<double> res = analyze_latency(latency[i]);
		cout<<"result:"<<i<<endl;
		for(unsigned int j=0;j<res.size();j++){
			writer<<res[j]<<endl;
			cout<<res[j]<<endl;
		}
		writer<<endl;
	}
	writer.close();
	ros::shutdown();
}
void chatterCallback1(const simple_s::Test::ConstPtr& msg)
{
	latency[0].push_back((ros::Time::now() - msg->header.stamp).toNSec());
	count_num++;
	//ROS_INFO("msg.stamp:%d",msg->header.stamp.nsec);
}
void chatterCallback2(const simple_s::Test::ConstPtr& msg0,const simple_s::Test::ConstPtr& msg1)
{
	ros::Time rec_time = ros::Time::now();
	latency[0].push_back((rec_time - msg0->header.stamp).toNSec());
	latency[1].push_back((rec_time - msg1->header.stamp).toNSec());
	count_num++;
	//ROS_INFO("receive two");
}
int main(int argc, char **argv)
{
	ros::init(argc, argv, "listener",ros::init_options::NoSigintHandler);
	signal(SIGINT,mySigIntHandler);
	std::string channel_name = argv[1];
	//record_name = argv[2];
	num_sub = atoi(argv[2]);
	ros::NodeHandle n;
	
	node_name = ros::this_node::getName();
	for(int i=0;i<num_sub;i++){
		vector<uint64_t>tmp;
		latency.push_back(tmp);
	}
	if(num_sub == 1){
		ros::Subscriber sub = n.subscribe(channel_name, 1, chatterCallback1);
		
		ros::spin();
	}else{//change the code as you need
		message_filters::Subscriber<simple_s::Test> sub1(n, channel_name+'0', 1);
		message_filters::Subscriber<simple_s::Test> sub2(n, channel_name+'1', 1);
		typedef sync_policies::ApproximateTime<simple_s::Test,simple_s::Test> MySyncPolicy;
		Synchronizer<MySyncPolicy> sync(MySyncPolicy(10),sub1,sub2);
		sync.registerCallback(boost::bind(&chatterCallback2, _1,_2));
		
		ros::spin();
	}
	
	/*ROS_INFO("ROS node name:%s",node_name);
	writer.open("/ros_test/log/multi/"+node_name,std::ios::trunc|std::ios::out);
	writer.close();*/
	return 0;
}
