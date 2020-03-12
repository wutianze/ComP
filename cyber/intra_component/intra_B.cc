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
#include "cyber/AD_Middle_Test/cyber/intra_component/intra_B.h"

bool IntraB::Init() {
  AINFO << "B init";
  c1_writer_ = node_->CreateWriter<Bytes>("/c1");
  return true;
}

bool IntraB::Proc(const std::shared_ptr<Bytes>& msg0) {
auto c1_msg = std::make_shared<Bytes>();
c1_msg->set_content("b");
  c1_writer_->Write(c1_msg);
  return true;
}
