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
class C:public Component<Bytes>{
	private:
  	std::ofstream ofs;
  	std::string fn;
	vector<vector<uint64_t>>lantency;
	vector<double>analyze_lantency(vector<uint64_t>&p){
		vector<double>res;
		sort(p.begin(),p.end());
		int size = p.size();
		res.push_back(p[static_cast<int>((size-1)*0.95)]);// 95th
		res.push_back(p[static_cast<int>((size-1)*0.99)]);// 99th
		
		// for box-plot
		res.push_back(p[0]);// smallest lantency
		res.push_back(p[static_cast<int>((size-1)*0.25)]);// 25th
		res.push_back(p[static_cast<int>((size-1)*0.5)]);// 50th
		res.push_back(p[static_cast<int>((size-1)*0.75)]);// 75th
		res.push_back(p[size-1]);// biggest lantency

		double sum = std::accumulate(std::begin(p), std::end(p), 0.0);
		double mean =  sum / size;

		double accum  = 0.0;
		std::for_each (std::begin(p), std::end(p), [&](const double d) {
			accum  += (d-mean)*(d-mean);
			});
		double stdev = sqrt(accum/(size-1));
		res.push_back(mean);
		res.push_back(stdev);
		return res;
		}
	~C(){
		ofs.open("/apollo/data/log/test/multi/"+fn,std::ios::trunc);
		for(unsigned int i =0;i<lantency.size();i++){
		vector<double> res = analyze_lantency(lantency[i]);
		//cout<<"result:"<<i<<endl;
		for(unsigned int j=0;j<res.size();j++){
			ofs<<res[j]<<endl;
			//cout<<res[j]<<endl;
		}
		ofs<<endl;
		}
		ofs.close();
		AINFO<<"C release";
	}
	public:
	bool Init() {
  	AINFO << "C init";
  	fn = node_->Name();
	// how many channels C listens
	for(int i=0;i<1;i++){
		vector<uint64_t>tmp;
		lantency.push_back(tmp);
	}
  	return true;
}
bool Proc(const std::shared_ptr<Bytes>& msg0) {
	uint64_t receive_time = Time::Now().ToNanosecond();
	uint64_t lan0 = receive_time-msg0->timestamp();
	lantency[0].push_back(lan0);
	return true;
}
bool Proc(const std::shared_ptr<Bytes>& msg0,const std::shared_ptr<Bytes>& msg1,const std::shared_ptr<Bytes>& msg2,const std::shared_ptr<Bytes>& msg3) {
	uint64_t receive_time = Time::Now().ToNanosecond();
	uint64_t lans[4];
	lans[0] = receive_time-msg0->timestamp();
	lans[1] = receive_time-msg1->timestamp();
	lans[2] = receive_time-msg2->timestamp();
	lans[3] = receive_time-msg3->timestamp();
	for(int i=0;i<4;i++){
		lantency[i].push_back(lans[i]);
	}
	return true;
}

};
CYBER_REGISTER_COMPONENT(C)


