// Generated by gencpp from file pub_sub/AddTwoInts.msg
// DO NOT EDIT!


#ifndef PUB_SUB_MESSAGE_ADDTWOINTS_H
#define PUB_SUB_MESSAGE_ADDTWOINTS_H

#include <ros/service_traits.h>


#include <pub_sub/AddTwoIntsRequest.h>
#include <pub_sub/AddTwoIntsResponse.h>


namespace pub_sub
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
} // namespace pub_sub


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::pub_sub::AddTwoInts > {
  static const char* value()
  {
    return "6a2e34150c00229791cc89ff309fff21";
  }

  static const char* value(const ::pub_sub::AddTwoInts&) { return value(); }
};

template<>
struct DataType< ::pub_sub::AddTwoInts > {
  static const char* value()
  {
    return "pub_sub/AddTwoInts";
  }

  static const char* value(const ::pub_sub::AddTwoInts&) { return value(); }
};


// service_traits::MD5Sum< ::pub_sub::AddTwoIntsRequest> should match 
// service_traits::MD5Sum< ::pub_sub::AddTwoInts > 
template<>
struct MD5Sum< ::pub_sub::AddTwoIntsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::pub_sub::AddTwoInts >::value();
  }
  static const char* value(const ::pub_sub::AddTwoIntsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::pub_sub::AddTwoIntsRequest> should match 
// service_traits::DataType< ::pub_sub::AddTwoInts > 
template<>
struct DataType< ::pub_sub::AddTwoIntsRequest>
{
  static const char* value()
  {
    return DataType< ::pub_sub::AddTwoInts >::value();
  }
  static const char* value(const ::pub_sub::AddTwoIntsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::pub_sub::AddTwoIntsResponse> should match 
// service_traits::MD5Sum< ::pub_sub::AddTwoInts > 
template<>
struct MD5Sum< ::pub_sub::AddTwoIntsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::pub_sub::AddTwoInts >::value();
  }
  static const char* value(const ::pub_sub::AddTwoIntsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::pub_sub::AddTwoIntsResponse> should match 
// service_traits::DataType< ::pub_sub::AddTwoInts > 
template<>
struct DataType< ::pub_sub::AddTwoIntsResponse>
{
  static const char* value()
  {
    return DataType< ::pub_sub::AddTwoInts >::value();
  }
  static const char* value(const ::pub_sub::AddTwoIntsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PUB_SUB_MESSAGE_ADDTWOINTS_H