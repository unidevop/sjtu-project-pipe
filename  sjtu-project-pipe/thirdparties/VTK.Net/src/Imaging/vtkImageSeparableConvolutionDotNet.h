#pragma once

// managed includes
#include "vtkImageDecomposeFilterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageSeparableConvolution : public vtkImageDecomposeFilter
{

public:
// Did not wrap:  static vtkImageSeparableConvolution *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageSeparableConvolution *NewInstance ();
  vtkImageSeparableConvolution^ NewInstance();


  // vtkImageSeparableConvolution *SafeDownCast (vtkObject* o);
  static vtkImageSeparableConvolution^ SafeDownCast(vtkObject^ o);


  // virtual void SetXKernel (vtkFloatArray *);
  void SetXKernel(vtkFloatArray^ arg0);


  // vtkFloatArray *GetXKernel ();
  vtkFloatArray^ GetXKernel();


  // virtual void SetYKernel (vtkFloatArray *);
  void SetYKernel(vtkFloatArray^ arg0);


  // vtkFloatArray *GetYKernel ();
  vtkFloatArray^ GetYKernel();


  // virtual void SetZKernel (vtkFloatArray *);
  void SetZKernel(vtkFloatArray^ arg0);


  // vtkFloatArray *GetZKernel ();
  vtkFloatArray^ GetZKernel();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // unsigned long GetMTime ();
/// <summary>
/// <para>Overload standard modified time function. If kernel arrays are modified, then this object is modified as well.</para>
/// </summary>
  unsigned long GetMTime();


// Did not wrap:  vtkImageSeparableConvolution ();


// Did not wrap:  ~vtkImageSeparableConvolution ();


// Did not wrap:  virtual int IterativeRequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int IterativeRequestInformation (vtkInformation *in, vtkInformation *out);


// Did not wrap:  virtual int IterativeRequestUpdateExtent (vtkInformation *in, vtkInformation *out);


// Did not wrap:  vtkImageSeparableConvolution (const vtkImageSeparableConvolution &);


// Did not wrap:  void vtkImageSeparableConvolution 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageSeparableConvolution(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageSeparableConvolution(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageSeparableConvolution();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageSeparableConvolution();


};

} // end vtkImaging
