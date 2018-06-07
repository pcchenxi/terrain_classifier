// Generated by gencpp from file centauro_locomotion_msgs/LegMovementActionGoal.msg
// DO NOT EDIT!


#ifndef CENTAURO_LOCOMOTION_MSGS_MESSAGE_LEGMOVEMENTACTIONGOAL_H
#define CENTAURO_LOCOMOTION_MSGS_MESSAGE_LEGMOVEMENTACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <centauro_locomotion_msgs/LegMovementGoal.h>

namespace centauro_locomotion_msgs
{
template <class ContainerAllocator>
struct LegMovementActionGoal_
{
  typedef LegMovementActionGoal_<ContainerAllocator> Type;

  LegMovementActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  LegMovementActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::centauro_locomotion_msgs::LegMovementGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;




  typedef boost::shared_ptr< ::centauro_locomotion_msgs::LegMovementActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::centauro_locomotion_msgs::LegMovementActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct LegMovementActionGoal_

typedef ::centauro_locomotion_msgs::LegMovementActionGoal_<std::allocator<void> > LegMovementActionGoal;

typedef boost::shared_ptr< ::centauro_locomotion_msgs::LegMovementActionGoal > LegMovementActionGoalPtr;
typedef boost::shared_ptr< ::centauro_locomotion_msgs::LegMovementActionGoal const> LegMovementActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::centauro_locomotion_msgs::LegMovementActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::centauro_locomotion_msgs::LegMovementActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace centauro_locomotion_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'centauro_locomotion_msgs': ['/home/xi/workspace/terrain_classifier/preprocessor/src/centauro_locomotion_msgs/msg', '/home/xi/workspace/terrain_classifier/preprocessor/devel/share/centauro_locomotion_msgs/msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::centauro_locomotion_msgs::LegMovementActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::centauro_locomotion_msgs::LegMovementActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::centauro_locomotion_msgs::LegMovementActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::centauro_locomotion_msgs::LegMovementActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::centauro_locomotion_msgs::LegMovementActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::centauro_locomotion_msgs::LegMovementActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::centauro_locomotion_msgs::LegMovementActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cff8385e4f7904d69748964d6a60cde0";
  }

  static const char* value(const ::centauro_locomotion_msgs::LegMovementActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcff8385e4f7904d6ULL;
  static const uint64_t static_value2 = 0x9748964d6a60cde0ULL;
};

template<class ContainerAllocator>
struct DataType< ::centauro_locomotion_msgs::LegMovementActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "centauro_locomotion_msgs/LegMovementActionGoal";
  }

  static const char* value(const ::centauro_locomotion_msgs::LegMovementActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::centauro_locomotion_msgs::LegMovementActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
LegMovementGoal goal\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: centauro_locomotion_msgs/LegMovementGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# ROS Action which defines endeffector positions for all four legs in cartesian space\n\
# relative to the robot base center. (fl = front left, br = back right ...). Each wheel is oriented forward and is perpendicular\n\
# to the ground. The bool flag \"wheel_rotation_enabled\" describes if the wheel is free to rotate or if wheel rotation is inhibited.\n\
# The result is an empty message but has to be sent to signalize that the desired configuration is reached.\n\
\n\
# Goal: longitudinal wheel coordinate\n\
float32 goal_pos_fl_x\n\
float32 goal_pos_fl_y\n\
float32 goal_pos_fl_z\n\
bool wheel_rotation_enabled_fl\n\
\n\
float32 goal_pos_bl_x\n\
float32 goal_pos_bl_y\n\
float32 goal_pos_bl_z\n\
bool wheel_rotation_enabled_bl\n\
\n\
float32 goal_pos_br_x\n\
float32 goal_pos_br_y\n\
float32 goal_pos_br_z\n\
bool wheel_rotation_enabled_br\n\
\n\
float32 goal_pos_fr_x\n\
float32 goal_pos_fr_y\n\
float32 goal_pos_fr_z\n\
bool wheel_rotation_enabled_fr\n\
\n\
";
  }

  static const char* value(const ::centauro_locomotion_msgs::LegMovementActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::centauro_locomotion_msgs::LegMovementActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LegMovementActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::centauro_locomotion_msgs::LegMovementActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::centauro_locomotion_msgs::LegMovementActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::centauro_locomotion_msgs::LegMovementGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CENTAURO_LOCOMOTION_MSGS_MESSAGE_LEGMOVEMENTACTIONGOAL_H
