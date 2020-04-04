#include "cyber/AD_Middle_Test/cyber/test_component/test_timer.h"
#include <fstream>
#include <sstream>
#include "cyber/class_loader/class_loader.h"
#include "cyber/component/component.h"
#include "cyber/AD_Middle_Test/cyber/test.pb.h"

bool TestTimer::Init() {
	std::string filename = "/apollo/param"+node_->Name()+".txt";
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
	  /*writer2 = node_->CreateWriter<Bytes>("/c2");
	  writer3 = node_->CreateWriter<Bytes>("/c3");
	  writer4 = node_->CreateWriter<Bytes>("/c4");
	  writer5 = node_->CreateWriter<Bytes>("/c5");
	  writer6 = node_->CreateWriter<Bytes>("/c6");
	  writer7 = node_->CreateWriter<Bytes>("/c7");
	  writer8 = node_->CreateWriter<Bytes>("/c8");*/
	  to_send = std::string(size,'a');
	  i = 1;
	  return true;
}

bool TestTimer::Proc() {
	    //AINFO <<i;
	    /*static bool once = true;
	    if(once){
		    std::string channel=readers_[0]->GetChannelName();
	   std::ifstream re("/apollo/param"+channel+".txt");
	  uint64_t size;
	  re>>size;
	  re>>concu;
	  AINFO<<"param size:"<<size<<" channel:"<<channel<<" concurency:"<<concu;
	  writer1 = node_->CreateWriter<Bytes>("/"+channel);
	  writer2 = node_->CreateWriter<Bytes>("/c2");
	  writer3 = node_->CreateWriter<Bytes>("/c3");
	  writer4 = node_->CreateWriter<Bytes>("/c4");
	  writer5 = node_->CreateWriter<Bytes>("/c5");
	  writer6 = node_->CreateWriter<Bytes>("/c6");
	  writer7 = node_->CreateWriter<Bytes>("/c7");
	  writer8 = node_->CreateWriter<Bytes>("/c8");
	  to_send = std::string(size,'a');
 
	    once = false;
	    }*/
	for(int c = 0;c<concu;c++){      
		auto out_msg = std::make_shared<Bytes>();
	        out_msg->set_content(to_send);
		out_msg->set_id(i);
		out_msg->set_timestamp(Time::Now().ToNanosecond());
		writer1->Write(out_msg);
		/*auto out_msg1 = std::make_shared<Bytes>();
	        out_msg1->set_content(to_send);
		out_msg1->set_id(i);
		out_msg1->set_timestamp(Time::Now().ToNanosecond());
		writer2->Write(out_msg1);
		auto out_msg2 = std::make_shared<Bytes>();
	        out_msg2->set_content(to_send);
		out_msg2->set_id(i);
		out_msg2->set_timestamp(Time::Now().ToNanosecond());
		writer3->Write(out_msg2);
		auto out_msg3 = std::make_shared<Bytes>();
	        out_msg3->set_content(to_send);
		out_msg3->set_id(i);
		out_msg3->set_timestamp(Time::Now().ToNanosecond());
		writer4->Write(out_msg3);
		auto out_msg4 = std::make_shared<Bytes>();
	        out_msg4->set_content(to_send);
		out_msg4->set_id(i);
		out_msg4->set_timestamp(Time::Now().ToNanosecond());
		writer5->Write(out_msg4);
		auto out_msg5 = std::make_shared<Bytes>();
	        out_msg5->set_content(to_send);
		out_msg5->set_id(i);
		out_msg5->set_timestamp(Time::Now().ToNanosecond());
		writer6->Write(out_msg5);
		auto out_msg6 = std::make_shared<Bytes>();
	        out_msg6->set_content(to_send);
		out_msg6->set_id(i);
		out_msg6->set_timestamp(Time::Now().ToNanosecond());
		writer7->Write(out_msg6);
		auto out_msg7 = std::make_shared<Bytes>();
	        out_msg7->set_content(to_send);
		out_msg7->set_id(i);
		out_msg7->set_timestamp(Time::Now().ToNanosecond());
		writer8->Write(out_msg7);*/
	      i++;
	}
		    return true;
}
