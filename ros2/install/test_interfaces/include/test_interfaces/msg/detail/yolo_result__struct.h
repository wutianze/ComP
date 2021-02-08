// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_interfaces:msg/YoloResult.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__YOLO_RESULT__STRUCT_H_
#define TEST_INTERFACES__MSG__DETAIL__YOLO_RESULT__STRUCT_H_

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
// Member 'result_array'
#include "test_interfaces/msg/detail/yolo_piece__struct.h"

// Struct defined in msg/YoloResult in the package test_interfaces.
typedef struct test_interfaces__msg__YoloResult
{
  std_msgs__msg__Header header;
  uint32_t result_num;
  test_interfaces__msg__YoloPiece__Sequence result_array;
} test_interfaces__msg__YoloResult;

// Struct for a sequence of test_interfaces__msg__YoloResult.
typedef struct test_interfaces__msg__YoloResult__Sequence
{
  test_interfaces__msg__YoloResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_interfaces__msg__YoloResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_INTERFACES__MSG__DETAIL__YOLO_RESULT__STRUCT_H_
