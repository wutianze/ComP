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
#include "test_interfaces/msg/tracker_result.hpp"
#include "test_interfaces/msg/yolo_result.hpp"
#include "test_interfaces/msg/lines_result.hpp"
#include "test_interfaces/msg/fusion_result.hpp"
#include "detect_s/store.h"
using namespace std;
using namespace message_filters;
class FusionMiddle : public rclcpp::Node
{
	public:
		FusionMiddle(string line_channel_name,string yolo_channel_name,string tracker_channel_name, string pub_channel_name, string fname)
			:Node("fusionMiddle"), count_(0),file_name(fname)
		{
			sb.init('/'+fname,3);
			rec_max = 0;
			rclcpp::QoS qos_(rclcpp::QoSInitialization::from_rmw(rmw_qos_profile_default));
			publisher_ = this->create_publisher<test_interfaces::msg::FusionResult>(pub_channel_name, qos_);    // CHANGE
			sub1.subscribe(this,line_channel_name,rmw_qos_profile_default);
			sub2.subscribe(this,yolo_channel_name,rmw_qos_profile_default);
			sub3.subscribe(this,tracker_channel_name,rmw_qos_profile_default);
			this->sync_= std::make_shared<Synchronizer<sync_policies::ApproximateTime<test_interfaces::msg::LinesResult,test_interfaces::msg::YoloResult,test_interfaces::msg::TrackerResult>>>(sync_policies::ApproximateTime<test_interfaces::msg::LinesResult,test_interfaces::msg::YoloResult,test_interfaces::msg::TrackerResult>(10),sub1,sub2,sub3);
			this->sync_->registerCallback(&FusionMiddle::topic_callback,this);
		}
		~FusionMiddle(){

	sb.write_file();
					}

		void topic_callback(const test_interfaces::msg::LinesResult::SharedPtr msg0, const test_interfaces::msg::YoloResult::SharedPtr msg1, const test_interfaces::msg::TrackerResult::SharedPtr msg2)       // CHANGE
		{
			rclcpp::Time rec_time = this->now();
			cout<<"fusionMiddle receive"<<endl;
			sb.tra_la[0].push_back((rec_time-msg0->header.stamp).nanoseconds());
			sb.tra_la[1].push_back((rec_time-msg1->header.stamp).nanoseconds());
			sb.tra_la[2].push_back((rec_time-msg2->header.stamp).nanoseconds());
	test_interfaces::msg::FusionResult::UniquePtr to_send(new test_interfaces::msg::FusionResult());
	to_send->fusion_result = "fusionMiddle";
	to_send->header.stamp = this->now();
publisher_->publish(move(to_send));
			}
		int count_;
		rclcpp::Publisher<test_interfaces::msg::FusionResult>::SharedPtr publisher_;         // CHANGE

		string file_name;
		uint64_t rec_max;
		StoreBundle sb;
message_filters::Subscriber<test_interfaces::msg::LinesResult>sub1;
		message_filters::Subscriber<test_interfaces::msg::YoloResult>sub2;
		message_filters::Subscriber<test_interfaces::msg::TrackerResult>sub3;

		shared_ptr<Synchronizer<sync_policies::ApproximateTime<test_interfaces::msg::LinesResult,test_interfaces::msg::YoloResult,test_interfaces::msg::TrackerResult>>>sync_;
};

int main(int argc, char * argv[])
{
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<FusionMiddle>(string(argv[1]),string(argv[2]),string(argv[3]),string(argv[4]),string(argv[5])));
	rclcpp::shutdown();
	return 0;
}
