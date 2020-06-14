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
#include<vector>
#include<iostream>
using apollo::cyber::Component;
using apollo::cyber::ComponentBase;
using apollo::cyber::AD_Middle_Test::cyber::Bytes;
using apollo::cyber::Time;
using namespace std;
class C:public Component<Bytes,Bytes,Bytes,Bytes>{// more channel example: Component<Bytes,Bytes,Bytes> means receive three channels, and you need to change Proc() too
	private:
  	std::ofstream ofs;
  	std::string fn;
	uint64_t rec_count;
	uint64_t rec_max;
	vector<vector<uint64_t>>latency;
	~C(){
		//string loss_rate = to_string(double(rec_count-1)/double(rec_max));
		for(unsigned int i =0;i<latency.size();i++){
		ofs.open("/apollo/data/log/test/tmp/"+fn+'_'+to_string(i)+'_'+loss_rate+"loss",std::ios::trunc);//fn= c_0,c_1...
		for(unsigned int j=0;j<latency[i].size();j++){
		ofs<<latency[i][j]<<endl;
		}
		ofs.close();
		//vector<double> res = analyze_latency(lantency[i]);
		//cout<<"result:"<<i<<endl;
		//for(unsigned int j=0;j<res.size();j++){
		//	ofs<<res[j]<<endl;
			//cout<<res[j]<<endl;
		//}
		//ofs<<endl;
		}
		//ofs.close();
		AINFO<<"C release";
	}
	public:
	bool Init() {
  	AINFO << "C init";
  	fn = node_->Name();
	rec_count = 0;
	rec_max = 0;
	// how many channels C listens
	for(int i=0;i<1;i++){
		vector<uint64_t>tmp;
		latency.push_back(tmp);
	}
  	return true;
}
bool Proc(const std::shared_ptr<Bytes>& msg0) {
	uint64_t receive_time = Time::Now().ToNanosecond();
	uint64_t lan0 = receive_time-msg0->timestamp();
	if(msg0->id() > rec_max){
	rec_max = msg0->id();
	}
	rec_count++;
	latency[0].push_back(lan0);
	return true;
}
bool Proc(const std::shared_ptr<Bytes>& msg0,const std::shared_ptr<Bytes>& msg1,const std::shared_ptr<Bytes>& msg2,const std::shared_ptr<Bytes>& msg3) {// more channel example
	uint64_t receive_time = Time::Now().ToNanosecond();
	uint64_t lans[4];
	lans[0] = receive_time-msg0->timestamp();
	lans[1] = receive_time-msg1->timestamp();
	lans[2] = receive_time-msg2->timestamp();
	lans[3] = receive_time-msg3->timestamp();
	for(int i=0;i<4;i++){
		latency[i].push_back(lans[i]);
	}
	return true;
}

};
CYBER_REGISTER_COMPONENT(C)


