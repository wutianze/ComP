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
#include "cyber/AD_Middle_Test/cyber/detect_s/detect_msg.pb.h"
#include "cyber/time/time.h"
#include "line_detect.h"
#include "tracker_opencv.h"
#include "opencv_util.h"
#include <fstream>

using apollo::cyber::Component;
using apollo::cyber::ComponentBase;
using apollo::cyber::Writer;
using apollo::cyber::AD_Middle_Test::cyber::detect_s::Frame;
using apollo::cyber::AD_Middle_Test::cyber::detect_s::OcvMat;
using apollo::cyber::AD_Middle_Test::cyber::detect_s::LineResult;
using apollo::cyber::AD_Middle_Test::cyber::detect_s::PointBase;
using apollo::cyber::AD_Middle_Test::cyber::detect_s::TrackResult;
using apollo::cyber::AD_Middle_Test::cyber::detect_s::Rect2dBase;
using apollo::cyber::AD_Middle_Test::cyber::detect_s::YoloResult;
using apollo::cyber::AD_Middle_Test::cyber::detect_s::FusionResult;

using apollo::cyber::Time;
class FusionFinal:public Component<LineResult,YoloResult,TrackResult>{
	private:
	std::ofstream ofs;
	std::string fn;
	vector<vector<uint64_t>>tra_latency;
	vector<vector<uint64_t>>cal_latency;
	std::shared_ptr<Writer<FusionResult>> writer1 = nullptr;
~FusionFinal(){
	for(unsigned int i = 0;i<tra_latency.size();i++){
	ofs.open("/apollo/data/log/test/tmp/tra_"+fn+'_'+to_string(i),std::ios::trunc);
	for(unsigned int j=0;j<tra_latency[i].size();j++){
	ofs<<tra_latency[i][j]<<endl;
	}
	ofs.close();
	}
	for(unsigned int i = 0;i<cal_latency.size();i++){
	ofs.open("/apollo/data/log/test/tmp/cal_"+fn+'_'+to_string(i),std::ios::trunc);
	for(unsigned int j=0;j<cal_latency[i].size();j++){
	ofs<<cal_latency[i][j]<<endl;
	}
	ofs.close();
	}
	AINFO<<"F release";
	}
	public:
	bool Init() {
  AINFO << "Fusion init";
 	fn = node_->Name();
	for(int i=0;i<3;i++){
		vector<uint64_t>tmp;
		tra_latency.push_back(tmp);
	}
	for(int i=0;i<1;i++){
		vector<uint64_t>tmp;
		cal_latency.push_back(tmp);
	} 
	writer1 = node_->CreateWriter<FusionResult>("/"+fn);
       	return true;
}
bool Proc(const std::shared_ptr<LineResult>& msg0,const std::shared_ptr<YoloResult>& msg1,const std::shared_ptr<TrackResult>& msg2) {
	uint64_t receive_time = Time::Now().ToNanosecond();
	//AINFO<<"line transfer time:"<<receive_time - msg0->timestamp();
	tra_latency[0].push_back(receive_time - msg0->timestamp());
	tra_latency[1].push_back(receive_time - msg1->timestamp());
	tra_latency[2].push_back(receive_time - msg2->timestamp());
	auto to_send = std::make_shared<FusionResult>();
	to_send->set_fusionresult("aa");
	to_send->set_timestamp(Time::Now().ToNanosecond());
	writer1->Write(to_send);
	return true;
}
};
CYBER_REGISTER_COMPONENT(FusionFinal);


