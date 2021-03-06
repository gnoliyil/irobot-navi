// Generated by gencpp from file irobotcreate2/Note.msg
// DO NOT EDIT!


#ifndef IROBOTCREATE2_MESSAGE_NOTE_H
#define IROBOTCREATE2_MESSAGE_NOTE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace irobotcreate2
{
template <class ContainerAllocator>
struct Note_
{
  typedef Note_<ContainerAllocator> Type;

  Note_()
    : note(0)
    , length(0)  {
    }
  Note_(const ContainerAllocator& _alloc)
    : note(0)
    , length(0)  {
    }



   typedef uint8_t _note_type;
  _note_type note;

   typedef uint8_t _length_type;
  _length_type length;




  typedef boost::shared_ptr< ::irobotcreate2::Note_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::irobotcreate2::Note_<ContainerAllocator> const> ConstPtr;

}; // struct Note_

typedef ::irobotcreate2::Note_<std::allocator<void> > Note;

typedef boost::shared_ptr< ::irobotcreate2::Note > NotePtr;
typedef boost::shared_ptr< ::irobotcreate2::Note const> NoteConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::irobotcreate2::Note_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::irobotcreate2::Note_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace irobotcreate2

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'irobotcreate2': ['/home/gnoliyil/catkin_ws/src/irobotcreate2ros/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::irobotcreate2::Note_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::irobotcreate2::Note_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::irobotcreate2::Note_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::irobotcreate2::Note_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::irobotcreate2::Note_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::irobotcreate2::Note_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::irobotcreate2::Note_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4d9b44801be38c06e26bc85d74c2792b";
  }

  static const char* value(const ::irobotcreate2::Note_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4d9b44801be38c06ULL;
  static const uint64_t static_value2 = 0xe26bc85d74c2792bULL;
};

template<class ContainerAllocator>
struct DataType< ::irobotcreate2::Note_<ContainerAllocator> >
{
  static const char* value()
  {
    return "irobotcreate2/Note";
  }

  static const char* value(const ::irobotcreate2::Note_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::irobotcreate2::Note_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 note\n\
uint8 length\n\
";
  }

  static const char* value(const ::irobotcreate2::Note_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::irobotcreate2::Note_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.note);
      stream.next(m.length);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Note_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::irobotcreate2::Note_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::irobotcreate2::Note_<ContainerAllocator>& v)
  {
    s << indent << "note: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.note);
    s << indent << "length: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.length);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IROBOTCREATE2_MESSAGE_NOTE_H
