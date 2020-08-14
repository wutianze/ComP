// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtlesim:msg/Color.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtlesim/msg/detail/color__rosidl_typesupport_introspection_c.h"
#include "turtlesim/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtlesim/msg/detail/color__functions.h"
#include "turtlesim/msg/detail/color__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Color__rosidl_typesupport_introspection_c__Color_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtlesim__msg__Color__init(message_memory);
}

void Color__rosidl_typesupport_introspection_c__Color_fini_function(void * message_memory)
{
  turtlesim__msg__Color__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Color__rosidl_typesupport_introspection_c__Color_message_member_array[3] = {
  {
    "r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim__msg__Color, r),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "g",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim__msg__Color, g),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim__msg__Color, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Color__rosidl_typesupport_introspection_c__Color_message_members = {
  "turtlesim__msg",  // message namespace
  "Color",  // message name
  3,  // number of fields
  sizeof(turtlesim__msg__Color),
  Color__rosidl_typesupport_introspection_c__Color_message_member_array,  // message members
  Color__rosidl_typesupport_introspection_c__Color_init_function,  // function to initialize message memory (memory has to be allocated)
  Color__rosidl_typesupport_introspection_c__Color_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Color__rosidl_typesupport_introspection_c__Color_message_type_support_handle = {
  0,
  &Color__rosidl_typesupport_introspection_c__Color_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlesim
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, msg, Color)() {
  if (!Color__rosidl_typesupport_introspection_c__Color_message_type_support_handle.typesupport_identifier) {
    Color__rosidl_typesupport_introspection_c__Color_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Color__rosidl_typesupport_introspection_c__Color_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
