
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_server_RMIClientSocketFactory__
#define __java_rmi_server_RMIClientSocketFactory__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace net
    {
        class Socket;
    }
    namespace rmi
    {
      namespace server
      {
          class RMIClientSocketFactory;
      }
    }
  }
}

class java::rmi::server::RMIClientSocketFactory : public ::java::lang::Object
{

public:
  virtual ::java::net::Socket * createSocket(::java::lang::String *, jint) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __java_rmi_server_RMIClientSocketFactory__
