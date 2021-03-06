// Generated by gencpp from file irobotcreate2/Bumper.msg
// DO NOT EDIT!


#ifndef IROBOTCREATE2_MESSAGE_BUMPER_H
#define IROBOTCREATE2_MESSAGE_BUMPER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <irobotcreate2/RoombaSwitch.h>
#include <irobotcreate2/RoombaSwitch.h>

namespace irobotcreate2
{
template <class ContainerAllocator>
struct Bumper_
{
  typedef Bumper_<ContainerAllocator> Type;

  Bumper_()
    : left()
    , right()  {
    }
  Bumper_(const ContainerAllocator& _alloc)
    : left(_alloc)
    , right(_alloc)  {
    }



   typedef  ::irobotcreate2::RoombaSwitch_<ContainerAllocator>  _left_type;
  _left_type left;

   typedef  ::irobotcreate2::RoombaSwitch_<ContainerAllocator>  _right_type;
  _right_type right;




  typedef boost::shared_ptr< ::irobotcreate2::Bumper_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::irobotcreate2::Bumper_<ContainerAllocator> const> ConstPtr;

}; // struct Bumper_

typedef ::irobotcreate2::Bumper_<std::allocator<void> > Bumper;

typedef boost::shared_ptr< ::irobotcreate2::Bumper > BumperPtr;
typedef boost::shared_ptr< ::irobotcreate2::Bumper const> BumperConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::irobotcreate2::Bumper_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::irobotcreate2::Bumper_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace irobotcreate2

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'irobotcreate2': ['/home/gnoliyil/catkin_ws/src/irobotcreate2ros/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::irobotcreate2::Bumper_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::irobotcreate2::Bumper_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::irobotcreate2::Bumper_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::irobotcreate2::Bumper_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::irobotcreate2::Bumper_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::irobotcreate2::Bumper_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::irobotcreate2::Bumper_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0ce131cedcae0c89b4efbe13237e4425";
  }

  static const char* value(const ::irobotcreate2::Bumper_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0ce131cedcae0c89ULL;
  static const uint64_t static_value2 = 0xb4efbe13237e4425ULL;
};

template<class ContainerAllocator>
struct DataType< ::irobotcreate2::Bumper_<ContainerAllocator> >
{
  static const char* value()
  {
    return "irobotcreate2/Bumper";
  }

  static const char* value(const ::irobotcreate2::Bumper_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::irobotcreate2::Bumper_<ContainerAllocator> >
{
  static const char* value()
  {
    return "RoombaSwitch left\n\
RoombaSwitch right\n\
\n\
================================================================================\n\
MSG: irobotcreate2/RoombaSwitch\n\
Header header\n\
bool state\n\
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

  static const char* value(const ::irobotcreate2::Bumper_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::irobotcreate2::Bumper_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.left);
      stream.next(m.right);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Bumper_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::irobotcreate2::Bumper_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::irobotcreate2::Bumper_<ContainerAllocator>& v)
  {
    s << indent << "left: ";
    s << std::endl;
    Printer< ::irobotcreate2::RoombaSwitch_<ContainerAllocator> >::stream(s, indent + "  ", v.left);
    s << indent << "right: ";
    s << std::endl;
    Printer< ::irobotcreate2::RoombaSwitch_<ContainerAllocator> >::stream(s, indent + "  ", v.right);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IROBOTCREATE2_MESSAGE_BUMPER_H
