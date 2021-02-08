// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test_interfaces:msg/YoloPiece.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__YOLO_PIECE__BUILDER_HPP_
#define TEST_INTERFACES__MSG__DETAIL__YOLO_PIECE__BUILDER_HPP_

#include "test_interfaces/msg/detail/yolo_piece__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace test_interfaces
{

namespace msg
{

namespace builder
{

class Init_YoloPiece_frames_counter
{
public:
  explicit Init_YoloPiece_frames_counter(::test_interfaces::msg::YoloPiece & msg)
  : msg_(msg)
  {}
  ::test_interfaces::msg::YoloPiece frames_counter(::test_interfaces::msg::YoloPiece::_frames_counter_type arg)
  {
    msg_.frames_counter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interfaces::msg::YoloPiece msg_;
};

class Init_YoloPiece_track_id
{
public:
  explicit Init_YoloPiece_track_id(::test_interfaces::msg::YoloPiece & msg)
  : msg_(msg)
  {}
  Init_YoloPiece_frames_counter track_id(::test_interfaces::msg::YoloPiece::_track_id_type arg)
  {
    msg_.track_id = std::move(arg);
    return Init_YoloPiece_frames_counter(msg_);
  }

private:
  ::test_interfaces::msg::YoloPiece msg_;
};

class Init_YoloPiece_obj_id
{
public:
  explicit Init_YoloPiece_obj_id(::test_interfaces::msg::YoloPiece & msg)
  : msg_(msg)
  {}
  Init_YoloPiece_track_id obj_id(::test_interfaces::msg::YoloPiece::_obj_id_type arg)
  {
    msg_.obj_id = std::move(arg);
    return Init_YoloPiece_track_id(msg_);
  }

private:
  ::test_interfaces::msg::YoloPiece msg_;
};

class Init_YoloPiece_prob
{
public:
  explicit Init_YoloPiece_prob(::test_interfaces::msg::YoloPiece & msg)
  : msg_(msg)
  {}
  Init_YoloPiece_obj_id prob(::test_interfaces::msg::YoloPiece::_prob_type arg)
  {
    msg_.prob = std::move(arg);
    return Init_YoloPiece_obj_id(msg_);
  }

private:
  ::test_interfaces::msg::YoloPiece msg_;
};

class Init_YoloPiece_h
{
public:
  explicit Init_YoloPiece_h(::test_interfaces::msg::YoloPiece & msg)
  : msg_(msg)
  {}
  Init_YoloPiece_prob h(::test_interfaces::msg::YoloPiece::_h_type arg)
  {
    msg_.h = std::move(arg);
    return Init_YoloPiece_prob(msg_);
  }

private:
  ::test_interfaces::msg::YoloPiece msg_;
};

class Init_YoloPiece_w
{
public:
  explicit Init_YoloPiece_w(::test_interfaces::msg::YoloPiece & msg)
  : msg_(msg)
  {}
  Init_YoloPiece_h w(::test_interfaces::msg::YoloPiece::_w_type arg)
  {
    msg_.w = std::move(arg);
    return Init_YoloPiece_h(msg_);
  }

private:
  ::test_interfaces::msg::YoloPiece msg_;
};

class Init_YoloPiece_y
{
public:
  explicit Init_YoloPiece_y(::test_interfaces::msg::YoloPiece & msg)
  : msg_(msg)
  {}
  Init_YoloPiece_w y(::test_interfaces::msg::YoloPiece::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_YoloPiece_w(msg_);
  }

private:
  ::test_interfaces::msg::YoloPiece msg_;
};

class Init_YoloPiece_x
{
public:
  Init_YoloPiece_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YoloPiece_y x(::test_interfaces::msg::YoloPiece::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_YoloPiece_y(msg_);
  }

private:
  ::test_interfaces::msg::YoloPiece msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interfaces::msg::YoloPiece>()
{
  return test_interfaces::msg::builder::Init_YoloPiece_x();
}

}  // namespace test_interfaces

#endif  // TEST_INTERFACES__MSG__DETAIL__YOLO_PIECE__BUILDER_HPP_
