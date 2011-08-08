#pragma once

// managed includes
#include "vtkImageStencilSourceDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageToImageStencil : public vtkImageStencilSource
{

public:
// Did not wrap:  static vtkImageToImageStencil *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageToImageStencil *NewInstance ();
  vtkImageToImageStencil^ NewInstance();


  // vtkImageToImageStencil *SafeDownCast (vtkObject* o);
  static vtkImageToImageStencil^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetInput (vtkImageData *input);
/// <summary>
/// <para>Specify the image data to convert into a stencil.</para>
/// </summary>
  void SetInput(vtkImageData^ input);


  // vtkImageData *GetInput ();
/// <summary>
/// <para>Specify the image data to convert into a stencil.</para>
/// </summary>
  vtkImageData^ GetInput();


  // void ThresholdByUpper (double thresh);
/// <summary>
/// <para>The values greater than or equal to the value match.</para>
/// </summary>
  void ThresholdByUpper(double thresh);


  // void ThresholdByLower (double thresh);
/// <summary>
/// <para>The values less than or equal to the value match.</para>
/// </summary>
  void ThresholdByLower(double thresh);


  // void ThresholdBetween (double lower, double upper);
/// <summary>
/// <para>The values in a range (inclusive) match</para>
/// </summary>
  void ThresholdBetween(double lower, double upper);


  // void SetUpperThreshold (double );
/// <summary>
/// <para>Get the Upper and Lower thresholds.</para>
/// </summary>
  void SetUpperThreshold(double arg0);


  // double GetUpperThreshold ();
/// <summary>
/// <para>Get the Upper and Lower thresholds.</para>
/// </summary>
  double GetUpperThreshold();


  // void SetLowerThreshold (double );
/// <summary>
/// <para>Get the Upper and Lower thresholds.</para>
/// </summary>
  void SetLowerThreshold(double arg0);


  // double GetLowerThreshold ();
/// <summary>
/// <para>Get the Upper and Lower thresholds.</para>
/// </summary>
  double GetLowerThreshold();


// Did not wrap:  vtkImageToImageStencil ();


// Did not wrap:  ~vtkImageToImageStencil ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkImageToImageStencil (const vtkImageToImageStencil &);


// Did not wrap:  void vtkImageToImageStencil 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageToImageStencil(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageToImageStencil(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageToImageStencil();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageToImageStencil();


};

} // end vtkImaging
