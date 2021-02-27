// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_interfaces:msg/PointDetect.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__POINT_DETECT__STRUCT_H_
#define TEST_INTERFACES__MSG__DETAIL__POINT_DETECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/PointDetect in the package test_interfaces.
typedef struct test_interfaces__msg__PointDetect
{
  int32_t x;
  int32_t y;
} test_interfaces__msg__PointDetect;

// Struct for a sequence of test_interfaces__msg__PointDetect.
typedef struct test_interfaces__msg__PointDetect__Sequence
{
  test_interfaces__msg__PointDetect * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_interfaces__msg__PointDetect__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_INTERFACES__MSG__DETAIL__POINT_DETECT__STRUCT_H_
