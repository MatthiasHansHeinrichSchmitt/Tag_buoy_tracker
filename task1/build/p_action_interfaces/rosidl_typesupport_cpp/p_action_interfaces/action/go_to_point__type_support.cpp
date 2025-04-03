// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from p_action_interfaces:action/GoToPoint.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "p_action_interfaces/action/detail/go_to_point__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace p_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoToPoint_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoint_Goal_type_support_ids_t;

static const _GoToPoint_Goal_type_support_ids_t _GoToPoint_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoToPoint_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPoint_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPoint_Goal_type_support_symbol_names_t _GoToPoint_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, p_action_interfaces, action, GoToPoint_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, p_action_interfaces, action, GoToPoint_Goal)),
  }
};

typedef struct _GoToPoint_Goal_type_support_data_t
{
  void * data[2];
} _GoToPoint_Goal_type_support_data_t;

static _GoToPoint_Goal_type_support_data_t _GoToPoint_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPoint_Goal_message_typesupport_map = {
  2,
  "p_action_interfaces",
  &_GoToPoint_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPoint_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPoint_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPoint_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoint_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace p_action_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<p_action_interfaces::action::GoToPoint_Goal>()
{
  return &::p_action_interfaces::action::rosidl_typesupport_cpp::GoToPoint_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, p_action_interfaces, action, GoToPoint_Goal)() {
  return get_message_type_support_handle<p_action_interfaces::action::GoToPoint_Goal>();
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
// #include "p_action_interfaces/action/detail/go_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace p_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoToPoint_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoint_Result_type_support_ids_t;

static const _GoToPoint_Result_type_support_ids_t _GoToPoint_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoToPoint_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPoint_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPoint_Result_type_support_symbol_names_t _GoToPoint_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, p_action_interfaces, action, GoToPoint_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, p_action_interfaces, action, GoToPoint_Result)),
  }
};

typedef struct _GoToPoint_Result_type_support_data_t
{
  void * data[2];
} _GoToPoint_Result_type_support_data_t;

static _GoToPoint_Result_type_support_data_t _GoToPoint_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPoint_Result_message_typesupport_map = {
  2,
  "p_action_interfaces",
  &_GoToPoint_Result_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPoint_Result_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPoint_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPoint_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoint_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace p_action_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<p_action_interfaces::action::GoToPoint_Result>()
{
  return &::p_action_interfaces::action::rosidl_typesupport_cpp::GoToPoint_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, p_action_interfaces, action, GoToPoint_Result)() {
  return get_message_type_support_handle<p_action_interfaces::action::GoToPoint_Result>();
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
// #include "p_action_interfaces/action/detail/go_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace p_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoToPoint_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoint_Feedback_type_support_ids_t;

static const _GoToPoint_Feedback_type_support_ids_t _GoToPoint_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoToPoint_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPoint_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPoint_Feedback_type_support_symbol_names_t _GoToPoint_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, p_action_interfaces, action, GoToPoint_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, p_action_interfaces, action, GoToPoint_Feedback)),
  }
};

typedef struct _GoToPoint_Feedback_type_support_data_t
{
  void * data[2];
} _GoToPoint_Feedback_type_support_data_t;

static _GoToPoint_Feedback_type_support_data_t _GoToPoint_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPoint_Feedback_message_typesupport_map = {
  2,
  "p_action_interfaces",
  &_GoToPoint_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPoint_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPoint_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPoint_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoint_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace p_action_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<p_action_interfaces::action::GoToPoint_Feedback>()
{
  return &::p_action_interfaces::action::rosidl_typesupport_cpp::GoToPoint_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, p_action_interfaces, action, GoToPoint_Feedback)() {
  return get_message_type_support_handle<p_action_interfaces::action::GoToPoint_Feedback>();
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
// #include "p_action_interfaces/action/detail/go_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace p_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoToPoint_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoint_SendGoal_Request_type_support_ids_t;

static const _GoToPoint_SendGoal_Request_type_support_ids_t _GoToPoint_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoToPoint_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPoint_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPoint_SendGoal_Request_type_support_symbol_names_t _GoToPoint_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, p_action_interfaces, action, GoToPoint_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, p_action_interfaces, action, GoToPoint_SendGoal_Request)),
  }
};

typedef struct _GoToPoint_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _GoToPoint_SendGoal_Request_type_support_data_t;

static _GoToPoint_SendGoal_Request_type_support_data_t _GoToPoint_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPoint_SendGoal_Request_message_typesupport_map = {
  2,
  "p_action_interfaces",
  &_GoToPoint_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPoint_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPoint_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPoint_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoint_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace p_action_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<p_action_interfaces::action::GoToPoint_SendGoal_Request>()
{
  return &::p_action_interfaces::action::rosidl_typesupport_cpp::GoToPoint_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, p_action_interfaces, action, GoToPoint_SendGoal_Request)() {
  return get_message_type_support_handle<p_action_interfaces::action::GoToPoint_SendGoal_Request>();
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
// #include "p_action_interfaces/action/detail/go_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace p_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoToPoint_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoint_SendGoal_Response_type_support_ids_t;

static const _GoToPoint_SendGoal_Response_type_support_ids_t _GoToPoint_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoToPoint_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPoint_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPoint_SendGoal_Response_type_support_symbol_names_t _GoToPoint_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, p_action_interfaces, action, GoToPoint_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, p_action_interfaces, action, GoToPoint_SendGoal_Response)),
  }
};

typedef struct _GoToPoint_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _GoToPoint_SendGoal_Response_type_support_data_t;

static _GoToPoint_SendGoal_Response_type_support_data_t _GoToPoint_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPoint_SendGoal_Response_message_typesupport_map = {
  2,
  "p_action_interfaces",
  &_GoToPoint_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPoint_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPoint_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPoint_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoint_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace p_action_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<p_action_interfaces::action::GoToPoint_SendGoal_Response>()
{
  return &::p_action_interfaces::action::rosidl_typesupport_cpp::GoToPoint_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, p_action_interfaces, action, GoToPoint_SendGoal_Response)() {
  return get_message_type_support_handle<p_action_interfaces::action::GoToPoint_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "p_action_interfaces/action/detail/go_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace p_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoToPoint_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoint_SendGoal_type_support_ids_t;

static const _GoToPoint_SendGoal_type_support_ids_t _GoToPoint_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoToPoint_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPoint_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPoint_SendGoal_type_support_symbol_names_t _GoToPoint_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, p_action_interfaces, action, GoToPoint_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, p_action_interfaces, action, GoToPoint_SendGoal)),
  }
};

typedef struct _GoToPoint_SendGoal_type_support_data_t
{
  void * data[2];
} _GoToPoint_SendGoal_type_support_data_t;

static _GoToPoint_SendGoal_type_support_data_t _GoToPoint_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPoint_SendGoal_service_typesupport_map = {
  2,
  "p_action_interfaces",
  &_GoToPoint_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_GoToPoint_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_GoToPoint_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GoToPoint_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoint_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace p_action_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<p_action_interfaces::action::GoToPoint_SendGoal>()
{
  return &::p_action_interfaces::action::rosidl_typesupport_cpp::GoToPoint_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, p_action_interfaces, action, GoToPoint_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<p_action_interfaces::action::GoToPoint_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "p_action_interfaces/action/detail/go_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace p_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoToPoint_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoint_GetResult_Request_type_support_ids_t;

static const _GoToPoint_GetResult_Request_type_support_ids_t _GoToPoint_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoToPoint_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPoint_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPoint_GetResult_Request_type_support_symbol_names_t _GoToPoint_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, p_action_interfaces, action, GoToPoint_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, p_action_interfaces, action, GoToPoint_GetResult_Request)),
  }
};

typedef struct _GoToPoint_GetResult_Request_type_support_data_t
{
  void * data[2];
} _GoToPoint_GetResult_Request_type_support_data_t;

static _GoToPoint_GetResult_Request_type_support_data_t _GoToPoint_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPoint_GetResult_Request_message_typesupport_map = {
  2,
  "p_action_interfaces",
  &_GoToPoint_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPoint_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPoint_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPoint_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoint_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace p_action_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<p_action_interfaces::action::GoToPoint_GetResult_Request>()
{
  return &::p_action_interfaces::action::rosidl_typesupport_cpp::GoToPoint_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, p_action_interfaces, action, GoToPoint_GetResult_Request)() {
  return get_message_type_support_handle<p_action_interfaces::action::GoToPoint_GetResult_Request>();
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
// #include "p_action_interfaces/action/detail/go_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace p_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoToPoint_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoint_GetResult_Response_type_support_ids_t;

static const _GoToPoint_GetResult_Response_type_support_ids_t _GoToPoint_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoToPoint_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPoint_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPoint_GetResult_Response_type_support_symbol_names_t _GoToPoint_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, p_action_interfaces, action, GoToPoint_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, p_action_interfaces, action, GoToPoint_GetResult_Response)),
  }
};

typedef struct _GoToPoint_GetResult_Response_type_support_data_t
{
  void * data[2];
} _GoToPoint_GetResult_Response_type_support_data_t;

static _GoToPoint_GetResult_Response_type_support_data_t _GoToPoint_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPoint_GetResult_Response_message_typesupport_map = {
  2,
  "p_action_interfaces",
  &_GoToPoint_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPoint_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPoint_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPoint_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoint_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace p_action_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<p_action_interfaces::action::GoToPoint_GetResult_Response>()
{
  return &::p_action_interfaces::action::rosidl_typesupport_cpp::GoToPoint_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, p_action_interfaces, action, GoToPoint_GetResult_Response)() {
  return get_message_type_support_handle<p_action_interfaces::action::GoToPoint_GetResult_Response>();
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
// #include "p_action_interfaces/action/detail/go_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace p_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoToPoint_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoint_GetResult_type_support_ids_t;

static const _GoToPoint_GetResult_type_support_ids_t _GoToPoint_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoToPoint_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPoint_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPoint_GetResult_type_support_symbol_names_t _GoToPoint_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, p_action_interfaces, action, GoToPoint_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, p_action_interfaces, action, GoToPoint_GetResult)),
  }
};

typedef struct _GoToPoint_GetResult_type_support_data_t
{
  void * data[2];
} _GoToPoint_GetResult_type_support_data_t;

static _GoToPoint_GetResult_type_support_data_t _GoToPoint_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPoint_GetResult_service_typesupport_map = {
  2,
  "p_action_interfaces",
  &_GoToPoint_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_GoToPoint_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_GoToPoint_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GoToPoint_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoint_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace p_action_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<p_action_interfaces::action::GoToPoint_GetResult>()
{
  return &::p_action_interfaces::action::rosidl_typesupport_cpp::GoToPoint_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, p_action_interfaces, action, GoToPoint_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<p_action_interfaces::action::GoToPoint_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "p_action_interfaces/action/detail/go_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace p_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoToPoint_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoint_FeedbackMessage_type_support_ids_t;

static const _GoToPoint_FeedbackMessage_type_support_ids_t _GoToPoint_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoToPoint_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPoint_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPoint_FeedbackMessage_type_support_symbol_names_t _GoToPoint_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, p_action_interfaces, action, GoToPoint_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, p_action_interfaces, action, GoToPoint_FeedbackMessage)),
  }
};

typedef struct _GoToPoint_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _GoToPoint_FeedbackMessage_type_support_data_t;

static _GoToPoint_FeedbackMessage_type_support_data_t _GoToPoint_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPoint_FeedbackMessage_message_typesupport_map = {
  2,
  "p_action_interfaces",
  &_GoToPoint_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPoint_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPoint_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPoint_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoint_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace p_action_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<p_action_interfaces::action::GoToPoint_FeedbackMessage>()
{
  return &::p_action_interfaces::action::rosidl_typesupport_cpp::GoToPoint_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, p_action_interfaces, action, GoToPoint_FeedbackMessage)() {
  return get_message_type_support_handle<p_action_interfaces::action::GoToPoint_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "p_action_interfaces/action/detail/go_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace p_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t GoToPoint_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace p_action_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<p_action_interfaces::action::GoToPoint>()
{
  using ::p_action_interfaces::action::rosidl_typesupport_cpp::GoToPoint_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  GoToPoint_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::p_action_interfaces::action::GoToPoint::Impl::SendGoalService>();
  GoToPoint_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::p_action_interfaces::action::GoToPoint::Impl::GetResultService>();
  GoToPoint_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::p_action_interfaces::action::GoToPoint::Impl::CancelGoalService>();
  GoToPoint_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::p_action_interfaces::action::GoToPoint::Impl::FeedbackMessage>();
  GoToPoint_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::p_action_interfaces::action::GoToPoint::Impl::GoalStatusMessage>();
  return &GoToPoint_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, p_action_interfaces, action, GoToPoint)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<p_action_interfaces::action::GoToPoint>();
}

#ifdef __cplusplus
}
#endif
