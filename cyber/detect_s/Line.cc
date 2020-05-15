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
#include "opencv_util.h"
#include <fstream>

using apollo::cyber::Component;
using apollo::cyber::ComponentBase;
using apollo::cyber::Writer;
using apollo::cyber::AD_Middle_Test::cyber::detect_s::Frame;
using apollo::cyber::AD_Middle_Test::cyber::detect_s::OcvMat;
using apollo::cyber::AD_Middle_Test::cyber::detect_s::LineResult;
using apollo::cyber::AD_Middle_Test::cyber::detect_s::PointBase;
using apollo::cyber::Time;
class Line:public Component<Frame>{
	private:
/*		uint64_t count;
  std::ofstream ofs;
  std::string fn;
  double last_loss;
  double init_time;
  bool flag=true;
	~C(){
	ofs.open("/apollo/data/log/test/multi/"+fn+"lanloss",std::ios::trunc);
	ofs<<last_loss;
	ofs.close();
	AINFO<<"C release";
	}*/

	std::shared_ptr<Writer<LineResult>> writer1 = nullptr;
	public:
	bool Init() {
  AINFO << "Line init";
	writer1 = node_->CreateWriter<LineResult>("/l0");
  //count = 0;
  //AINFO<<readers_.size();
  //fn = node_->Name();
  //fn = Time::Now().ToString();
  //ofs.open("/apollo/data/log/test/multi/"+fn,std::ios::trunc);
  //ofs.close();
  return true;
}
bool Proc(const std::shared_ptr<Frame>& msg0) {
	uint64_t receive_time = Time::Now().ToNanosecond();
	AINFO<<"line transfer time:"<<receive_time - msg0->timestamp();
	Mat m;
	OcvMat content = msg0->mat();
	m.create(content.rows(),
		content.cols(),
		content.elt_type());
	size_t dataSize = content.rows() *  content.cols() * content.elt_size();
	std::copy(reinterpret_cast<unsigned char *>(
				            const_cast<char *>(content.mat_data().data())),
			        reinterpret_cast<unsigned char *>(
					            const_cast<char *>(content.mat_data().data()) + dataSize),
				        m.data);
	Point*result = new Point[4];
	uint64_t alog_start_time = Time::Now().ToNanosecond();
	try{
	lines_process(m,result);
	}
	catch(exception e){
	AINFO<<"sth wrong in line";
	AINFO<<e.what();
	}
	//AINFO<<"Point 0.x"<<result[0].x;
	AINFO<<"line detect cost time"<<Time::Now().ToNanosecond() - alog_start_time;
	auto to_send = std::make_shared<LineResult>();
	auto left1 = to_send->mutable_left1();
	left1->set_x(result[0].x);
	left1->set_y(result[0].y);
	auto left2 = to_send->mutable_left2();
	left2->set_x(result[1].x);
	left2->set_y(result[1].y);
	auto right1 = to_send->mutable_right1();
	right1->set_x(result[2].x);
	right1->set_y(result[2].y);
	auto right2 = to_send->mutable_right2();
	right2->set_x(result[3].x);
	right2->set_y(result[3].y);
	writer1->Write(to_send);
	//imwrite_cv("/apollo/data/log/a.jpg",m);
	//uint64_t lan = Time::Now().ToNanosecond()-msg0->timestamp();
 	/*static bool once true;
	if(once){
       	fn = readers_[0]->GetChannelName();
	AINFO<<"fn:"<<fn;
	once = false;
	}*/
       	//fn = readers_[0]->GetChannelName();
	/*ofs.open("/apollo/data/log/test/multi/"+fn+"lan",std::ios::app);
  ofs<<lan<<std::endl;
  ofs.close();
	count++;
	last_loss=double(msg0->id()-count)/double(msg0->id());
if(flag){
init_time = Time::Now().ToSecond();
flag = false;
}
	count++;
	AINFO<<double(count)/(Time::Now().ToSecond()-init_time);
	//AINFO<<fn<<" loss rate:"<<last_loss;*/
	return true;
}
};
CYBER_REGISTER_COMPONENT(Line);


