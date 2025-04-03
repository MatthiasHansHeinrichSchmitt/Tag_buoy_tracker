// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from p_action_interfaces:action/GoToPoint.idl
// generated code does not contain a copyright notice

#ifndef P_ACTION_INTERFACES__ACTION__DETAIL__GO_TO_POINT__BUILDER_HPP_
#define P_ACTION_INTERFACES__ACTION__DETAIL__GO_TO_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "p_action_interfaces/action/detail/go_to_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace p_action_interfaces
{

namespace action
{

namespace builder
{

class Init_GoToPoint_Goal_y
{
public:
  explicit Init_GoToPoint_Goal_y(::p_action_interfaces::action::GoToPoint_Goal & msg)
  : msg_(msg)
  {}
  ::p_action_interfaces::action::GoToPoint_Goal y(::p_action_interfaces::action::GoToPoint_Goal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::p_action_interfaces::action::GoToPoint_Goal msg_;
};

class Init_GoToPoint_Goal_x
{
public:
  Init_GoToPoint_Goal_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPoint_Goal_y x(::p_action_interfaces::action::GoToPoint_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GoToPoint_Goal_y(msg_);
  }

private:
  ::p_action_interfaces::action::GoToPoint_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::p_action_interfaces::action::GoToPoint_Goal>()
{
  return p_action_interfaces::action::builder::Init_GoToPoint_Goal_x();
}

}  // namespace p_action_interfaces


namespace p_action_interfaces
{

namespace action
{

namespace builder
{

class Init_GoToPoint_Result_success
{
public:
  Init_GoToPoint_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::p_action_interfaces::action::GoToPoint_Result success(::p_action_interfaces::action::GoToPoint_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::p_action_interfaces::action::GoToPoint_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::p_action_interfaces::action::GoToPoint_Result>()
{
  return p_action_interfaces::action::builder::Init_GoToPoint_Result_success();
}

}  // namespace p_action_interfaces


namespace p_action_interfaces
{

namespace action
{

namespace builder
{

class Init_GoToPoint_Feedback_pose
{
public:
  Init_GoToPoint_Feedback_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::p_action_interfaces::action::GoToPoint_Feedback pose(::p_action_interfaces::action::GoToPoint_Feedback::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::p_action_interfaces::action::GoToPoint_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::p_action_interfaces::action::GoToPoint_Feedback>()
{
  return p_action_interfaces::action::builder::Init_GoToPoint_Feedback_pose();
}

}  // namespace p_action_interfaces


namespace p_action_interfaces
{

namespace action
{

namespace builder
{

class Init_GoToPoint_SendGoal_Request_goal
{
public:
  explicit Init_GoToPoint_SendGoal_Request_goal(::p_action_interfaces::action::GoToPoint_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::p_action_interfaces::action::GoToPoint_SendGoal_Request goal(::p_action_interfaces::action::GoToPoint_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::p_action_interfaces::action::GoToPoint_SendGoal_Request msg_;
};

class Init_GoToPoint_SendGoal_Request_goal_id
{
public:
  Init_GoToPoint_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPoint_SendGoal_Request_goal goal_id(::p_action_interfaces::action::GoToPoint_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GoToPoint_SendGoal_Request_goal(msg_);
  }

private:
  ::p_action_interfaces::action::GoToPoint_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::p_action_interfaces::action::GoToPoint_SendGoal_Request>()
{
  return p_action_interfaces::action::builder::Init_GoToPoint_SendGoal_Request_goal_id();
}

}  // namespace p_action_interfaces


namespace p_action_interfaces
{

namespace action
{

namespace builder
{

class Init_GoToPoint_SendGoal_Response_stamp
{
public:
  explicit Init_GoToPoint_SendGoal_Response_stamp(::p_action_interfaces::action::GoToPoint_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::p_action_interfaces::action::GoToPoint_SendGoal_Response stamp(::p_action_interfaces::action::GoToPoint_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::p_action_interfaces::action::GoToPoint_SendGoal_Response msg_;
};

class Init_GoToPoint_SendGoal_Response_accepted
{
public:
  Init_GoToPoint_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPoint_SendGoal_Response_stamp accepted(::p_action_interfaces::action::GoToPoint_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_GoToPoint_SendGoal_Response_stamp(msg_);
  }

private:
  ::p_action_interfaces::action::GoToPoint_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::p_action_interfaces::action::GoToPoint_SendGoal_Response>()
{
  return p_action_interfaces::action::builder::Init_GoToPoint_SendGoal_Response_accepted();
}

}  // namespace p_action_interfaces


namespace p_action_interfaces
{

namespace action
{

namespace builder
{

class Init_GoToPoint_GetResult_Request_goal_id
{
public:
  Init_GoToPoint_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::p_action_interfaces::action::GoToPoint_GetResult_Request goal_id(::p_action_interfaces::action::GoToPoint_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::p_action_interfaces::action::GoToPoint_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::p_action_interfaces::action::GoToPoint_GetResult_Request>()
{
  return p_action_interfaces::action::builder::Init_GoToPoint_GetResult_Request_goal_id();
}

}  // namespace p_action_interfaces


namespace p_action_interfaces
{

namespace action
{

namespace builder
{

class Init_GoToPoint_GetResult_Response_result
{
public:
  explicit Init_GoToPoint_GetResult_Response_result(::p_action_interfaces::action::GoToPoint_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::p_action_interfaces::action::GoToPoint_GetResult_Response result(::p_action_interfaces::action::GoToPoint_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::p_action_interfaces::action::GoToPoint_GetResult_Response msg_;
};

class Init_GoToPoint_GetResult_Response_status
{
public:
  Init_GoToPoint_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPoint_GetResult_Response_result status(::p_action_interfaces::action::GoToPoint_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GoToPoint_GetResult_Response_result(msg_);
  }

private:
  ::p_action_interfaces::action::GoToPoint_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::p_action_interfaces::action::GoToPoint_GetResult_Response>()
{
  return p_action_interfaces::action::builder::Init_GoToPoint_GetResult_Response_status();
}

}  // namespace p_action_interfaces


namespace p_action_interfaces
{

namespace action
{

namespace builder
{

class Init_GoToPoint_FeedbackMessage_feedback
{
public:
  explicit Init_GoToPoint_FeedbackMessage_feedback(::p_action_interfaces::action::GoToPoint_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::p_action_interfaces::action::GoToPoint_FeedbackMessage feedback(::p_action_interfaces::action::GoToPoint_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::p_action_interfaces::action::GoToPoint_FeedbackMessage msg_;
};

class Init_GoToPoint_FeedbackMessage_goal_id
{
public:
  Init_GoToPoint_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPoint_FeedbackMessage_feedback goal_id(::p_action_interfaces::action::GoToPoint_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GoToPoint_FeedbackMessage_feedback(msg_);
  }

private:
  ::p_action_interfaces::action::GoToPoint_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::p_action_interfaces::action::GoToPoint_FeedbackMessage>()
{
  return p_action_interfaces::action::builder::Init_GoToPoint_FeedbackMessage_goal_id();
}

}  // namespace p_action_interfaces

#endif  // P_ACTION_INTERFACES__ACTION__DETAIL__GO_TO_POINT__BUILDER_HPP_
