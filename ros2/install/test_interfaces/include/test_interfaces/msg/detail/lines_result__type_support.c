// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from test_interfaces:msg/LinesResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "test_interfaces/msg/detail/lines_result__rosidl_typesupport_introspection_c.h"
#include "test_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "test_interfaces/msg/detail/lines_result__functions.h"
#include "test_interfaces/msg/detail/lines_result__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `left1`
// Member `right1`
// Member `left2`
// Member `right2`
#include "test_interfaces/msg/point_detect.h"
// Member `left1`
// Member `right1`
// Member `left2`
// Member `right2`
#include "test_interfaces/msg/detail/point_detect__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LinesResult__rosidl_typesupport_introspection_c__LinesResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  test_interfaces__msg__LinesResult__init(message_memory);
}

void LinesResult__rosidl_typesupport_introspection_c__LinesResult_fini_function(void * message_memory)
{
  test_interfaces__msg__LinesResult__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LinesResult__rosidl_typesupport_introspection_c__LinesResult_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_interfaces__msg__LinesResult, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_interfaces__msg__LinesResult, left1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_interfaces__msg__LinesResult, right1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_interfaces__msg__LinesResult, left2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_interfaces__msg__LinesResult, right2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LinesResult__rosidl_typesupport_introspection_c__LinesResult_message_members = {
  "test_interfaces__msg",  // message namespace
  "LinesResult",  // message name
  5,  // number of fields
  sizeof(test_interfaces__msg__LinesResult),
  LinesResult__rosidl_typesupport_introspection_c__LinesResult_message_member_array,  // message members
  LinesResult__rosidl_typesupport_introspection_c__LinesResult_init_function,  // function to initialize message memory (memory has to be allocated)
  LinesResult__rosidl_typesupport_introspection_c__LinesResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LinesResult__rosidl_typesupport_introspection_c__LinesResult_message_type_support_handle = {
  0,
  &LinesResult__rosidl_typesupport_introspection_c__LinesResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_test_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_interfaces, msg, LinesResult)() {
  LinesResult__rosidl_typesupport_introspection_c__LinesResult_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  LinesResult__rosidl_typesupport_introspection_c__LinesResult_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_interfaces, msg, PointDetect)();
  LinesResult__rosidl_typesupport_introspection_c__LinesResult_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_interfaces, msg, PointDetect)();
  LinesResult__rosidl_typesupport_introspection_c__LinesResult_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_interfaces, msg, PointDetect)();
  LinesResult__rosidl_typesupport_introspection_c__LinesResult_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_interfaces, msg, PointDetect)();
  if (!LinesResult__rosidl_typesupport_introspection_c__LinesResult_message_type_support_handle.typesupport_identifier) {
    LinesResult__rosidl_typesupport_introspection_c__LinesResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LinesResult__rosidl_typesupport_introspection_c__LinesResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
