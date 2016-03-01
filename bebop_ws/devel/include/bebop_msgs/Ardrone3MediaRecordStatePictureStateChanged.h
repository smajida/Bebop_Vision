// Generated by gencpp from file bebop_msgs/Ardrone3MediaRecordStatePictureStateChanged.msg
// DO NOT EDIT!


#ifndef BEBOP_MSGS_MESSAGE_ARDRONE3MEDIARECORDSTATEPICTURESTATECHANGED_H
#define BEBOP_MSGS_MESSAGE_ARDRONE3MEDIARECORDSTATEPICTURESTATECHANGED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace bebop_msgs
{
template <class ContainerAllocator>
struct Ardrone3MediaRecordStatePictureStateChanged_
{
  typedef Ardrone3MediaRecordStatePictureStateChanged_<ContainerAllocator> Type;

  Ardrone3MediaRecordStatePictureStateChanged_()
    : header()
    , state(0)
    , mass_storage_id(0)  {
    }
  Ardrone3MediaRecordStatePictureStateChanged_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , state(0)
    , mass_storage_id(0)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _state_type;
  _state_type state;

   typedef uint8_t _mass_storage_id_type;
  _mass_storage_id_type mass_storage_id;




  typedef boost::shared_ptr< ::bebop_msgs::Ardrone3MediaRecordStatePictureStateChanged_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bebop_msgs::Ardrone3MediaRecordStatePictureStateChanged_<ContainerAllocator> const> ConstPtr;

}; // struct Ardrone3MediaRecordStatePictureStateChanged_

typedef ::bebop_msgs::Ardrone3MediaRecordStatePictureStateChanged_<std::allocator<void> > Ardrone3MediaRecordStatePictureStateChanged;

typedef boost::shared_ptr< ::bebop_msgs::Ardrone3MediaRecordStatePictureStateChanged > Ardrone3MediaRecordStatePictureStateChangedPtr;
typedef boost::shared_ptr< ::bebop_msgs::Ardrone3MediaRecordStatePictureStateChanged const> Ardrone3MediaRecordStatePictureStateChangedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bebop_msgs::Ardrone3MediaRecordStatePictureStateChanged_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bebop_msgs::Ardrone3MediaRecordStatePictureStateChanged_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace bebop_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'bebop_msgs': ['/home/robot/bebop_ws/src/bebop_autonomy/bebop_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::bebop_msgs::Ardrone3MediaRecordStatePictureStateChanged_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bebop_msgs::Ardrone3MediaRecordStatePictureStateChanged_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::Ardrone3MediaRecordStatePictureStateChanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::Ardrone3MediaRecordStatePictureStateChanged_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::Ardrone3MediaRecordStatePictureStateChanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::Ardrone3MediaRecordStatePictureStateChanged_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bebop_msgs::Ardrone3MediaRecordStatePictureStateChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2f111b238d7065d202c5d0de1746940a";
  }

  static const char* value(const ::bebop_msgs::Ardrone3MediaRecordStatePictureStateChanged_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2f111b238d7065d2ULL;
  static const uint64_t static_value2 = 0x02c5d0de1746940aULL;
};

template<class ContainerAllocator>
struct DataType< ::bebop_msgs::Ardrone3MediaRecordStatePictureStateChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bebop_msgs/Ardrone3MediaRecordStatePictureStateChanged";
  }

  static const char* value(const ::bebop_msgs::Ardrone3MediaRecordStatePictureStateChanged_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bebop_msgs::Ardrone3MediaRecordStatePictureStateChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Ardrone3MediaRecordStatePictureStateChanged\n\
# auto-generated from https://raw.githubusercontent.com/Parrot-Developers/libARCommands/7e2f55fafcd45ba2380ca2574a08b7359c005f47/Xml/ARDrone3_commands.xml\n\
# Do not modify this file by hand. Check scripts/meta folder for generator files.\n\
#\n\
# SDK Comment: @deprecated State of picture recording\n\
\n\
Header header\n\
\n\
# 1 if picture has been taken, 0 otherwise\n\
uint8 state\n\
# Mass storage id where the picture was recorded\n\
uint8 mass_storage_id\n\
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

  static const char* value(const ::bebop_msgs::Ardrone3MediaRecordStatePictureStateChanged_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bebop_msgs::Ardrone3MediaRecordStatePictureStateChanged_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.state);
      stream.next(m.mass_storage_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Ardrone3MediaRecordStatePictureStateChanged_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bebop_msgs::Ardrone3MediaRecordStatePictureStateChanged_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bebop_msgs::Ardrone3MediaRecordStatePictureStateChanged_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.state);
    s << indent << "mass_storage_id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mass_storage_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEBOP_MSGS_MESSAGE_ARDRONE3MEDIARECORDSTATEPICTURESTATECHANGED_H
