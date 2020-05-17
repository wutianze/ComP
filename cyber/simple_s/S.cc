#include <memory>

#include "cyber/class_loader/class_loader.h"
#include "cyber/component/component.h"
#include "cyber/component/timer_component.h"
#include "cyber/AD_Middle_Test/cyber/test.pb.h"
#include "cyber/time/time.h"
#include <fstream>
#include <sstream>
#include "cyber/AD_Middle_Test/cyber/test.pb.h"

using apollo::cyber::Component;
using apollo::cyber::ComponentBase;
using apollo::cyber::TimerComponent;
using apollo::cyber::Time;
using apollo::cyber::Writer;
using apollo::cyber::AD_Middle_Test::cyber::Bytes;

class S : public TimerComponent {
	private:
		uint64_t i =0;
		std::string to_send;
		std::shared_ptr<Writer<Bytes>> writer = nullptr;
	public:
	 bool Init(){
		// read the param file in /apollo/param[node_->Name()].txt  
		std::string filename = "/apollo/param"+node_->Name()+".txt";
	  	std::ifstream re(filename);
	  	if(!re.is_open()){
			AERROR<<"open fail";
			return false;
		}
	  	std::string line;
	  	std::getline(re,line);
	  	AINFO<<"line:"<<line;
	  	std::stringstream ss;
	  	ss<<line;
	  	
		// one typical param: msgSize channelName 
		uint64_t size;
	  	std::string channel;
	  	ss>>size;
	  	ss>>channel;
	  	re.close();
	  	AINFO<<"filename:"<<filename<<" param size:"<<size<<" channel:"<<channel;
	 
	       	writer = node_->CreateWriter<Bytes>("/"+channel);
		to_send = std::string(size,'a');
	  	return true;

		}
	bool Proc(){
		auto out_msg = std::make_shared<Bytes>();
		i++;
	        out_msg->set_content(to_send);
		out_msg->set_id(i);
		out_msg->set_timestamp(Time::Now().ToNanosecond());
		writer->Write(out_msg);
		return true;
		};

		      
};
CYBER_REGISTER_COMPONENT(S)
