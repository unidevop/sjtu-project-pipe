#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageDotProduct : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageDotProduct *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageDotProduct *NewInstance ();
  vtkImageDotProduct^ NewInstance();


  // vtkImageDotProduct *SafeDownCast (vtkObject* o);
  static vtkImageDotProduct^ SafeDownCast(vtkObject^ o);


  // virtual void SetInput1 (vtkDataObject *in);this SetInput in 
/// <summary>
/// <para>Set the two inputs to this filter</para>
/// </summary>
  void SetInput1(vtkDataObject^ in);


  // virtual void SetInput2 (vtkDataObject *in);this SetInput in 
  void SetInput2(vtkDataObject^ in);


// Did not wrap:  vtkImageDotProduct ();


// Did not wrap:  ~vtkImageDotProduct ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int extent[6], int threadId);


// Did not wrap:  vtkImageDotProduct (const vtkImageDotProduct &);


// Did not wrap:  void vtkImageDotProduct 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageDotProduct(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageDotProduct(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageDotProduct();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageDotProduct();


};

} // end vtkImaging
