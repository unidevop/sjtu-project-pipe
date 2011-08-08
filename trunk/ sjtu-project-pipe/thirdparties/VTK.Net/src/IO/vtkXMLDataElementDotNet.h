#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLDataElement : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLDataElement *NewInstance ();
  vtkXMLDataElement^ NewInstance();


  // vtkXMLDataElement *SafeDownCast (vtkObject* o);
  static vtkXMLDataElement^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkXMLDataElement *New ();


  // char *GetName ();
/// <summary>
/// <para>Set/Get the name of the element.  This is its XML tag.</para>
/// </summary>
  System::String^ GetName();


  // void SetName (char *);
/// <summary>
/// <para>Set/Get the name of the element.  This is its XML tag.</para>
/// </summary>
  void SetName(System::String^ arg0);


  // char *GetId ();
/// <summary>
/// <para>Set/Get the value of the id attribute of the element, if any.</para>
/// </summary>
  System::String^ GetId();


  // void SetId (char *);
/// <summary>
/// <para>Set/Get the value of the id attribute of the element, if any.</para>
/// </summary>
  void SetId(System::String^ arg0);


  // const char *GetAttribute (const char *name);
/// <summary>
/// <para>Get the attribute with the given name.  If it doesn't exist, returns 0.</para>
/// </summary>
  System::String^ GetAttribute(System::String^ name);


  // void SetAttribute (const char *name, const char *value);
/// <summary>
/// <para>Set the attribute with the given name and value. If it doesn't exist, adds it.</para>
/// </summary>
  void SetAttribute(System::String^ name, System::String^ value);


  // int GetScalarAttribute (const char *name, int &value);
/// <summary>
/// <para>Get the attribute with the given name and converted to a scalar value.  Returns whether value was extracted.</para>
/// </summary>
  int GetScalarAttribute(System::String^ name, int% value);


  // int GetScalarAttribute (const char *name, float &value);
/// <summary>
/// <para>Get the attribute with the given name and converted to a scalar value.  Returns whether value was extracted.</para>
/// </summary>
  int GetScalarAttribute(System::String^ name, float% value);


  // int GetScalarAttribute (const char *name, double &value);
/// <summary>
/// <para>Get the attribute with the given name and converted to a scalar value.  Returns whether value was extracted.</para>
/// </summary>
  int GetScalarAttribute(System::String^ name, double% value);


  // int GetScalarAttribute (const char *name, unsigned long &value);
/// <summary>
/// <para>Get the attribute with the given name and converted to a scalar value.  Returns whether value was extracted.</para>
/// </summary>
  int GetScalarAttribute(System::String^ name, unsigned long% arg1);


  // void SetIntAttribute (const char *name, int value);
/// <summary>
/// <para>Set the attribute with the given name. We can not use the same GetScalarAttribute() construct since the compiler will not be able to resolve between SetAttribute(..., int) and SetAttribute(..., unsigned long).</para>
/// </summary>
  void SetIntAttribute(System::String^ name, int value);


  // void SetFloatAttribute (const char *name, float value);
/// <summary>
/// <para>Set the attribute with the given name. We can not use the same GetScalarAttribute() construct since the compiler will not be able to resolve between SetAttribute(..., int) and SetAttribute(..., unsigned long).</para>
/// </summary>
  void SetFloatAttribute(System::String^ name, float value);


  // void SetDoubleAttribute (const char *name, double value);
/// <summary>
/// <para>Set the attribute with the given name. We can not use the same GetScalarAttribute() construct since the compiler will not be able to resolve between SetAttribute(..., int) and SetAttribute(..., unsigned long).</para>
/// </summary>
  void SetDoubleAttribute(System::String^ name, double value);


  // void SetUnsignedLongAttribute (const char *name, unsigned long value);
/// <summary>
/// <para>Set the attribute with the given name. We can not use the same GetScalarAttribute() construct since the compiler will not be able to resolve between SetAttribute(..., int) and SetAttribute(..., unsigned long).</para>
/// </summary>
  void SetUnsignedLongAttribute(System::String^ name, unsigned long value);


  // int GetVectorAttribute (const char *name, int length, int *value);
/// <summary>
/// <para>Get the attribute with the given name and converted to a scalar value.  Returns length of vector read.</para>
/// </summary>
  int GetVectorAttribute(System::String^ name, int length, array<int>^ value);


  // int GetVectorAttribute (const char *name, int length, float *value);
/// <summary>
/// <para>Get the attribute with the given name and converted to a scalar value.  Returns length of vector read.</para>
/// </summary>
  int GetVectorAttribute(System::String^ name, int length, array<float>^ value);


  // int GetVectorAttribute (const char *name, int length, double *value);
/// <summary>
/// <para>Get the attribute with the given name and converted to a scalar value.  Returns length of vector read.</para>
/// </summary>
  int GetVectorAttribute(System::String^ name, int length, array<double>^ value);


  // int GetVectorAttribute (const char *name, int length, unsigned long *value);
/// <summary>
/// <para>Get the attribute with the given name and converted to a scalar value.  Returns length of vector read.</para>
/// </summary>
  int GetVectorAttribute(System::String^ name, int length, array<unsigned long>^ value);


  // void SetVectorAttribute (const char *name, int length, const int *value);
/// <summary>
/// <para>Set the attribute with the given name.</para>
/// </summary>
  void SetVectorAttribute(System::String^ name, int length, array<int>^ arg2);


  // void SetVectorAttribute (const char *name, int length, const float *value);
/// <summary>
/// <para>Set the attribute with the given name.</para>
/// </summary>
  void SetVectorAttribute(System::String^ name, int length, array<float>^ value);


  // void SetVectorAttribute (const char *name, int length, const double *value);
/// <summary>
/// <para>Set the attribute with the given name.</para>
/// </summary>
  void SetVectorAttribute(System::String^ name, int length, array<double>^ value);


  // void SetVectorAttribute (const char *name, int length, const unsigned long *value);
/// <summary>
/// <para>Set the attribute with the given name.</para>
/// </summary>
  void SetVectorAttribute(System::String^ name, int length, array<unsigned long>^ value);


  // int GetWordTypeAttribute (const char *name, int &value);
/// <summary>
/// <para>Get the attribute with the given name and converted to a word type such as VTK_FLOAT or VTK_UNSIGNED_LONG.</para>
/// </summary>
  int GetWordTypeAttribute(System::String^ name, int% value);


  // int GetNumberOfAttributes ();
/// <summary>
/// <para>Get the number of attributes.</para>
/// </summary>
  int GetNumberOfAttributes();


  // const char *GetAttributeName (int idx);
/// <summary>
/// <para>Get the n-th attribute name. Returns 0 if there is no such attribute.</para>
/// </summary>
  System::String^ GetAttributeName(int idx);


  // const char *GetAttributeValue (int idx);
/// <summary>
/// <para>Get the n-th attribute value. Returns 0 if there is no such attribute.</para>
/// </summary>
  System::String^ GetAttributeValue(int idx);


  // virtual void RemoveAllAttributes ();
/// <summary>
/// <para>Remove all attributes.</para>
/// </summary>
  void RemoveAllAttributes();


  // vtkXMLDataElement *GetParent ();
/// <summary>
/// <para>Set/Get the parent of this element.</para>
/// </summary>
  vtkXMLDataElement^ GetParent();


  // void SetParent (vtkXMLDataElement *parent);
/// <summary>
/// <para>Set/Get the parent of this element.</para>
/// </summary>
  void SetParent(vtkXMLDataElement^ parent);


  // virtual vtkXMLDataElement *GetRoot ();
/// <summary>
/// <para>Get root of the XML tree this element is part of.</para>
/// </summary>
  vtkXMLDataElement^ GetRoot();


  // int GetNumberOfNestedElements ();
/// <summary>
/// <para>Get the number of elements nested in this one.</para>
/// </summary>
  int GetNumberOfNestedElements();


  // vtkXMLDataElement *GetNestedElement (int index);
/// <summary>
/// <para>Get the element nested in this one at the given index.</para>
/// </summary>
  vtkXMLDataElement^ GetNestedElement(int index);


  // void AddNestedElement (vtkXMLDataElement *element);
/// <summary>
/// <para>Add nested element</para>
/// </summary>
  void AddNestedElement(vtkXMLDataElement^ element);


  // virtual void RemoveNestedElement (vtkXMLDataElement *);
/// <summary>
/// <para>Remove nested element.</para>
/// </summary>
  void RemoveNestedElement(vtkXMLDataElement^ arg0);


  // virtual void RemoveAllNestedElements ();
/// <summary>
/// <para>Remove all nested elements.</para>
/// </summary>
  void RemoveAllNestedElements();


  // vtkXMLDataElement *FindNestedElement (const char *id);
/// <summary>
/// <para>Find a nested element with the given id, given name, or given name and id.</para>
/// </summary>
  vtkXMLDataElement^ FindNestedElement(System::String^ id);


  // vtkXMLDataElement *FindNestedElementWithName (const char *name);
/// <summary>
/// <para>Find a nested element with the given id, given name, or given name and id.</para>
/// </summary>
  vtkXMLDataElement^ FindNestedElementWithName(System::String^ name);


  // vtkXMLDataElement *FindNestedElementWithNameAndId (const char *name, const char *id);
/// <summary>
/// <para>Find a nested element with the given id, given name, or given name and id.</para>
/// </summary>
  vtkXMLDataElement^ FindNestedElementWithNameAndId(System::String^ name, System::String^ id);


  // vtkXMLDataElement *FindNestedElementWithNameAndAttribute (const char *name, const char *att_name, const char *att_value);
/// <summary>
/// <para>Find a nested element with the given id, given name, or given name and id.</para>
/// </summary>
  vtkXMLDataElement^ FindNestedElementWithNameAndAttribute(System::String^ name, System::String^ att_name, System::String^ att_value);


  // vtkXMLDataElement *LookupElement (const char *id);
/// <summary>
/// <para>Lookup the element with the given id, starting at this scope.</para>
/// </summary>
  vtkXMLDataElement^ LookupElement(System::String^ id);


  // long unsigned GetXMLByteIndex ();
/// <summary>
/// <para>Set/Get the offset from the beginning of the XML document to this element.</para>
/// </summary>
  unsigned long GetXMLByteIndex();


  // void SetXMLByteIndex (unsigned long );
/// <summary>
/// <para>Set/Get the offset from the beginning of the XML document to this element.</para>
/// </summary>
  void SetXMLByteIndex(unsigned long arg0);


  // virtual int IsEqualTo (vtkXMLDataElement *elem);
/// <summary>
/// <para>Check if the instance has the same name, attributes and nested elements contents than the given element (this method is applied recursively on the nested elements, and they must be stored in the same order). Warning: Id, Parent, XMLByteIndex are ignored.</para>
/// </summary>
  int IsEqualTo(vtkXMLDataElement^ elem);


  // virtual void DeepCopy (vtkXMLDataElement *elem);
/// <summary>
/// <para>Copy this element from another of the same type (elem), recursively. Old attributes and nested elements are removed, new ones are created given the contents of 'elem'. Warning: Parent is ignored.</para>
/// </summary>
  void DeepCopy(vtkXMLDataElement^ elem);


  // void SetAttributeEncoding (int );
/// <summary>
/// <para>Get/Set the internal character encoding of the attributes. Default type is VTK_ENCODING_UTF_8. Note that a vtkXMLDataParser has its own AttributesEncoding ivar. If  this ivar is set to something other than VTK_ENCODING_NONE, it will be used to set the attribute encoding of each vtkXMLDataElement  created by this vtkXMLDataParser.</para>
/// </summary>
  void SetAttributeEncoding(int arg0);


  // int GetAttributeEncodingMinValue ();
/// <summary>
/// <para>Get/Set the internal character encoding of the attributes. Default type is VTK_ENCODING_UTF_8. Note that a vtkXMLDataParser has its own AttributesEncoding ivar. If  this ivar is set to something other than VTK_ENCODING_NONE, it will be used to set the attribute encoding of each vtkXMLDataElement  created by this vtkXMLDataParser.</para>
/// </summary>
  int GetAttributeEncodingMinValue();


  // int GetAttributeEncodingMaxValue ();
/// <summary>
/// <para>Get/Set the internal character encoding of the attributes. Default type is VTK_ENCODING_UTF_8. Note that a vtkXMLDataParser has its own AttributesEncoding ivar. If  this ivar is set to something other than VTK_ENCODING_NONE, it will be used to set the attribute encoding of each vtkXMLDataElement  created by this vtkXMLDataParser.</para>
/// </summary>
  int GetAttributeEncodingMaxValue();


  // int GetAttributeEncoding ();
/// <summary>
/// <para>Get/Set the internal character encoding of the attributes. Default type is VTK_ENCODING_UTF_8. Note that a vtkXMLDataParser has its own AttributesEncoding ivar. If  this ivar is set to something other than VTK_ENCODING_NONE, it will be used to set the attribute encoding of each vtkXMLDataElement  created by this vtkXMLDataParser.</para>
/// </summary>
  int GetAttributeEncoding();


// Did not wrap:  vtkXMLDataElement ();


// Did not wrap:  ~vtkXMLDataElement ();


// Did not wrap:  void ReadXMLAttributes (const char *atts, int encoding);


// Did not wrap:  void SeekInlineDataPosition (vtkXMLDataParser *parser);


// Did not wrap:  void PrintXML (ostream &os, vtkIndent indent);


// Did not wrap:  vtkXMLDataElement *LookupElementInScope (const char *id);


// Did not wrap:  vtkXMLDataElement *LookupElementUpScope (const char *id);


// Did not wrap:  static int IsSpace (char c);


// Did not wrap:  vtkXMLDataElement (const vtkXMLDataElement &);


// Did not wrap:  void vtkXMLDataElement 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLDataElement(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLDataElement(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLDataElement();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLDataElement();


};

} // end vtkIO
