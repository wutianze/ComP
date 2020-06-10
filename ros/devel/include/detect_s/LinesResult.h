// Generated by gencpp from file detect_s/LinesResult.msg
// DO NOT EDIT!


#ifndef DETECT_S_MESSAGE_LINESRESULT_H
#define DETECT_S_MESSAGE_LINESRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <detect_s/PointDetect.h>
#include <detect_s/PointDetect.h>
#include <detect_s/PointDetect.h>
#include <detect_s/PointDetect.h>

namespace detect_s
{
template <class ContainerAllocator>
struct LinesResult_
{
  typedef LinesResult_<ContainerAllocator> Type;

  LinesResult_()
    : left1()
    , right1()
    , left2()
    , right2()  {
    }
  LinesResult_(const ContainerAllocator& _alloc)
    : left1(_alloc)
    , right1(_alloc)
    , left2(_alloc)
    , right2(_alloc)  {
  (void)_alloc;
    }



   typedef  ::detect_s::PointDetect_<ContainerAllocator>  _left1_type;
  _left1_type left1;

   typedef  ::detect_s::PointDetect_<ContainerAllocator>  _right1_type;
  _right1_type right1;

   typedef  ::detect_s::PointDetect_<ContainerAllocator>  _left2_type;
  _left2_type left2;

   typedef  ::detect_s::PointDetect_<ContainerAllocator>  _right2_type;
  _right2_type right2;





  typedef boost::shared_ptr< ::detect_s::LinesResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::detect_s::LinesResult_<ContainerAllocator> const> ConstPtr;

}; // struct LinesResult_

typedef ::detect_s::LinesResult_<std::allocator<void> > LinesResult;

typedef boost::shared_ptr< ::detect_s::LinesResult > LinesResultPtr;
typedef boost::shared_ptr< ::detect_s::LinesResult const> LinesResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::detect_s::LinesResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::detect_s::LinesResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace detect_s

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'detect_s': ['/ros_test/AD_Middle_Test/ros/src/detect_s/msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::detect_s::LinesResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::detect_s::LinesResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::detect_s::LinesResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::detect_s::LinesResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::detect_s::LinesResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::detect_s::LinesResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::detect_s::LinesResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "31748639f016450bce732dc22ce90507";
  }

  static const char* value(const ::detect_s::LinesResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x31748639f016450bULL;
  static const uint64_t static_value2 = 0xce732dc22ce90507ULL;
};

template<class ContainerAllocator>
struct DataType< ::detect_s::LinesResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "detect_s/LinesResult";
  }

  static const char* value(const ::detect_s::LinesResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::detect_s::LinesResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "PointDetect left1\n"
"PointDetect right1\n"
"PointDetect left2\n"
"PointDetect right2\n"
"\n"
"================================================================================\n"
"MSG: detect_s/PointDetect\n"
"int32 x\n"
"int32 y\n"
;
  }

  static const char* value(const ::detect_s::LinesResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::detect_s::LinesResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.left1);
      stream.next(m.right1);
      stream.next(m.left2);
      stream.next(m.right2);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LinesResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::detect_s::LinesResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::detect_s::LinesResult_<ContainerAllocator>& v)
  {
    s << indent << "left1: ";
    s << std::endl;
    Printer< ::detect_s::PointDetect_<ContainerAllocator> >::stream(s, indent + "  ", v.left1);
    s << indent << "right1: ";
    s << std::endl;
    Printer< ::detect_s::PointDetect_<ContainerAllocator> >::stream(s, indent + "  ", v.right1);
    s << indent << "left2: ";
    s << std::endl;
    Printer< ::detect_s::PointDetect_<ContainerAllocator> >::stream(s, indent + "  ", v.left2);
    s << indent << "right2: ";
    s << std::endl;
    Printer< ::detect_s::PointDetect_<ContainerAllocator> >::stream(s, indent + "  ", v.right2);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DETECT_S_MESSAGE_LINESRESULT_H