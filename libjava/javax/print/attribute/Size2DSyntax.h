
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_Size2DSyntax__
#define __javax_print_attribute_Size2DSyntax__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace print
    {
      namespace attribute
      {
          class Size2DSyntax;
      }
    }
  }
}

class javax::print::attribute::Size2DSyntax : public ::java::lang::Object
{

public: // actually protected
  Size2DSyntax(jfloat, jfloat, jint);
  Size2DSyntax(jint, jint, jint);
public:
  virtual jboolean equals(::java::lang::Object *);
  virtual JArray< jfloat > * getSize(jint);
  virtual jfloat getX(jint);
public: // actually protected
  virtual jint getXMicrometers();
public:
  virtual jfloat getY(jint);
public: // actually protected
  virtual jint getYMicrometers();
public:
  virtual jint hashCode();
  virtual ::java::lang::String * toString();
  virtual ::java::lang::String * toString(jint, ::java::lang::String *);
  static const jint INCH = 25400;
  static const jint MM = 1000;
private:
  jint __attribute__((aligned(__alignof__( ::java::lang::Object)))) x;
  jint y;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_print_attribute_Size2DSyntax__
