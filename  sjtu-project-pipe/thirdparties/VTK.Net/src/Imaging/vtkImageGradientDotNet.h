#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageGradient : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageGradient *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageGradient *NewInstance ();
  vtkImageGradient^ NewInstance();


  // vtkImageGradient *SafeDownCast (vtkObject* o);
  static vtkImageGradient^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetDimensionality (int );
/// <summary>
/// <para>Determines how the input is interpreted (set of 2d slices ...)</para>
/// </summary>
  void SetDimensionality(int arg0);


  // int GetDimensionalityMinValue ();
/// <summary>
/// <para>Determines how the input is interpreted (set of 2d slices ...)</para>
/// </summary>
  int GetDimensionalityMinValue();


  // int GetDimensionalityMaxValue ();
/// <summary>
/// <para>Determines how the input is interpreted (set of 2d slices ...)</para>
/// </summary>
  int GetDimensionalityMaxValue();


  // int GetDimensionality ();
/// <summary>
/// <para>Determines how the input is interpreted (set of 2d slices ...)</para>
/// </summary>
  int GetDimensionality();


  // void SetHandleBoundaries (int );
/// <summary>
/// <para>Get/Set whether to handle boundaries.  If enabled, boundary pixels are treated as duplicated so that central differencing works for the boundary pixels.  If disabled, the output whole extent of the image is reduced by one pixel.</para>
/// </summary>
  void SetHandleBoundaries(int arg0);


  // int GetHandleBoundaries ();
/// <summary>
/// <para>Get/Set whether to handle boundaries.  If enabled, boundary pixels are treated as duplicated so that central differencing works for the boundary pixels.  If disabled, the output whole extent of the image is reduced by one pixel.</para>
/// </summary>
  int GetHandleBoundaries();


  // void HandleBoundariesOn ();
/// <summary>
/// <para>Get/Set whether to handle boundaries.  If enabled, boundary pixels are treated as duplicated so that central differencing works for the boundary pixels.  If disabled, the output whole extent of the image is reduced by one pixel.</para>
/// </summary>
  void HandleBoundariesOn();


  // void HandleBoundariesOff ();
/// <summary>
/// <para>Get/Set whether to handle boundaries.  If enabled, boundary pixels are treated as duplicated so that central differencing works for the boundary pixels.  If disabled, the output whole extent of the image is reduced by one pixel.</para>
/// </summary>
  void HandleBoundariesOff();


// Did not wrap:  vtkImageGradient ();


// Did not wrap:  ~vtkImageGradient ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void ThreadedRequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *, vtkImageData *inData, vtkImageData *outData, int outExt[6], int threadId);


// Did not wrap:  vtkImageGradient (const vtkImageGradient &);


// Did not wrap:  void vtkImageGradient 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageGradient(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageGradient(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageGradient();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageGradient();


};

} // end vtkImaging
