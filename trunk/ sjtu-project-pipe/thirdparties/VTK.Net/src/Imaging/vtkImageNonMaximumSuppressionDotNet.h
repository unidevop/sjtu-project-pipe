#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageNonMaximumSuppression : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageNonMaximumSuppression *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageNonMaximumSuppression *NewInstance ();
  vtkImageNonMaximumSuppression^ NewInstance();


  // vtkImageNonMaximumSuppression *SafeDownCast (vtkObject* o);
  static vtkImageNonMaximumSuppression^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetMagnitudeInput (vtkImageData *input);this SetInput input 
/// <summary>
/// <para>Set the magnitude and vector inputs.</para>
/// </summary>
  void SetMagnitudeInput(vtkImageData^ input);


  // void SetVectorInput (vtkImageData *input);this SetInput input 
/// <summary>
/// <para>Set the magnitude and vector inputs.</para>
/// </summary>
  void SetVectorInput(vtkImageData^ input);


  // void SetHandleBoundaries (int );
/// <summary>
/// <para>If &quot;HandleBoundariesOn&quot; then boundary pixels are duplicated So central differences can get values.</para>
/// </summary>
  void SetHandleBoundaries(int arg0);


  // int GetHandleBoundaries ();
/// <summary>
/// <para>If &quot;HandleBoundariesOn&quot; then boundary pixels are duplicated So central differences can get values.</para>
/// </summary>
  int GetHandleBoundaries();


  // void HandleBoundariesOn ();
/// <summary>
/// <para>If &quot;HandleBoundariesOn&quot; then boundary pixels are duplicated So central differences can get values.</para>
/// </summary>
  void HandleBoundariesOn();


  // void HandleBoundariesOff ();
/// <summary>
/// <para>If &quot;HandleBoundariesOn&quot; then boundary pixels are duplicated So central differences can get values.</para>
/// </summary>
  void HandleBoundariesOff();


  // void SetDimensionality (int );
/// <summary>
/// <para>Determines how the input is interpreted (set of 2d slices or a 3D volume)</para>
/// </summary>
  void SetDimensionality(int arg0);


  // int GetDimensionalityMinValue ();
/// <summary>
/// <para>Determines how the input is interpreted (set of 2d slices or a 3D volume)</para>
/// </summary>
  int GetDimensionalityMinValue();


  // int GetDimensionalityMaxValue ();
/// <summary>
/// <para>Determines how the input is interpreted (set of 2d slices or a 3D volume)</para>
/// </summary>
  int GetDimensionalityMaxValue();


  // int GetDimensionality ();
/// <summary>
/// <para>Determines how the input is interpreted (set of 2d slices or a 3D volume)</para>
/// </summary>
  int GetDimensionality();


// Did not wrap:  vtkImageNonMaximumSuppression ();


// Did not wrap:  ~vtkImageNonMaximumSuppression ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int extent[6], int threadId);


// Did not wrap:  vtkImageNonMaximumSuppression (const vtkImageNonMaximumSuppression &);


// Did not wrap:  void vtkImageNonMaximumSuppression 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageNonMaximumSuppression(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageNonMaximumSuppression(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageNonMaximumSuppression();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageNonMaximumSuppression();


};

} // end vtkImaging
