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
#include <memory>
#include "cyber/component/component.h"
#include "cyber/AD_Middle_Test/cyber/test.pb.h"
#include "cyber/time/time.h"
#include <fstream>

using apollo::cyber::Component;
using apollo::cyber::ComponentBase;
using apollo::cyber::AD_Middle_Test::cyber::Bytes;
using apollo::cyber::Time;
class D:public Component<Bytes>{
	private:
		uint64_t count;
  std::ofstream ofs;
  std::string fn;
  double last_loss;
	~D(){
	ofs.open("/apollo/data/log/test/multi/"+fn+"lanloss",std::ios::trunc);
	ofs<<last_loss;
	ofs.close();
	AINFO<<"C release";
	}
	public:
	bool Init() {
  AINFO << "D init";
  count = 0;
  //AINFO<<readers_.size();
  fn = node_->Name();
  //fn = Time::Now().ToString();
  //ofs.open("/apollo/data/log/test/multi/"+fn,std::ios::trunc);
  //ofs.close();
  return true;
}
bool Proc(const std::shared_ptr<Bytes>& msg0,const std::shared_ptr<Bytes>& msg0,const std::shared_ptr<Bytes>& msg2,const std::shared_ptr<Bytes>& msg3) {
	uint64_t lan = Time::Now().ToNanosecond()-msg0->timestamp();
 	/*static bool once true;
	if(once){
       	fn = readers_[0]->GetChannelName();
	AINFO<<"fn:"<<fn;
	once = false;
	}*/
       	//fn = readers_[0]->GetChannelName();
	ofs.open("/apollo/data/log/test/multi/"+fn+"lan",std::ios::app);
  ofs<<lan<<std::endl;
  ofs.close();
	count++;
	//AINFO<<"count now:"<<count;
	//AINFO<<"id:"<<msg0->id();
	last_loss=double(msg0->id()-count)/double(msg0->id());
	AINFO<<fn<<" loss rate:"<<last_loss;
	return true;
}
};
CYBER_REGISTER_COMPONENT(C)


