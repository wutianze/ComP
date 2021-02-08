// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_interfaces:msg/FusionResult.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__FUSION_RESULT__STRUCT_H_
#define TEST_INTERFACES__MSG__DETAIL__FUSION_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'fusion_result'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/FusionResult in the package test_interfaces.
typedef struct test_interfaces__msg__FusionResult
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String fusion_result;
} test_interfaces__msg__FusionResult;

// Struct for a sequence of test_interfaces__msg__FusionResult.
typedef struct test_interfaces__msg__FusionResult__Sequence
{
  test_interfaces__msg__FusionResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_interfaces__msg__FusionResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_INTERFACES__MSG__DETAIL__FUSION_RESULT__STRUCT_H_
