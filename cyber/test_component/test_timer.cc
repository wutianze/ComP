#include "cyber/AD_Middle_Test/cyber/test_component/test_timer.h"

#include "cyber/class_loader/class_loader.h"
#include "cyber/component/component.h"
#include "cyber/AD_Middle_Test/cyber/test.pb.h"

bool TestTimer::Init() {
	  writer_ = node_->CreateWriter<Bytes>("/c1");
	  to_send = std::string(1024,'a');
	  i = 0;
	  return true;
}

bool TestTimer::Proc() {
	    //AINFO <<i;
	for(int c = 0;c<1000;c++){      
	auto out_msg = std::make_shared<Bytes>();
	        out_msg->set_content(to_send);
		out_msg->set_timestamp(Time::Now().ToNanosecond());
		out_msg->set_id(i);
	      i++;	
		writer_->Write(out_msg);}
		    return true;
}
