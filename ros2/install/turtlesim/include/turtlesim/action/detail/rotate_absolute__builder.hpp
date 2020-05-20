// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim:action/RotateAbsolute.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__ACTION__DETAIL__ROTATE_ABSOLUTE__BUILDER_HPP_
#define TURTLESIM__ACTION__DETAIL__ROTATE_ABSOLUTE__BUILDER_HPP_

#include "turtlesim/action/detail/rotate_absolute__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtlesim
{

namespace action
{

namespace builder
{

class Init_RotateAbsolute_Goal_theta
{
public:
  Init_RotateAbsolute_Goal_theta()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim::action::RotateAbsolute_Goal theta(::turtlesim::action::RotateAbsolute_Goal::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim::action::RotateAbsolute_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim::action::RotateAbsolute_Goal>()
{
  return turtlesim::action::builder::Init_RotateAbsolute_Goal_theta();
}

}  // namespace turtlesim


namespace turtlesim
{

namespace action
{

namespace builder
{

class Init_RotateAbsolute_Result_delta
{
public:
  Init_RotateAbsolute_Result_delta()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim::action::RotateAbsolute_Result delta(::turtlesim::action::RotateAbsolute_Result::_delta_type arg)
  {
    msg_.delta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim::action::RotateAbsolute_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim::action::RotateAbsolute_Result>()
{
  return turtlesim::action::builder::Init_RotateAbsolute_Result_delta();
}

}  // namespace turtlesim


namespace turtlesim
{

namespace action
{

namespace builder
{

class Init_RotateAbsolute_Feedback_remaining
{
public:
  Init_RotateAbsolute_Feedback_remaining()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim::action::RotateAbsolute_Feedback remaining(::turtlesim::action::RotateAbsolute_Feedback::_remaining_type arg)
  {
    msg_.remaining = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim::action::RotateAbsolute_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim::action::RotateAbsolute_Feedback>()
{
  return turtlesim::action::builder::Init_RotateAbsolute_Feedback_remaining();
}

}  // namespace turtlesim


namespace turtlesim
{

namespace action
{

namespace builder
{

class Init_RotateAbsolute_SendGoal_Request_goal
{
public:
  explicit Init_RotateAbsolute_SendGoal_Request_goal(::turtlesim::action::RotateAbsolute_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::turtlesim::action::RotateAbsolute_SendGoal_Request goal(::turtlesim::action::RotateAbsolute_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim::action::RotateAbsolute_SendGoal_Request msg_;
};

class Init_RotateAbsolute_SendGoal_Request_goal_id
{
public:
  Init_RotateAbsolute_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RotateAbsolute_SendGoal_Request_goal goal_id(::turtlesim::action::RotateAbsolute_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RotateAbsolute_SendGoal_Request_goal(msg_);
  }

private:
  ::turtlesim::action::RotateAbsolute_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim::action::RotateAbsolute_SendGoal_Request>()
{
  return turtlesim::action::builder::Init_RotateAbsolute_SendGoal_Request_goal_id();
}

}  // namespace turtlesim


namespace turtlesim
{

namespace action
{

namespace builder
{

class Init_RotateAbsolute_SendGoal_Response_stamp
{
public:
  explicit Init_RotateAbsolute_SendGoal_Response_stamp(::turtlesim::action::RotateAbsolute_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::turtlesim::action::RotateAbsolute_SendGoal_Response stamp(::turtlesim::action::RotateAbsolute_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim::action::RotateAbsolute_SendGoal_Response msg_;
};

class Init_RotateAbsolute_SendGoal_Response_accepted
{
public:
  Init_RotateAbsolute_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RotateAbsolute_SendGoal_Response_stamp accepted(::turtlesim::action::RotateAbsolute_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_RotateAbsolute_SendGoal_Response_stamp(msg_);
  }

private:
  ::turtlesim::action::RotateAbsolute_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim::action::RotateAbsolute_SendGoal_Response>()
{
  return turtlesim::action::builder::Init_RotateAbsolute_SendGoal_Response_accepted();
}

}  // namespace turtlesim


namespace turtlesim
{

namespace action
{

namespace builder
{

class Init_RotateAbsolute_GetResult_Request_goal_id
{
public:
  Init_RotateAbsolute_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim::action::RotateAbsolute_GetResult_Request goal_id(::turtlesim::action::RotateAbsolute_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim::action::RotateAbsolute_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim::action::RotateAbsolute_GetResult_Request>()
{
  return turtlesim::action::builder::Init_RotateAbsolute_GetResult_Request_goal_id();
}

}  // namespace turtlesim


namespace turtlesim
{

namespace action
{

namespace builder
{

class Init_RotateAbsolute_GetResult_Response_result
{
public:
  explicit Init_RotateAbsolute_GetResult_Response_result(::turtlesim::action::RotateAbsolute_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::turtlesim::action::RotateAbsolute_GetResult_Response result(::turtlesim::action::RotateAbsolute_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim::action::RotateAbsolute_GetResult_Response msg_;
};

class Init_RotateAbsolute_GetResult_Response_status
{
public:
  Init_RotateAbsolute_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RotateAbsolute_GetResult_Response_result status(::turtlesim::action::RotateAbsolute_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RotateAbsolute_GetResult_Response_result(msg_);
  }

private:
  ::turtlesim::action::RotateAbsolute_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim::action::RotateAbsolute_GetResult_Response>()
{
  return turtlesim::action::builder::Init_RotateAbsolute_GetResult_Response_status();
}

}  // namespace turtlesim


namespace turtlesim
{

namespace action
{

namespace builder
{

class Init_RotateAbsolute_FeedbackMessage_feedback
{
public:
  explicit Init_RotateAbsolute_FeedbackMessage_feedback(::turtlesim::action::RotateAbsolute_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::turtlesim::action::RotateAbsolute_FeedbackMessage feedback(::turtlesim::action::RotateAbsolute_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim::action::RotateAbsolute_FeedbackMessage msg_;
};

class Init_RotateAbsolute_FeedbackMessage_goal_id
{
public:
  Init_RotateAbsolute_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RotateAbsolute_FeedbackMessage_feedback goal_id(::turtlesim::action::RotateAbsolute_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RotateAbsolute_FeedbackMessage_feedback(msg_);
  }

private:
  ::turtlesim::action::RotateAbsolute_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim::action::RotateAbsolute_FeedbackMessage>()
{
  return turtlesim::action::builder::Init_RotateAbsolute_FeedbackMessage_goal_id();
}

}  // namespace turtlesim

#endif  // TURTLESIM__ACTION__DETAIL__ROTATE_ABSOLUTE__BUILDER_HPP_
