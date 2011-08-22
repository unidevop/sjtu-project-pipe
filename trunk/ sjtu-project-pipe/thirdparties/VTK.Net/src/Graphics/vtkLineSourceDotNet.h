#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkLineSource : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkLineSource *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkLineSource *NewInstance ();
  vtkLineSource^ NewInstance();


  // vtkLineSource *SafeDownCast (vtkObject* o);
  static vtkLineSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetPoint1 (double , double , double );
/// <summary>
/// <para>Set position of first end point.</para>
/// </summary>
  void SetPoint1(double arg0, double arg1, double arg2);


  // void SetPoint1 (double  a[3]);
/// <summary>
/// <para>Set position of first end point.</para>
/// </summary>
  void SetPoint1(array<double>^ a);


  // double  *GetPoint1 ();
/// <summary>
/// <para>Set position of first end point.</para>
/// </summary>
  array<double>^ GetPoint1();


  // void SetPoint2 (double , double , double );
/// <summary>
/// <para>Set position of other end point.</para>
/// </summary>
  void SetPoint2(double arg0, double arg1, double arg2);


  // void SetPoint2 (double  a[3]);
/// <summary>
/// <para>Set position of other end point.</para>
/// </summary>
  void SetPoint2(array<double>^ a);


  // double  *GetPoint2 ();
/// <summary>
/// <para>Set position of other end point.</para>
/// </summary>
  array<double>^ GetPoint2();


  // void SetResolution (int );
/// <summary>
/// <para>Divide line into resolution number of pieces.</para>
/// </summary>
  void SetResolution(int arg0);


  // int GetResolutionMinValue ();
/// <summary>
/// <para>Divide line into resolution number of pieces.</para>
/// </summary>
  int GetResolutionMinValue();


  // int GetResolutionMaxValue ();
/// <summary>
/// <para>Divide line into resolution number of pieces.</para>
/// </summary>
  int GetResolutionMaxValue();


  // int GetResolution ();
/// <summary>
/// <para>Divide line into resolution number of pieces.</para>
/// </summary>
  int GetResolution();


// Did not wrap:  vtkLineSource (int res);


// Did not wrap:  ~vtkLineSource ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkLineSource (const vtkLineSource &);


// Did not wrap:  void vtkLineSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkLineSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkLineSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkLineSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkLineSource();


};

} // end vtkGraphics
