// Generated by gencpp from file pick_delivery/loginResponse.msg
// DO NOT EDIT!


#ifndef PICK_DELIVERY_MESSAGE_LOGINRESPONSE_H
#define PICK_DELIVERY_MESSAGE_LOGINRESPONSE_H


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
struct loginResponse_
{
  typedef loginResponse_<ContainerAllocator> Type;

  loginResponse_()
    : serv_resp()  {
    }
  loginResponse_(const ContainerAllocator& _alloc)
    : serv_resp(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _serv_resp_type;
  _serv_resp_type serv_resp;





  typedef boost::shared_ptr< ::pick_delivery::loginResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pick_delivery::loginResponse_<ContainerAllocator> const> ConstPtr;

}; // struct loginResponse_

typedef ::pick_delivery::loginResponse_<std::allocator<void> > loginResponse;

typedef boost::shared_ptr< ::pick_delivery::loginResponse > loginResponsePtr;
typedef boost::shared_ptr< ::pick_delivery::loginResponse const> loginResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pick_delivery::loginResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pick_delivery::loginResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pick_delivery::loginResponse_<ContainerAllocator1> & lhs, const ::pick_delivery::loginResponse_<ContainerAllocator2> & rhs)
{
  return lhs.serv_resp == rhs.serv_resp;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pick_delivery::loginResponse_<ContainerAllocator1> & lhs, const ::pick_delivery::loginResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pick_delivery

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pick_delivery::loginResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pick_delivery::loginResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pick_delivery::loginResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pick_delivery::loginResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pick_delivery::loginResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pick_delivery::loginResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pick_delivery::loginResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "73a4fa3f623d7cbe9002ff135c328557";
  }

  static const char* value(const ::pick_delivery::loginResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x73a4fa3f623d7cbeULL;
  static const uint64_t static_value2 = 0x9002ff135c328557ULL;
};

template<class ContainerAllocator>
struct DataType< ::pick_delivery::loginResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pick_delivery/loginResponse";
  }

  static const char* value(const ::pick_delivery::loginResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pick_delivery::loginResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string serv_resp\n"
;
  }

  static const char* value(const ::pick_delivery::loginResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pick_delivery::loginResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.serv_resp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct loginResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pick_delivery::loginResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pick_delivery::loginResponse_<ContainerAllocator>& v)
  {
    s << indent << "serv_resp: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.serv_resp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PICK_DELIVERY_MESSAGE_LOGINRESPONSE_H
