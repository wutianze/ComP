// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from test_interfaces:msg/PointDetect.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "test_interfaces/msg/detail/point_detect__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace test_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PointDetect_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) test_interfaces::msg::PointDetect(_init);
}

void PointDetect_fini_function(void * message_memory)
{
  auto typed_message = static_cast<test_interfaces::msg::PointDetect *>(message_memory);
  typed_message->~PointDetect();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PointDetect_message_member_array[2] = {
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_interfaces::msg::PointDetect, x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_interfaces::msg::PointDetect, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PointDetect_message_members = {
  "test_interfaces::msg",  // message namespace
  "PointDetect",  // message name
  2,  // number of fields
  sizeof(test_interfaces::msg::PointDetect),
  PointDetect_message_member_array,  // message members
  PointDetect_init_function,  // function to initialize message memory (memory has to be allocated)
  PointDetect_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PointDetect_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PointDetect_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace test_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<test_interfaces::msg::PointDetect>()
{
  return &::test_interfaces::msg::rosidl_typesupport_introspection_cpp::PointDetect_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, test_interfaces, msg, PointDetect)() {
  return &::test_interfaces::msg::rosidl_typesupport_introspection_cpp::PointDetect_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
