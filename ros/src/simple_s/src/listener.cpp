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
uint64_t count_num = 0;
uint64_t rec_num = 0;
int num_sub = 0;
vector<vector<uint64_t>>latency;


void mySigIntHandler(int sig){
	ROS_INFO("sig handler");
	
std::fstream writer;
	ROS_INFO("loss rate:%lf",double(count_num)/double(rec_num+1.0));
	
	for(unsigned int i =0;i<latency.size();i++){
	writer.open("/ros_test/log/test/tmp/"+node_name+"_"+to_string(i),std::ios::trunc|std::ios::out);
		/*vector<double> res = analyze_latency(latency[i]);
		cout<<"result:"<<i<<endl;
		for(unsigned int j=0;j<res.size();j++){
			writer<<res[j]<<endl;
			cout<<res[j]<<endl;
		}*/
		for(unsigned int j =0;j<latency[i].size();j++){
		writer<<latency[i][j]<<endl;
		}
	writer.close();
	}
	ros::shutdown();
}
void chatterCallback1(const simple_s::Test::ConstPtr& msg)
{
	latency[0].push_back((ros::Time::now() - msg->header.stamp).toNSec());
	if(msg->id > rec_num){
	rec_num = msg->id;
	}
	count_num++;
	//ROS_INFO("seq:%u,count:%u",msg->header.seq,count_num);
	//ROS_INFO("msg.stamp:%d",msg->header.stamp.nsec);
}
void chatterCallback2(const simple_s::Test::ConstPtr& msg0,const simple_s::Test::ConstPtr& msg1,const simple_s::Test::ConstPtr& msg2,const simple_s::Test::ConstPtr& msg3)
{
	ros::Time rec_time = ros::Time::now();
	latency[0].push_back((rec_time - msg0->header.stamp).toNSec());
	latency[1].push_back((rec_time - msg1->header.stamp).toNSec());
	latency[2].push_back((rec_time - msg2->header.stamp).toNSec());
	latency[3].push_back((rec_time - msg3->header.stamp).toNSec());
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
	
	count_num = 0;
	node_name = ros::this_node::getName();
	for(int i=0;i<num_sub;i++){
		vector<uint64_t>tmp;
		latency.push_back(tmp);
	}
	if(num_sub == 1){
		//ros::Subscriber sub = n.subscribe(channel_name, 1, chatterCallback1,ros::TransportHints().tcp().tcpNoDelay());
		ros::Subscriber sub = n.subscribe(channel_name, 1, chatterCallback1,ros::TransportHints().udp());
		ros::spin();
	}else{//change the code as you need
		message_filters::Subscriber<simple_s::Test> sub0(n, channel_name+'0', 1,ros::TransportHints().tcpNoDelay());
		message_filters::Subscriber<simple_s::Test> sub1(n, channel_name+'1', 1,ros::TransportHints().tcpNoDelay());
		message_filters::Subscriber<simple_s::Test> sub2(n, channel_name+'2', 1,ros::TransportHints().tcpNoDelay());
		message_filters::Subscriber<simple_s::Test> sub3(n, channel_name+'3', 1,ros::TransportHints().tcpNoDelay());
		typedef sync_policies::ApproximateTime<simple_s::Test,simple_s::Test,simple_s::Test,simple_s::Test> MySyncPolicy;
		Synchronizer<MySyncPolicy> sync(MySyncPolicy(10),sub0,sub1,sub2,sub3);
		sync.registerCallback(boost::bind(&chatterCallback2, _1,_2,_3,_4));
		
		ros::spin();
	}
	
	/*ROS_INFO("ROS node name:%s",node_name);
	writer.open("/ros_test/log/multi/"+node_name,std::ios::trunc|std::ios::out);
	writer.close();*/
	return 0;
}
