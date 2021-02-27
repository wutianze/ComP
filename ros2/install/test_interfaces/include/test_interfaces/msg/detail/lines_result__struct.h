// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_interfaces:msg/LinesResult.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__LINES_RESULT__STRUCT_H_
#define TEST_INTERFACES__MSG__DETAIL__LINES_RESULT__STRUCT_H_

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
// Member 'left1'
// Member 'right1'
// Member 'left2'
// Member 'right2'
#include "test_interfaces/msg/detail/point_detect__struct.h"

// Struct defined in msg/LinesResult in the package test_interfaces.
typedef struct test_interfaces__msg__LinesResult
{
  std_msgs__msg__Header header;
  test_interfaces__msg__PointDetect left1;
  test_interfaces__msg__PointDetect right1;
  test_interfaces__msg__PointDetect left2;
  test_interfaces__msg__PointDetect right2;
} test_interfaces__msg__LinesResult;

// Struct for a sequence of test_interfaces__msg__LinesResult.
typedef struct test_interfaces__msg__LinesResult__Sequence
{
  test_interfaces__msg__LinesResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_interfaces__msg__LinesResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_INTERFACES__MSG__DETAIL__LINES_RESULT__STRUCT_H_
