#pragma once

// managed includes
#include "vtkPolyDataWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkSTLWriter : public vtkPolyDataWriter
{

public:
// Did not wrap:  static vtkSTLWriter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSTLWriter *NewInstance ();
  vtkSTLWriter^ NewInstance();


  // vtkSTLWriter *SafeDownCast (vtkObject* o);
  static vtkSTLWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkSTLWriter ();


// Did not wrap:  ~vtkSTLWriter ();


// Did not wrap:  void WriteData ();


// Did not wrap:  void WriteBinarySTL (vtkPoints *pts, vtkCellArray *polys);


// Did not wrap:  void WriteAsciiSTL (vtkPoints *pts, vtkCellArray *polys);


// Did not wrap:  vtkSTLWriter (const vtkSTLWriter &);


// Did not wrap:  void vtkSTLWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSTLWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSTLWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSTLWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSTLWriter();


};

} // end vtkIO
