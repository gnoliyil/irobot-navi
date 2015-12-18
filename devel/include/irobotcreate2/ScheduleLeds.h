// Generated by gencpp from file irobotcreate2/ScheduleLeds.msg
// DO NOT EDIT!


#ifndef IROBOTCREATE2_MESSAGE_SCHEDULELEDS_H
#define IROBOTCREATE2_MESSAGE_SCHEDULELEDS_H


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
struct ScheduleLeds_
{
  typedef ScheduleLeds_<ContainerAllocator> Type;

  ScheduleLeds_()
    : header()
    , sunday(false)
    , monday(false)
    , tuesday(false)
    , wednesday(false)
    , thursday(false)
    , friday(false)
    , saturday(false)
    , colon(false)
    , pm(false)
    , am(false)
    , clock(false)
    , schedule(false)  {
    }
  ScheduleLeds_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , sunday(false)
    , monday(false)
    , tuesday(false)
    , wednesday(false)
    , thursday(false)
    , friday(false)
    , saturday(false)
    , colon(false)
    , pm(false)
    , am(false)
    , clock(false)
    , schedule(false)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _sunday_type;
  _sunday_type sunday;

   typedef uint8_t _monday_type;
  _monday_type monday;

   typedef uint8_t _tuesday_type;
  _tuesday_type tuesday;

   typedef uint8_t _wednesday_type;
  _wednesday_type wednesday;

   typedef uint8_t _thursday_type;
  _thursday_type thursday;

   typedef uint8_t _friday_type;
  _friday_type friday;

   typedef uint8_t _saturday_type;
  _saturday_type saturday;

   typedef uint8_t _colon_type;
  _colon_type colon;

   typedef uint8_t _pm_type;
  _pm_type pm;

   typedef uint8_t _am_type;
  _am_type am;

   typedef uint8_t _clock_type;
  _clock_type clock;

   typedef uint8_t _schedule_type;
  _schedule_type schedule;




  typedef boost::shared_ptr< ::irobotcreate2::ScheduleLeds_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::irobotcreate2::ScheduleLeds_<ContainerAllocator> const> ConstPtr;

}; // struct ScheduleLeds_

typedef ::irobotcreate2::ScheduleLeds_<std::allocator<void> > ScheduleLeds;

typedef boost::shared_ptr< ::irobotcreate2::ScheduleLeds > ScheduleLedsPtr;
typedef boost::shared_ptr< ::irobotcreate2::ScheduleLeds const> ScheduleLedsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::irobotcreate2::ScheduleLeds_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::irobotcreate2::ScheduleLeds_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::irobotcreate2::ScheduleLeds_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::irobotcreate2::ScheduleLeds_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::irobotcreate2::ScheduleLeds_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::irobotcreate2::ScheduleLeds_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::irobotcreate2::ScheduleLeds_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::irobotcreate2::ScheduleLeds_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::irobotcreate2::ScheduleLeds_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4c552ea7c5b68737285d12a0dee0a839";
  }

  static const char* value(const ::irobotcreate2::ScheduleLeds_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4c552ea7c5b68737ULL;
  static const uint64_t static_value2 = 0x285d12a0dee0a839ULL;
};

template<class ContainerAllocator>
struct DataType< ::irobotcreate2::ScheduleLeds_<ContainerAllocator> >
{
  static const char* value()
  {
    return "irobotcreate2/ScheduleLeds";
  }

  static const char* value(const ::irobotcreate2::ScheduleLeds_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::irobotcreate2::ScheduleLeds_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
bool sunday\n\
bool monday\n\
bool tuesday\n\
bool wednesday\n\
bool thursday\n\
bool friday\n\
bool saturday\n\
bool colon\n\
bool pm\n\
bool am\n\
bool clock\n\
bool schedule\n\
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

  static const char* value(const ::irobotcreate2::ScheduleLeds_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::irobotcreate2::ScheduleLeds_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.sunday);
      stream.next(m.monday);
      stream.next(m.tuesday);
      stream.next(m.wednesday);
      stream.next(m.thursday);
      stream.next(m.friday);
      stream.next(m.saturday);
      stream.next(m.colon);
      stream.next(m.pm);
      stream.next(m.am);
      stream.next(m.clock);
      stream.next(m.schedule);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct ScheduleLeds_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::irobotcreate2::ScheduleLeds_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::irobotcreate2::ScheduleLeds_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "sunday: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sunday);
    s << indent << "monday: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.monday);
    s << indent << "tuesday: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.tuesday);
    s << indent << "wednesday: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.wednesday);
    s << indent << "thursday: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.thursday);
    s << indent << "friday: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.friday);
    s << indent << "saturday: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.saturday);
    s << indent << "colon: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.colon);
    s << indent << "pm: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pm);
    s << indent << "am: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.am);
    s << indent << "clock: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.clock);
    s << indent << "schedule: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.schedule);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IROBOTCREATE2_MESSAGE_SCHEDULELEDS_H
