#pragma once

// managed includes
#include "vtkImageStencilSourceDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImplicitFunctionToImageStencil : public vtkImageStencilSource
{

public:
// Did not wrap:  static vtkImplicitFunctionToImageStencil *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImplicitFunctionToImageStencil *NewInstance ();
  vtkImplicitFunctionToImageStencil^ NewInstance();


  // vtkImplicitFunctionToImageStencil *SafeDownCast (vtkObject* o);
  static vtkImplicitFunctionToImageStencil^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetInput (vtkImplicitFunction *);
/// <summary>
/// <para>Specify the implicit function to convert into a stencil.</para>
/// </summary>
  void SetInput(vtkImplicitFunction^ arg0);


  // vtkImplicitFunction *GetInput ();
/// <summary>
/// <para>Specify the implicit function to convert into a stencil.</para>
/// </summary>
  vtkImplicitFunction^ GetInput();


  // void SetThreshold (double );
/// <summary>
/// <para>Set the threshold value for the implicit function.</para>
/// </summary>
  void SetThreshold(double arg0);


  // double GetThreshold ();
/// <summary>
/// <para>Set the threshold value for the implicit function.</para>
/// </summary>
  double GetThreshold();


// Did not wrap:  vtkImplicitFunctionToImageStencil ();


// Did not wrap:  ~vtkImplicitFunctionToImageStencil ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkImplicitFunctionToImageStencil (const vtkImplicitFunctionToImageStencil &);


// Did not wrap:  void vtkImplicitFunctionToImageStencil 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImplicitFunctionToImageStencil(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImplicitFunctionToImageStencil(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImplicitFunctionToImageStencil();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImplicitFunctionToImageStencil();


};

} // end vtkImaging
