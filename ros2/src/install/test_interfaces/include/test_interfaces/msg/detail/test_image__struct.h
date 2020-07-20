// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_interfaces:msg/TestImage.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__TEST_IMAGE__STRUCT_H_
#define TEST_INTERFACES__MSG__DETAIL__TEST_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'test_a'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'mat_data'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/TestImage in the package test_interfaces.
typedef struct test_interfaces__msg__TestImage
{
  int32_t rows;
  int32_t cols;
  int32_t elt_type;
  int32_t elt_size;
  sensor_msgs__msg__Image test_a;
  rosidl_runtime_c__String mat_data;
} test_interfaces__msg__TestImage;

// Struct for a sequence of test_interfaces__msg__TestImage.
typedef struct test_interfaces__msg__TestImage__Sequence
{
  test_interfaces__msg__TestImage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_interfaces__msg__TestImage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_INTERFACES__MSG__DETAIL__TEST_IMAGE__STRUCT_H_
