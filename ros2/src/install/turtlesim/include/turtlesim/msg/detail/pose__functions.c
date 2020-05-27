// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtlesim:msg/Pose.idl
// generated code does not contain a copyright notice
#include "turtlesim/msg/detail/pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
turtlesim__msg__Pose__init(turtlesim__msg__Pose * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // theta
  // linear_velocity
  // angular_velocity
  return true;
}

void
turtlesim__msg__Pose__fini(turtlesim__msg__Pose * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // theta
  // linear_velocity
  // angular_velocity
}

turtlesim__msg__Pose *
turtlesim__msg__Pose__create()
{
  turtlesim__msg__Pose * msg = (turtlesim__msg__Pose *)malloc(sizeof(turtlesim__msg__Pose));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim__msg__Pose));
  bool success = turtlesim__msg__Pose__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtlesim__msg__Pose__destroy(turtlesim__msg__Pose * msg)
{
  if (msg) {
    turtlesim__msg__Pose__fini(msg);
  }
  free(msg);
}


bool
turtlesim__msg__Pose__Sequence__init(turtlesim__msg__Pose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtlesim__msg__Pose * data = NULL;
  if (size) {
    data = (turtlesim__msg__Pose *)calloc(size, sizeof(turtlesim__msg__Pose));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim__msg__Pose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim__msg__Pose__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
turtlesim__msg__Pose__Sequence__fini(turtlesim__msg__Pose__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtlesim__msg__Pose__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

turtlesim__msg__Pose__Sequence *
turtlesim__msg__Pose__Sequence__create(size_t size)
{
  turtlesim__msg__Pose__Sequence * array = (turtlesim__msg__Pose__Sequence *)malloc(sizeof(turtlesim__msg__Pose__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtlesim__msg__Pose__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtlesim__msg__Pose__Sequence__destroy(turtlesim__msg__Pose__Sequence * array)
{
  if (array) {
    turtlesim__msg__Pose__Sequence__fini(array);
  }
  free(array);
}
