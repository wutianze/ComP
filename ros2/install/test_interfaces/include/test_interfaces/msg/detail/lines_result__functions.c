// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from test_interfaces:msg/LinesResult.idl
// generated code does not contain a copyright notice
#include "test_interfaces/msg/detail/lines_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `left1`
// Member `right1`
// Member `left2`
// Member `right2`
#include "test_interfaces/msg/detail/point_detect__functions.h"

bool
test_interfaces__msg__LinesResult__init(test_interfaces__msg__LinesResult * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    test_interfaces__msg__LinesResult__fini(msg);
    return false;
  }
  // left1
  if (!test_interfaces__msg__PointDetect__init(&msg->left1)) {
    test_interfaces__msg__LinesResult__fini(msg);
    return false;
  }
  // right1
  if (!test_interfaces__msg__PointDetect__init(&msg->right1)) {
    test_interfaces__msg__LinesResult__fini(msg);
    return false;
  }
  // left2
  if (!test_interfaces__msg__PointDetect__init(&msg->left2)) {
    test_interfaces__msg__LinesResult__fini(msg);
    return false;
  }
  // right2
  if (!test_interfaces__msg__PointDetect__init(&msg->right2)) {
    test_interfaces__msg__LinesResult__fini(msg);
    return false;
  }
  return true;
}

void
test_interfaces__msg__LinesResult__fini(test_interfaces__msg__LinesResult * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // left1
  test_interfaces__msg__PointDetect__fini(&msg->left1);
  // right1
  test_interfaces__msg__PointDetect__fini(&msg->right1);
  // left2
  test_interfaces__msg__PointDetect__fini(&msg->left2);
  // right2
  test_interfaces__msg__PointDetect__fini(&msg->right2);
}

test_interfaces__msg__LinesResult *
test_interfaces__msg__LinesResult__create()
{
  test_interfaces__msg__LinesResult * msg = (test_interfaces__msg__LinesResult *)malloc(sizeof(test_interfaces__msg__LinesResult));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_interfaces__msg__LinesResult));
  bool success = test_interfaces__msg__LinesResult__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_interfaces__msg__LinesResult__destroy(test_interfaces__msg__LinesResult * msg)
{
  if (msg) {
    test_interfaces__msg__LinesResult__fini(msg);
  }
  free(msg);
}


bool
test_interfaces__msg__LinesResult__Sequence__init(test_interfaces__msg__LinesResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_interfaces__msg__LinesResult * data = NULL;
  if (size) {
    data = (test_interfaces__msg__LinesResult *)calloc(size, sizeof(test_interfaces__msg__LinesResult));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_interfaces__msg__LinesResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_interfaces__msg__LinesResult__fini(&data[i - 1]);
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
test_interfaces__msg__LinesResult__Sequence__fini(test_interfaces__msg__LinesResult__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_interfaces__msg__LinesResult__fini(&array->data[i]);
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

test_interfaces__msg__LinesResult__Sequence *
test_interfaces__msg__LinesResult__Sequence__create(size_t size)
{
  test_interfaces__msg__LinesResult__Sequence * array = (test_interfaces__msg__LinesResult__Sequence *)malloc(sizeof(test_interfaces__msg__LinesResult__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_interfaces__msg__LinesResult__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_interfaces__msg__LinesResult__Sequence__destroy(test_interfaces__msg__LinesResult__Sequence * array)
{
  if (array) {
    test_interfaces__msg__LinesResult__Sequence__fini(array);
  }
  free(array);
}
