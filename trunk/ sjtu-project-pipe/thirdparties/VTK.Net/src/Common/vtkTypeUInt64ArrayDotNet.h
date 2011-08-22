#pragma once

// managed includes
#include "vtkUnsignedLongLongArrayDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkTypeUInt64Array : public vtkUnsignedLongLongArray
{

public:
// Did not wrap:  static vtkTypeUInt64Array *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTypeUInt64Array *NewInstance ();
  vtkTypeUInt64Array^ NewInstance();


  // vtkTypeUInt64Array *SafeDownCast (vtkObject* o);
  static vtkTypeUInt64Array^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkTypeUInt64Array (vtkIdType numComp);


// Did not wrap:  ~vtkTypeUInt64Array ();


// Did not wrap:  vtkTypeUInt64Array (const vtkTypeUInt64Array &);


// Did not wrap:  void vtkTypeUInt64Array 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTypeUInt64Array(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTypeUInt64Array(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTypeUInt64Array();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTypeUInt64Array();


};

} // end vtkCommon
