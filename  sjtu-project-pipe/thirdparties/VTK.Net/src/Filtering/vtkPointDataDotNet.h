#pragma once

// managed includes
#include "vtkDataSetAttributesDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkPointData : public vtkDataSetAttributes
{

public:
// Did not wrap:  static vtkPointData *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPointData *NewInstance ();
  vtkPointData^ NewInstance();


  // vtkPointData *SafeDownCast (vtkObject* o);
  static vtkPointData^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void NullPoint (vtkIdType ptId);
  void NullPoint(int ptId);


// Did not wrap:  vtkPointData ();


// Did not wrap:  ~vtkPointData ();


// Did not wrap:  vtkPointData (const vtkPointData &);


// Did not wrap:  void vtkPointData 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPointData(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPointData(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPointData();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPointData();


};

} // end vtkFiltering
