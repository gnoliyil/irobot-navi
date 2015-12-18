// Generated by gencpp from file irobotcreate2/RoombaIR.msg
// DO NOT EDIT!


#ifndef IROBOTCREATE2_MESSAGE_ROOMBAIR_H
#define IROBOTCREATE2_MESSAGE_ROOMBAIR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace irobotcreate2
{
template <class ContainerAllocator>
struct RoombaIR_
{
  typedef RoombaIR_<ContainerAllocator> Type;

  RoombaIR_()
    : header()
    , state(false)
    , signal(0)  {
    }
  RoombaIR_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , state(false)
    , signal(0)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _state_type;
  _state_type state;

   typedef uint16_t _signal_type;
  _signal_type signal;




  typedef boost::shared_ptr< ::irobotcreate2::RoombaIR_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::irobotcreate2::RoombaIR_<ContainerAllocator> const> ConstPtr;

}; // struct RoombaIR_

typedef ::irobotcreate2::RoombaIR_<std::allocator<void> > RoombaIR;

typedef boost::shared_ptr< ::irobotcreate2::RoombaIR > RoombaIRPtr;
typedef boost::shared_ptr< ::irobotcreate2::RoombaIR const> RoombaIRConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::irobotcreate2::RoombaIR_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::irobotcreate2::RoombaIR_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace irobotcreate2

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'irobotcreate2': ['/home/gnoliyil/catkin_ws/src/irobotcreate2ros/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::irobotcreate2::RoombaIR_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::irobotcreate2::RoombaIR_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::irobotcreate2::RoombaIR_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::irobotcreate2::RoombaIR_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::irobotcreate2::RoombaIR_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::irobotcreate2::RoombaIR_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::irobotcreate2::RoombaIR_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a2eb843f93c486d3df9c635f426907b6";
  }

  static const char* value(const ::irobotcreate2::RoombaIR_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa2eb843f93c486d3ULL;
  static const uint64_t static_value2 = 0xdf9c635f426907b6ULL;
};

template<class ContainerAllocator>
struct DataType< ::irobotcreate2::RoombaIR_<ContainerAllocator> >
{
  static const char* value()
  {
    return "irobotcreate2/RoombaIR";
  }

  static const char* value(const ::irobotcreate2::RoombaIR_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::irobotcreate2::RoombaIR_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
bool state\n\
uint16 signal\n\
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
";
  }

  static const char* value(const ::irobotcreate2::RoombaIR_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::irobotcreate2::RoombaIR_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.state);
      stream.next(m.signal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct RoombaIR_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::irobotcreate2::RoombaIR_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::irobotcreate2::RoombaIR_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.state);
    s << indent << "signal: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.signal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IROBOTCREATE2_MESSAGE_ROOMBAIR_H
