#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageCheckerboard : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageCheckerboard *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageCheckerboard *NewInstance ();
  vtkImageCheckerboard^ NewInstance();


  // vtkImageCheckerboard *SafeDownCast (vtkObject* o);
  static vtkImageCheckerboard^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetNumberOfDivisions (int , int , int );
/// <summary>
/// <para>Set/Get the number of divisions along each axis.</para>
/// </summary>
  void SetNumberOfDivisions(int arg0, int arg1, int arg2);


  // void SetNumberOfDivisions (int  a[3]);
/// <summary>
/// <para>Set/Get the number of divisions along each axis.</para>
/// </summary>
  void SetNumberOfDivisions(array<int>^ a);


  // int  *GetNumberOfDivisions ();
/// <summary>
/// <para>Set/Get the number of divisions along each axis.</para>
/// </summary>
  array<int>^ GetNumberOfDivisions();


  // virtual void SetInput1 (vtkDataObject *in);this SetInput in 
/// <summary>
/// <para>Set the two inputs to this filter</para>
/// </summary>
  void SetInput1(vtkDataObject^ in);


  // virtual void SetInput2 (vtkDataObject *in);this SetInput in 
  void SetInput2(vtkDataObject^ in);


// Did not wrap:  vtkImageCheckerboard ();


// Did not wrap:  ~vtkImageCheckerboard ();


// Did not wrap:  virtual void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int extent[6], int threadId);


// Did not wrap:  vtkImageCheckerboard (const vtkImageCheckerboard &);


// Did not wrap:  void vtkImageCheckerboard 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageCheckerboard(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageCheckerboard(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageCheckerboard();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageCheckerboard();


};

} // end vtkImaging
