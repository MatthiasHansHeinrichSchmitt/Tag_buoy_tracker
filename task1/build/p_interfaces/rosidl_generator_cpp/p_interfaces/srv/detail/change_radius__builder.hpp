// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from p_interfaces:srv/ChangeRadius.idl
// generated code does not contain a copyright notice

#ifndef P_INTERFACES__SRV__DETAIL__CHANGE_RADIUS__BUILDER_HPP_
#define P_INTERFACES__SRV__DETAIL__CHANGE_RADIUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "p_interfaces/srv/detail/change_radius__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace p_interfaces
{

namespace srv
{

namespace builder
{

class Init_ChangeRadius_Request_radius
{
public:
  Init_ChangeRadius_Request_radius()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::p_interfaces::srv::ChangeRadius_Request radius(::p_interfaces::srv::ChangeRadius_Request::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::p_interfaces::srv::ChangeRadius_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::p_interfaces::srv::ChangeRadius_Request>()
{
  return p_interfaces::srv::builder::Init_ChangeRadius_Request_radius();
}

}  // namespace p_interfaces


namespace p_interfaces
{

namespace srv
{

namespace builder
{

class Init_ChangeRadius_Response_linear_velocity
{
public:
  explicit Init_ChangeRadius_Response_linear_velocity(::p_interfaces::srv::ChangeRadius_Response & msg)
  : msg_(msg)
  {}
  ::p_interfaces::srv::ChangeRadius_Response linear_velocity(::p_interfaces::srv::ChangeRadius_Response::_linear_velocity_type arg)
  {
    msg_.linear_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::p_interfaces::srv::ChangeRadius_Response msg_;
};

class Init_ChangeRadius_Response_radius_changed
{
public:
  Init_ChangeRadius_Response_radius_changed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChangeRadius_Response_linear_velocity radius_changed(::p_interfaces::srv::ChangeRadius_Response::_radius_changed_type arg)
  {
    msg_.radius_changed = std::move(arg);
    return Init_ChangeRadius_Response_linear_velocity(msg_);
  }

private:
  ::p_interfaces::srv::ChangeRadius_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::p_interfaces::srv::ChangeRadius_Response>()
{
  return p_interfaces::srv::builder::Init_ChangeRadius_Response_radius_changed();
}

}  // namespace p_interfaces

#endif  // P_INTERFACES__SRV__DETAIL__CHANGE_RADIUS__BUILDER_HPP_
