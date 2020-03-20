// Generated by gencpp from file beginner_tutorials/AddTwoInts.msg
// DO NOT EDIT!


#ifndef BEGINNER_TUTORIALS_MESSAGE_ADDTWOINTS_H
#define BEGINNER_TUTORIALS_MESSAGE_ADDTWOINTS_H

#include <ros/service_traits.h>


#include <beginner_tutorials/AddTwoIntsRequest.h>
#include <beginner_tutorials/AddTwoIntsResponse.h>


namespace beginner_tutorials
{

struct AddTwoInts
{

typedef AddTwoIntsRequest Request;
typedef AddTwoIntsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct AddTwoInts
} // namespace beginner_tutorials


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::beginner_tutorials::AddTwoInts > {
  static const char* value()
  {
    return "945e963769938e4ddc3288e80fdfddf4";
  }

  static const char* value(const ::beginner_tutorials::AddTwoInts&) { return value(); }
};

template<>
struct DataType< ::beginner_tutorials::AddTwoInts > {
  static const char* value()
  {
    return "beginner_tutorials/AddTwoInts";
  }

  static const char* value(const ::beginner_tutorials::AddTwoInts&) { return value(); }
};


// service_traits::MD5Sum< ::beginner_tutorials::AddTwoIntsRequest> should match 
// service_traits::MD5Sum< ::beginner_tutorials::AddTwoInts > 
template<>
struct MD5Sum< ::beginner_tutorials::AddTwoIntsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::beginner_tutorials::AddTwoInts >::value();
  }
  static const char* value(const ::beginner_tutorials::AddTwoIntsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::beginner_tutorials::AddTwoIntsRequest> should match 
// service_traits::DataType< ::beginner_tutorials::AddTwoInts > 
template<>
struct DataType< ::beginner_tutorials::AddTwoIntsRequest>
{
  static const char* value()
  {
    return DataType< ::beginner_tutorials::AddTwoInts >::value();
  }
  static const char* value(const ::beginner_tutorials::AddTwoIntsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::beginner_tutorials::AddTwoIntsResponse> should match 
// service_traits::MD5Sum< ::beginner_tutorials::AddTwoInts > 
template<>
struct MD5Sum< ::beginner_tutorials::AddTwoIntsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::beginner_tutorials::AddTwoInts >::value();
  }
  static const char* value(const ::beginner_tutorials::AddTwoIntsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::beginner_tutorials::AddTwoIntsResponse> should match 
// service_traits::DataType< ::beginner_tutorials::AddTwoInts > 
template<>
struct DataType< ::beginner_tutorials::AddTwoIntsResponse>
{
  static const char* value()
  {
    return DataType< ::beginner_tutorials::AddTwoInts >::value();
  }
  static const char* value(const ::beginner_tutorials::AddTwoIntsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // BEGINNER_TUTORIALS_MESSAGE_ADDTWOINTS_H
