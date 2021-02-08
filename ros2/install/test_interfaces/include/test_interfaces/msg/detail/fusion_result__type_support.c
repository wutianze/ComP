// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from test_interfaces:msg/FusionResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "test_interfaces/msg/detail/fusion_result__rosidl_typesupport_introspection_c.h"
#include "test_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "test_interfaces/msg/detail/fusion_result__functions.h"
#include "test_interfaces/msg/detail/fusion_result__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `fusion_result`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FusionResult__rosidl_typesupport_introspection_c__FusionResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  test_interfaces__msg__FusionResult__init(message_memory);
}

void FusionResult__rosidl_typesupport_introspection_c__FusionResult_fini_function(void * message_memory)
{
  test_interfaces__msg__FusionResult__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FusionResult__rosidl_typesupport_introspection_c__FusionResult_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_interfaces__msg__FusionResult, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fusion_result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_interfaces__msg__FusionResult, fusion_result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FusionResult__rosidl_typesupport_introspection_c__FusionResult_message_members = {
  "test_interfaces__msg",  // message namespace
  "FusionResult",  // message name
  2,  // number of fields
  sizeof(test_interfaces__msg__FusionResult),
  FusionResult__rosidl_typesupport_introspection_c__FusionResult_message_member_array,  // message members
  FusionResult__rosidl_typesupport_introspection_c__FusionResult_init_function,  // function to initialize message memory (memory has to be allocated)
  FusionResult__rosidl_typesupport_introspection_c__FusionResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FusionResult__rosidl_typesupport_introspection_c__FusionResult_message_type_support_handle = {
  0,
  &FusionResult__rosidl_typesupport_introspection_c__FusionResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_test_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_interfaces, msg, FusionResult)() {
  FusionResult__rosidl_typesupport_introspection_c__FusionResult_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!FusionResult__rosidl_typesupport_introspection_c__FusionResult_message_type_support_handle.typesupport_identifier) {
    FusionResult__rosidl_typesupport_introspection_c__FusionResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FusionResult__rosidl_typesupport_introspection_c__FusionResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
