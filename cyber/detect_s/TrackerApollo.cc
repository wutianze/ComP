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
#include "tracker_opencv.h"
#include "opencv_util.h"
#include <fstream>

using apollo::cyber::Component;
using apollo::cyber::ComponentBase;
using apollo::cyber::Writer;
using apollo::cyber::AD_Middle_Test::cyber::detect_s::Frame;
using apollo::cyber::AD_Middle_Test::cyber::detect_s::OcvMat;
using apollo::cyber::AD_Middle_Test::cyber::detect_s::TrackResult;
using apollo::cyber::AD_Middle_Test::cyber::detect_s::Rect2dBase;
using apollo::cyber::Time;
class TrackerApollo:public Component<Frame>{
	private:
		bool t_i = true;
		Rect2d resultbox;
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
	std::shared_ptr<Writer<TrackResult>> writer1 = nullptr;
	public:
	bool Init() {
  AINFO << "Tracker init";
	writer1 = node_->CreateWriter<TrackResult>("/t0");
  //count = 0;
  //AINFO<<readers_.size();
  //fn = node_->Name();
  //fn = Time::Now().ToString();
  //ofs.open("/apollo/data/log/test/multi/"+fn,std::ios::trunc);
  //ofs.close();
  tracker_create("KCF");
  return true;
}
bool Proc(const std::shared_ptr<Frame>& msg0) {
uint64_t receive_time = Time::Now().ToNanosecond();
	AINFO<<"tracker transfer time:"<<receive_time - msg0->timestamp();

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
	
	uint64_t alog_start_time = Time::Now().ToNanosecond();
	if(t_i){
t_i = false;
resultbox = Rect2d(287, 23, 86, 320);
tracker_init(m,resultbox);
return true;
}

	if(!track_test(m,resultbox)){
	t_i = true;
	AINFO<<"lose one";
	}
	AINFO<<"tracker cost time"<<Time::Now().ToNanosecond() - alog_start_time;
	auto to_send = std::make_shared<TrackResult>();
	auto trackbox = to_send->mutable_trackresult();
	trackbox->set_x(resultbox.x);
	trackbox->set_y(resultbox.y);
	trackbox->set_width(resultbox.width);
	trackbox->set_height(resultbox.height);
	writer1->Write(to_send);
	AINFO<<"resultbox x"<<resultbox.x;
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
CYBER_REGISTER_COMPONENT(TrackerApollo);
