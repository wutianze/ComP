// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtlesim:srv/Spawn.idl
// generated code does not contain a copyright notice
#include "turtlesim/srv/detail/spawn__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
turtlesim__srv__Spawn_Request__init(turtlesim__srv__Spawn_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // theta
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    turtlesim__srv__Spawn_Request__fini(msg);
    return false;
  }
  return true;
}

void
turtlesim__srv__Spawn_Request__fini(turtlesim__srv__Spawn_Request * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // theta
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

turtlesim__srv__Spawn_Request *
turtlesim__srv__Spawn_Request__create()
{
  turtlesim__srv__Spawn_Request * msg = (turtlesim__srv__Spawn_Request *)malloc(sizeof(turtlesim__srv__Spawn_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim__srv__Spawn_Request));
  bool success = turtlesim__srv__Spawn_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtlesim__srv__Spawn_Request__destroy(turtlesim__srv__Spawn_Request * msg)
{
  if (msg) {
    turtlesim__srv__Spawn_Request__fini(msg);
  }
  free(msg);
}


bool
turtlesim__srv__Spawn_Request__Sequence__init(turtlesim__srv__Spawn_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtlesim__srv__Spawn_Request * data = NULL;
  if (size) {
    data = (turtlesim__srv__Spawn_Request *)calloc(size, sizeof(turtlesim__srv__Spawn_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim__srv__Spawn_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim__srv__Spawn_Request__fini(&data[i - 1]);
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
turtlesim__srv__Spawn_Request__Sequence__fini(turtlesim__srv__Spawn_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtlesim__srv__Spawn_Request__fini(&array->data[i]);
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

turtlesim__srv__Spawn_Request__Sequence *
turtlesim__srv__Spawn_Request__Sequence__create(size_t size)
{
  turtlesim__srv__Spawn_Request__Sequence * array = (turtlesim__srv__Spawn_Request__Sequence *)malloc(sizeof(turtlesim__srv__Spawn_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtlesim__srv__Spawn_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtlesim__srv__Spawn_Request__Sequence__destroy(turtlesim__srv__Spawn_Request__Sequence * array)
{
  if (array) {
    turtlesim__srv__Spawn_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
turtlesim__srv__Spawn_Response__init(turtlesim__srv__Spawn_Response * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    turtlesim__srv__Spawn_Response__fini(msg);
    return false;
  }
  return true;
}

void
turtlesim__srv__Spawn_Response__fini(turtlesim__srv__Spawn_Response * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

turtlesim__srv__Spawn_Response *
turtlesim__srv__Spawn_Response__create()
{
  turtlesim__srv__Spawn_Response * msg = (turtlesim__srv__Spawn_Response *)malloc(sizeof(turtlesim__srv__Spawn_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim__srv__Spawn_Response));
  bool success = turtlesim__srv__Spawn_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtlesim__srv__Spawn_Response__destroy(turtlesim__srv__Spawn_Response * msg)
{
  if (msg) {
    turtlesim__srv__Spawn_Response__fini(msg);
  }
  free(msg);
}


bool
turtlesim__srv__Spawn_Response__Sequence__init(turtlesim__srv__Spawn_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtlesim__srv__Spawn_Response * data = NULL;
  if (size) {
    data = (turtlesim__srv__Spawn_Response *)calloc(size, sizeof(turtlesim__srv__Spawn_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim__srv__Spawn_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim__srv__Spawn_Response__fini(&data[i - 1]);
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
turtlesim__srv__Spawn_Response__Sequence__fini(turtlesim__srv__Spawn_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtlesim__srv__Spawn_Response__fini(&array->data[i]);
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

turtlesim__srv__Spawn_Response__Sequence *
turtlesim__srv__Spawn_Response__Sequence__create(size_t size)
{
  turtlesim__srv__Spawn_Response__Sequence * array = (turtlesim__srv__Spawn_Response__Sequence *)malloc(sizeof(turtlesim__srv__Spawn_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtlesim__srv__Spawn_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtlesim__srv__Spawn_Response__Sequence__destroy(turtlesim__srv__Spawn_Response__Sequence * array)
{
  if (array) {
    turtlesim__srv__Spawn_Response__Sequence__fini(array);
  }
  free(array);
}
