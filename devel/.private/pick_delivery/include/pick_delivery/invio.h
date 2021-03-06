// Generated by gencpp from file pick_delivery/invio.msg
// DO NOT EDIT!


#ifndef PICK_DELIVERY_MESSAGE_INVIO_H
#define PICK_DELIVERY_MESSAGE_INVIO_H

#include <ros/service_traits.h>


#include <pick_delivery/invioRequest.h>
#include <pick_delivery/invioResponse.h>


namespace pick_delivery
{

struct invio
{

typedef invioRequest Request;
typedef invioResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct invio
} // namespace pick_delivery


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::pick_delivery::invio > {
  static const char* value()
  {
    return "71b5c4d20a9c9adce22eff539e04418e";
  }

  static const char* value(const ::pick_delivery::invio&) { return value(); }
};

template<>
struct DataType< ::pick_delivery::invio > {
  static const char* value()
  {
    return "pick_delivery/invio";
  }

  static const char* value(const ::pick_delivery::invio&) { return value(); }
};


// service_traits::MD5Sum< ::pick_delivery::invioRequest> should match
// service_traits::MD5Sum< ::pick_delivery::invio >
template<>
struct MD5Sum< ::pick_delivery::invioRequest>
{
  static const char* value()
  {
    return MD5Sum< ::pick_delivery::invio >::value();
  }
  static const char* value(const ::pick_delivery::invioRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::pick_delivery::invioRequest> should match
// service_traits::DataType< ::pick_delivery::invio >
template<>
struct DataType< ::pick_delivery::invioRequest>
{
  static const char* value()
  {
    return DataType< ::pick_delivery::invio >::value();
  }
  static const char* value(const ::pick_delivery::invioRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::pick_delivery::invioResponse> should match
// service_traits::MD5Sum< ::pick_delivery::invio >
template<>
struct MD5Sum< ::pick_delivery::invioResponse>
{
  static const char* value()
  {
    return MD5Sum< ::pick_delivery::invio >::value();
  }
  static const char* value(const ::pick_delivery::invioResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::pick_delivery::invioResponse> should match
// service_traits::DataType< ::pick_delivery::invio >
template<>
struct DataType< ::pick_delivery::invioResponse>
{
  static const char* value()
  {
    return DataType< ::pick_delivery::invio >::value();
  }
  static const char* value(const ::pick_delivery::invioResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PICK_DELIVERY_MESSAGE_INVIO_H
