
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_JdwpConstants$ThreadStatus__
#define __gnu_classpath_jdwp_JdwpConstants$ThreadStatus__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace classpath
    {
      namespace jdwp
      {
          class JdwpConstants$ThreadStatus;
      }
    }
  }
}

class gnu::classpath::jdwp::JdwpConstants$ThreadStatus : public ::java::lang::Object
{

public:
  JdwpConstants$ThreadStatus();
  static const jint ZOMBIE = 0;
  static const jint RUNNING = 1;
  static const jint SLEEPING = 2;
  static const jint MONITOR = 3;
  static const jint WAIT = 4;
  static ::java::lang::Class class$;
};

#endif // __gnu_classpath_jdwp_JdwpConstants$ThreadStatus__