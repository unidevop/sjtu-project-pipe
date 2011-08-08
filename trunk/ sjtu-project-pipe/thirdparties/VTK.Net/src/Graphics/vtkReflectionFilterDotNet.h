#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkReflectionFilter : public vtkUnstructuredGridAlgorithm
{

public:
// Did not wrap:  static vtkReflectionFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkReflectionFilter *NewInstance ();
  vtkReflectionFilter^ NewInstance();


  // vtkReflectionFilter *SafeDownCast (vtkObject* o);
  static vtkReflectionFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetPlane (int );
/// <summary>
/// <para>Set the normal of the plane to use as mirror.</para>
/// </summary>
  void SetPlane(int arg0);


  // int GetPlaneMinValue ();
/// <summary>
/// <para>Set the normal of the plane to use as mirror.</para>
/// </summary>
  int GetPlaneMinValue();


  // int GetPlaneMaxValue ();
/// <summary>
/// <para>Set the normal of the plane to use as mirror.</para>
/// </summary>
  int GetPlaneMaxValue();


  // int GetPlane ();
/// <summary>
/// <para>Set the normal of the plane to use as mirror.</para>
/// </summary>
  int GetPlane();


  // void SetPlaneToX ();this SetPlane USE_X 
/// <summary>
/// <para>Set the normal of the plane to use as mirror.</para>
/// </summary>
  void SetPlaneToX();


  // void SetPlaneToY ();this SetPlane USE_Y 
/// <summary>
/// <para>Set the normal of the plane to use as mirror.</para>
/// </summary>
  void SetPlaneToY();


  // void SetPlaneToZ ();this SetPlane USE_Z 
/// <summary>
/// <para>Set the normal of the plane to use as mirror.</para>
/// </summary>
  void SetPlaneToZ();


  // void SetPlaneToXMin ();this SetPlane USE_X_MIN 
/// <summary>
/// <para>Set the normal of the plane to use as mirror.</para>
/// </summary>
  void SetPlaneToXMin();


  // void SetPlaneToYMin ();this SetPlane USE_Y_MIN 
/// <summary>
/// <para>Set the normal of the plane to use as mirror.</para>
/// </summary>
  void SetPlaneToYMin();


  // void SetPlaneToZMin ();this SetPlane USE_Z_MIN 
/// <summary>
/// <para>Set the normal of the plane to use as mirror.</para>
/// </summary>
  void SetPlaneToZMin();


  // void SetPlaneToXMax ();this SetPlane USE_X_MAX 
/// <summary>
/// <para>Set the normal of the plane to use as mirror.</para>
/// </summary>
  void SetPlaneToXMax();


  // void SetPlaneToYMax ();this SetPlane USE_Y_MAX 
/// <summary>
/// <para>Set the normal of the plane to use as mirror.</para>
/// </summary>
  void SetPlaneToYMax();


  // void SetPlaneToZMax ();this SetPlane USE_Z_MAX 
/// <summary>
/// <para>Set the normal of the plane to use as mirror.</para>
/// </summary>
  void SetPlaneToZMax();


  // void SetCenter (double );
/// <summary>
/// <para>If the reflection plane is set to X, Y or Z, this variable is use to set the position of the plane.</para>
/// </summary>
  void SetCenter(double arg0);


  // double GetCenter ();
/// <summary>
/// <para>If the reflection plane is set to X, Y or Z, this variable is use to set the position of the plane.</para>
/// </summary>
  double GetCenter();


  // void SetCopyInput (int );
/// <summary>
/// <para>If on (the default), copy the input geometry to the output. If off, the output will only contain the reflection.</para>
/// </summary>
  void SetCopyInput(int arg0);


  // int GetCopyInput ();
/// <summary>
/// <para>If on (the default), copy the input geometry to the output. If off, the output will only contain the reflection.</para>
/// </summary>
  int GetCopyInput();


  // void CopyInputOn ();
/// <summary>
/// <para>If on (the default), copy the input geometry to the output. If off, the output will only contain the reflection.</para>
/// </summary>
  void CopyInputOn();


  // void CopyInputOff ();
/// <summary>
/// <para>If on (the default), copy the input geometry to the output. If off, the output will only contain the reflection.</para>
/// </summary>
  void CopyInputOff();


// Did not wrap:  vtkReflectionFilter ();


// Did not wrap:  ~vtkReflectionFilter ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  void FlipVector (double tuple[3], int mirrorDir[3]);


// Did not wrap:  vtkReflectionFilter (const vtkReflectionFilter &);


// Did not wrap:  void vtkReflectionFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkReflectionFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkReflectionFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkReflectionFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkReflectionFilter();


};

} // end vtkGraphics
