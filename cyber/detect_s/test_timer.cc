#include <fstream>
#include <sstream>
#include <memory>
#include "cyber/class_loader/class_loader.h"
#include "cyber/component/component.h"
#include "cyber/AD_Middle_Test/cyber/detect_s/detect_msg.pb.h"
#include "cyber/component/timer_component.h"
#include "cyber/time/time.h"
#include "tracker_opencv.h"
using apollo::cyber::Component;
using apollo::cyber::ComponentBase;
using apollo::cyber::TimerComponent;
using apollo::cyber::Time;
using apollo::cyber::Writer;
using apollo::cyber::AD_Middle_Test::cyber::detect_s::OcvMat;
using namespace cv;
class TestTimer : public TimerComponent{
	private:
		     //uint64_t i =0;
		     //std::string to_send;
		     std::shared_ptr<Writer<OcvMat>> writer1 = nullptr;
bool flag = true;
	public:
	bool Init() {
	writer1 = node_->CreateWriter<OcvMat>("/c0");
AINFO<<"init finish";	
	/*std::string filename = "/apollo/param"+node_->Name()+".txt";
	  std::ifstream re(filename);
	  if(!re.is_open())AINFO<<"open fail";
	  std::string line;
	  std::getline(re,line);
	  AINFO<<"line:"<<line;
	  std::stringstream ss;
	  ss<<line;
	  uint64_t size;
	  ss>>size;
	  std::string channel;
	  ss>>channel;
	  ss>>concu;
	  re.close();
	  AINFO<<"filename:"<<filename<<" param size:"<<size<<" channel:"<<channel<<" concurency:"<<concu;
	  writer1 = node_->CreateWriter<Bytes>("/"+channel);
	  to_send = std::string(size,'a');
	  i = 1;
	  return true;
	  */
		//tracker_create("KCF");
		return true;
}

bool Proc() {
	    	/*for(int c = 0;c<concu;c++){      
		auto out_msg = std::make_shared<Bytes>();
	        out_msg->set_content(to_send);
		out_msg->set_id(i);
		out_msg->set_timestamp(Time::Now().ToNanosecond());
		writer1->Write(out_msg);
			      i++;
	}*/
	//Mat m = Mat::zeros(480, 640, CV_8UC3);
	if(!flag){
	return true;
	}
	flag = false;
	Mat m=imread_cv("/apollo/cyber/AD_Middle_Test/cyber/detect_s/a.png");
	auto serializableMat = std::make_shared<OcvMat>();
	serializableMat->set_rows(m.rows);
	serializableMat->set_cols(m.cols);
	serializableMat->set_elt_type(m.type());
	serializableMat->set_elt_size((int)m.elemSize());

	size_t dataSize = m.rows * m.cols * m.elemSize();
	AINFO<<dataSize;
	serializableMat->set_mat_data(string((char*)m.data,(char*)m.data+dataSize));
	writer1->Write(serializableMat);
	return true;
}
};
CYBER_REGISTER_COMPONENT(TestTimer)
