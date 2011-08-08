#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkMaskFields : public vtkDataSetAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMaskFields *NewInstance ();
  vtkMaskFields^ NewInstance();


  // vtkMaskFields *SafeDownCast (vtkObject* o);
  static vtkMaskFields^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkMaskFields *New ();


  // void CopyFieldOn (int fieldLocation, const char *name);this CopyFieldOnOff fieldLocation name 
/// <summary>
/// <para>Turn on/off the copying of the field or specified by name. During the copying/passing, the following rules are followed for each array: 1. If the copy flag for an array is set (on or off), it is applied    This overrides rule 2. 2. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array A field name and a location must be specified. For example: @verbatim maskFields-&gt;CopyFieldOff(vtkMaskFields::CELL_DATA, &quot;foo&quot;); @endverbatim causes the field &quot;foo&quot; on the input cell data to not get copied to the output.</para>
/// </summary>
  void CopyFieldOn(int fieldLocation, System::String^ name);


  // void CopyFieldOff (int fieldLocation, const char *name);this CopyFieldOnOff fieldLocation name 
/// <summary>
/// <para>Turn on/off the copying of the attribute or specified by vtkDataSetAttributes:AttributeTypes. During the copying/passing, the following rules are followed for each array: 1. If the copy flag for an array is set (on or off), it is applied    This overrides rule 2. 2. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array An attribute type and a location must be specified. For example: @verbatim maskFields-&gt;CopyAttributeOff(vtkMaskFields::POINT_DATA, vtkDataSetAttributes::SCALARS); @endverbatim causes the scalars on the input point data to not get copied to the output.</para>
/// </summary>
  void CopyFieldOff(int fieldLocation, System::String^ name);


  // void CopyAttributeOn (int attributeLocation, int attributeType);this CopyAttributeOnOff attributeLocation attributeType 
/// <summary>
/// <para>Turn on/off the copying of the attribute or specified by vtkDataSetAttributes:AttributeTypes. During the copying/passing, the following rules are followed for each array: 1. If the copy flag for an array is set (on or off), it is applied    This overrides rule 2. 2. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array An attribute type and a location must be specified. For example: @verbatim maskFields-&gt;CopyAttributeOff(vtkMaskFields::POINT_DATA, vtkDataSetAttributes::SCALARS); @endverbatim causes the scalars on the input point data to not get copied to the output.</para>
/// </summary>
  void CopyAttributeOn(int attributeLocation, int attributeType);


  // void CopyAttributeOff (int attributeLocation, int attributeType);this CopyAttributeOnOff attributeLocation attributeType 
/// <summary>
/// <para>Convenience methods which operate on all field data or  attribute data.  More specific than CopyAllOn or CopyAllOff</para>
/// </summary>
  void CopyAttributeOff(int attributeLocation, int attributeType);


  // void CopyFieldsOff ();this CopyFields 
/// <summary>
/// <para>Convenience methods which operate on all field data or  attribute data.  More specific than CopyAllOn or CopyAllOff</para>
/// </summary>
  void CopyFieldsOff();


  // void CopyAttributesOff ();this CopyAttributes 
  void CopyAttributesOff();


  // void CopyFieldsOn ();this CopyFields 
  void CopyFieldsOn();


  // void CopyAttributesOn ();this CopyAttributes 
/// <summary>
/// <para>Helper methods used by other language bindings. Allows the caller to specify arguments as strings instead of enums.</para>
/// </summary>
  void CopyAttributesOn();


  // void CopyAttributeOn (const char *attributeLoc, const char *attributeType);
/// <summary>
/// <para>Helper methods used by other language bindings. Allows the caller to specify arguments as strings instead of enums.</para>
/// </summary>
  void CopyAttributeOn(System::String^ attributeLoc, System::String^ attributeType);


  // void CopyAttributeOff (const char *attributeLoc, const char *attributeType);
/// <summary>
/// <para>Helper methods used by other language bindings. Allows the caller to specify arguments as strings instead of enums.</para>
/// </summary>
  void CopyAttributeOff(System::String^ attributeLoc, System::String^ attributeType);


  // void CopyFieldOn (const char *fieldLoc, const char *name);
/// <summary>
/// <para>Helper methods used by other language bindings. Allows the caller to specify arguments as strings instead of enums.</para>
/// </summary>
  void CopyFieldOn(System::String^ fieldLoc, System::String^ name);


  // void CopyFieldOff (const char *fieldLoc, const char *name);
/// <summary>
/// <para>Helper methods used by other language bindings. Allows the caller to specify arguments as strings instead of enums.</para>
/// </summary>
  void CopyFieldOff(System::String^ fieldLoc, System::String^ name);


  // virtual void CopyAllOn ();
/// <summary>
/// <para>Turn on copying of all data. During the copying/passing, the following rules are followed for each array: 1. If the copy flag for an array is set (on or off), it is applied    This overrides rule 2. 2. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  void CopyAllOn();


  // virtual void CopyAllOff ();
/// <summary>
/// <para>Turn off copying of all data. During the copying/passing, the following rules are followed for each array: 1. If the copy flag for an array is set (on or off), it is applied    This overrides rule 2. 2. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  void CopyAllOff();


// Did not wrap:  vtkMaskFields ();


// Did not wrap:  virtual ~vtkMaskFields ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void CopyFieldOnOff (int fieldLocation, const char *name, int onOff);


// Did not wrap:  void CopyAttributeOnOff (int attributeLocation, int attributeType, int onOff);


// Did not wrap:  void ClearFieldFlags ();


// Did not wrap:  int FindFlag (const char *field, int location);


// Did not wrap:  int FindFlag (int arrayType, int location);


// Did not wrap:  int GetFlag (const char *field, int location);


// Did not wrap:  int GetFlag (int arrayType, int location);


// Did not wrap:  int GetAttributeLocation (const char *loc);


// Did not wrap:  int GetAttributeType (const char *type);


// Did not wrap:  vtkMaskFields (const vtkMaskFields &);


// Did not wrap:  void vtkMaskFields 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMaskFields(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMaskFields(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMaskFields();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMaskFields();


};

} // end vtkGraphics
