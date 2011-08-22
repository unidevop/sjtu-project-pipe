#pragma once

// managed includes
#include "vtkUnstructuredGridSourceDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataSet;

public ref class vtkDataSetToUnstructuredGridFilter : public vtkUnstructuredGridSource
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDataSetToUnstructuredGridFilter *NewInstance ();
  vtkDataSetToUnstructuredGridFilter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetInput (vtkDataSet *input);
/// <summary>
/// <para>Set / get the input data or filter.</para>
/// </summary>
  void SetInput(vtkDataSet^ input);


  // vtkDataSet *GetInput ();
/// <summary>
/// <para>Set / get the input data or filter.</para>
/// </summary>
  vtkDataSet^ GetInput();


// Did not wrap:  vtkDataSetToUnstructuredGridFilter ();


// Did not wrap:  ~vtkDataSetToUnstructuredGridFilter ();


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkDataSetToUnstructuredGridFilter (const vtkDataSetToUnstructuredGridFilter &);


// Did not wrap:  void vtkDataSetToUnstructuredGridFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDataSetToUnstructuredGridFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDataSetToUnstructuredGridFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDataSetToUnstructuredGridFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDataSetToUnstructuredGridFilter();


};

} // end vtkFiltering
