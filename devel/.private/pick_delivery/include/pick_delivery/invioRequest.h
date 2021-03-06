// Generated by gencpp from file pick_delivery/invioRequest.msg
// DO NOT EDIT!


#ifndef PICK_DELIVERY_MESSAGE_INVIOREQUEST_H
#define PICK_DELIVERY_MESSAGE_INVIOREQUEST_H


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
struct invioRequest_
{
  typedef invioRequest_<ContainerAllocator> Type;

  invioRequest_()
    : sender()
    , aula()
    , receiver()  {
    }
  invioRequest_(const ContainerAllocator& _alloc)
    : sender(_alloc)
    , aula(_alloc)
    , receiver(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _sender_type;
  _sender_type sender;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _aula_type;
  _aula_type aula;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _receiver_type;
  _receiver_type receiver;





  typedef boost::shared_ptr< ::pick_delivery::invioRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pick_delivery::invioRequest_<ContainerAllocator> const> ConstPtr;

}; // struct invioRequest_

typedef ::pick_delivery::invioRequest_<std::allocator<void> > invioRequest;

typedef boost::shared_ptr< ::pick_delivery::invioRequest > invioRequestPtr;
typedef boost::shared_ptr< ::pick_delivery::invioRequest const> invioRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pick_delivery::invioRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pick_delivery::invioRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pick_delivery::invioRequest_<ContainerAllocator1> & lhs, const ::pick_delivery::invioRequest_<ContainerAllocator2> & rhs)
{
  return lhs.sender == rhs.sender &&
    lhs.aula == rhs.aula &&
    lhs.receiver == rhs.receiver;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pick_delivery::invioRequest_<ContainerAllocator1> & lhs, const ::pick_delivery::invioRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pick_delivery

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pick_delivery::invioRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pick_delivery::invioRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pick_delivery::invioRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pick_delivery::invioRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pick_delivery::invioRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pick_delivery::invioRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pick_delivery::invioRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "95c1779d8c2cf33dfbc1dc143b15edc7";
  }

  static const char* value(const ::pick_delivery::invioRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x95c1779d8c2cf33dULL;
  static const uint64_t static_value2 = 0xfbc1dc143b15edc7ULL;
};

template<class ContainerAllocator>
struct DataType< ::pick_delivery::invioRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pick_delivery/invioRequest";
  }

  static const char* value(const ::pick_delivery::invioRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pick_delivery::invioRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string sender\n"
"string aula\n"
"string receiver\n"
;
  }

  static const char* value(const ::pick_delivery::invioRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pick_delivery::invioRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sender);
      stream.next(m.aula);
      stream.next(m.receiver);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct invioRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pick_delivery::invioRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pick_delivery::invioRequest_<ContainerAllocator>& v)
  {
    s << indent << "sender: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.sender);
    s << indent << "aula: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.aula);
    s << indent << "receiver: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.receiver);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PICK_DELIVERY_MESSAGE_INVIOREQUEST_H
