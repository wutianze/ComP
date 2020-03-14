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

using apollo::cyber::Component;
using apollo::cyber::ComponentBase;
using apollo::cyber::AD_Middle_Test::cyber::Bytes;
using apollo::cyber::Time;
using apollo::cyber::Writer;

class IntraA : public Component<Bytes> {
 public:
  bool Init() override;
  bool Proc(const std::shared_ptr<Bytes>& msg0) override;
 private:
//  std::shared_ptr<Writer<Bytes>> write_once_ = nullptr;
  std::shared_ptr<Writer<Bytes>> c2_writer_ = nullptr;
  uint64_t nanoseconds;
  bool ifstart;
  std::string to_send;
};
CYBER_REGISTER_COMPONENT(IntraA)
