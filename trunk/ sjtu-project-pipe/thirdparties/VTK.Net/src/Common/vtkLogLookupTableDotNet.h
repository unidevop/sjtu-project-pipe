#pragma once

// managed includes
#include "vtkLookupTableDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkLogLookupTable : public vtkLookupTable
{

public:
// Did not wrap:  static vtkLogLookupTable *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkLogLookupTable *NewInstance ();
  vtkLogLookupTable^ NewInstance();


  // vtkLogLookupTable *SafeDownCast (vtkObject* o);
  static vtkLogLookupTable^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkLogLookupTable (int sze, int ext);


// Did not wrap:  ~vtkLogLookupTable ();


// Did not wrap:  vtkLogLookupTable (const vtkLogLookupTable &);


// Did not wrap:  void vtkLogLookupTable 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkLogLookupTable(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkLogLookupTable(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkLogLookupTable();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkLogLookupTable();


};

} // end vtkCommon
