#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkDiskSource : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkDiskSource *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDiskSource *NewInstance ();
  vtkDiskSource^ NewInstance();


  // vtkDiskSource *SafeDownCast (vtkObject* o);
  static vtkDiskSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetInnerRadius (double );
/// <summary>
/// <para>Specify inner radius of hole in disc.</para>
/// </summary>
  void SetInnerRadius(double arg0);


  // double GetInnerRadiusMinValue ();
/// <summary>
/// <para>Specify inner radius of hole in disc.</para>
/// </summary>
  double GetInnerRadiusMinValue();


  // double GetInnerRadiusMaxValue ();
/// <summary>
/// <para>Specify inner radius of hole in disc.</para>
/// </summary>
  double GetInnerRadiusMaxValue();


  // double GetInnerRadius ();
/// <summary>
/// <para>Specify inner radius of hole in disc.</para>
/// </summary>
  double GetInnerRadius();


  // void SetOuterRadius (double );
/// <summary>
/// <para>Specify outer radius of disc.</para>
/// </summary>
  void SetOuterRadius(double arg0);


  // double GetOuterRadiusMinValue ();
/// <summary>
/// <para>Specify outer radius of disc.</para>
/// </summary>
  double GetOuterRadiusMinValue();


  // double GetOuterRadiusMaxValue ();
/// <summary>
/// <para>Specify outer radius of disc.</para>
/// </summary>
  double GetOuterRadiusMaxValue();


  // double GetOuterRadius ();
/// <summary>
/// <para>Specify outer radius of disc.</para>
/// </summary>
  double GetOuterRadius();


  // void SetRadialResolution (int );
/// <summary>
/// <para>Set the number of points in radius direction.</para>
/// </summary>
  void SetRadialResolution(int arg0);


  // int GetRadialResolutionMinValue ();
/// <summary>
/// <para>Set the number of points in radius direction.</para>
/// </summary>
  int GetRadialResolutionMinValue();


  // int GetRadialResolutionMaxValue ();
/// <summary>
/// <para>Set the number of points in radius direction.</para>
/// </summary>
  int GetRadialResolutionMaxValue();


  // int GetRadialResolution ();
/// <summary>
/// <para>Set the number of points in radius direction.</para>
/// </summary>
  int GetRadialResolution();


  // void SetCircumferentialResolution (int );
/// <summary>
/// <para>Set the number of points in circumferential direction.</para>
/// </summary>
  void SetCircumferentialResolution(int arg0);


  // int GetCircumferentialResolutionMinValue ();
/// <summary>
/// <para>Set the number of points in circumferential direction.</para>
/// </summary>
  int GetCircumferentialResolutionMinValue();


  // int GetCircumferentialResolutionMaxValue ();
/// <summary>
/// <para>Set the number of points in circumferential direction.</para>
/// </summary>
  int GetCircumferentialResolutionMaxValue();


  // int GetCircumferentialResolution ();
/// <summary>
/// <para>Set the number of points in circumferential direction.</para>
/// </summary>
  int GetCircumferentialResolution();


// Did not wrap:  vtkDiskSource ();


// Did not wrap:  ~vtkDiskSource ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkDiskSource (const vtkDiskSource &);


// Did not wrap:  void vtkDiskSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDiskSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDiskSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDiskSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDiskSource();


};

} // end vtkGraphics
