// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from test_interfaces:msg/Test.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "test_interfaces/msg/detail/test__rosidl_typesupport_introspection_c.h"
#include "test_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "test_interfaces/msg/detail/test__functions.h"
#include "test_interfaces/msg/detail/test__struct.h"


// Include directives for member types
// Member `content`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Test__rosidl_typesupport_introspection_c__Test_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  test_interfaces__msg__Test__init(message_memory);
}

void Test__rosidl_typesupport_introspection_c__Test_fini_function(void * message_memory)
{
  test_interfaces__msg__Test__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Test__rosidl_typesupport_introspection_c__Test_message_member_array[3] = {
  {
    "content",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_interfaces__msg__Test, content),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_interfaces__msg__Test, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_interfaces__msg__Test, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Test__rosidl_typesupport_introspection_c__Test_message_members = {
  "test_interfaces__msg",  // message namespace
  "Test",  // message name
  3,  // number of fields
  sizeof(test_interfaces__msg__Test),
  Test__rosidl_typesupport_introspection_c__Test_message_member_array,  // message members
  Test__rosidl_typesupport_introspection_c__Test_init_function,  // function to initialize message memory (memory has to be allocated)
  Test__rosidl_typesupport_introspection_c__Test_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Test__rosidl_typesupport_introspection_c__Test_message_type_support_handle = {
  0,
  &Test__rosidl_typesupport_introspection_c__Test_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_test_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_interfaces, msg, Test)() {
  if (!Test__rosidl_typesupport_introspection_c__Test_message_type_support_handle.typesupport_identifier) {
    Test__rosidl_typesupport_introspection_c__Test_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Test__rosidl_typesupport_introspection_c__Test_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
