#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageLaplacian : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageLaplacian *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageLaplacian *NewInstance ();
  vtkImageLaplacian^ NewInstance();


  // vtkImageLaplacian *SafeDownCast (vtkObject* o);
  static vtkImageLaplacian^ SafeDownCast(vtkObject^ o);


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


// Did not wrap:  vtkImageLaplacian ();


// Did not wrap:  ~vtkImageLaplacian ();


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int outExt[6], int id);


// Did not wrap:  vtkImageLaplacian (const vtkImageLaplacian &);


// Did not wrap:  void vtkImageLaplacian 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageLaplacian(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageLaplacian(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageLaplacian();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageLaplacian();


};

} // end vtkImaging
