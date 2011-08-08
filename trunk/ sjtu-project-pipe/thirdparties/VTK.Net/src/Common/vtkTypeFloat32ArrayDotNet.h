#pragma once

// managed includes
#include "vtkFloatArrayDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkTypeFloat32Array : public vtkFloatArray
{

public:
// Did not wrap:  static vtkTypeFloat32Array *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTypeFloat32Array *NewInstance ();
  vtkTypeFloat32Array^ NewInstance();


  // vtkTypeFloat32Array *SafeDownCast (vtkObject* o);
  static vtkTypeFloat32Array^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkTypeFloat32Array (vtkIdType numComp);


// Did not wrap:  ~vtkTypeFloat32Array ();


// Did not wrap:  vtkTypeFloat32Array (const vtkTypeFloat32Array &);


// Did not wrap:  void vtkTypeFloat32Array 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTypeFloat32Array(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTypeFloat32Array(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTypeFloat32Array();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTypeFloat32Array();


};

} // end vtkCommon
