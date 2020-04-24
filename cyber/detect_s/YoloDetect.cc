#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>

#include <opencv2/opencv.hpp>            // C++
#include <opencv2/highgui/highgui_c.h>   // C
#include <opencv2/imgproc/imgproc_c.h>   // C
#include "yolo_v2_class.hpp" 
#include <memory>
#include "cyber/component/component.h"
#include "cyber/AD_Middle_Test/cyber/detect_s/detect_msg.pb.h"
//#include "opencv_util.h"
#include "cyber/time/time.h"
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

cv::Rect draw_boxes(cv::Mat mat_img, std::vector<bbox_t> result_vec);
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
	public:
		Detector* detector;
		bool Init(){
    AINFO<<"yolo node name :"<<node_->Name();
			std::string  names_file = "/apollo/yoloDetect/data/bdd.names";
    std::string  cfg_file = "/apollo/yoloDetect/cfg/tiny.cfg";
    std::string  weights_file = "/apollo/yoloDetect/yolov3-tiny-prn.weights";
    //std::string  cfg_file = "/apollo/yoloDetect/cfg/Gaussian_yolov3_BDD.cfg";
    //std::string  weights_file = "/apollo/yoloDetect/Gaussian_yolov3_BDD.weights";
    //std::string filename;

    //float const thresh = 0.2;
    detector = new Detector(cfg_file, weights_file);
    obj_names = objects_names_from_file(names_file);
    //cv::Mat mat_img = cv::imread("/apollo/yoloDetect/data/example.jpg");
    //std::vector<bbox_t> result_vec = detectorr.detect(mat_img);
    //AINFO<<"result_vec size:"<<result_vec.size();
    //cv::Rect rect = draw_boxes(mat_img,result_vec);
    //cv::imshow("window name", mat_img);
    //cv::waitKey(1000);
    writer1 = node_->CreateWriter<YoloResult>(node_->Name());

    return true;
}
bool Proc(const std::shared_ptr<Frame>& msg0){
	uint64_t receive_time = Time::Now().ToNanosecond();
	AINFO<<"yolo transfer time:"<<receive_time - msg0->timestamp();
	cv::Mat m;
        OcvMat content = msg0->mat();
	m.create(content.rows(),content.cols(),content.elt_type());
	size_t datasize = content.rows() *  content.cols() * content.elt_size();
	std::copy(reinterpret_cast<unsigned char *>(const_cast<char *>(content.mat_data().data())),reinterpret_cast<unsigned char *>(const_cast<char *>(content.mat_data().data()) + datasize),m.data);
	uint64_t receive_time2 = Time::Now().ToNanosecond();
	AINFO<<"yolo read time:"<<receive_time2 - receive_time;

	std::vector<bbox_t> result_vec = detector->detect(m);
	uint64_t finish_time = Time::Now().ToNanosecond();
	AINFO<<"yolo run time:"<<finish_time - receive_time2<<" result box:"<<result_vec.size();

	auto to_send = std::make_shared<YoloResult>();
	
	for(unsigned int i =0;i<result_vec.size();i++){
	AINFO<<"detect obj:"<<obj_names[result_vec[i].obj_id];
	auto tmpbox = to_send->add_bboxresult();
	tmpbox->set_x(result_vec[i].x);
	tmpbox->set_y(result_vec[i].y);
	tmpbox->set_w(result_vec[i].w);
	tmpbox->set_h(result_vec[i].h);
	tmpbox->set_prob(result_vec[i].prob);
	tmpbox->set_obj_id(result_vec[i].obj_id);
	tmpbox->set_track_id(result_vec[i].track_id);
	tmpbox->set_frames_counter(result_vec[i].frames_counter);
	}
	writer1->Write(to_send);
	return true;
}
};
CYBER_REGISTER_COMPONENT(YoloDetect)
/*
cv::Rect draw_boxes(cv::Mat mat_img, std::vector<bbox_t> result_vec)
{
    cv::Rect rect;
    for (auto &i : result_vec) {
        if(i.obj_id==0){
            rect = cv::Rect(i.x, i.y, i.w, i.h);
            cv::rectangle(mat_img, rect, cv::Scalar(0,255,255), 2);
        }
    }
    return rect;
}
*/



