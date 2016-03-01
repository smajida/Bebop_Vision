// Generated by gencpp from file bebop_msgs/Ardrone3GPSStateHomeTypeAvailabilityChanged.msg
// DO NOT EDIT!


#ifndef BEBOP_MSGS_MESSAGE_ARDRONE3GPSSTATEHOMETYPEAVAILABILITYCHANGED_H
#define BEBOP_MSGS_MESSAGE_ARDRONE3GPSSTATEHOMETYPEAVAILABILITYCHANGED_H


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
struct Ardrone3GPSStateHomeTypeAvailabilityChanged_
{
  typedef Ardrone3GPSStateHomeTypeAvailabilityChanged_<ContainerAllocator> Type;

  Ardrone3GPSStateHomeTypeAvailabilityChanged_()
    : header()
    , type(0)
    , available(0)  {
    }
  Ardrone3GPSStateHomeTypeAvailabilityChanged_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , type(0)
    , available(0)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _type_type;
  _type_type type;

   typedef uint8_t _available_type;
  _available_type available;


    enum { type_TAKEOFF = 0u };
     enum { type_PILOT = 1u };
     enum { type_FIRST_FIX = 2u };
 

  typedef boost::shared_ptr< ::bebop_msgs::Ardrone3GPSStateHomeTypeAvailabilityChanged_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bebop_msgs::Ardrone3GPSStateHomeTypeAvailabilityChanged_<ContainerAllocator> const> ConstPtr;

}; // struct Ardrone3GPSStateHomeTypeAvailabilityChanged_

typedef ::bebop_msgs::Ardrone3GPSStateHomeTypeAvailabilityChanged_<std::allocator<void> > Ardrone3GPSStateHomeTypeAvailabilityChanged;

typedef boost::shared_ptr< ::bebop_msgs::Ardrone3GPSStateHomeTypeAvailabilityChanged > Ardrone3GPSStateHomeTypeAvailabilityChangedPtr;
typedef boost::shared_ptr< ::bebop_msgs::Ardrone3GPSStateHomeTypeAvailabilityChanged const> Ardrone3GPSStateHomeTypeAvailabilityChangedConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bebop_msgs::Ardrone3GPSStateHomeTypeAvailabilityChanged_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bebop_msgs::Ardrone3GPSStateHomeTypeAvailabilityChanged_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::bebop_msgs::Ardrone3GPSStateHomeTypeAvailabilityChanged_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bebop_msgs::Ardrone3GPSStateHomeTypeAvailabilityChanged_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::Ardrone3GPSStateHomeTypeAvailabilityChanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::Ardrone3GPSStateHomeTypeAvailabilityChanged_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::Ardrone3GPSStateHomeTypeAvailabilityChanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::Ardrone3GPSStateHomeTypeAvailabilityChanged_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bebop_msgs::Ardrone3GPSStateHomeTypeAvailabilityChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "38762c0d39d59744c3e3f75d82d27b02";
  }

  static const char* value(const ::bebop_msgs::Ardrone3GPSStateHomeTypeAvailabilityChanged_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x38762c0d39d59744ULL;
  static const uint64_t static_value2 = 0xc3e3f75d82d27b02ULL;
};

template<class ContainerAllocator>
struct DataType< ::bebop_msgs::Ardrone3GPSStateHomeTypeAvailabilityChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bebop_msgs/Ardrone3GPSStateHomeTypeAvailabilityChanged";
  }

  static const char* value(const ::bebop_msgs::Ardrone3GPSStateHomeTypeAvailabilityChanged_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bebop_msgs::Ardrone3GPSStateHomeTypeAvailabilityChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Ardrone3GPSStateHomeTypeAvailabilityChanged\n\
# auto-generated from https://raw.githubusercontent.com/Parrot-Developers/libARCommands/7e2f55fafcd45ba2380ca2574a08b7359c005f47/Xml/ARDrone3_commands.xml\n\
# Do not modify this file by hand. Check scripts/meta folder for generator files.\n\
#\n\
# SDK Comment: Availability of the return home types in a map : for each type other args will be sent by the drone\n\
\n\
Header header\n\
\n\
# The type of the return home\n\
uint8 type_TAKEOFF=0  # The drone will try to return to the take off position\n\
uint8 type_PILOT=1  # The drone will try to return to the pilot position\n\
uint8 type_FIRST_FIX=2  # The drone has not enough information, it will try to return to the first GPS fix\n\
uint8 type\n\
# 1 if this type is available, 0 otherwise\n\
uint8 available\n\
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

  static const char* value(const ::bebop_msgs::Ardrone3GPSStateHomeTypeAvailabilityChanged_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bebop_msgs::Ardrone3GPSStateHomeTypeAvailabilityChanged_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.type);
      stream.next(m.available);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Ardrone3GPSStateHomeTypeAvailabilityChanged_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bebop_msgs::Ardrone3GPSStateHomeTypeAvailabilityChanged_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bebop_msgs::Ardrone3GPSStateHomeTypeAvailabilityChanged_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.type);
    s << indent << "available: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.available);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEBOP_MSGS_MESSAGE_ARDRONE3GPSSTATEHOMETYPEAVAILABILITYCHANGED_H
