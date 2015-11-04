
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_stream_XMLEventFactoryImpl__
#define __gnu_xml_stream_XMLEventFactoryImpl__

#pragma interface

#include <javax/xml/stream/XMLEventFactory.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace stream
      {
          class XMLEventFactoryImpl;
      }
    }
  }
  namespace javax
  {
    namespace xml
    {
      namespace namespace$
      {
          class NamespaceContext;
          class QName;
      }
      namespace stream
      {
          class Location;
        namespace events
        {
            class Attribute;
            class Characters;
            class Comment;
            class DTD;
            class EndDocument;
            class EndElement;
            class EntityDeclaration;
            class EntityReference;
            class Namespace;
            class ProcessingInstruction;
            class StartDocument;
            class StartElement;
        }
      }
    }
  }
}

class gnu::xml::stream::XMLEventFactoryImpl : public ::javax::xml::stream::XMLEventFactory
{

public:
  XMLEventFactoryImpl();
  virtual void setLocation(::javax::xml::stream::Location *);
  virtual ::javax::xml::stream::events::Attribute * createAttribute(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  virtual ::javax::xml::stream::events::Attribute * createAttribute(::java::lang::String *, ::java::lang::String *);
  virtual ::javax::xml::stream::events::Attribute * createAttribute(::javax::xml::namespace$::QName *, ::java::lang::String *);
  virtual ::javax::xml::stream::events::Namespace * createNamespace(::java::lang::String *);
  virtual ::javax::xml::stream::events::Namespace * createNamespace(::java::lang::String *, ::java::lang::String *);
  virtual ::javax::xml::stream::events::StartElement * createStartElement(::javax::xml::namespace$::QName *, ::java::util::Iterator *, ::java::util::Iterator *);
  virtual ::javax::xml::stream::events::StartElement * createStartElement(::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  virtual ::javax::xml::stream::events::StartElement * createStartElement(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::util::Iterator *, ::java::util::Iterator *);
  virtual ::javax::xml::stream::events::StartElement * createStartElement(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::util::Iterator *, ::java::util::Iterator *, ::javax::xml::namespace$::NamespaceContext *);
  virtual ::javax::xml::stream::events::EndElement * createEndElement(::javax::xml::namespace$::QName *, ::java::util::Iterator *);
  virtual ::javax::xml::stream::events::EndElement * createEndElement(::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  virtual ::javax::xml::stream::events::EndElement * createEndElement(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::util::Iterator *);
  virtual ::javax::xml::stream::events::Characters * createCharacters(::java::lang::String *);
  virtual ::javax::xml::stream::events::Characters * createCData(::java::lang::String *);
  virtual ::javax::xml::stream::events::Characters * createSpace(::java::lang::String *);
  virtual ::javax::xml::stream::events::Characters * createIgnorableSpace(::java::lang::String *);
  virtual ::javax::xml::stream::events::StartDocument * createStartDocument();
  virtual ::javax::xml::stream::events::StartDocument * createStartDocument(::java::lang::String *, ::java::lang::String *, jboolean);
  virtual ::javax::xml::stream::events::StartDocument * createStartDocument(::java::lang::String *, ::java::lang::String *);
  virtual ::javax::xml::stream::events::StartDocument * createStartDocument(::java::lang::String *);
  virtual ::javax::xml::stream::events::EndDocument * createEndDocument();
  virtual ::javax::xml::stream::events::EntityReference * createEntityReference(::java::lang::String *, ::javax::xml::stream::events::EntityDeclaration *);
  virtual ::javax::xml::stream::events::Comment * createComment(::java::lang::String *);
  virtual ::javax::xml::stream::events::ProcessingInstruction * createProcessingInstruction(::java::lang::String *, ::java::lang::String *);
  virtual ::javax::xml::stream::events::DTD * createDTD(::java::lang::String *);
public: // actually package-private
  virtual ::java::util::LinkedList * createLinkedList(::java::util::Iterator *);
public: // actually protected
  ::javax::xml::stream::Location * __attribute__((aligned(__alignof__( ::javax::xml::stream::XMLEventFactory)))) location;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_stream_XMLEventFactoryImpl__
