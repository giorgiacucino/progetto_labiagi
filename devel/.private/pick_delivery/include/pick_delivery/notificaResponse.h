// Generated by gencpp from file pick_delivery/notificaResponse.msg
// DO NOT EDIT!


#ifndef PICK_DELIVERY_MESSAGE_NOTIFICARESPONSE_H
#define PICK_DELIVERY_MESSAGE_NOTIFICARESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pick_delivery
{
template <class ContainerAllocator>
struct notificaResponse_
{
  typedef notificaResponse_<ContainerAllocator> Type;

  notificaResponse_()
    : picked(0)  {
    }
  notificaResponse_(const ContainerAllocator& _alloc)
    : picked(0)  {
  (void)_alloc;
    }



   typedef int64_t _picked_type;
  _picked_type picked;





  typedef boost::shared_ptr< ::pick_delivery::notificaResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pick_delivery::notificaResponse_<ContainerAllocator> const> ConstPtr;

}; // struct notificaResponse_

typedef ::pick_delivery::notificaResponse_<std::allocator<void> > notificaResponse;

typedef boost::shared_ptr< ::pick_delivery::notificaResponse > notificaResponsePtr;
typedef boost::shared_ptr< ::pick_delivery::notificaResponse const> notificaResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pick_delivery::notificaResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pick_delivery::notificaResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pick_delivery::notificaResponse_<ContainerAllocator1> & lhs, const ::pick_delivery::notificaResponse_<ContainerAllocator2> & rhs)
{
  return lhs.picked == rhs.picked;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pick_delivery::notificaResponse_<ContainerAllocator1> & lhs, const ::pick_delivery::notificaResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pick_delivery

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pick_delivery::notificaResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pick_delivery::notificaResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pick_delivery::notificaResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pick_delivery::notificaResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pick_delivery::notificaResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pick_delivery::notificaResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pick_delivery::notificaResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "60195036f73783f31463727fb92dff5d";
  }

  static const char* value(const ::pick_delivery::notificaResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x60195036f73783f3ULL;
  static const uint64_t static_value2 = 0x1463727fb92dff5dULL;
};

template<class ContainerAllocator>
struct DataType< ::pick_delivery::notificaResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pick_delivery/notificaResponse";
  }

  static const char* value(const ::pick_delivery::notificaResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pick_delivery::notificaResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 picked\n"
;
  }

  static const char* value(const ::pick_delivery::notificaResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pick_delivery::notificaResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.picked);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct notificaResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pick_delivery::notificaResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pick_delivery::notificaResponse_<ContainerAllocator>& v)
  {
    s << indent << "picked: ";
    Printer<int64_t>::stream(s, indent + "  ", v.picked);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PICK_DELIVERY_MESSAGE_NOTIFICARESPONSE_H
