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

#include "cyber/AD_Middle_Test/cyber/intra_component/intra_timer.h"

#include "cyber/class_loader/class_loader.h"
#include "cyber/component/component.h"
#include "cyber/examples/proto/examples.pb.h"

bool IntraTimer::Init() {
  driver_writer_ = node_->CreateWriter<Driver>("/apollo/prediction");
  driver_writer2_ = node_->CreateWriter<Driver>("/apollo/test");

  return true;
}

bool IntraTimer::Proc() {
  static int i = 0;
  AINFO <<i;
  auto out_msg = std::make_shared<Driver>();
  out_msg->set_msg_id(i++);
  out_msg->set_content("first msg");
  driver_writer_->Write(out_msg);
// if(i%3 != 0)return true; 
  auto out_msg2 = std::make_shared<Driver>();
  out_msg2->set_msg_id(i);
  out_msg2->set_content("second msg");
  driver_writer2_->Write(out_msg2);
  return true;
}
