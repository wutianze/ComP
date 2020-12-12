#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>

#include <opencv2/opencv.hpp>            // C++
#include <opencv2/highgui/highgui_c.h>   // C
#include <opencv2/imgproc/imgproc_c.h>   // C
#include <memory>
#include "cyber/component/component.h"
#include "cyber/AD_Middle_Test/cyber/detect_s/detect_msg.pb.h"
//#include "opencv_util.h"
#include "cyber/time/time.h"
#include "darknet.h"
using apollo::cyber::Component;
using apollo::cyber::ComponentBase;
using apollo::cyber::AD_Middle_Test::cyber::detect_s::Frame;
using apollo::cyber::AD_Middle_Test::cyber::detect_s::YoloResult;
using apollo::cyber::AD_Middle_Test::cyber::detect_s::Bbox;
using apollo::cyber::AD_Middle_Test::cyber::detect_s::OcvMat;
using apollo::cyber::Writer;
using apollo::cyber::Time;
using namespace std;
//using namespace cv;

//cv::Rect draw_boxes(cv::Mat mat_img, std::vector<bbox_t> result_vec);
std::vector<std::string> objects_names_from_file(std::string const filename);
class YoloDetect:public Component<Frame>{
	std::shared_ptr<Writer<YoloResult>> writer1 = nullptr;
	std::vector<std::string> obj_names;
	std::vector<std::string> objects_names_from_file(std::string const filename) {
		std::ifstream file(filename);
		std::vector<std::string> file_lines;
		if (!file.is_open()) return file_lines;
		for(std::string line; getline(file, line);) file_lines.push_back(line);
		std::cout << "object names loaded \n";
		return file_lines;
	}
	std::ofstream ofs;
	std::string fn;
	vector<vector<uint64_t>>tra_latency;
	vector<vector<uint64_t>>cal_latency;
	~YoloDetect(){
		for(unsigned int i = 0;i<tra_latency.size();i++){
			ofs.open("/apollo/data/log/test/tmp/tra_"+fn+'_'+to_string(i),std::ios::trunc);
			for(unsigned int j=0;j<tra_latency[i].size();j++){
				ofs<<tra_latency[i][j]<<endl;
			}
			ofs.close();
		}
		for(unsigned int i = 0;i<cal_latency.size();i++){
			ofs.open("/apollo/data/log/test/tmp/cal_"+fn+'_'+to_string(i),std::ios::trunc);
			for(unsigned int j=0;j<cal_latency[i].size();j++){
				ofs<<cal_latency[i][j]<<endl;
			}
			ofs.close();
		}
		AINFO<<"Y release";
	}

	public:
	//Detector* detector;
	bool Init(){
		AINFO<<"yolo node name :"<<node_->Name();
		std::string  names_file = "/apollo/darknet/data/coco.names";
		std::string  cfg_file = "/apollo/darknet/cfg/yolov3-tiny.cfg";
		std::string  weights_file = "/apollo/darknet/yolov3-tiny.weights";
		//std::string  cfg_file = "/apollo/yoloDetect/cfg/Gaussian_yolov3_BDD.cfg";
		//std::string  weights_file = "/apollo/yoloDetect/Gaussian_yolov3_BDD.weights";
		//std::string filename;

		//float const thresh = 0.2;
		//detector = new Detector(cfg_file, weights_file);
		init_result(names_file.c_str(),cfg_file.c_str(),weights_file.c_str());
		obj_names = objects_names_from_file(names_file);
		fn = node_->Name();
		for(int i=0;i<1;i++){
			vector<uint64_t>tmp;
			tra_latency.push_back(tmp);
		}
		for(int i=0;i<1;i++){
			vector<uint64_t>tmp;
			cal_latency.push_back(tmp);
		}
		writer1 = node_->CreateWriter<YoloResult>("/"+fn);
		return true;
	}
	bool Proc(const std::shared_ptr<Frame>& msg0){
		uint64_t receive_time = Time::Now().ToNanosecond();
		//AINFO<<"yolo transfer time:"<<receive_time - msg0->timestamp();
		tra_latency[0].push_back(receive_time - msg0->timestamp());

		cv::Mat m;
		OcvMat content = msg0->mat();
		m.create(content.rows(),content.cols(),content.elt_type());
		size_t datasize = content.rows() *  content.cols() * content.elt_size();
		std::copy(reinterpret_cast<unsigned char *>(const_cast<char *>(content.mat_data().data())),reinterpret_cast<unsigned char *>(const_cast<char *>(content.mat_data().data()) + datasize),m.data);
		IplImage tmpIpl = cvIplImage(m);
		double image_width = tmpIpl.width;
		double image_height = tmpIpl.height;
		int nbox = 0;
		uint64_t receive_time2 = Time::Now().ToNanosecond();
		//AINFO<<"yolo read time:"<<receive_time2 - receive_time;

		//std::vector<bbox_t> result_vec = detector->detect(m);
		detection* dets = detect_result(&tmpIpl,&nbox);
		uint64_t finish_time = Time::Now().ToNanosecond();
		//AINFO<<"yolo run time:"<<finish_time - receive_time2<<" result box:"<<nbox<<" cal_latency size:"<<cal_latency.size();

		cal_latency[0].push_back(finish_time - receive_time2);

		//AINFO<<"cal_latency added";
		auto to_send = std::make_shared<YoloResult>();
		//AINFO<<"obj_names size"<<obj_names.size();

		for(int i =0;i<nbox;i++){
			//AINFO<<"class id:"<<dets[i].classes;
			AINFO<<"detect obj:"<<obj_names[dets[i].classes-1];
			auto tmpbox = to_send->add_bboxresult();
			double x = dets[i].bbox.x;
			double y = dets[i].bbox.y;
			double w = dets[i].bbox.w;
			double h = dets[i].bbox.h;
			if(x>w/2.0){
				tmpbox->set_x((x-w/2.0)*image_width);}
			else{tmpbox->set_x(0);}
			if(y>h/2.0){
				tmpbox->set_y((y-h/2.0)*image_height);
			}else{
				tmpbox->set_y(0);
			}	
			
			tmpbox->set_w(w*image_width);
			tmpbox->set_h(h*image_height);
			tmpbox->set_prob(*(dets[i].prob));
			tmpbox->set_obj_id(dets[i].classes);
			tmpbox->set_track_id(dets[i].sort_class);
			tmpbox->set_frames_counter(0);
		}
		to_send->set_timestamp(Time::Now().ToNanosecond());
		writer1->Write(to_send);
		return true;
	}
};
CYBER_REGISTER_COMPONENT(YoloDetect)
