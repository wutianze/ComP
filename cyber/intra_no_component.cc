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


#include "cyber/cyber.h"
#include "cyber/AD_Middle_Test/cyber/test.pb.h"
#include "cyber/time/rate.h"
#include "cyber/time/time.h"

using apollo::cyber::Rate;
using apollo::cyber::Time;
//using apollo::cyber::examples::proto::Chatter;
using apollo::cyber::AD_Middle_Test::cyber::Bytes;
bool flag = false;
void MessageCallback(
		    const std::shared_ptr<Bytes>& msg) {
	    AINFO << "msgcontent size" << std::string(msg->content()).size();
	    flag = true;
}
int main(int argc, char *argv[]) {
  // init cyber framework
  apollo::cyber::Init(argv[0]);
  // create talker node
  auto talker_node = apollo::cyber::CreateNode("starter");
  // create talker
  auto talker = talker_node->CreateWriter<Bytes>("/c1");
  auto listener = talker_node->CreateReader<Bytes>("/c2",MessageCallback);
  Rate rate(1.0);
  //while (apollo::cyber::OK()) {
  while(!flag){
    //static uint64_t seq = 0;
    auto msg = std::make_shared<Bytes>();
    //msg->set_lidar_timestamp(Time::Now().ToNanosecond());
    msg->set_content("a");
    talker->Write(msg);
    AINFO << "talker sent a message!";
    rate.Sleep();
  }
  return 0;
}
