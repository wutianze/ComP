// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from test_interfaces:msg/PointDetect.idl
// generated code does not contain a copyright notice
#include "test_interfaces/msg/detail/point_detect__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
test_interfaces__msg__PointDetect__init(test_interfaces__msg__PointDetect * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
test_interfaces__msg__PointDetect__fini(test_interfaces__msg__PointDetect * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

test_interfaces__msg__PointDetect *
test_interfaces__msg__PointDetect__create()
{
  test_interfaces__msg__PointDetect * msg = (test_interfaces__msg__PointDetect *)malloc(sizeof(test_interfaces__msg__PointDetect));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_interfaces__msg__PointDetect));
  bool success = test_interfaces__msg__PointDetect__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_interfaces__msg__PointDetect__destroy(test_interfaces__msg__PointDetect * msg)
{
  if (msg) {
    test_interfaces__msg__PointDetect__fini(msg);
  }
  free(msg);
}


bool
test_interfaces__msg__PointDetect__Sequence__init(test_interfaces__msg__PointDetect__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_interfaces__msg__PointDetect * data = NULL;
  if (size) {
    data = (test_interfaces__msg__PointDetect *)calloc(size, sizeof(test_interfaces__msg__PointDetect));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_interfaces__msg__PointDetect__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_interfaces__msg__PointDetect__fini(&data[i - 1]);
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
test_interfaces__msg__PointDetect__Sequence__fini(test_interfaces__msg__PointDetect__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_interfaces__msg__PointDetect__fini(&array->data[i]);
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

test_interfaces__msg__PointDetect__Sequence *
test_interfaces__msg__PointDetect__Sequence__create(size_t size)
{
  test_interfaces__msg__PointDetect__Sequence * array = (test_interfaces__msg__PointDetect__Sequence *)malloc(sizeof(test_interfaces__msg__PointDetect__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_interfaces__msg__PointDetect__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_interfaces__msg__PointDetect__Sequence__destroy(test_interfaces__msg__PointDetect__Sequence * array)
{
  if (array) {
    test_interfaces__msg__PointDetect__Sequence__fini(array);
  }
  free(array);
}
