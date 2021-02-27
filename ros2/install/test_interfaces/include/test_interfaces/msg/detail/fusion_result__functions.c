// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from test_interfaces:msg/FusionResult.idl
// generated code does not contain a copyright notice
#include "test_interfaces/msg/detail/fusion_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `fusion_result`
#include "rosidl_runtime_c/string_functions.h"

bool
test_interfaces__msg__FusionResult__init(test_interfaces__msg__FusionResult * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    test_interfaces__msg__FusionResult__fini(msg);
    return false;
  }
  // fusion_result
  if (!rosidl_runtime_c__String__init(&msg->fusion_result)) {
    test_interfaces__msg__FusionResult__fini(msg);
    return false;
  }
  return true;
}

void
test_interfaces__msg__FusionResult__fini(test_interfaces__msg__FusionResult * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // fusion_result
  rosidl_runtime_c__String__fini(&msg->fusion_result);
}

test_interfaces__msg__FusionResult *
test_interfaces__msg__FusionResult__create()
{
  test_interfaces__msg__FusionResult * msg = (test_interfaces__msg__FusionResult *)malloc(sizeof(test_interfaces__msg__FusionResult));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_interfaces__msg__FusionResult));
  bool success = test_interfaces__msg__FusionResult__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_interfaces__msg__FusionResult__destroy(test_interfaces__msg__FusionResult * msg)
{
  if (msg) {
    test_interfaces__msg__FusionResult__fini(msg);
  }
  free(msg);
}


bool
test_interfaces__msg__FusionResult__Sequence__init(test_interfaces__msg__FusionResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_interfaces__msg__FusionResult * data = NULL;
  if (size) {
    data = (test_interfaces__msg__FusionResult *)calloc(size, sizeof(test_interfaces__msg__FusionResult));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_interfaces__msg__FusionResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_interfaces__msg__FusionResult__fini(&data[i - 1]);
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
test_interfaces__msg__FusionResult__Sequence__fini(test_interfaces__msg__FusionResult__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_interfaces__msg__FusionResult__fini(&array->data[i]);
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

test_interfaces__msg__FusionResult__Sequence *
test_interfaces__msg__FusionResult__Sequence__create(size_t size)
{
  test_interfaces__msg__FusionResult__Sequence * array = (test_interfaces__msg__FusionResult__Sequence *)malloc(sizeof(test_interfaces__msg__FusionResult__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_interfaces__msg__FusionResult__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_interfaces__msg__FusionResult__Sequence__destroy(test_interfaces__msg__FusionResult__Sequence * array)
{
  if (array) {
    test_interfaces__msg__FusionResult__Sequence__fini(array);
  }
  free(array);
}
