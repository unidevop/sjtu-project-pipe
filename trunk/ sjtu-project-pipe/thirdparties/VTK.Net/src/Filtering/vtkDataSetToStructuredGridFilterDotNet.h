#pragma once

// managed includes
#include "vtkStructuredGridSourceDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataSet;

public ref class vtkDataSetToStructuredGridFilter : public vtkStructuredGridSource
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDataSetToStructuredGridFilter *NewInstance ();
  vtkDataSetToStructuredGridFilter^ NewInstance();


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


// Did not wrap:  vtkDataSetToStructuredGridFilter ();


// Did not wrap:  ~vtkDataSetToStructuredGridFilter ();


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkDataSetToStructuredGridFilter (const vtkDataSetToStructuredGridFilter &);


// Did not wrap:  void vtkDataSetToStructuredGridFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDataSetToStructuredGridFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDataSetToStructuredGridFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDataSetToStructuredGridFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDataSetToStructuredGridFilter();


};

} // end vtkFiltering
