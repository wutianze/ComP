// Generated by gencpp from file nodelet_s/Test.msg
// DO NOT EDIT!


#ifndef NODELET_S_MESSAGE_TEST_H
#define NODELET_S_MESSAGE_TEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace nodelet_s
{
template <class ContainerAllocator>
struct Test_
{
  typedef Test_<ContainerAllocator> Type;

  Test_()
    : header()
    , content()
    , id(0)  {
    }
  Test_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , content(_alloc)
    , id(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _content_type;
  _content_type content;

   typedef int64_t _id_type;
  _id_type id;





  typedef boost::shared_ptr< ::nodelet_s::Test_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nodelet_s::Test_<ContainerAllocator> const> ConstPtr;

}; // struct Test_

typedef ::nodelet_s::Test_<std::allocator<void> > Test;

typedef boost::shared_ptr< ::nodelet_s::Test > TestPtr;
typedef boost::shared_ptr< ::nodelet_s::Test const> TestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nodelet_s::Test_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nodelet_s::Test_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nodelet_s

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'nodelet_s': ['/ros_test/AD_Middle_Test/ros/src/nodelet_s/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nodelet_s::Test_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nodelet_s::Test_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nodelet_s::Test_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nodelet_s::Test_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nodelet_s::Test_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nodelet_s::Test_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nodelet_s::Test_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d52df218c7b65f861bd462ad9ee915ca";
  }

  static const char* value(const ::nodelet_s::Test_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd52df218c7b65f86ULL;
  static const uint64_t static_value2 = 0x1bd462ad9ee915caULL;
};

template<class ContainerAllocator>
struct DataType< ::nodelet_s::Test_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nodelet_s/Test";
  }

  static const char* value(const ::nodelet_s::Test_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nodelet_s::Test_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"string content\n"
"int64 id\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::nodelet_s::Test_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nodelet_s::Test_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.content);
      stream.next(m.id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Test_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nodelet_s::Test_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nodelet_s::Test_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "content: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.content);
    s << indent << "id: ";
    Printer<int64_t>::stream(s, indent + "  ", v.id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NODELET_S_MESSAGE_TEST_H
