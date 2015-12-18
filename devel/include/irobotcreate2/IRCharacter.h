// Generated by gencpp from file irobotcreate2/IRCharacter.msg
// DO NOT EDIT!


#ifndef IROBOTCREATE2_MESSAGE_IRCHARACTER_H
#define IROBOTCREATE2_MESSAGE_IRCHARACTER_H


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
struct IRCharacter_
{
  typedef IRCharacter_<ContainerAllocator> Type;

  IRCharacter_()
    : header()
    , omni(0)
    , left(0)
    , right(0)  {
    }
  IRCharacter_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , omni(0)
    , left(0)
    , right(0)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _omni_type;
  _omni_type omni;

   typedef uint8_t _left_type;
  _left_type left;

   typedef uint8_t _right_type;
  _right_type right;




  typedef boost::shared_ptr< ::irobotcreate2::IRCharacter_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::irobotcreate2::IRCharacter_<ContainerAllocator> const> ConstPtr;

}; // struct IRCharacter_

typedef ::irobotcreate2::IRCharacter_<std::allocator<void> > IRCharacter;

typedef boost::shared_ptr< ::irobotcreate2::IRCharacter > IRCharacterPtr;
typedef boost::shared_ptr< ::irobotcreate2::IRCharacter const> IRCharacterConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::irobotcreate2::IRCharacter_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::irobotcreate2::IRCharacter_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::irobotcreate2::IRCharacter_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::irobotcreate2::IRCharacter_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::irobotcreate2::IRCharacter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::irobotcreate2::IRCharacter_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::irobotcreate2::IRCharacter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::irobotcreate2::IRCharacter_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::irobotcreate2::IRCharacter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fdef8c079e4550ab8502f7b78ba5302e";
  }

  static const char* value(const ::irobotcreate2::IRCharacter_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfdef8c079e4550abULL;
  static const uint64_t static_value2 = 0x8502f7b78ba5302eULL;
};

template<class ContainerAllocator>
struct DataType< ::irobotcreate2::IRCharacter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "irobotcreate2/IRCharacter";
  }

  static const char* value(const ::irobotcreate2::IRCharacter_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::irobotcreate2::IRCharacter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
uint8 omni\n\
uint8 left\n\
uint8 right\n\
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

  static const char* value(const ::irobotcreate2::IRCharacter_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::irobotcreate2::IRCharacter_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.omni);
      stream.next(m.left);
      stream.next(m.right);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct IRCharacter_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::irobotcreate2::IRCharacter_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::irobotcreate2::IRCharacter_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "omni: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.omni);
    s << indent << "left: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.left);
    s << indent << "right: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.right);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IROBOTCREATE2_MESSAGE_IRCHARACTER_H
