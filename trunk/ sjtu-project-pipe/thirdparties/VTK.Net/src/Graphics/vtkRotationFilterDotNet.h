#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkRotationFilter : public vtkUnstructuredGridAlgorithm
{

public:
// Did not wrap:  static vtkRotationFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRotationFilter *NewInstance ();
  vtkRotationFilter^ NewInstance();


  // vtkRotationFilter *SafeDownCast (vtkObject* o);
  static vtkRotationFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetAxis (int );
/// <summary>
/// <para>Set the axis of rotation to use. It is set by default to Z.</para>
/// </summary>
  void SetAxis(int arg0);


  // int GetAxisMinValue ();
/// <summary>
/// <para>Set the axis of rotation to use. It is set by default to Z.</para>
/// </summary>
  int GetAxisMinValue();


  // int GetAxisMaxValue ();
/// <summary>
/// <para>Set the axis of rotation to use. It is set by default to Z.</para>
/// </summary>
  int GetAxisMaxValue();


  // int GetAxis ();
/// <summary>
/// <para>Set the axis of rotation to use. It is set by default to Z.</para>
/// </summary>
  int GetAxis();


  // void SetAxisToX ();this SetAxis USE_X 
/// <summary>
/// <para>Set the axis of rotation to use. It is set by default to Z.</para>
/// </summary>
  void SetAxisToX();


  // void SetAxisToY ();this SetAxis USE_Y 
/// <summary>
/// <para>Set the axis of rotation to use. It is set by default to Z.</para>
/// </summary>
  void SetAxisToY();


  // void SetAxisToZ ();this SetAxis USE_Z 
/// <summary>
/// <para>Set the axis of rotation to use. It is set by default to Z.</para>
/// </summary>
  void SetAxisToZ();


  // void SetAngle (double );
/// <summary>
/// <para>Set the rotation angle to use.</para>
/// </summary>
  void SetAngle(double arg0);


  // double GetAngle ();
/// <summary>
/// <para>Set the rotation angle to use.</para>
/// </summary>
  double GetAngle();


  // void SetCenter (double , double , double );
/// <summary>
/// <para>Set the rotation center coordinates.</para>
/// </summary>
  void SetCenter(double arg0, double arg1, double arg2);


  // void SetCenter (double  a[3]);
/// <summary>
/// <para>Set the rotation center coordinates.</para>
/// </summary>
  void SetCenter(array<double>^ a);


  // double  *GetCenter ();
/// <summary>
/// <para>Set the rotation center coordinates.</para>
/// </summary>
  array<double>^ GetCenter();


  // void SetNumberOfCopies (int );
/// <summary>
/// <para>Set the number of copies to create. The source will be rotated N times and a new polydata copy of the original created at each angular position All copies will be appended to form a single output</para>
/// </summary>
  void SetNumberOfCopies(int arg0);


  // int GetNumberOfCopies ();
/// <summary>
/// <para>Set the number of copies to create. The source will be rotated N times and a new polydata copy of the original created at each angular position All copies will be appended to form a single output</para>
/// </summary>
  int GetNumberOfCopies();


  // void SetCopyInput (int );
/// <summary>
/// <para>If on (the default), copy the input geometry to the output. If off, the output will only contain the rotation.</para>
/// </summary>
  void SetCopyInput(int arg0);


  // int GetCopyInput ();
/// <summary>
/// <para>If on (the default), copy the input geometry to the output. If off, the output will only contain the rotation.</para>
/// </summary>
  int GetCopyInput();


  // void CopyInputOn ();
/// <summary>
/// <para>If on (the default), copy the input geometry to the output. If off, the output will only contain the rotation.</para>
/// </summary>
  void CopyInputOn();


  // void CopyInputOff ();
/// <summary>
/// <para>If on (the default), copy the input geometry to the output. If off, the output will only contain the rotation.</para>
/// </summary>
  void CopyInputOff();


// Did not wrap:  vtkRotationFilter ();


// Did not wrap:  ~vtkRotationFilter ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkRotationFilter (const vtkRotationFilter &);


// Did not wrap:  void vtkRotationFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRotationFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRotationFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRotationFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRotationFilter();


};

} // end vtkGraphics
