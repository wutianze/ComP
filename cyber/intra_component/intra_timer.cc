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
#include "cyber/AD_Middle_Test/cyber/test.pb.h"

bool IntraTimer::Init() {
  writer_ = node_->CreateWriter<Bytes>("/c1");
  return true;
}

bool IntraTimer::Proc() {
  static int i = 0;
  AINFO <<i;
  auto out_msg = std::make_shared<Bytes>();
  out_msg->set_content("a");
  writer_->Write(out_msg);
  return true;
}
