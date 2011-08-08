#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageIterateFilter : public vtkThreadedImageAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageIterateFilter *NewInstance ();
  vtkImageIterateFilter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int GetIteration ();
/// <summary>
/// <para>Get which iteration is current being performed. Normally the user will not access this method.</para>
/// </summary>
  int GetIteration();


  // int GetNumberOfIterations ();
/// <summary>
/// <para>Get which iteration is current being performed. Normally the user will not access this method.</para>
/// </summary>
  int GetNumberOfIterations();


// Did not wrap:  vtkImageIterateFilter ();


// Did not wrap:  ~vtkImageIterateFilter ();


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  virtual int IterativeRequestInformation (vtkInformation *in, vtkInformation *out);


// Did not wrap:  virtual int IterativeRequestUpdateExtent (vtkInformation *in, vtkInformation *out);


// Did not wrap:  virtual int IterativeRequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual void SetNumberOfIterations (int num);


// Did not wrap:  vtkImageData *GetIterationInput ();


// Did not wrap:  vtkImageData *GetIterationOutput ();


// Did not wrap:  vtkImageIterateFilter (const vtkImageIterateFilter &);


// Did not wrap:  void vtkImageIterateFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageIterateFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageIterateFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageIterateFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageIterateFilter();


};

} // end vtkImaging
