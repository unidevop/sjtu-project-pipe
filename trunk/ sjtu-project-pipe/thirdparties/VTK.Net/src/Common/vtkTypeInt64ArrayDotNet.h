#pragma once

// managed includes
#include "vtkLongLongArrayDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkTypeInt64Array : public vtkLongLongArray
{

public:
// Did not wrap:  static vtkTypeInt64Array *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTypeInt64Array *NewInstance ();
  vtkTypeInt64Array^ NewInstance();


  // vtkTypeInt64Array *SafeDownCast (vtkObject* o);
  static vtkTypeInt64Array^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkTypeInt64Array (vtkIdType numComp);


// Did not wrap:  ~vtkTypeInt64Array ();


// Did not wrap:  vtkTypeInt64Array (const vtkTypeInt64Array &);


// Did not wrap:  void vtkTypeInt64Array 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTypeInt64Array(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTypeInt64Array(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTypeInt64Array();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTypeInt64Array();


};

} // end vtkCommon
