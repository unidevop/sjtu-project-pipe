#pragma once

// managed includes
#include "vtkDataSetAttributesDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkCellData : public vtkDataSetAttributes
{

public:
// Did not wrap:  static vtkCellData *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCellData *NewInstance ();
  vtkCellData^ NewInstance();


  // vtkCellData *SafeDownCast (vtkObject* o);
  static vtkCellData^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkCellData ();


// Did not wrap:  ~vtkCellData ();


// Did not wrap:  vtkCellData (const vtkCellData &);


// Did not wrap:  void vtkCellData 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCellData(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCellData(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCellData();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCellData();


};

} // end vtkFiltering
