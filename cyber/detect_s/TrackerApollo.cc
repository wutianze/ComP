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
using apollo::cyber::AD_Middle_Test::cyber::detect_s::YoloResult;
using apollo::cyber::AD_Middle_Test::cyber::detect_s::TrackResult;
using apollo::cyber::AD_Middle_Test::cyber::detect_s::Bbox;
using apollo::cyber::AD_Middle_Test::cyber::detect_s::Rect2dBase;
using apollo::cyber::Time;
class TrackerApollo:public Component<Frame,YoloResult>{
	private:
		bool t_i = true;
		Rect2d resultbox;
		std::ofstream ofs;
		std::string fn;
		vector<vector<uint64_t>>tra_latency;
		vector<vector<uint64_t>>cal_latency;

		std::shared_ptr<Writer<TrackResult>> writer1 = nullptr;
		~TrackerApollo(){
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
			AINFO<<"T release";
		}

	public:
		bool Init() {
			AINFO << "Tracker init";
			fn = node_->Name();
			for(int i=0;i<2;i++){
				vector<uint64_t>tmp;
				tra_latency.push_back(tmp);
			}
			for(int i=0;i<1;i++){
				vector<uint64_t>tmp;
				cal_latency.push_back(tmp);
			}
			writer1 = node_->CreateWriter<TrackResult>("/"+fn);
			tracker_create("KCF");
			return true;
		}
		bool Proc(const std::shared_ptr<Frame>& msg0,const std::shared_ptr<YoloResult>& msg1) {
			uint64_t receive_time = Time::Now().ToNanosecond();
			AINFO<<"tracker transfer time:"<<receive_time - msg0->timestamp();
			tra_latency[0].push_back(receive_time - msg0->timestamp());
			tra_latency[1].push_back(receive_time - msg1->timestamp());
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

			if(t_i){
				t_i = false;
				auto bboxSize = msg1->bboxresult_size();
				if(bboxSize<=0){
					//random place
					AINFO<<"random place";
					resultbox = Rect2d(287, 23, 86, 320);
				}else{
					Bbox tmpBox = msg1->bboxresult(0);
					resultbox = Rect2d(double(tmpBox.x()),double(tmpBox.y()),double(tmpBox.w()),double(tmpBox.h()));
				}
				tracker_init(m,resultbox);
			}else{
				uint64_t alog_start_time = Time::Now().ToNanosecond();
				if(!track_test(m,resultbox)){
					t_i = true;
					AINFO<<"lose one";
					return true;
				}
				AINFO<<"tracker cost time"<<Time::Now().ToNanosecond() - alog_start_time;
				uint64_t cal_finish = Time::Now().ToNanosecond();
				cal_latency[0].push_back(cal_finish - alog_start_time);
			}



			auto to_send = std::make_shared<TrackResult>();
			auto trackbox = to_send->mutable_trackresult();
			trackbox->set_x(resultbox.x);
			trackbox->set_y(resultbox.y);
			trackbox->set_width(resultbox.width);
			trackbox->set_height(resultbox.height);
			to_send->set_timestamp(Time::Now().ToNanosecond());
			writer1->Write(to_send);
			//AINFO<<"resultbox x"<<resultbox.x;
			return true;
		}
};
CYBER_REGISTER_COMPONENT(TrackerApollo);
