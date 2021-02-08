// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_interfaces:msg/TrackerResult.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__TRACKER_RESULT__STRUCT_H_
#define TEST_INTERFACES__MSG__DETAIL__TRACKER_RESULT__STRUCT_H_

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

// Struct defined in msg/TrackerResult in the package test_interfaces.
typedef struct test_interfaces__msg__TrackerResult
{
  std_msgs__msg__Header header;
  double x;
  double y;
  double width;
  double height;
} test_interfaces__msg__TrackerResult;

// Struct for a sequence of test_interfaces__msg__TrackerResult.
typedef struct test_interfaces__msg__TrackerResult__Sequence
{
  test_interfaces__msg__TrackerResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_interfaces__msg__TrackerResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_INTERFACES__MSG__DETAIL__TRACKER_RESULT__STRUCT_H_
