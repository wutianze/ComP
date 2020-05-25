// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from test_interfaces:msg/Test.idl
// generated code does not contain a copyright notice
#include "test_interfaces/msg/detail/test__functions.h"

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
test_interfaces__msg__Test__init(test_interfaces__msg__Test * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    test_interfaces__msg__Test__fini(msg);
    return false;
  }
  // content
  if (!rosidl_runtime_c__String__init(&msg->content)) {
    test_interfaces__msg__Test__fini(msg);
    return false;
  }
  return true;
}

void
test_interfaces__msg__Test__fini(test_interfaces__msg__Test * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // content
  rosidl_runtime_c__String__fini(&msg->content);
}

test_interfaces__msg__Test *
test_interfaces__msg__Test__create()
{
  test_interfaces__msg__Test * msg = (test_interfaces__msg__Test *)malloc(sizeof(test_interfaces__msg__Test));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_interfaces__msg__Test));
  bool success = test_interfaces__msg__Test__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_interfaces__msg__Test__destroy(test_interfaces__msg__Test * msg)
{
  if (msg) {
    test_interfaces__msg__Test__fini(msg);
  }
  free(msg);
}


bool
test_interfaces__msg__Test__Sequence__init(test_interfaces__msg__Test__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_interfaces__msg__Test * data = NULL;
  if (size) {
    data = (test_interfaces__msg__Test *)calloc(size, sizeof(test_interfaces__msg__Test));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_interfaces__msg__Test__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_interfaces__msg__Test__fini(&data[i - 1]);
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
test_interfaces__msg__Test__Sequence__fini(test_interfaces__msg__Test__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_interfaces__msg__Test__fini(&array->data[i]);
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

test_interfaces__msg__Test__Sequence *
test_interfaces__msg__Test__Sequence__create(size_t size)
{
  test_interfaces__msg__Test__Sequence * array = (test_interfaces__msg__Test__Sequence *)malloc(sizeof(test_interfaces__msg__Test__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_interfaces__msg__Test__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_interfaces__msg__Test__Sequence__destroy(test_interfaces__msg__Test__Sequence * array)
{
  if (array) {
    test_interfaces__msg__Test__Sequence__fini(array);
  }
  free(array);
}
