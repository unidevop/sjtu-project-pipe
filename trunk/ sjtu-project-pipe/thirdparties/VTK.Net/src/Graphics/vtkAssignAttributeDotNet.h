#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkAssignAttribute : public vtkDataSetAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkAssignAttribute *NewInstance ();
  vtkAssignAttribute^ NewInstance();


  // vtkAssignAttribute *SafeDownCast (vtkObject* o);
  static vtkAssignAttribute^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkAssignAttribute *New ();


  // void Assign (int inputAttributeType, int attributeType, int attributeLoc);
/// <summary>
/// <para>Label an attribute as another attribute.</para>
/// </summary>
  void Assign(int inputAttributeType, int attributeType, int attributeLoc);


  // void Assign (const char *fieldName, int attributeType, int attributeLoc);
/// <summary>
/// <para>Label an array as an attribute.</para>
/// </summary>
  void Assign(System::String^ fieldName, int attributeType, int attributeLoc);


  // void Assign (const char *name, const char *attributeType, const char *attributeLoc);
/// <summary>
/// <para>Helper method used by other language bindings. Allows the caller to specify arguments as strings instead of enums.</para>
/// </summary>
  void Assign(System::String^ name, System::String^ attributeType, System::String^ attributeLoc);


// Did not wrap:  vtkAssignAttribute ();


// Did not wrap:  virtual ~vtkAssignAttribute ();


// Did not wrap:  int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkAssignAttribute (const vtkAssignAttribute &);


// Did not wrap:  void vtkAssignAttribute 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkAssignAttribute(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkAssignAttribute(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkAssignAttribute();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkAssignAttribute();


};

} // end vtkGraphics
