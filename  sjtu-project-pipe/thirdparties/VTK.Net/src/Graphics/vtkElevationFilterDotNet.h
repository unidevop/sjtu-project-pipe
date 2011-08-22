#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkElevationFilter : public vtkDataSetAlgorithm
{

public:
// Did not wrap:  static vtkElevationFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkElevationFilter *NewInstance ();
  vtkElevationFilter^ NewInstance();


  // vtkElevationFilter *SafeDownCast (vtkObject* o);
  static vtkElevationFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetLowPoint (double , double , double );
/// <summary>
/// <para>Define one end of the line (small scalar values).  Default is (0,0,0).</para>
/// </summary>
  void SetLowPoint(double arg0, double arg1, double arg2);


  // void SetLowPoint (double  a[3]);
/// <summary>
/// <para>Define one end of the line (small scalar values).  Default is (0,0,0).</para>
/// </summary>
  void SetLowPoint(array<double>^ a);


  // double  *GetLowPoint ();
/// <summary>
/// <para>Define one end of the line (small scalar values).  Default is (0,0,0).</para>
/// </summary>
  array<double>^ GetLowPoint();


  // void SetHighPoint (double , double , double );
/// <summary>
/// <para>Define other end of the line (large scalar values).  Default is (0,0,1).</para>
/// </summary>
  void SetHighPoint(double arg0, double arg1, double arg2);


  // void SetHighPoint (double  a[3]);
/// <summary>
/// <para>Define other end of the line (large scalar values).  Default is (0,0,1).</para>
/// </summary>
  void SetHighPoint(array<double>^ a);


  // double  *GetHighPoint ();
/// <summary>
/// <para>Define other end of the line (large scalar values).  Default is (0,0,1).</para>
/// </summary>
  array<double>^ GetHighPoint();


  // void SetScalarRange (double , double );
/// <summary>
/// <para>Specify range to map scalars into.  Default is [0, 1].</para>
/// </summary>
  void SetScalarRange(double arg0, double arg1);


  // void SetScalarRange (double  a[2]);
/// <summary>
/// <para>Specify range to map scalars into.  Default is [0, 1].</para>
/// </summary>
  void SetScalarRange(array<double>^ a);


  // double  *GetScalarRange ();
/// <summary>
/// <para>Specify range to map scalars into.  Default is [0, 1].</para>
/// </summary>
  array<double>^ GetScalarRange();


// Did not wrap:  vtkElevationFilter ();


// Did not wrap:  ~vtkElevationFilter ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkElevationFilter (const vtkElevationFilter &);


// Did not wrap:  void vtkElevationFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkElevationFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkElevationFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkElevationFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkElevationFilter();


};

} // end vtkGraphics
