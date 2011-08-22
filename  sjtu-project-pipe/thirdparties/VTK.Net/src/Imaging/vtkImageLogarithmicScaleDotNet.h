#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageLogarithmicScale : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageLogarithmicScale *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageLogarithmicScale *NewInstance ();
  vtkImageLogarithmicScale^ NewInstance();


  // vtkImageLogarithmicScale *SafeDownCast (vtkObject* o);
  static vtkImageLogarithmicScale^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetConstant (double );
/// <summary>
/// <para>Set/Get the scale factor for the logarithmic function.</para>
/// </summary>
  void SetConstant(double arg0);


  // double GetConstant ();
/// <summary>
/// <para>Set/Get the scale factor for the logarithmic function.</para>
/// </summary>
  double GetConstant();


// Did not wrap:  vtkImageLogarithmicScale ();


// Did not wrap:  ~vtkImageLogarithmicScale ();


// Did not wrap:  void ThreadedExecute (vtkImageData *inData, vtkImageData *outData, int outExt[6], int id);


// Did not wrap:  vtkImageLogarithmicScale (const vtkImageLogarithmicScale &);


// Did not wrap:  void vtkImageLogarithmicScale 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageLogarithmicScale(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageLogarithmicScale(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageLogarithmicScale();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageLogarithmicScale();


};

} // end vtkImaging
