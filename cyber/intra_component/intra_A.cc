/******************************************************************************
 * Copyright 2018 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/
#include "cyber/AD_Middle_Test/cyber/intra_component/intra_A.h"

bool IntraA::Init() {
  AINFO << "A init";
  //write_once_ = node_->CreateWriter<Bytes>("/c1");
  //auto once_msg = std::make_shared<Bytes>();
  //once_msg->set_content("a");
  //write_once_->Write(once_msg);
  std::ofstream ofs;
  ofs.open("/apollo/data/log/test/intra.txt",std::ios::trunc);
  ofs.close();
  c2_writer_ = node_->CreateWriter<Bytes>("/c2");
  nanoseconds = 0;
  ifstart = false;
  to_send = std::string(262144,'b');
  return true;
}

bool IntraA::Proc(const std::shared_ptr<Bytes>& msg0) {
  uint64_t received_time = Time::Now().ToNanosecond();
if(msg0->content() == "a"){
	if(ifstart)return true;
       ifstart = true;	
}	
//AINFO<<"A received a msg:"<<msg0->content();
  
if(msg0->content()[0] == 'b'){	
	std::ofstream ofs;
  ofs.open("/apollo/data/log/test/intra.txt",std::ios::app);
  ofs<<received_time - nanoseconds<<std::endl;
  ofs.close();
	//AINFO << "latency: [" << received_time - nanoseconds<<"] nanoseconds";

}
auto c2_msg = std::make_shared<Bytes>();
c2_msg->set_content(to_send);
sleep(1);
  nanoseconds = Time::Now().ToNanosecond();
  c2_writer_->Write(c2_msg);
  return true;
}
