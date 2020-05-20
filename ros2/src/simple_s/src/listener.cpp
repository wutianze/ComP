#include <memory>
#include<vector>
#include<cmath>
#include<numeric>
#include "rclcpp/rclcpp.hpp"
#include "test_interfaces/msg/test.hpp"     // CHANGE
using std::placeholders::_1;
using namespace std;
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

class MinimalSubscriber : public rclcpp::Node
{
	public:
		MinimalSubscriber(string channel_name, int channel_num)
			:Node("minimal_subscriber"), count_(0)
		{
			for(int i=0;i<channel_num;i++){
				vector<uint64_t>tmp;
				latency.push_back(tmp);
			}
			subscription_ = this->create_subscription<test_interfaces::msg::Test>(          // CHANGE
					channel_name, 1, std::bind(&MinimalSubscriber::topic_callback, this, _1));
			
		}
		~MinimalSubscriber(){
			for(unsigned int i =0;i<latency.size();i++){
				vector<double> res = analyze_latency(latency[i]);
				cout<<"result:"<<i<<endl;
				for(unsigned int j=0;j<res.size();j++){
					cout<<res[j]<<endl;
				}
			}
		}

	private:
		void topic_callback(const test_interfaces::msg::Test::SharedPtr msg)       // CHANGE
		{
			uint64_t rec_time = this->now().nanoseconds();
			RCLCPP_INFO(this->get_logger(), "I heard: '%d',rec_time:'%lu'", msg->id,rec_time);              // CHANGE
			latency[0].push_back(rec_time-msg->timestamp);
			this->count_++;
		}
		
		int count_;
		rclcpp::Subscription<test_interfaces::msg::Test>::SharedPtr subscription_;       // CHANGE
};

int main(int argc, char * argv[])
{
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<MinimalSubscriber>(string(argv[1]),atoi(argv[2])));
	rclcpp::shutdown();
	return 0;
}
