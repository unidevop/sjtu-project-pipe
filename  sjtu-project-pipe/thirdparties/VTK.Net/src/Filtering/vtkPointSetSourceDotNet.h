#pragma once

// managed includes
#include "vtkSourceDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkPointSet;

public ref class vtkPointSetSource : public vtkSource
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPointSetSource *NewInstance ();
  vtkPointSetSource^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkPointSet *GetOutput ();
/// <summary>
/// <para>Get the output of this source.</para>
/// </summary>
  vtkPointSet^ GetOutput();


  // vtkPointSet *GetOutput (int idx);
/// <summary>
/// <para>Get the output of this source.</para>
/// </summary>
  vtkPointSet^ GetOutput(int idx);


  // void SetOutput (vtkPointSet *output);
/// <summary>
/// <para>Get the output of this source.</para>
/// </summary>
  void SetOutput(vtkPointSet^ output);


// Did not wrap:  vtkPointSetSource ();


// Did not wrap:  ~vtkPointSetSource ();


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkPointSetSource (const vtkPointSetSource &);


// Did not wrap:  void vtkPointSetSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPointSetSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPointSetSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPointSetSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPointSetSource();


};

} // end vtkFiltering
