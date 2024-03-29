#pragma once

// managed includes
#include "vtkCharArrayDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkTypeInt8Array : public vtkCharArray
{

public:
// Did not wrap:  static vtkTypeInt8Array *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTypeInt8Array *NewInstance ();
  vtkTypeInt8Array^ NewInstance();


  // vtkTypeInt8Array *SafeDownCast (vtkObject* o);
  static vtkTypeInt8Array^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkTypeInt8Array (vtkIdType numComp);


// Did not wrap:  ~vtkTypeInt8Array ();


// Did not wrap:  vtkTypeInt8Array (const vtkTypeInt8Array &);


// Did not wrap:  void vtkTypeInt8Array 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTypeInt8Array(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTypeInt8Array(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTypeInt8Array();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTypeInt8Array();


};

} // end vtkCommon
