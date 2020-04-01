#include <memory>

#include "cyber/class_loader/class_loader.h"
#include "cyber/component/component.h"
#include "cyber/component/timer_component.h"
#include "cyber/AD_Middle_Test/cyber/test.pb.h"
#include "cyber/time/time.h"

using apollo::cyber::Component;
using apollo::cyber::ComponentBase;
using apollo::cyber::TimerComponent;
using apollo::cyber::Time;
using apollo::cyber::Writer;
using apollo::cyber::AD_Middle_Test::cyber::Bytes;

class TestTimer : public TimerComponent {
	 public:
		   bool Init() override;
		     bool Proc() override;

		      private:
		     uint64_t i =0;
		     std::string to_send;
		       std::shared_ptr<Writer<Bytes>> writer1 = nullptr;
		       std::shared_ptr<Writer<Bytes>> writer2 = nullptr;
		       std::shared_ptr<Writer<Bytes>> writer3 = nullptr;
		       std::shared_ptr<Writer<Bytes>> writer4 = nullptr;
		       std::shared_ptr<Writer<Bytes>> writer5 = nullptr;
		       std::shared_ptr<Writer<Bytes>> writer6 = nullptr;
		       std::shared_ptr<Writer<Bytes>> writer7 = nullptr;
		       std::shared_ptr<Writer<Bytes>> writer8 = nullptr;

};
CYBER_REGISTER_COMPONENT(TestTimer)
