// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from test_interfaces:msg/TestImage.idl
// generated code does not contain a copyright notice
#include "test_interfaces/msg/detail/test_image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `test_a`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `mat_data`
#include "rosidl_runtime_c/string_functions.h"

bool
test_interfaces__msg__TestImage__init(test_interfaces__msg__TestImage * msg)
{
  if (!msg) {
    return false;
  }
  // rows
  // cols
  // elt_type
  // elt_size
  // test_a
  if (!sensor_msgs__msg__Image__init(&msg->test_a)) {
    test_interfaces__msg__TestImage__fini(msg);
    return false;
  }
  // mat_data
  if (!rosidl_runtime_c__String__init(&msg->mat_data)) {
    test_interfaces__msg__TestImage__fini(msg);
    return false;
  }
  return true;
}

void
test_interfaces__msg__TestImage__fini(test_interfaces__msg__TestImage * msg)
{
  if (!msg) {
    return;
  }
  // rows
  // cols
  // elt_type
  // elt_size
  // test_a
  sensor_msgs__msg__Image__fini(&msg->test_a);
  // mat_data
  rosidl_runtime_c__String__fini(&msg->mat_data);
}

test_interfaces__msg__TestImage *
test_interfaces__msg__TestImage__create()
{
  test_interfaces__msg__TestImage * msg = (test_interfaces__msg__TestImage *)malloc(sizeof(test_interfaces__msg__TestImage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_interfaces__msg__TestImage));
  bool success = test_interfaces__msg__TestImage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_interfaces__msg__TestImage__destroy(test_interfaces__msg__TestImage * msg)
{
  if (msg) {
    test_interfaces__msg__TestImage__fini(msg);
  }
  free(msg);
}


bool
test_interfaces__msg__TestImage__Sequence__init(test_interfaces__msg__TestImage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_interfaces__msg__TestImage * data = NULL;
  if (size) {
    data = (test_interfaces__msg__TestImage *)calloc(size, sizeof(test_interfaces__msg__TestImage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_interfaces__msg__TestImage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_interfaces__msg__TestImage__fini(&data[i - 1]);
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
test_interfaces__msg__TestImage__Sequence__fini(test_interfaces__msg__TestImage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_interfaces__msg__TestImage__fini(&array->data[i]);
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

test_interfaces__msg__TestImage__Sequence *
test_interfaces__msg__TestImage__Sequence__create(size_t size)
{
  test_interfaces__msg__TestImage__Sequence * array = (test_interfaces__msg__TestImage__Sequence *)malloc(sizeof(test_interfaces__msg__TestImage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_interfaces__msg__TestImage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_interfaces__msg__TestImage__Sequence__destroy(test_interfaces__msg__TestImage__Sequence * array)
{
  if (array) {
    test_interfaces__msg__TestImage__Sequence__fini(array);
  }
  free(array);
}
