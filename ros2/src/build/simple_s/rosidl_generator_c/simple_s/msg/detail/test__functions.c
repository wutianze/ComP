// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from simple_s:msg/Test.idl
// generated code does not contain a copyright notice
#include "simple_s/msg/detail/test__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `content`
#include "rosidl_runtime_c/string_functions.h"

bool
simple_s__msg__Test__init(simple_s__msg__Test * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    simple_s__msg__Test__fini(msg);
    return false;
  }
  // content
  if (!rosidl_runtime_c__String__init(&msg->content)) {
    simple_s__msg__Test__fini(msg);
    return false;
  }
  // id
  return true;
}

void
simple_s__msg__Test__fini(simple_s__msg__Test * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // content
  rosidl_runtime_c__String__fini(&msg->content);
  // id
}

simple_s__msg__Test *
simple_s__msg__Test__create()
{
  simple_s__msg__Test * msg = (simple_s__msg__Test *)malloc(sizeof(simple_s__msg__Test));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(simple_s__msg__Test));
  bool success = simple_s__msg__Test__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
simple_s__msg__Test__destroy(simple_s__msg__Test * msg)
{
  if (msg) {
    simple_s__msg__Test__fini(msg);
  }
  free(msg);
}


bool
simple_s__msg__Test__Sequence__init(simple_s__msg__Test__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  simple_s__msg__Test * data = NULL;
  if (size) {
    data = (simple_s__msg__Test *)calloc(size, sizeof(simple_s__msg__Test));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = simple_s__msg__Test__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        simple_s__msg__Test__fini(&data[i - 1]);
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
simple_s__msg__Test__Sequence__fini(simple_s__msg__Test__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      simple_s__msg__Test__fini(&array->data[i]);
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

simple_s__msg__Test__Sequence *
simple_s__msg__Test__Sequence__create(size_t size)
{
  simple_s__msg__Test__Sequence * array = (simple_s__msg__Test__Sequence *)malloc(sizeof(simple_s__msg__Test__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = simple_s__msg__Test__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
simple_s__msg__Test__Sequence__destroy(simple_s__msg__Test__Sequence * array)
{
  if (array) {
    simple_s__msg__Test__Sequence__fini(array);
  }
  free(array);
}
