// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from turtlesim:action/RotateAbsolute.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "turtlesim/action/detail/rotate_absolute__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/type_support_map.h"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace turtlesim
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RotateAbsolute_Goal_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _RotateAbsolute_Goal_type_support_ids_t;

static const _RotateAbsolute_Goal_type_support_ids_t _RotateAbsolute_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_cpp",  // ::rosidl_typesupport_connext_cpp::typesupport_identifier,
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RotateAbsolute_Goal_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _RotateAbsolute_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RotateAbsolute_Goal_type_support_symbol_names_t _RotateAbsolute_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, turtlesim, action, RotateAbsolute_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlesim, action, RotateAbsolute_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlesim, action, RotateAbsolute_Goal)),
  }
};

typedef struct _RotateAbsolute_Goal_type_support_data_t
{
  void * data[3];
} _RotateAbsolute_Goal_type_support_data_t;

static _RotateAbsolute_Goal_type_support_data_t _RotateAbsolute_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RotateAbsolute_Goal_message_typesupport_map = {
  3,
  "turtlesim",
  &_RotateAbsolute_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_RotateAbsolute_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_RotateAbsolute_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RotateAbsolute_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RotateAbsolute_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace turtlesim

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::action::RotateAbsolute_Goal>()
{
  return &::turtlesim::action::rosidl_typesupport_cpp::RotateAbsolute_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtlesim, action, RotateAbsolute_Goal)() {
  return get_message_type_support_handle<turtlesim::action::RotateAbsolute_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlesim
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RotateAbsolute_Result_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _RotateAbsolute_Result_type_support_ids_t;

static const _RotateAbsolute_Result_type_support_ids_t _RotateAbsolute_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_cpp",  // ::rosidl_typesupport_connext_cpp::typesupport_identifier,
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RotateAbsolute_Result_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _RotateAbsolute_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RotateAbsolute_Result_type_support_symbol_names_t _RotateAbsolute_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, turtlesim, action, RotateAbsolute_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlesim, action, RotateAbsolute_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlesim, action, RotateAbsolute_Result)),
  }
};

typedef struct _RotateAbsolute_Result_type_support_data_t
{
  void * data[3];
} _RotateAbsolute_Result_type_support_data_t;

static _RotateAbsolute_Result_type_support_data_t _RotateAbsolute_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RotateAbsolute_Result_message_typesupport_map = {
  3,
  "turtlesim",
  &_RotateAbsolute_Result_message_typesupport_ids.typesupport_identifier[0],
  &_RotateAbsolute_Result_message_typesupport_symbol_names.symbol_name[0],
  &_RotateAbsolute_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RotateAbsolute_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RotateAbsolute_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace turtlesim

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::action::RotateAbsolute_Result>()
{
  return &::turtlesim::action::rosidl_typesupport_cpp::RotateAbsolute_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtlesim, action, RotateAbsolute_Result)() {
  return get_message_type_support_handle<turtlesim::action::RotateAbsolute_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlesim
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RotateAbsolute_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _RotateAbsolute_Feedback_type_support_ids_t;

static const _RotateAbsolute_Feedback_type_support_ids_t _RotateAbsolute_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_cpp",  // ::rosidl_typesupport_connext_cpp::typesupport_identifier,
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RotateAbsolute_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _RotateAbsolute_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RotateAbsolute_Feedback_type_support_symbol_names_t _RotateAbsolute_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, turtlesim, action, RotateAbsolute_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlesim, action, RotateAbsolute_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlesim, action, RotateAbsolute_Feedback)),
  }
};

typedef struct _RotateAbsolute_Feedback_type_support_data_t
{
  void * data[3];
} _RotateAbsolute_Feedback_type_support_data_t;

static _RotateAbsolute_Feedback_type_support_data_t _RotateAbsolute_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RotateAbsolute_Feedback_message_typesupport_map = {
  3,
  "turtlesim",
  &_RotateAbsolute_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_RotateAbsolute_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_RotateAbsolute_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RotateAbsolute_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RotateAbsolute_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace turtlesim

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::action::RotateAbsolute_Feedback>()
{
  return &::turtlesim::action::rosidl_typesupport_cpp::RotateAbsolute_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtlesim, action, RotateAbsolute_Feedback)() {
  return get_message_type_support_handle<turtlesim::action::RotateAbsolute_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlesim
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RotateAbsolute_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _RotateAbsolute_SendGoal_Request_type_support_ids_t;

static const _RotateAbsolute_SendGoal_Request_type_support_ids_t _RotateAbsolute_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_cpp",  // ::rosidl_typesupport_connext_cpp::typesupport_identifier,
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RotateAbsolute_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _RotateAbsolute_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RotateAbsolute_SendGoal_Request_type_support_symbol_names_t _RotateAbsolute_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, turtlesim, action, RotateAbsolute_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlesim, action, RotateAbsolute_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlesim, action, RotateAbsolute_SendGoal_Request)),
  }
};

typedef struct _RotateAbsolute_SendGoal_Request_type_support_data_t
{
  void * data[3];
} _RotateAbsolute_SendGoal_Request_type_support_data_t;

static _RotateAbsolute_SendGoal_Request_type_support_data_t _RotateAbsolute_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RotateAbsolute_SendGoal_Request_message_typesupport_map = {
  3,
  "turtlesim",
  &_RotateAbsolute_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RotateAbsolute_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RotateAbsolute_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RotateAbsolute_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RotateAbsolute_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace turtlesim

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::action::RotateAbsolute_SendGoal_Request>()
{
  return &::turtlesim::action::rosidl_typesupport_cpp::RotateAbsolute_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtlesim, action, RotateAbsolute_SendGoal_Request)() {
  return get_message_type_support_handle<turtlesim::action::RotateAbsolute_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlesim
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RotateAbsolute_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _RotateAbsolute_SendGoal_Response_type_support_ids_t;

static const _RotateAbsolute_SendGoal_Response_type_support_ids_t _RotateAbsolute_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_cpp",  // ::rosidl_typesupport_connext_cpp::typesupport_identifier,
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RotateAbsolute_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _RotateAbsolute_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RotateAbsolute_SendGoal_Response_type_support_symbol_names_t _RotateAbsolute_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, turtlesim, action, RotateAbsolute_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlesim, action, RotateAbsolute_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlesim, action, RotateAbsolute_SendGoal_Response)),
  }
};

typedef struct _RotateAbsolute_SendGoal_Response_type_support_data_t
{
  void * data[3];
} _RotateAbsolute_SendGoal_Response_type_support_data_t;

static _RotateAbsolute_SendGoal_Response_type_support_data_t _RotateAbsolute_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RotateAbsolute_SendGoal_Response_message_typesupport_map = {
  3,
  "turtlesim",
  &_RotateAbsolute_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RotateAbsolute_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RotateAbsolute_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RotateAbsolute_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RotateAbsolute_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace turtlesim

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::action::RotateAbsolute_SendGoal_Response>()
{
  return &::turtlesim::action::rosidl_typesupport_cpp::RotateAbsolute_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtlesim, action, RotateAbsolute_SendGoal_Response)() {
  return get_message_type_support_handle<turtlesim::action::RotateAbsolute_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlesim
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RotateAbsolute_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _RotateAbsolute_SendGoal_type_support_ids_t;

static const _RotateAbsolute_SendGoal_type_support_ids_t _RotateAbsolute_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_connext_cpp",  // ::rosidl_typesupport_connext_cpp::typesupport_identifier,
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RotateAbsolute_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _RotateAbsolute_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RotateAbsolute_SendGoal_type_support_symbol_names_t _RotateAbsolute_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, turtlesim, action, RotateAbsolute_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlesim, action, RotateAbsolute_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlesim, action, RotateAbsolute_SendGoal)),
  }
};

typedef struct _RotateAbsolute_SendGoal_type_support_data_t
{
  void * data[3];
} _RotateAbsolute_SendGoal_type_support_data_t;

static _RotateAbsolute_SendGoal_type_support_data_t _RotateAbsolute_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RotateAbsolute_SendGoal_service_typesupport_map = {
  3,
  "turtlesim",
  &_RotateAbsolute_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_RotateAbsolute_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_RotateAbsolute_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RotateAbsolute_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RotateAbsolute_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace turtlesim

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<turtlesim::action::RotateAbsolute_SendGoal>()
{
  return &::turtlesim::action::rosidl_typesupport_cpp::RotateAbsolute_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlesim
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RotateAbsolute_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _RotateAbsolute_GetResult_Request_type_support_ids_t;

static const _RotateAbsolute_GetResult_Request_type_support_ids_t _RotateAbsolute_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_cpp",  // ::rosidl_typesupport_connext_cpp::typesupport_identifier,
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RotateAbsolute_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _RotateAbsolute_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RotateAbsolute_GetResult_Request_type_support_symbol_names_t _RotateAbsolute_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, turtlesim, action, RotateAbsolute_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlesim, action, RotateAbsolute_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlesim, action, RotateAbsolute_GetResult_Request)),
  }
};

typedef struct _RotateAbsolute_GetResult_Request_type_support_data_t
{
  void * data[3];
} _RotateAbsolute_GetResult_Request_type_support_data_t;

static _RotateAbsolute_GetResult_Request_type_support_data_t _RotateAbsolute_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RotateAbsolute_GetResult_Request_message_typesupport_map = {
  3,
  "turtlesim",
  &_RotateAbsolute_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RotateAbsolute_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RotateAbsolute_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RotateAbsolute_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RotateAbsolute_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace turtlesim

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::action::RotateAbsolute_GetResult_Request>()
{
  return &::turtlesim::action::rosidl_typesupport_cpp::RotateAbsolute_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtlesim, action, RotateAbsolute_GetResult_Request)() {
  return get_message_type_support_handle<turtlesim::action::RotateAbsolute_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlesim
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RotateAbsolute_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _RotateAbsolute_GetResult_Response_type_support_ids_t;

static const _RotateAbsolute_GetResult_Response_type_support_ids_t _RotateAbsolute_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_cpp",  // ::rosidl_typesupport_connext_cpp::typesupport_identifier,
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RotateAbsolute_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _RotateAbsolute_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RotateAbsolute_GetResult_Response_type_support_symbol_names_t _RotateAbsolute_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, turtlesim, action, RotateAbsolute_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlesim, action, RotateAbsolute_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlesim, action, RotateAbsolute_GetResult_Response)),
  }
};

typedef struct _RotateAbsolute_GetResult_Response_type_support_data_t
{
  void * data[3];
} _RotateAbsolute_GetResult_Response_type_support_data_t;

static _RotateAbsolute_GetResult_Response_type_support_data_t _RotateAbsolute_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RotateAbsolute_GetResult_Response_message_typesupport_map = {
  3,
  "turtlesim",
  &_RotateAbsolute_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RotateAbsolute_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RotateAbsolute_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RotateAbsolute_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RotateAbsolute_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace turtlesim

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::action::RotateAbsolute_GetResult_Response>()
{
  return &::turtlesim::action::rosidl_typesupport_cpp::RotateAbsolute_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtlesim, action, RotateAbsolute_GetResult_Response)() {
  return get_message_type_support_handle<turtlesim::action::RotateAbsolute_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlesim
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RotateAbsolute_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _RotateAbsolute_GetResult_type_support_ids_t;

static const _RotateAbsolute_GetResult_type_support_ids_t _RotateAbsolute_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_connext_cpp",  // ::rosidl_typesupport_connext_cpp::typesupport_identifier,
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RotateAbsolute_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _RotateAbsolute_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RotateAbsolute_GetResult_type_support_symbol_names_t _RotateAbsolute_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, turtlesim, action, RotateAbsolute_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlesim, action, RotateAbsolute_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlesim, action, RotateAbsolute_GetResult)),
  }
};

typedef struct _RotateAbsolute_GetResult_type_support_data_t
{
  void * data[3];
} _RotateAbsolute_GetResult_type_support_data_t;

static _RotateAbsolute_GetResult_type_support_data_t _RotateAbsolute_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RotateAbsolute_GetResult_service_typesupport_map = {
  3,
  "turtlesim",
  &_RotateAbsolute_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_RotateAbsolute_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_RotateAbsolute_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RotateAbsolute_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RotateAbsolute_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace turtlesim

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<turtlesim::action::RotateAbsolute_GetResult>()
{
  return &::turtlesim::action::rosidl_typesupport_cpp::RotateAbsolute_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlesim
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RotateAbsolute_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _RotateAbsolute_FeedbackMessage_type_support_ids_t;

static const _RotateAbsolute_FeedbackMessage_type_support_ids_t _RotateAbsolute_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_cpp",  // ::rosidl_typesupport_connext_cpp::typesupport_identifier,
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RotateAbsolute_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _RotateAbsolute_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RotateAbsolute_FeedbackMessage_type_support_symbol_names_t _RotateAbsolute_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, turtlesim, action, RotateAbsolute_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlesim, action, RotateAbsolute_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlesim, action, RotateAbsolute_FeedbackMessage)),
  }
};

typedef struct _RotateAbsolute_FeedbackMessage_type_support_data_t
{
  void * data[3];
} _RotateAbsolute_FeedbackMessage_type_support_data_t;

static _RotateAbsolute_FeedbackMessage_type_support_data_t _RotateAbsolute_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RotateAbsolute_FeedbackMessage_message_typesupport_map = {
  3,
  "turtlesim",
  &_RotateAbsolute_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_RotateAbsolute_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_RotateAbsolute_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RotateAbsolute_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RotateAbsolute_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace turtlesim

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::action::RotateAbsolute_FeedbackMessage>()
{
  return &::turtlesim::action::rosidl_typesupport_cpp::RotateAbsolute_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtlesim, action, RotateAbsolute_FeedbackMessage)() {
  return get_message_type_support_handle<turtlesim::action::RotateAbsolute_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace turtlesim
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t RotateAbsolute_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace turtlesim

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<turtlesim::action::RotateAbsolute>()
{
  using ::turtlesim::action::rosidl_typesupport_cpp::RotateAbsolute_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  RotateAbsolute_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::turtlesim::action::RotateAbsolute::Impl::SendGoalService>();
  RotateAbsolute_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::turtlesim::action::RotateAbsolute::Impl::GetResultService>();
  RotateAbsolute_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::turtlesim::action::RotateAbsolute::Impl::CancelGoalService>();
  RotateAbsolute_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::turtlesim::action::RotateAbsolute::Impl::FeedbackMessage>();
  RotateAbsolute_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::turtlesim::action::RotateAbsolute::Impl::GoalStatusMessage>();
  return &RotateAbsolute_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
