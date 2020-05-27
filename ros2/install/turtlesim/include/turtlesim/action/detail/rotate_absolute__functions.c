// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtlesim:action/RotateAbsolute.idl
// generated code does not contain a copyright notice
#include "turtlesim/action/detail/rotate_absolute__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
turtlesim__action__RotateAbsolute_Goal__init(turtlesim__action__RotateAbsolute_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // theta
  return true;
}

void
turtlesim__action__RotateAbsolute_Goal__fini(turtlesim__action__RotateAbsolute_Goal * msg)
{
  if (!msg) {
    return;
  }
  // theta
}

turtlesim__action__RotateAbsolute_Goal *
turtlesim__action__RotateAbsolute_Goal__create()
{
  turtlesim__action__RotateAbsolute_Goal * msg = (turtlesim__action__RotateAbsolute_Goal *)malloc(sizeof(turtlesim__action__RotateAbsolute_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim__action__RotateAbsolute_Goal));
  bool success = turtlesim__action__RotateAbsolute_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtlesim__action__RotateAbsolute_Goal__destroy(turtlesim__action__RotateAbsolute_Goal * msg)
{
  if (msg) {
    turtlesim__action__RotateAbsolute_Goal__fini(msg);
  }
  free(msg);
}


bool
turtlesim__action__RotateAbsolute_Goal__Sequence__init(turtlesim__action__RotateAbsolute_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtlesim__action__RotateAbsolute_Goal * data = NULL;
  if (size) {
    data = (turtlesim__action__RotateAbsolute_Goal *)calloc(size, sizeof(turtlesim__action__RotateAbsolute_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim__action__RotateAbsolute_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim__action__RotateAbsolute_Goal__fini(&data[i - 1]);
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
turtlesim__action__RotateAbsolute_Goal__Sequence__fini(turtlesim__action__RotateAbsolute_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtlesim__action__RotateAbsolute_Goal__fini(&array->data[i]);
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

turtlesim__action__RotateAbsolute_Goal__Sequence *
turtlesim__action__RotateAbsolute_Goal__Sequence__create(size_t size)
{
  turtlesim__action__RotateAbsolute_Goal__Sequence * array = (turtlesim__action__RotateAbsolute_Goal__Sequence *)malloc(sizeof(turtlesim__action__RotateAbsolute_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtlesim__action__RotateAbsolute_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtlesim__action__RotateAbsolute_Goal__Sequence__destroy(turtlesim__action__RotateAbsolute_Goal__Sequence * array)
{
  if (array) {
    turtlesim__action__RotateAbsolute_Goal__Sequence__fini(array);
  }
  free(array);
}


bool
turtlesim__action__RotateAbsolute_Result__init(turtlesim__action__RotateAbsolute_Result * msg)
{
  if (!msg) {
    return false;
  }
  // delta
  return true;
}

void
turtlesim__action__RotateAbsolute_Result__fini(turtlesim__action__RotateAbsolute_Result * msg)
{
  if (!msg) {
    return;
  }
  // delta
}

turtlesim__action__RotateAbsolute_Result *
turtlesim__action__RotateAbsolute_Result__create()
{
  turtlesim__action__RotateAbsolute_Result * msg = (turtlesim__action__RotateAbsolute_Result *)malloc(sizeof(turtlesim__action__RotateAbsolute_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim__action__RotateAbsolute_Result));
  bool success = turtlesim__action__RotateAbsolute_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtlesim__action__RotateAbsolute_Result__destroy(turtlesim__action__RotateAbsolute_Result * msg)
{
  if (msg) {
    turtlesim__action__RotateAbsolute_Result__fini(msg);
  }
  free(msg);
}


bool
turtlesim__action__RotateAbsolute_Result__Sequence__init(turtlesim__action__RotateAbsolute_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtlesim__action__RotateAbsolute_Result * data = NULL;
  if (size) {
    data = (turtlesim__action__RotateAbsolute_Result *)calloc(size, sizeof(turtlesim__action__RotateAbsolute_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim__action__RotateAbsolute_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim__action__RotateAbsolute_Result__fini(&data[i - 1]);
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
turtlesim__action__RotateAbsolute_Result__Sequence__fini(turtlesim__action__RotateAbsolute_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtlesim__action__RotateAbsolute_Result__fini(&array->data[i]);
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

turtlesim__action__RotateAbsolute_Result__Sequence *
turtlesim__action__RotateAbsolute_Result__Sequence__create(size_t size)
{
  turtlesim__action__RotateAbsolute_Result__Sequence * array = (turtlesim__action__RotateAbsolute_Result__Sequence *)malloc(sizeof(turtlesim__action__RotateAbsolute_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtlesim__action__RotateAbsolute_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtlesim__action__RotateAbsolute_Result__Sequence__destroy(turtlesim__action__RotateAbsolute_Result__Sequence * array)
{
  if (array) {
    turtlesim__action__RotateAbsolute_Result__Sequence__fini(array);
  }
  free(array);
}


bool
turtlesim__action__RotateAbsolute_Feedback__init(turtlesim__action__RotateAbsolute_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // remaining
  return true;
}

void
turtlesim__action__RotateAbsolute_Feedback__fini(turtlesim__action__RotateAbsolute_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // remaining
}

turtlesim__action__RotateAbsolute_Feedback *
turtlesim__action__RotateAbsolute_Feedback__create()
{
  turtlesim__action__RotateAbsolute_Feedback * msg = (turtlesim__action__RotateAbsolute_Feedback *)malloc(sizeof(turtlesim__action__RotateAbsolute_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim__action__RotateAbsolute_Feedback));
  bool success = turtlesim__action__RotateAbsolute_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtlesim__action__RotateAbsolute_Feedback__destroy(turtlesim__action__RotateAbsolute_Feedback * msg)
{
  if (msg) {
    turtlesim__action__RotateAbsolute_Feedback__fini(msg);
  }
  free(msg);
}


bool
turtlesim__action__RotateAbsolute_Feedback__Sequence__init(turtlesim__action__RotateAbsolute_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtlesim__action__RotateAbsolute_Feedback * data = NULL;
  if (size) {
    data = (turtlesim__action__RotateAbsolute_Feedback *)calloc(size, sizeof(turtlesim__action__RotateAbsolute_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim__action__RotateAbsolute_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim__action__RotateAbsolute_Feedback__fini(&data[i - 1]);
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
turtlesim__action__RotateAbsolute_Feedback__Sequence__fini(turtlesim__action__RotateAbsolute_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtlesim__action__RotateAbsolute_Feedback__fini(&array->data[i]);
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

turtlesim__action__RotateAbsolute_Feedback__Sequence *
turtlesim__action__RotateAbsolute_Feedback__Sequence__create(size_t size)
{
  turtlesim__action__RotateAbsolute_Feedback__Sequence * array = (turtlesim__action__RotateAbsolute_Feedback__Sequence *)malloc(sizeof(turtlesim__action__RotateAbsolute_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtlesim__action__RotateAbsolute_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtlesim__action__RotateAbsolute_Feedback__Sequence__destroy(turtlesim__action__RotateAbsolute_Feedback__Sequence * array)
{
  if (array) {
    turtlesim__action__RotateAbsolute_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "turtlesim/action/detail/rotate_absolute__functions.h"

bool
turtlesim__action__RotateAbsolute_SendGoal_Request__init(turtlesim__action__RotateAbsolute_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    turtlesim__action__RotateAbsolute_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!turtlesim__action__RotateAbsolute_Goal__init(&msg->goal)) {
    turtlesim__action__RotateAbsolute_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
turtlesim__action__RotateAbsolute_SendGoal_Request__fini(turtlesim__action__RotateAbsolute_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  turtlesim__action__RotateAbsolute_Goal__fini(&msg->goal);
}

turtlesim__action__RotateAbsolute_SendGoal_Request *
turtlesim__action__RotateAbsolute_SendGoal_Request__create()
{
  turtlesim__action__RotateAbsolute_SendGoal_Request * msg = (turtlesim__action__RotateAbsolute_SendGoal_Request *)malloc(sizeof(turtlesim__action__RotateAbsolute_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim__action__RotateAbsolute_SendGoal_Request));
  bool success = turtlesim__action__RotateAbsolute_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtlesim__action__RotateAbsolute_SendGoal_Request__destroy(turtlesim__action__RotateAbsolute_SendGoal_Request * msg)
{
  if (msg) {
    turtlesim__action__RotateAbsolute_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
turtlesim__action__RotateAbsolute_SendGoal_Request__Sequence__init(turtlesim__action__RotateAbsolute_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtlesim__action__RotateAbsolute_SendGoal_Request * data = NULL;
  if (size) {
    data = (turtlesim__action__RotateAbsolute_SendGoal_Request *)calloc(size, sizeof(turtlesim__action__RotateAbsolute_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim__action__RotateAbsolute_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim__action__RotateAbsolute_SendGoal_Request__fini(&data[i - 1]);
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
turtlesim__action__RotateAbsolute_SendGoal_Request__Sequence__fini(turtlesim__action__RotateAbsolute_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtlesim__action__RotateAbsolute_SendGoal_Request__fini(&array->data[i]);
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

turtlesim__action__RotateAbsolute_SendGoal_Request__Sequence *
turtlesim__action__RotateAbsolute_SendGoal_Request__Sequence__create(size_t size)
{
  turtlesim__action__RotateAbsolute_SendGoal_Request__Sequence * array = (turtlesim__action__RotateAbsolute_SendGoal_Request__Sequence *)malloc(sizeof(turtlesim__action__RotateAbsolute_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtlesim__action__RotateAbsolute_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtlesim__action__RotateAbsolute_SendGoal_Request__Sequence__destroy(turtlesim__action__RotateAbsolute_SendGoal_Request__Sequence * array)
{
  if (array) {
    turtlesim__action__RotateAbsolute_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
turtlesim__action__RotateAbsolute_SendGoal_Response__init(turtlesim__action__RotateAbsolute_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    turtlesim__action__RotateAbsolute_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
turtlesim__action__RotateAbsolute_SendGoal_Response__fini(turtlesim__action__RotateAbsolute_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

turtlesim__action__RotateAbsolute_SendGoal_Response *
turtlesim__action__RotateAbsolute_SendGoal_Response__create()
{
  turtlesim__action__RotateAbsolute_SendGoal_Response * msg = (turtlesim__action__RotateAbsolute_SendGoal_Response *)malloc(sizeof(turtlesim__action__RotateAbsolute_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim__action__RotateAbsolute_SendGoal_Response));
  bool success = turtlesim__action__RotateAbsolute_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtlesim__action__RotateAbsolute_SendGoal_Response__destroy(turtlesim__action__RotateAbsolute_SendGoal_Response * msg)
{
  if (msg) {
    turtlesim__action__RotateAbsolute_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
turtlesim__action__RotateAbsolute_SendGoal_Response__Sequence__init(turtlesim__action__RotateAbsolute_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtlesim__action__RotateAbsolute_SendGoal_Response * data = NULL;
  if (size) {
    data = (turtlesim__action__RotateAbsolute_SendGoal_Response *)calloc(size, sizeof(turtlesim__action__RotateAbsolute_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim__action__RotateAbsolute_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim__action__RotateAbsolute_SendGoal_Response__fini(&data[i - 1]);
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
turtlesim__action__RotateAbsolute_SendGoal_Response__Sequence__fini(turtlesim__action__RotateAbsolute_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtlesim__action__RotateAbsolute_SendGoal_Response__fini(&array->data[i]);
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

turtlesim__action__RotateAbsolute_SendGoal_Response__Sequence *
turtlesim__action__RotateAbsolute_SendGoal_Response__Sequence__create(size_t size)
{
  turtlesim__action__RotateAbsolute_SendGoal_Response__Sequence * array = (turtlesim__action__RotateAbsolute_SendGoal_Response__Sequence *)malloc(sizeof(turtlesim__action__RotateAbsolute_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtlesim__action__RotateAbsolute_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtlesim__action__RotateAbsolute_SendGoal_Response__Sequence__destroy(turtlesim__action__RotateAbsolute_SendGoal_Response__Sequence * array)
{
  if (array) {
    turtlesim__action__RotateAbsolute_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
turtlesim__action__RotateAbsolute_GetResult_Request__init(turtlesim__action__RotateAbsolute_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    turtlesim__action__RotateAbsolute_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
turtlesim__action__RotateAbsolute_GetResult_Request__fini(turtlesim__action__RotateAbsolute_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

turtlesim__action__RotateAbsolute_GetResult_Request *
turtlesim__action__RotateAbsolute_GetResult_Request__create()
{
  turtlesim__action__RotateAbsolute_GetResult_Request * msg = (turtlesim__action__RotateAbsolute_GetResult_Request *)malloc(sizeof(turtlesim__action__RotateAbsolute_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim__action__RotateAbsolute_GetResult_Request));
  bool success = turtlesim__action__RotateAbsolute_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtlesim__action__RotateAbsolute_GetResult_Request__destroy(turtlesim__action__RotateAbsolute_GetResult_Request * msg)
{
  if (msg) {
    turtlesim__action__RotateAbsolute_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
turtlesim__action__RotateAbsolute_GetResult_Request__Sequence__init(turtlesim__action__RotateAbsolute_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtlesim__action__RotateAbsolute_GetResult_Request * data = NULL;
  if (size) {
    data = (turtlesim__action__RotateAbsolute_GetResult_Request *)calloc(size, sizeof(turtlesim__action__RotateAbsolute_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim__action__RotateAbsolute_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim__action__RotateAbsolute_GetResult_Request__fini(&data[i - 1]);
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
turtlesim__action__RotateAbsolute_GetResult_Request__Sequence__fini(turtlesim__action__RotateAbsolute_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtlesim__action__RotateAbsolute_GetResult_Request__fini(&array->data[i]);
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

turtlesim__action__RotateAbsolute_GetResult_Request__Sequence *
turtlesim__action__RotateAbsolute_GetResult_Request__Sequence__create(size_t size)
{
  turtlesim__action__RotateAbsolute_GetResult_Request__Sequence * array = (turtlesim__action__RotateAbsolute_GetResult_Request__Sequence *)malloc(sizeof(turtlesim__action__RotateAbsolute_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtlesim__action__RotateAbsolute_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtlesim__action__RotateAbsolute_GetResult_Request__Sequence__destroy(turtlesim__action__RotateAbsolute_GetResult_Request__Sequence * array)
{
  if (array) {
    turtlesim__action__RotateAbsolute_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "turtlesim/action/detail/rotate_absolute__functions.h"

bool
turtlesim__action__RotateAbsolute_GetResult_Response__init(turtlesim__action__RotateAbsolute_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!turtlesim__action__RotateAbsolute_Result__init(&msg->result)) {
    turtlesim__action__RotateAbsolute_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
turtlesim__action__RotateAbsolute_GetResult_Response__fini(turtlesim__action__RotateAbsolute_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  turtlesim__action__RotateAbsolute_Result__fini(&msg->result);
}

turtlesim__action__RotateAbsolute_GetResult_Response *
turtlesim__action__RotateAbsolute_GetResult_Response__create()
{
  turtlesim__action__RotateAbsolute_GetResult_Response * msg = (turtlesim__action__RotateAbsolute_GetResult_Response *)malloc(sizeof(turtlesim__action__RotateAbsolute_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim__action__RotateAbsolute_GetResult_Response));
  bool success = turtlesim__action__RotateAbsolute_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtlesim__action__RotateAbsolute_GetResult_Response__destroy(turtlesim__action__RotateAbsolute_GetResult_Response * msg)
{
  if (msg) {
    turtlesim__action__RotateAbsolute_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
turtlesim__action__RotateAbsolute_GetResult_Response__Sequence__init(turtlesim__action__RotateAbsolute_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtlesim__action__RotateAbsolute_GetResult_Response * data = NULL;
  if (size) {
    data = (turtlesim__action__RotateAbsolute_GetResult_Response *)calloc(size, sizeof(turtlesim__action__RotateAbsolute_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim__action__RotateAbsolute_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim__action__RotateAbsolute_GetResult_Response__fini(&data[i - 1]);
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
turtlesim__action__RotateAbsolute_GetResult_Response__Sequence__fini(turtlesim__action__RotateAbsolute_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtlesim__action__RotateAbsolute_GetResult_Response__fini(&array->data[i]);
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

turtlesim__action__RotateAbsolute_GetResult_Response__Sequence *
turtlesim__action__RotateAbsolute_GetResult_Response__Sequence__create(size_t size)
{
  turtlesim__action__RotateAbsolute_GetResult_Response__Sequence * array = (turtlesim__action__RotateAbsolute_GetResult_Response__Sequence *)malloc(sizeof(turtlesim__action__RotateAbsolute_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtlesim__action__RotateAbsolute_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtlesim__action__RotateAbsolute_GetResult_Response__Sequence__destroy(turtlesim__action__RotateAbsolute_GetResult_Response__Sequence * array)
{
  if (array) {
    turtlesim__action__RotateAbsolute_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "turtlesim/action/detail/rotate_absolute__functions.h"

bool
turtlesim__action__RotateAbsolute_FeedbackMessage__init(turtlesim__action__RotateAbsolute_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    turtlesim__action__RotateAbsolute_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!turtlesim__action__RotateAbsolute_Feedback__init(&msg->feedback)) {
    turtlesim__action__RotateAbsolute_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
turtlesim__action__RotateAbsolute_FeedbackMessage__fini(turtlesim__action__RotateAbsolute_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  turtlesim__action__RotateAbsolute_Feedback__fini(&msg->feedback);
}

turtlesim__action__RotateAbsolute_FeedbackMessage *
turtlesim__action__RotateAbsolute_FeedbackMessage__create()
{
  turtlesim__action__RotateAbsolute_FeedbackMessage * msg = (turtlesim__action__RotateAbsolute_FeedbackMessage *)malloc(sizeof(turtlesim__action__RotateAbsolute_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim__action__RotateAbsolute_FeedbackMessage));
  bool success = turtlesim__action__RotateAbsolute_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtlesim__action__RotateAbsolute_FeedbackMessage__destroy(turtlesim__action__RotateAbsolute_FeedbackMessage * msg)
{
  if (msg) {
    turtlesim__action__RotateAbsolute_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
turtlesim__action__RotateAbsolute_FeedbackMessage__Sequence__init(turtlesim__action__RotateAbsolute_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtlesim__action__RotateAbsolute_FeedbackMessage * data = NULL;
  if (size) {
    data = (turtlesim__action__RotateAbsolute_FeedbackMessage *)calloc(size, sizeof(turtlesim__action__RotateAbsolute_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim__action__RotateAbsolute_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim__action__RotateAbsolute_FeedbackMessage__fini(&data[i - 1]);
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
turtlesim__action__RotateAbsolute_FeedbackMessage__Sequence__fini(turtlesim__action__RotateAbsolute_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtlesim__action__RotateAbsolute_FeedbackMessage__fini(&array->data[i]);
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

turtlesim__action__RotateAbsolute_FeedbackMessage__Sequence *
turtlesim__action__RotateAbsolute_FeedbackMessage__Sequence__create(size_t size)
{
  turtlesim__action__RotateAbsolute_FeedbackMessage__Sequence * array = (turtlesim__action__RotateAbsolute_FeedbackMessage__Sequence *)malloc(sizeof(turtlesim__action__RotateAbsolute_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtlesim__action__RotateAbsolute_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtlesim__action__RotateAbsolute_FeedbackMessage__Sequence__destroy(turtlesim__action__RotateAbsolute_FeedbackMessage__Sequence * array)
{
  if (array) {
    turtlesim__action__RotateAbsolute_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
