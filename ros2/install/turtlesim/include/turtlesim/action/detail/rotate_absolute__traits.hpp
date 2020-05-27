// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim:action/RotateAbsolute.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__ACTION__DETAIL__ROTATE_ABSOLUTE__TRAITS_HPP_
#define TURTLESIM__ACTION__DETAIL__ROTATE_ABSOLUTE__TRAITS_HPP_

#include "turtlesim/action/detail/rotate_absolute__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::action::RotateAbsolute_Goal>()
{
  return "turtlesim::action::RotateAbsolute_Goal";
}

template<>
struct has_fixed_size<turtlesim::action::RotateAbsolute_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim::action::RotateAbsolute_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim::action::RotateAbsolute_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::action::RotateAbsolute_Result>()
{
  return "turtlesim::action::RotateAbsolute_Result";
}

template<>
struct has_fixed_size<turtlesim::action::RotateAbsolute_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim::action::RotateAbsolute_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim::action::RotateAbsolute_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::action::RotateAbsolute_Feedback>()
{
  return "turtlesim::action::RotateAbsolute_Feedback";
}

template<>
struct has_fixed_size<turtlesim::action::RotateAbsolute_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim::action::RotateAbsolute_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim::action::RotateAbsolute_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "turtlesim/action/detail/rotate_absolute__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::action::RotateAbsolute_SendGoal_Request>()
{
  return "turtlesim::action::RotateAbsolute_SendGoal_Request";
}

template<>
struct has_fixed_size<turtlesim::action::RotateAbsolute_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<turtlesim::action::RotateAbsolute_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<turtlesim::action::RotateAbsolute_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<turtlesim::action::RotateAbsolute_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<turtlesim::action::RotateAbsolute_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::action::RotateAbsolute_SendGoal_Response>()
{
  return "turtlesim::action::RotateAbsolute_SendGoal_Response";
}

template<>
struct has_fixed_size<turtlesim::action::RotateAbsolute_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<turtlesim::action::RotateAbsolute_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<turtlesim::action::RotateAbsolute_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::action::RotateAbsolute_SendGoal>()
{
  return "turtlesim::action::RotateAbsolute_SendGoal";
}

template<>
struct has_fixed_size<turtlesim::action::RotateAbsolute_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<turtlesim::action::RotateAbsolute_SendGoal_Request>::value &&
    has_fixed_size<turtlesim::action::RotateAbsolute_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtlesim::action::RotateAbsolute_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<turtlesim::action::RotateAbsolute_SendGoal_Request>::value &&
    has_bounded_size<turtlesim::action::RotateAbsolute_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<turtlesim::action::RotateAbsolute_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<turtlesim::action::RotateAbsolute_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtlesim::action::RotateAbsolute_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::action::RotateAbsolute_GetResult_Request>()
{
  return "turtlesim::action::RotateAbsolute_GetResult_Request";
}

template<>
struct has_fixed_size<turtlesim::action::RotateAbsolute_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<turtlesim::action::RotateAbsolute_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<turtlesim::action::RotateAbsolute_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "turtlesim/action/detail/rotate_absolute__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::action::RotateAbsolute_GetResult_Response>()
{
  return "turtlesim::action::RotateAbsolute_GetResult_Response";
}

template<>
struct has_fixed_size<turtlesim::action::RotateAbsolute_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<turtlesim::action::RotateAbsolute_Result>::value> {};

template<>
struct has_bounded_size<turtlesim::action::RotateAbsolute_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<turtlesim::action::RotateAbsolute_Result>::value> {};

template<>
struct is_message<turtlesim::action::RotateAbsolute_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::action::RotateAbsolute_GetResult>()
{
  return "turtlesim::action::RotateAbsolute_GetResult";
}

template<>
struct has_fixed_size<turtlesim::action::RotateAbsolute_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<turtlesim::action::RotateAbsolute_GetResult_Request>::value &&
    has_fixed_size<turtlesim::action::RotateAbsolute_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtlesim::action::RotateAbsolute_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<turtlesim::action::RotateAbsolute_GetResult_Request>::value &&
    has_bounded_size<turtlesim::action::RotateAbsolute_GetResult_Response>::value
  >
{
};

template<>
struct is_service<turtlesim::action::RotateAbsolute_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<turtlesim::action::RotateAbsolute_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtlesim::action::RotateAbsolute_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "turtlesim/action/detail/rotate_absolute__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::action::RotateAbsolute_FeedbackMessage>()
{
  return "turtlesim::action::RotateAbsolute_FeedbackMessage";
}

template<>
struct has_fixed_size<turtlesim::action::RotateAbsolute_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<turtlesim::action::RotateAbsolute_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<turtlesim::action::RotateAbsolute_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<turtlesim::action::RotateAbsolute_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<turtlesim::action::RotateAbsolute_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<turtlesim::action::RotateAbsolute>
  : std::true_type
{
};

template<>
struct is_action_goal<turtlesim::action::RotateAbsolute_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<turtlesim::action::RotateAbsolute_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<turtlesim::action::RotateAbsolute_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // TURTLESIM__ACTION__DETAIL__ROTATE_ABSOLUTE__TRAITS_HPP_
