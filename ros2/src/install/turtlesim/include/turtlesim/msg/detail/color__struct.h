// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlesim:msg/Color.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__MSG__DETAIL__COLOR__STRUCT_H_
#define TURTLESIM__MSG__DETAIL__COLOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Color in the package turtlesim.
typedef struct turtlesim__msg__Color
{
  uint8_t r;
  uint8_t g;
  uint8_t b;
} turtlesim__msg__Color;

// Struct for a sequence of turtlesim__msg__Color.
typedef struct turtlesim__msg__Color__Sequence
{
  turtlesim__msg__Color * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim__msg__Color__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM__MSG__DETAIL__COLOR__STRUCT_H_
