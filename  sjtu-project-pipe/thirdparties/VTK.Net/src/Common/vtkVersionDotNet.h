#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkVersion : public vtkObject
{

public:
// Did not wrap:  static vtkVersion *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkVersion *NewInstance ();
  vtkVersion^ NewInstance();


  // vtkVersion *SafeDownCast (vtkObject* o);
  static vtkVersion^ SafeDownCast(vtkObject^ o);


  // static const char *GetVTKVersion ();return VTK_VERSION 
/// <summary>
/// <para>Return the version of vtk this object is a part of. A variety of methods are included. GetVTKSourceVersion returns a string with an identifier which timestamps a particular source tree. </para>
/// </summary>
  static System::String^ GetVTKVersion();


  // static int GetVTKMajorVersion ();return VTK_MAJOR_VERSION 
/// <summary>
/// <para>Return the version of vtk this object is a part of. A variety of methods are included. GetVTKSourceVersion returns a string with an identifier which timestamps a particular source tree. </para>
/// </summary>
  static int GetVTKMajorVersion();


  // static int GetVTKMinorVersion ();return VTK_MINOR_VERSION 
/// <summary>
/// <para>Return the version of vtk this object is a part of. A variety of methods are included. GetVTKSourceVersion returns a string with an identifier which timestamps a particular source tree. </para>
/// </summary>
  static int GetVTKMinorVersion();


  // static int GetVTKBuildVersion ();return VTK_BUILD_VERSION 
/// <summary>
/// <para>Return the version of vtk this object is a part of. A variety of methods are included. GetVTKSourceVersion returns a string with an identifier which timestamps a particular source tree. </para>
/// </summary>
  static int GetVTKBuildVersion();


  // static const char *GetVTKSourceVersion ();return VTK_SOURCE_VERSION 
  static System::String^ GetVTKSourceVersion();


// Did not wrap:  vtkVersion ();


// Did not wrap:  ~vtkVersion ();


// Did not wrap:  vtkVersion (const vtkVersion &);


// Did not wrap:  void vtkVersion 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkVersion(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkVersion(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkVersion();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkVersion();


};

} // end vtkCommon
