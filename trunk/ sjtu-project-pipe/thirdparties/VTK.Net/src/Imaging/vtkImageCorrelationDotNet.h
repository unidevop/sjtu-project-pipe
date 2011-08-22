#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageCorrelation : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageCorrelation *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageCorrelation *NewInstance ();
  vtkImageCorrelation^ NewInstance();


  // vtkImageCorrelation *SafeDownCast (vtkObject* o);
  static vtkImageCorrelation^ SafeDownCast(vtkObject^ o);


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


  // virtual void SetInput1 (vtkDataObject *in);this SetInput in 
/// <summary>
/// <para>Set the two inputs to this filter</para>
/// </summary>
  void SetInput1(vtkDataObject^ in);


  // virtual void SetInput2 (vtkDataObject *in);this SetInput in 
  void SetInput2(vtkDataObject^ in);


// Did not wrap:  vtkImageCorrelation ();


// Did not wrap:  ~vtkImageCorrelation ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int extent[6], int threadId);


// Did not wrap:  vtkImageCorrelation (const vtkImageCorrelation &);


// Did not wrap:  void vtkImageCorrelation 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageCorrelation(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageCorrelation(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageCorrelation();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageCorrelation();


};

} // end vtkImaging
