#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageEuclideanToPolar : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageEuclideanToPolar *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageEuclideanToPolar *NewInstance ();
  vtkImageEuclideanToPolar^ NewInstance();


  // vtkImageEuclideanToPolar *SafeDownCast (vtkObject* o);
  static vtkImageEuclideanToPolar^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetThetaMaximum (double );
/// <summary>
/// <para>Theta is an angle. Maximum specifies when it maps back to 0. ThetaMaximum defaults to 255 instead of 2PI, because unsigned char is expected as input. The output type must be the same as input type.</para>
/// </summary>
  void SetThetaMaximum(double arg0);


  // double GetThetaMaximum ();
/// <summary>
/// <para>Theta is an angle. Maximum specifies when it maps back to 0. ThetaMaximum defaults to 255 instead of 2PI, because unsigned char is expected as input. The output type must be the same as input type.</para>
/// </summary>
  double GetThetaMaximum();


// Did not wrap:  vtkImageEuclideanToPolar ();


// Did not wrap:  ~vtkImageEuclideanToPolar ();


// Did not wrap:  void ThreadedExecute (vtkImageData *inData, vtkImageData *outData, int ext[6], int id);


// Did not wrap:  vtkImageEuclideanToPolar (const vtkImageEuclideanToPolar &);


// Did not wrap:  void vtkImageEuclideanToPolar 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageEuclideanToPolar(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageEuclideanToPolar(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageEuclideanToPolar();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageEuclideanToPolar();


};

} // end vtkImaging
