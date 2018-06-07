// Generated by gencpp from file ros_websocket_bridge/DetectStairs.msg
// DO NOT EDIT!


#ifndef ROS_WEBSOCKET_BRIDGE_MESSAGE_DETECTSTAIRS_H
#define ROS_WEBSOCKET_BRIDGE_MESSAGE_DETECTSTAIRS_H

#include <ros/service_traits.h>


#include <ros_websocket_bridge/DetectStairsRequest.h>
#include <ros_websocket_bridge/DetectStairsResponse.h>


namespace ros_websocket_bridge
{

struct DetectStairs
{

typedef DetectStairsRequest Request;
typedef DetectStairsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct DetectStairs
} // namespace ros_websocket_bridge


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ros_websocket_bridge::DetectStairs > {
  static const char* value()
  {
    return "cb42ba353719440445f9489d73ea0e4e";
  }

  static const char* value(const ::ros_websocket_bridge::DetectStairs&) { return value(); }
};

template<>
struct DataType< ::ros_websocket_bridge::DetectStairs > {
  static const char* value()
  {
    return "ros_websocket_bridge/DetectStairs";
  }

  static const char* value(const ::ros_websocket_bridge::DetectStairs&) { return value(); }
};


// service_traits::MD5Sum< ::ros_websocket_bridge::DetectStairsRequest> should match 
// service_traits::MD5Sum< ::ros_websocket_bridge::DetectStairs > 
template<>
struct MD5Sum< ::ros_websocket_bridge::DetectStairsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ros_websocket_bridge::DetectStairs >::value();
  }
  static const char* value(const ::ros_websocket_bridge::DetectStairsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_websocket_bridge::DetectStairsRequest> should match 
// service_traits::DataType< ::ros_websocket_bridge::DetectStairs > 
template<>
struct DataType< ::ros_websocket_bridge::DetectStairsRequest>
{
  static const char* value()
  {
    return DataType< ::ros_websocket_bridge::DetectStairs >::value();
  }
  static const char* value(const ::ros_websocket_bridge::DetectStairsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ros_websocket_bridge::DetectStairsResponse> should match 
// service_traits::MD5Sum< ::ros_websocket_bridge::DetectStairs > 
template<>
struct MD5Sum< ::ros_websocket_bridge::DetectStairsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ros_websocket_bridge::DetectStairs >::value();
  }
  static const char* value(const ::ros_websocket_bridge::DetectStairsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_websocket_bridge::DetectStairsResponse> should match 
// service_traits::DataType< ::ros_websocket_bridge::DetectStairs > 
template<>
struct DataType< ::ros_websocket_bridge::DetectStairsResponse>
{
  static const char* value()
  {
    return DataType< ::ros_websocket_bridge::DetectStairs >::value();
  }
  static const char* value(const ::ros_websocket_bridge::DetectStairsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROS_WEBSOCKET_BRIDGE_MESSAGE_DETECTSTAIRS_H