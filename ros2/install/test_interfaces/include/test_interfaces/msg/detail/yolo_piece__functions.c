// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from test_interfaces:msg/YoloPiece.idl
// generated code does not contain a copyright notice
#include "test_interfaces/msg/detail/yolo_piece__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
test_interfaces__msg__YoloPiece__init(test_interfaces__msg__YoloPiece * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // w
  // h
  // prob
  // obj_id
  // track_id
  // frames_counter
  return true;
}

void
test_interfaces__msg__YoloPiece__fini(test_interfaces__msg__YoloPiece * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // w
  // h
  // prob
  // obj_id
  // track_id
  // frames_counter
}

test_interfaces__msg__YoloPiece *
test_interfaces__msg__YoloPiece__create()
{
  test_interfaces__msg__YoloPiece * msg = (test_interfaces__msg__YoloPiece *)malloc(sizeof(test_interfaces__msg__YoloPiece));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_interfaces__msg__YoloPiece));
  bool success = test_interfaces__msg__YoloPiece__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_interfaces__msg__YoloPiece__destroy(test_interfaces__msg__YoloPiece * msg)
{
  if (msg) {
    test_interfaces__msg__YoloPiece__fini(msg);
  }
  free(msg);
}


bool
test_interfaces__msg__YoloPiece__Sequence__init(test_interfaces__msg__YoloPiece__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_interfaces__msg__YoloPiece * data = NULL;
  if (size) {
    data = (test_interfaces__msg__YoloPiece *)calloc(size, sizeof(test_interfaces__msg__YoloPiece));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_interfaces__msg__YoloPiece__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_interfaces__msg__YoloPiece__fini(&data[i - 1]);
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
test_interfaces__msg__YoloPiece__Sequence__fini(test_interfaces__msg__YoloPiece__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_interfaces__msg__YoloPiece__fini(&array->data[i]);
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

test_interfaces__msg__YoloPiece__Sequence *
test_interfaces__msg__YoloPiece__Sequence__create(size_t size)
{
  test_interfaces__msg__YoloPiece__Sequence * array = (test_interfaces__msg__YoloPiece__Sequence *)malloc(sizeof(test_interfaces__msg__YoloPiece__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_interfaces__msg__YoloPiece__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_interfaces__msg__YoloPiece__Sequence__destroy(test_interfaces__msg__YoloPiece__Sequence * array)
{
  if (array) {
    test_interfaces__msg__YoloPiece__Sequence__fini(array);
  }
  free(array);
}
