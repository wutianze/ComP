// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simple_s:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_S__MSG__DETAIL__TEST__STRUCT_H_
#define SIMPLE_S__MSG__DETAIL__TEST__STRUCT_H_

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
// Member 'content'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Test in the package simple_s.
typedef struct simple_s__msg__Test
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String content;
  int64_t id;
} simple_s__msg__Test;

// Struct for a sequence of simple_s__msg__Test.
typedef struct simple_s__msg__Test__Sequence
{
  simple_s__msg__Test * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simple_s__msg__Test__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMPLE_S__MSG__DETAIL__TEST__STRUCT_H_
