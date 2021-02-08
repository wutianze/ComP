// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from test_interfaces:msg/YoloResult.idl
// generated code does not contain a copyright notice
#include "test_interfaces/msg/detail/yolo_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `result_array`
#include "test_interfaces/msg/detail/yolo_piece__functions.h"

bool
test_interfaces__msg__YoloResult__init(test_interfaces__msg__YoloResult * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    test_interfaces__msg__YoloResult__fini(msg);
    return false;
  }
  // result_num
  // result_array
  if (!test_interfaces__msg__YoloPiece__Sequence__init(&msg->result_array, 0)) {
    test_interfaces__msg__YoloResult__fini(msg);
    return false;
  }
  return true;
}

void
test_interfaces__msg__YoloResult__fini(test_interfaces__msg__YoloResult * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // result_num
  // result_array
  test_interfaces__msg__YoloPiece__Sequence__fini(&msg->result_array);
}

test_interfaces__msg__YoloResult *
test_interfaces__msg__YoloResult__create()
{
  test_interfaces__msg__YoloResult * msg = (test_interfaces__msg__YoloResult *)malloc(sizeof(test_interfaces__msg__YoloResult));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_interfaces__msg__YoloResult));
  bool success = test_interfaces__msg__YoloResult__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_interfaces__msg__YoloResult__destroy(test_interfaces__msg__YoloResult * msg)
{
  if (msg) {
    test_interfaces__msg__YoloResult__fini(msg);
  }
  free(msg);
}


bool
test_interfaces__msg__YoloResult__Sequence__init(test_interfaces__msg__YoloResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_interfaces__msg__YoloResult * data = NULL;
  if (size) {
    data = (test_interfaces__msg__YoloResult *)calloc(size, sizeof(test_interfaces__msg__YoloResult));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_interfaces__msg__YoloResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_interfaces__msg__YoloResult__fini(&data[i - 1]);
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
test_interfaces__msg__YoloResult__Sequence__fini(test_interfaces__msg__YoloResult__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_interfaces__msg__YoloResult__fini(&array->data[i]);
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

test_interfaces__msg__YoloResult__Sequence *
test_interfaces__msg__YoloResult__Sequence__create(size_t size)
{
  test_interfaces__msg__YoloResult__Sequence * array = (test_interfaces__msg__YoloResult__Sequence *)malloc(sizeof(test_interfaces__msg__YoloResult__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_interfaces__msg__YoloResult__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_interfaces__msg__YoloResult__Sequence__destroy(test_interfaces__msg__YoloResult__Sequence * array)
{
  if (array) {
    test_interfaces__msg__YoloResult__Sequence__fini(array);
  }
  free(array);
}
