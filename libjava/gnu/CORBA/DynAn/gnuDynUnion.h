
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_DynAn_gnuDynUnion__
#define __gnu_CORBA_DynAn_gnuDynUnion__

#pragma interface

#include <gnu/CORBA/DynAn/DivideableAny.h>
extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
      namespace DynAn
      {
          class gnuDynAnyFactory;
          class gnuDynUnion;
      }
    }
  }
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class ORB;
          class TCKind;
          class TypeCode;
      }
      namespace DynamicAny
      {
          class DynAny;
      }
    }
  }
}

class gnu::CORBA::DynAn::gnuDynUnion : public ::gnu::CORBA::DynAn::DivideableAny
{

public:
  gnuDynUnion(::org::omg::CORBA::TypeCode *, ::org::omg::CORBA::TypeCode *, ::gnu::CORBA::DynAn::gnuDynAnyFactory *, ::org::omg::CORBA::ORB *);
  virtual ::org::omg::CORBA::Any * to_any();
  virtual void assign(::org::omg::DynamicAny::DynAny *);
  virtual ::org::omg::DynamicAny::DynAny * copy();
  virtual void from_any(::org::omg::CORBA::Any *);
  virtual ::org::omg::CORBA::TCKind * discriminator_kind();
  virtual ::org::omg::DynamicAny::DynAny * get_discriminator();
  virtual jboolean has_no_active_member();
  virtual ::org::omg::CORBA::TCKind * member_kind();
  virtual ::java::lang::String * member_name();
  virtual ::org::omg::DynamicAny::DynAny * member();
  virtual void set_discriminator(::org::omg::DynamicAny::DynAny *);
  virtual void set_to_default_member();
  virtual void set_to_no_active_member();
  virtual void updateMember();
  virtual void changed();
private:
  static const jlong serialVersionUID = 1LL;
public: // actually package-private
  ::org::omg::DynamicAny::DynAny * __attribute__((aligned(__alignof__( ::gnu::CORBA::DynAn::DivideableAny)))) discriminator;
  static ::java::lang::String * NOAM;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_DynAn_gnuDynUnion__
