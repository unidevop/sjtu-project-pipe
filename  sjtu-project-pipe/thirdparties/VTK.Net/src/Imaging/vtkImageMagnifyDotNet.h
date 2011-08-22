#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageMagnify : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageMagnify *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageMagnify *NewInstance ();
  vtkImageMagnify^ NewInstance();


  // vtkImageMagnify *SafeDownCast (vtkObject* o);
  static vtkImageMagnify^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetMagnificationFactors (int , int , int );
/// <summary>
/// <para>Set/Get the integer magnification factors in the i-j-k directions.</para>
/// </summary>
  void SetMagnificationFactors(int arg0, int arg1, int arg2);


  // void SetMagnificationFactors (int  a[3]);
/// <summary>
/// <para>Set/Get the integer magnification factors in the i-j-k directions.</para>
/// </summary>
  void SetMagnificationFactors(array<int>^ a);


  // int  *GetMagnificationFactors ();
/// <summary>
/// <para>Set/Get the integer magnification factors in the i-j-k directions.</para>
/// </summary>
  array<int>^ GetMagnificationFactors();


  // void SetInterpolate (int );
/// <summary>
/// <para>Turn interpolation on and off (pixel replication is used when off).</para>
/// </summary>
  void SetInterpolate(int arg0);


  // int GetInterpolate ();
/// <summary>
/// <para>Turn interpolation on and off (pixel replication is used when off).</para>
/// </summary>
  int GetInterpolate();


  // void InterpolateOn ();
/// <summary>
/// <para>Turn interpolation on and off (pixel replication is used when off).</para>
/// </summary>
  void InterpolateOn();


  // void InterpolateOff ();
/// <summary>
/// <para>Turn interpolation on and off (pixel replication is used when off).</para>
/// </summary>
  void InterpolateOff();


// Did not wrap:  vtkImageMagnify ();


// Did not wrap:  ~vtkImageMagnify ();


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int outExt[6], int id);


// Did not wrap:  void InternalRequestUpdateExtent (int *inExt, int *outExt);


// Did not wrap:  vtkImageMagnify (const vtkImageMagnify &);


// Did not wrap:  void vtkImageMagnify 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageMagnify(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageMagnify(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageMagnify();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageMagnify();


};

} // end vtkImaging
