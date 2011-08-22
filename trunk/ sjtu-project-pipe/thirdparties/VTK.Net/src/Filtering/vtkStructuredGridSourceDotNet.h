#pragma once

// managed includes
#include "vtkSourceDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkStructuredGrid;

public ref class vtkStructuredGridSource : public vtkSource
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkStructuredGridSource *NewInstance ();
  vtkStructuredGridSource^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkStructuredGrid *GetOutput ();
/// <summary>
/// <para>Get the output of this source.</para>
/// </summary>
  vtkStructuredGrid^ GetOutput();


  // vtkStructuredGrid *GetOutput (int idx);
/// <summary>
/// <para>Get the output of this source.</para>
/// </summary>
  vtkStructuredGrid^ GetOutput(int idx);


  // void SetOutput (vtkStructuredGrid *output);
/// <summary>
/// <para>Get the output of this source.</para>
/// </summary>
  void SetOutput(vtkStructuredGrid^ output);


// Did not wrap:  vtkStructuredGridSource ();


// Did not wrap:  ~vtkStructuredGridSource ();


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkStructuredGridSource (const vtkStructuredGridSource &);


// Did not wrap:  void vtkStructuredGridSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkStructuredGridSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkStructuredGridSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkStructuredGridSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkStructuredGridSource();


};

} // end vtkFiltering
