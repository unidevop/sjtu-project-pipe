#pragma once

// managed includes
#include "vtkSourceDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkImageData;

public ref class vtkImageSource : public vtkSource
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageSource *NewInstance ();
  vtkImageSource^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetOutput (vtkImageData *output);
/// <summary>
/// <para>Get the output of this source.</para>
/// </summary>
  void SetOutput(vtkImageData^ output);


  // vtkImageData *GetOutput ();
/// <summary>
/// <para>Get the output of this source.</para>
/// </summary>
  vtkImageData^ GetOutput();


  // vtkImageData *GetOutput (int idx);
/// <summary>
/// <para>Get the output of this source.</para>
/// </summary>
  vtkImageData^ GetOutput(int idx);


// Did not wrap:  vtkImageSource ();


// Did not wrap:  ~vtkImageSource ();


// Did not wrap:  void Execute ();


// Did not wrap:  virtual void Execute (vtkImageData *data);


// Did not wrap:  virtual vtkImageData *AllocateOutputData (vtkDataObject *out);


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkImageSource (const vtkImageSource &);


// Did not wrap:  void vtkImageSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageSource();


};

} // end vtkFiltering
