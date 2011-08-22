#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkSimpleElevationFilter : public vtkDataSetAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSimpleElevationFilter *NewInstance ();
  vtkSimpleElevationFilter^ NewInstance();


  // vtkSimpleElevationFilter *SafeDownCast (vtkObject* o);
  static vtkSimpleElevationFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkSimpleElevationFilter *New ();


  // void SetVector (double , double , double );
/// <summary>
/// <para>Define one end of the line (small scalar values).</para>
/// </summary>
  void SetVector(double arg0, double arg1, double arg2);


  // void SetVector (double  a[3]);
/// <summary>
/// <para>Define one end of the line (small scalar values).</para>
/// </summary>
  void SetVector(array<double>^ a);


  // double  *GetVector ();
/// <summary>
/// <para>Define one end of the line (small scalar values).</para>
/// </summary>
  array<double>^ GetVector();


// Did not wrap:  vtkSimpleElevationFilter ();


// Did not wrap:  ~vtkSimpleElevationFilter ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkSimpleElevationFilter (const vtkSimpleElevationFilter &);


// Did not wrap:  void vtkSimpleElevationFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSimpleElevationFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSimpleElevationFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSimpleElevationFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSimpleElevationFilter();


};

} // end vtkGraphics
