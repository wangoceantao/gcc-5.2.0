
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_libxmlj_sax_GnomeSAXParser__
#define __gnu_xml_libxmlj_sax_GnomeSAXParser__

#pragma interface

#include <javax/xml/parsers/SAXParser.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace libxmlj
      {
        namespace sax
        {
            class GnomeSAXParser;
        }
      }
    }
  }
  namespace org
  {
    namespace xml
    {
      namespace sax
      {
          class Parser;
          class XMLReader;
      }
    }
  }
}

class gnu::xml::libxmlj::sax::GnomeSAXParser : public ::javax::xml::parsers::SAXParser
{

public: // actually package-private
  GnomeSAXParser(jboolean, jboolean);
public:
  virtual ::org::xml::sax::Parser * getParser();
  virtual ::org::xml::sax::XMLReader * getXMLReader();
  virtual ::java::lang::Object * getProperty(::java::lang::String *);
  virtual void setProperty(::java::lang::String *, ::java::lang::Object *);
  virtual jboolean isNamespaceAware();
  virtual jboolean isValidating();
private:
  jboolean __attribute__((aligned(__alignof__( ::javax::xml::parsers::SAXParser)))) namespaceAware;
  jboolean validating;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_libxmlj_sax_GnomeSAXParser__
