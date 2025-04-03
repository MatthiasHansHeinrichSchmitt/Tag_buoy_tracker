// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from p_interfaces:srv/ChangeRadius.idl
// generated code does not contain a copyright notice

#ifndef P_INTERFACES__SRV__DETAIL__CHANGE_RADIUS__TRAITS_HPP_
#define P_INTERFACES__SRV__DETAIL__CHANGE_RADIUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "p_interfaces/srv/detail/change_radius__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace p_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ChangeRadius_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: radius
  {
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChangeRadius_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChangeRadius_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace p_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use p_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const p_interfaces::srv::ChangeRadius_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  p_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use p_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const p_interfaces::srv::ChangeRadius_Request & msg)
{
  return p_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<p_interfaces::srv::ChangeRadius_Request>()
{
  return "p_interfaces::srv::ChangeRadius_Request";
}

template<>
inline const char * name<p_interfaces::srv::ChangeRadius_Request>()
{
  return "p_interfaces/srv/ChangeRadius_Request";
}

template<>
struct has_fixed_size<p_interfaces::srv::ChangeRadius_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<p_interfaces::srv::ChangeRadius_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<p_interfaces::srv::ChangeRadius_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'linear_velocity'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace p_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ChangeRadius_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: radius_changed
  {
    out << "radius_changed: ";
    rosidl_generator_traits::value_to_yaml(msg.radius_changed, out);
    out << ", ";
  }

  // member: linear_velocity
  {
    out << "linear_velocity: ";
    to_flow_style_yaml(msg.linear_velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChangeRadius_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: radius_changed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius_changed: ";
    rosidl_generator_traits::value_to_yaml(msg.radius_changed, out);
    out << "\n";
  }

  // member: linear_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_velocity:\n";
    to_block_style_yaml(msg.linear_velocity, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChangeRadius_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace p_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use p_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const p_interfaces::srv::ChangeRadius_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  p_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use p_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const p_interfaces::srv::ChangeRadius_Response & msg)
{
  return p_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<p_interfaces::srv::ChangeRadius_Response>()
{
  return "p_interfaces::srv::ChangeRadius_Response";
}

template<>
inline const char * name<p_interfaces::srv::ChangeRadius_Response>()
{
  return "p_interfaces/srv/ChangeRadius_Response";
}

template<>
struct has_fixed_size<p_interfaces::srv::ChangeRadius_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<p_interfaces::srv::ChangeRadius_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<p_interfaces::srv::ChangeRadius_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<p_interfaces::srv::ChangeRadius>()
{
  return "p_interfaces::srv::ChangeRadius";
}

template<>
inline const char * name<p_interfaces::srv::ChangeRadius>()
{
  return "p_interfaces/srv/ChangeRadius";
}

template<>
struct has_fixed_size<p_interfaces::srv::ChangeRadius>
  : std::integral_constant<
    bool,
    has_fixed_size<p_interfaces::srv::ChangeRadius_Request>::value &&
    has_fixed_size<p_interfaces::srv::ChangeRadius_Response>::value
  >
{
};

template<>
struct has_bounded_size<p_interfaces::srv::ChangeRadius>
  : std::integral_constant<
    bool,
    has_bounded_size<p_interfaces::srv::ChangeRadius_Request>::value &&
    has_bounded_size<p_interfaces::srv::ChangeRadius_Response>::value
  >
{
};

template<>
struct is_service<p_interfaces::srv::ChangeRadius>
  : std::true_type
{
};

template<>
struct is_service_request<p_interfaces::srv::ChangeRadius_Request>
  : std::true_type
{
};

template<>
struct is_service_response<p_interfaces::srv::ChangeRadius_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // P_INTERFACES__SRV__DETAIL__CHANGE_RADIUS__TRAITS_HPP_
