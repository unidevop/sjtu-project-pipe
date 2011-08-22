#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkPCAAnalysisFilter : public vtkPointSetAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPCAAnalysisFilter *NewInstance ();
  vtkPCAAnalysisFilter^ NewInstance();


  // vtkPCAAnalysisFilter *SafeDownCast (vtkObject* o);
  static vtkPCAAnalysisFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkPCAAnalysisFilter *New ();


  // vtkFloatArray *GetEvals ();
/// <summary>
/// <para>Get the vector of eigenvalues sorted in descending order</para>
/// </summary>
  vtkFloatArray^ GetEvals();


  // void SetNumberOfInputs (int n);
/// <summary>
/// <para>Specify how many pointsets are going to be given as input.</para>
/// </summary>
  void SetNumberOfInputs(int n);


  // void SetInput (int idx, vtkPointSet *p);
/// <summary>
/// <para>Specify the input pointset with index idx. Call SetNumberOfInputs before calling this function.</para>
/// </summary>
  void SetInput(int idx, vtkPointSet^ p);


  // vtkPointSet *GetInput (int idx);
/// <summary>
/// <para>Retrieve the input with index idx (usually only used for pipeline tracing).</para>
/// </summary>
  vtkPointSet^ GetInput(int idx);


  // void GetParameterisedShape (vtkFloatArray *b, vtkPointSet *shape);
/// <summary>
/// <para>Fills the shape with:</para>
/// <para>mean + b[0] * sqrt(eigenvalue[0]) * eigenvector[0]      + b[1] * sqrt(eigenvalue[1]) * eigenvector[1] ...      + b[sizeb-1] * sqrt(eigenvalue[bsize-1]) * eigenvector[bsize-1]</para>
/// <para>here b are the parameters expressed in standard deviations bsize is the number of parameters in the b vector This function assumes that shape is allready allocated with the right size, it just moves the points.</para>
/// </summary>
  void GetParameterisedShape(vtkFloatArray^ b, vtkPointSet^ shape);


  // void GetShapeParameters (vtkPointSet *shape, vtkFloatArray *b, int bsize);
/// <summary>
/// <para>Return the bsize parameters b that best model the given shape (in standard deviations).  That is that the given shape will be approximated by:</para>
/// <para>shape ~ mean + b[0] * sqrt(eigenvalue[0]) * eigenvector[0]              + b[1] * sqrt(eigenvalue[1]) * eigenvector[1]         ...              + b[bsize-1] * sqrt(eigenvalue[bsize-1]) * eigenvector[bsize-1]</para>
/// </summary>
  void GetShapeParameters(vtkPointSet^ shape, vtkFloatArray^ b, int bsize);


  // int GetModesRequiredFor (double proportion);
/// <summary>
/// <para>Retrieve how many modes are necessary to model the given proportion of the variation. proportion should be between 0 and 1</para>
/// </summary>
  int GetModesRequiredFor(double proportion);


// Did not wrap:  vtkPCAAnalysisFilter ();


// Did not wrap:  ~vtkPCAAnalysisFilter ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkPCAAnalysisFilter (const vtkPCAAnalysisFilter &);


// Did not wrap:  void vtkPCAAnalysisFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPCAAnalysisFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPCAAnalysisFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPCAAnalysisFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPCAAnalysisFilter();


};

} // end vtkHybrid
