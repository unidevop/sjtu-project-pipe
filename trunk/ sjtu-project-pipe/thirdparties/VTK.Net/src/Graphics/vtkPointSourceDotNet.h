#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkPointSource : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkPointSource *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPointSource *NewInstance ();
  vtkPointSource^ NewInstance();


  // vtkPointSource *SafeDownCast (vtkObject* o);
  static vtkPointSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetNumberOfPoints (vtkIdType );
/// <summary>
/// <para>Set the number of points to generate.</para>
/// </summary>
  void SetNumberOfPoints(int arg0);


  // vtkIdType GetNumberOfPointsMinValue ();
/// <summary>
/// <para>Set the number of points to generate.</para>
/// </summary>
  int GetNumberOfPointsMinValue();


  // vtkIdType GetNumberOfPointsMaxValue ();
/// <summary>
/// <para>Set the number of points to generate.</para>
/// </summary>
  int GetNumberOfPointsMaxValue();


  // vtkIdType GetNumberOfPoints ();
/// <summary>
/// <para>Set the number of points to generate.</para>
/// </summary>
  int GetNumberOfPoints();


  // void SetCenter (double , double , double );
/// <summary>
/// <para>Set the center of the point cloud.</para>
/// </summary>
  void SetCenter(double arg0, double arg1, double arg2);


  // void SetCenter (double  a[3]);
/// <summary>
/// <para>Set the center of the point cloud.</para>
/// </summary>
  void SetCenter(array<double>^ a);


  // double  *GetCenter ();
/// <summary>
/// <para>Set the center of the point cloud.</para>
/// </summary>
  array<double>^ GetCenter();


  // void SetRadius (double );
/// <summary>
/// <para>Set the radius of the point cloud.  If you are generating a Gaussian distribution, then this is the standard deviation for each of x, y, and z.</para>
/// </summary>
  void SetRadius(double arg0);


  // double GetRadiusMinValue ();
/// <summary>
/// <para>Set the radius of the point cloud.  If you are generating a Gaussian distribution, then this is the standard deviation for each of x, y, and z.</para>
/// </summary>
  double GetRadiusMinValue();


  // double GetRadiusMaxValue ();
/// <summary>
/// <para>Set the radius of the point cloud.  If you are generating a Gaussian distribution, then this is the standard deviation for each of x, y, and z.</para>
/// </summary>
  double GetRadiusMaxValue();


  // double GetRadius ();
/// <summary>
/// <para>Set the radius of the point cloud.  If you are generating a Gaussian distribution, then this is the standard deviation for each of x, y, and z.</para>
/// </summary>
  double GetRadius();


  // void SetDistribution (int );
/// <summary>
/// <para>Specify the distribution to use.  The default is a uniform distribution.  The shell distribution produces random points on the surface of the sphere, none in the interior.</para>
/// </summary>
  void SetDistribution(int arg0);


  // void SetDistributionToUniform ();this SetDistribution VTK_POINT_UNIFORM 
/// <summary>
/// <para>Specify the distribution to use.  The default is a uniform distribution.  The shell distribution produces random points on the surface of the sphere, none in the interior.</para>
/// </summary>
  void SetDistributionToUniform();


  // void SetDistributionToShell ();this SetDistribution VTK_POINT_SHELL 
/// <summary>
/// <para>Specify the distribution to use.  The default is a uniform distribution.  The shell distribution produces random points on the surface of the sphere, none in the interior.</para>
/// </summary>
  void SetDistributionToShell();


  // int GetDistribution ();
/// <summary>
/// <para>Specify the distribution to use.  The default is a uniform distribution.  The shell distribution produces random points on the surface of the sphere, none in the interior.</para>
/// </summary>
  int GetDistribution();


// Did not wrap:  vtkPointSource (vtkIdType numPts);


// Did not wrap:  ~vtkPointSource ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkPointSource (const vtkPointSource &);


// Did not wrap:  void vtkPointSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPointSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPointSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPointSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPointSource();


};

} // end vtkGraphics
