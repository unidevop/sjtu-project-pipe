#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageGaussianSource : public vtkImageAlgorithm
{

public:
// Did not wrap:  static vtkImageGaussianSource *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageGaussianSource *NewInstance ();
  vtkImageGaussianSource^ NewInstance();


  // vtkImageGaussianSource *SafeDownCast (vtkObject* o);
  static vtkImageGaussianSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetWholeExtent (int xMinx, int xMax, int yMin, int yMax, int zMin, int zMax);
/// <summary>
/// <para>Set/Get the extent of the whole output image.</para>
/// </summary>
  void SetWholeExtent(int xMinx, int xMax, int yMin, int yMax, int zMin, int zMax);


  // void SetCenter (double , double , double );
/// <summary>
/// <para>Set/Get the center of the Gaussian.</para>
/// </summary>
  void SetCenter(double arg0, double arg1, double arg2);


  // void SetCenter (double  a[3]);
/// <summary>
/// <para>Set/Get the center of the Gaussian.</para>
/// </summary>
  void SetCenter(array<double>^ a);


  // double  *GetCenter ();
/// <summary>
/// <para>Set/Get the center of the Gaussian.</para>
/// </summary>
  array<double>^ GetCenter();


  // void SetMaximum (double );
/// <summary>
/// <para>Set/Get the Maximum value of the gaussian</para>
/// </summary>
  void SetMaximum(double arg0);


  // double GetMaximum ();
/// <summary>
/// <para>Set/Get the Maximum value of the gaussian</para>
/// </summary>
  double GetMaximum();


  // void SetStandardDeviation (double );
/// <summary>
/// <para>Set/Get the standard deviation of the gaussian</para>
/// </summary>
  void SetStandardDeviation(double arg0);


  // double GetStandardDeviation ();
/// <summary>
/// <para>Set/Get the standard deviation of the gaussian</para>
/// </summary>
  double GetStandardDeviation();


// Did not wrap:  vtkImageGaussianSource ();


// Did not wrap:  ~vtkImageGaussianSource ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkImageGaussianSource (const vtkImageGaussianSource &);


// Did not wrap:  void vtkImageGaussianSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageGaussianSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageGaussianSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageGaussianSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageGaussianSource();


};

} // end vtkImaging
