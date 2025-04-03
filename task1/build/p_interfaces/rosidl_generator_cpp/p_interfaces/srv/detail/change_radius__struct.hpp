// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from p_interfaces:srv/ChangeRadius.idl
// generated code does not contain a copyright notice

#ifndef P_INTERFACES__SRV__DETAIL__CHANGE_RADIUS__STRUCT_HPP_
#define P_INTERFACES__SRV__DETAIL__CHANGE_RADIUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__p_interfaces__srv__ChangeRadius_Request __attribute__((deprecated))
#else
# define DEPRECATED__p_interfaces__srv__ChangeRadius_Request __declspec(deprecated)
#endif

namespace p_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChangeRadius_Request_
{
  using Type = ChangeRadius_Request_<ContainerAllocator>;

  explicit ChangeRadius_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radius = 0ll;
    }
  }

  explicit ChangeRadius_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radius = 0ll;
    }
  }

  // field types and members
  using _radius_type =
    int64_t;
  _radius_type radius;

  // setters for named parameter idiom
  Type & set__radius(
    const int64_t & _arg)
  {
    this->radius = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    p_interfaces::srv::ChangeRadius_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const p_interfaces::srv::ChangeRadius_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<p_interfaces::srv::ChangeRadius_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<p_interfaces::srv::ChangeRadius_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      p_interfaces::srv::ChangeRadius_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<p_interfaces::srv::ChangeRadius_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      p_interfaces::srv::ChangeRadius_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<p_interfaces::srv::ChangeRadius_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<p_interfaces::srv::ChangeRadius_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<p_interfaces::srv::ChangeRadius_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__p_interfaces__srv__ChangeRadius_Request
    std::shared_ptr<p_interfaces::srv::ChangeRadius_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__p_interfaces__srv__ChangeRadius_Request
    std::shared_ptr<p_interfaces::srv::ChangeRadius_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChangeRadius_Request_ & other) const
  {
    if (this->radius != other.radius) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChangeRadius_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChangeRadius_Request_

// alias to use template instance with default allocator
using ChangeRadius_Request =
  p_interfaces::srv::ChangeRadius_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace p_interfaces


// Include directives for member types
// Member 'linear_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__p_interfaces__srv__ChangeRadius_Response __attribute__((deprecated))
#else
# define DEPRECATED__p_interfaces__srv__ChangeRadius_Response __declspec(deprecated)
#endif

namespace p_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChangeRadius_Response_
{
  using Type = ChangeRadius_Response_<ContainerAllocator>;

  explicit ChangeRadius_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : linear_velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radius_changed = false;
    }
  }

  explicit ChangeRadius_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : linear_velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radius_changed = false;
    }
  }

  // field types and members
  using _radius_changed_type =
    bool;
  _radius_changed_type radius_changed;
  using _linear_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _linear_velocity_type linear_velocity;

  // setters for named parameter idiom
  Type & set__radius_changed(
    const bool & _arg)
  {
    this->radius_changed = _arg;
    return *this;
  }
  Type & set__linear_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->linear_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    p_interfaces::srv::ChangeRadius_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const p_interfaces::srv::ChangeRadius_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<p_interfaces::srv::ChangeRadius_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<p_interfaces::srv::ChangeRadius_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      p_interfaces::srv::ChangeRadius_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<p_interfaces::srv::ChangeRadius_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      p_interfaces::srv::ChangeRadius_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<p_interfaces::srv::ChangeRadius_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<p_interfaces::srv::ChangeRadius_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<p_interfaces::srv::ChangeRadius_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__p_interfaces__srv__ChangeRadius_Response
    std::shared_ptr<p_interfaces::srv::ChangeRadius_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__p_interfaces__srv__ChangeRadius_Response
    std::shared_ptr<p_interfaces::srv::ChangeRadius_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChangeRadius_Response_ & other) const
  {
    if (this->radius_changed != other.radius_changed) {
      return false;
    }
    if (this->linear_velocity != other.linear_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChangeRadius_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChangeRadius_Response_

// alias to use template instance with default allocator
using ChangeRadius_Response =
  p_interfaces::srv::ChangeRadius_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace p_interfaces

namespace p_interfaces
{

namespace srv
{

struct ChangeRadius
{
  using Request = p_interfaces::srv::ChangeRadius_Request;
  using Response = p_interfaces::srv::ChangeRadius_Response;
};

}  // namespace srv

}  // namespace p_interfaces

#endif  // P_INTERFACES__SRV__DETAIL__CHANGE_RADIUS__STRUCT_HPP_
