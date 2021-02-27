// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from test_interfaces:msg/YoloResult.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "test_interfaces/msg/detail/yolo_result__struct.hpp"
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

void YoloResult_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) test_interfaces::msg::YoloResult(_init);
}

void YoloResult_fini_function(void * message_memory)
{
  auto typed_message = static_cast<test_interfaces::msg::YoloResult *>(message_memory);
  typed_message->~YoloResult();
}

size_t size_function__YoloResult__result_array(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<test_interfaces::msg::YoloPiece> *>(untyped_member);
  return member->size();
}

const void * get_const_function__YoloResult__result_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<test_interfaces::msg::YoloPiece> *>(untyped_member);
  return &member[index];
}

void * get_function__YoloResult__result_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<test_interfaces::msg::YoloPiece> *>(untyped_member);
  return &member[index];
}

void resize_function__YoloResult__result_array(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<test_interfaces::msg::YoloPiece> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember YoloResult_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_interfaces::msg::YoloResult, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result_num",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_interfaces::msg::YoloResult, result_num),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_interfaces::msg::YoloPiece>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_interfaces::msg::YoloResult, result_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__YoloResult__result_array,  // size() function pointer
    get_const_function__YoloResult__result_array,  // get_const(index) function pointer
    get_function__YoloResult__result_array,  // get(index) function pointer
    resize_function__YoloResult__result_array  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers YoloResult_message_members = {
  "test_interfaces::msg",  // message namespace
  "YoloResult",  // message name
  3,  // number of fields
  sizeof(test_interfaces::msg::YoloResult),
  YoloResult_message_member_array,  // message members
  YoloResult_init_function,  // function to initialize message memory (memory has to be allocated)
  YoloResult_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t YoloResult_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &YoloResult_message_members,
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
get_message_type_support_handle<test_interfaces::msg::YoloResult>()
{
  return &::test_interfaces::msg::rosidl_typesupport_introspection_cpp::YoloResult_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, test_interfaces, msg, YoloResult)() {
  return &::test_interfaces::msg::rosidl_typesupport_introspection_cpp::YoloResult_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
