// Generated by gencpp from file locomotion_robot_pkg/sync_type.msg
// DO NOT EDIT!


#ifndef LOCOMOTION_ROBOT_PKG_MESSAGE_SYNC_TYPE_H
#define LOCOMOTION_ROBOT_PKG_MESSAGE_SYNC_TYPE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/UInt8.h>
#include <std_msgs/Float32.h>
#include <std_msgs/UInt8.h>

namespace locomotion_robot_pkg
{
template <class ContainerAllocator>
struct sync_type_
{
  typedef sync_type_<ContainerAllocator> Type;

  sync_type_()
    : sync_type()
    , factor()
    , dominant_motor()  {
    }
  sync_type_(const ContainerAllocator& _alloc)
    : sync_type(_alloc)
    , factor(_alloc)
    , dominant_motor(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::UInt8_<ContainerAllocator>  _sync_type_type;
  _sync_type_type sync_type;

   typedef  ::std_msgs::Float32_<ContainerAllocator>  _factor_type;
  _factor_type factor;

   typedef  ::std_msgs::UInt8_<ContainerAllocator>  _dominant_motor_type;
  _dominant_motor_type dominant_motor;





  typedef boost::shared_ptr< ::locomotion_robot_pkg::sync_type_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::locomotion_robot_pkg::sync_type_<ContainerAllocator> const> ConstPtr;

}; // struct sync_type_

typedef ::locomotion_robot_pkg::sync_type_<std::allocator<void> > sync_type;

typedef boost::shared_ptr< ::locomotion_robot_pkg::sync_type > sync_typePtr;
typedef boost::shared_ptr< ::locomotion_robot_pkg::sync_type const> sync_typeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::locomotion_robot_pkg::sync_type_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::locomotion_robot_pkg::sync_type_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::locomotion_robot_pkg::sync_type_<ContainerAllocator1> & lhs, const ::locomotion_robot_pkg::sync_type_<ContainerAllocator2> & rhs)
{
  return lhs.sync_type == rhs.sync_type &&
    lhs.factor == rhs.factor &&
    lhs.dominant_motor == rhs.dominant_motor;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::locomotion_robot_pkg::sync_type_<ContainerAllocator1> & lhs, const ::locomotion_robot_pkg::sync_type_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace locomotion_robot_pkg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::locomotion_robot_pkg::sync_type_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::locomotion_robot_pkg::sync_type_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::locomotion_robot_pkg::sync_type_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::locomotion_robot_pkg::sync_type_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::locomotion_robot_pkg::sync_type_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::locomotion_robot_pkg::sync_type_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::locomotion_robot_pkg::sync_type_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2ed07a61fe23e1a973a3f61ff858d59f";
  }

  static const char* value(const ::locomotion_robot_pkg::sync_type_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2ed07a61fe23e1a9ULL;
  static const uint64_t static_value2 = 0x73a3f61ff858d59fULL;
};

template<class ContainerAllocator>
struct DataType< ::locomotion_robot_pkg::sync_type_<ContainerAllocator> >
{
  static const char* value()
  {
    return "locomotion_robot_pkg/sync_type";
  }

  static const char* value(const ::locomotion_robot_pkg::sync_type_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::locomotion_robot_pkg::sync_type_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/UInt8 sync_type\n"
"std_msgs/Float32 factor\n"
"std_msgs/UInt8 dominant_motor\n"
"================================================================================\n"
"MSG: std_msgs/UInt8\n"
"uint8 data\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Float32\n"
"float32 data\n"
;
  }

  static const char* value(const ::locomotion_robot_pkg::sync_type_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::locomotion_robot_pkg::sync_type_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sync_type);
      stream.next(m.factor);
      stream.next(m.dominant_motor);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct sync_type_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::locomotion_robot_pkg::sync_type_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::locomotion_robot_pkg::sync_type_<ContainerAllocator>& v)
  {
    s << indent << "sync_type: ";
    s << std::endl;
    Printer< ::std_msgs::UInt8_<ContainerAllocator> >::stream(s, indent + "  ", v.sync_type);
    s << indent << "factor: ";
    s << std::endl;
    Printer< ::std_msgs::Float32_<ContainerAllocator> >::stream(s, indent + "  ", v.factor);
    s << indent << "dominant_motor: ";
    s << std::endl;
    Printer< ::std_msgs::UInt8_<ContainerAllocator> >::stream(s, indent + "  ", v.dominant_motor);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LOCOMOTION_ROBOT_PKG_MESSAGE_SYNC_TYPE_H
