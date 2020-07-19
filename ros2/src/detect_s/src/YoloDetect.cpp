#include <memory>
#include<vector>
#include<cmath>
#include<numeric>
#include <message_filters/subscriber.h>
#include <message_filters/synchronizer.h>
#include <message_filters/sync_policies/approximate_time.h>
#include <message_filters/time_synchronizer.h>

#include<fstream>
#include "rclcpp/qos.hpp"
#include "rclcpp/rclcpp.hpp"
#include "test_interfaces/msg/test_image.hpp"     // CHANGE
#include <opencv2/highgui/highgui.hpp>
//using std::placeholders::_1;
//using std::placeholders::_2;
using namespace std;
using namespace message_filters;

fstream writer;

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

class YoloDetect : public rclcpp::Node
{
	public:
		YoloDetect(string channel_name, int channel_num,string fname)
			:Node("yolo"), count_(0),file_name(fname)
		{
			for(int i=0;i<channel_num;i++){
				vector<uint64_t>tmp;
				latency.push_back(tmp);
			}
			rec_max = 0;	
			//rclcpp::QoS qos_(rclcpp::QoSInitialization::from_rmw(rmw_qos_profile_sensor_data));
			rclcpp::QoS qos_(rclcpp::QoSInitialization::from_rmw(rmw_qos_profile_default));
			if(channel_num == 1){
			subscription_ = this->create_subscription<test_interfaces::msg::TestImage>(          // CHANGE
					channel_name, qos_, std::bind(&YoloDetect::topic_callback, this, std::placeholders::_1));
			}			
		}
		~YoloDetect(){
			/*
			cout<<"count_:"<<count_<<" rec_max:"<<rec_max<<endl;
			string loss_rate = to_string(double(count_-1)/double(rec_max));
			for(unsigned int i =0;i<latency.size();i++){
	writer.open("/ros2_test/log/test/tmp/"+file_name+'_'+to_string(i)+'_'+loss_rate+"loss",std::ios::trunc|std::ios::out);
			for(unsigned int j=0;j<latency[i].size();j++){
			writer<<latency[i][j]<<endl;
			}
			writer.close();
			
			}*/
		}

		void topic_callback(const test_interfaces::msg::TestImage::SharedPtr msg)       // CHANGE
		{
			RCLCPP_INFO(this->get_logger(), "msg rows '%d',cols:'%d'", msg->rows,msg->cols);              // CHANGE
			cv::Mat tmp(msg->rows,msg->cols,msg->elt_type);
			int datasize = msg->rows*msg->cols*msg->elt_size;
			//string tmpS(msg->mat_data,datasize);
			//cout<<tmpS[93485]<<tmpS[100000]<<endl;
			//RCLCPP_INFO(this->get_logger(), "datasize: '%d', mat_data size:%d",datasize, tmpS.size());              // CHANGE
			//std::copy(reinterpret_cast<unsigned char *>(const_cast<char *>((msg->mat_data).c_str())),reinterpret_cast<unsigned char *>(const_cast<char *>((msg->mat_data).c_str()) + datasize),tmp.data);
			//tmp.data.resize(datasize);
			//memcpy(tmp.data,(unsigned char*)(&(msg->mat_data)[0]),datasize);
			cout<<"datasize:"<<datasize<<endl;	
			cout<<"datasize constructed image:"<<tmp.rows*tmp.cols*tmp.elemSize()<<endl;	
			//cout<<"array size:"<<sizeof(msg->mat_data)/sizeof(msg->mat_data[0])<<endl;
			int imgS = 0;
			msg->mat_data.resize(datasize);
			cout<<"string size:"<<msg->mat_data.size()<<endl;
			//for(int i=0;i<datasize;i++){
			//cout<<msg->mat_data[i];
			//}
			try{
			for(int i=0;i<msg->rows;i++){
				for(int j=0;j<msg->cols;j++){
					for(int k =0;k<msg->elt_size;k++){
				//cout<<"value"<<image.data[i]<<"i:"<<i<<endl;
			tmp.at<cv::Vec3b>(i,j)[k] = msg->mat_data[imgS];
			//if(msg->mat_data[imgS]=='\0')cout<<"null at"<<imgS<<endl;
			imgS++;
			
					}
				}
			}}
			catch(...){
			cout<<"sth wrong"<<endl;
			}
			//for(int i=0;i<datasize;i++){
			//tmp.data[i]= (unsigned char)(msg->mat_data[i]);
			//cout<<i<<endl;
			//}
			cout<<"cp finished,imgS:"<<imgS<<endl;
			//cout<<msg->mat_data[0]<<msg->mat_data[1]<<endl;
			cv::imwrite("b.jpg",tmp);
			RCLCPP_INFO(this->get_logger(), "finish write");              // CHANGE
		}

		int count_;
		rclcpp::Subscription<test_interfaces::msg::TestImage>::SharedPtr subscription_;       // CHANGE

		string file_name;
		uint64_t rec_max;

};

int main(int argc, char * argv[])
{
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<YoloDetect>(string(argv[1]),atoi(argv[2]),string(argv[3])));
	rclcpp::shutdown();
	return 0;
}
