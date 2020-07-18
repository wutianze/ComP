#include <fstream>
#include <sstream>
#include <memory>
#include "cyber/class_loader/class_loader.h"
#include "cyber/component/component.h"
#include "cyber/AD_Middle_Test/cyber/detect_s/detect_msg.pb.h"
#include "cyber/component/timer_component.h"
#include "cyber/time/time.h"
#include "opencv_util.h"
using apollo::cyber::Component;
using apollo::cyber::ComponentBase;
using apollo::cyber::TimerComponent;
using apollo::cyber::Time;
using apollo::cyber::Writer;
using apollo::cyber::AD_Middle_Test::cyber::detect_s::Frame;
using apollo::cyber::AD_Middle_Test::cyber::detect_s::OcvMat;
using namespace cv;
class CameraTimer : public TimerComponent{
	private:
		     //vector<vector<uint64_t>>latency;
		     std::shared_ptr<Writer<Frame>> writer1 = nullptr;
		     VideoCapture video;
		     //std::ofstream ofs;
		     //std::string fn;
	bool flag = true;
	/*~CameraTimer(){
	for(unsigned int i = 0;i<latency.size();i++){
	ofs.open("/apollo/data/log/test/tmp/"+fn+'_'+to_string(i),std::ios::trunc);
	for(unsigned int j=0;j<latency[i].size();j++){
	ofs<<latency[i][j]<<endl;
	}
	ofs.close();
	}
	AINFO<<"C release";
	}*/
	public:
	bool Init() {
	AINFO<<"camera node name:"<<node_->Name();
	//fn = node_->Name();
	writer1 = node_->CreateWriter<Frame>("/"+node_->Name());
		return true;
}

bool Proc() {
	Mat m=imread_cv("/apollo/yoloDetect/data/example.jpg");
	//Mat m;
	//if(!video.read(m))return false;
	auto serializableMat = new OcvMat;
	serializableMat->set_rows(m.rows);
	serializableMat->set_cols(m.cols);
	serializableMat->set_elt_type(m.type());
	serializableMat->set_elt_size((int)m.elemSize());

	size_t dataSize = m.rows * m.cols * m.elemSize();
	AINFO<<"image size:"<<dataSize;
	serializableMat->set_mat_data(string((char*)m.data,(char*)m.data+dataSize));
	auto to_send = std::make_shared<Frame>();
	to_send->set_timestamp(Time::Now().ToNanosecond());
	to_send->set_allocated_mat(serializableMat);
	writer1->Write(to_send);
	return true;
}
};
CYBER_REGISTER_COMPONENT(CameraTimer)
