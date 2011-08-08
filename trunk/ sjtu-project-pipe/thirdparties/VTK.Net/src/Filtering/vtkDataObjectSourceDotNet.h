#pragma once

// managed includes
#include "vtkSourceDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataObject;

public ref class vtkDataObjectSource : public vtkSource
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDataObjectSource *NewInstance ();
  vtkDataObjectSource^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkDataObject *GetOutput ();
/// <summary>
/// <para>Get the output field of this source.</para>
/// </summary>
  vtkDataObject^ GetOutput();


  // vtkDataObject *GetOutput (int idx);return vtkDataObject this vtkSource GetOutput idx 
/// <summary>
/// <para>Get the output field of this source.</para>
/// </summary>
  vtkDataObject^ GetOutput(int idx);


  // void SetOutput (vtkDataObject *);
/// <summary>
/// <para>Get the output field of this source.</para>
/// </summary>
  void SetOutput(vtkDataObject^ arg0);


// Did not wrap:  vtkDataObjectSource ();


// Did not wrap:  ~vtkDataObjectSource ();


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkDataObjectSource (const vtkDataObjectSource &);


// Did not wrap:  void vtkDataObjectSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDataObjectSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDataObjectSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDataObjectSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDataObjectSource();


};

} // end vtkFiltering
