#pragma once

// managed includes
#include "vtkImageSpatialAlgorithmDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageDilateErode3D : public vtkImageSpatialAlgorithm
{

public:
// Did not wrap:  static vtkImageDilateErode3D *New ();


  // const char *GetClassName ();
/// <summary>
/// <para>Construct an instance of vtkImageDilateErode3D filter. By default zero values are dilated.</para>
/// </summary>
  System::String^ GetClassName();


  // int IsA (const char *name);
/// <summary>
/// <para>Construct an instance of vtkImageDilateErode3D filter. By default zero values are dilated.</para>
/// </summary>
  int IsA(System::String^ name);


  // vtkImageDilateErode3D *NewInstance ();
/// <summary>
/// <para>Construct an instance of vtkImageDilateErode3D filter. By default zero values are dilated.</para>
/// </summary>
  vtkImageDilateErode3D^ NewInstance();


  // vtkImageDilateErode3D *SafeDownCast (vtkObject* o);
/// <summary>
/// <para>Construct an instance of vtkImageDilateErode3D filter. By default zero values are dilated.</para>
/// </summary>
  static vtkImageDilateErode3D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetKernelSize (int size0, int size1, int size2);
/// <summary>
/// <para>This method sets the size of the neighborhood.  It also sets the  default middle of the neighborhood and computes the elliptical foot print.</para>
/// </summary>
  void SetKernelSize(int size0, int size1, int size2);


  // void SetDilateValue (double );
/// <summary>
/// <para>Set/Get the Dilate and Erode values to be used by this filter.</para>
/// </summary>
  void SetDilateValue(double arg0);


  // double GetDilateValue ();
/// <summary>
/// <para>Set/Get the Dilate and Erode values to be used by this filter.</para>
/// </summary>
  double GetDilateValue();


  // void SetErodeValue (double );
/// <summary>
/// <para>Set/Get the Dilate and Erode values to be used by this filter.</para>
/// </summary>
  void SetErodeValue(double arg0);


  // double GetErodeValue ();
/// <summary>
/// <para>Set/Get the Dilate and Erode values to be used by this filter.</para>
/// </summary>
  double GetErodeValue();


// Did not wrap:  vtkImageDilateErode3D ();


// Did not wrap:  ~vtkImageDilateErode3D ();


// Did not wrap:  void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int extent[6], int id);


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  vtkImageDilateErode3D (const vtkImageDilateErode3D &);


// Did not wrap:  void vtkImageDilateErode3D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageDilateErode3D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageDilateErode3D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageDilateErode3D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageDilateErode3D();


};

} // end vtkImaging
