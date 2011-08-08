#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkWarpScalar : public vtkPointSetAlgorithm
{

public:
// Did not wrap:  static vtkWarpScalar *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkWarpScalar *NewInstance ();
  vtkWarpScalar^ NewInstance();


  // vtkWarpScalar *SafeDownCast (vtkObject* o);
  static vtkWarpScalar^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetScaleFactor (double );
/// <summary>
/// <para>Specify value to scale displacement.</para>
/// </summary>
  void SetScaleFactor(double arg0);


  // double GetScaleFactor ();
/// <summary>
/// <para>Specify value to scale displacement.</para>
/// </summary>
  double GetScaleFactor();


  // void SetUseNormal (int );
/// <summary>
/// <para>Turn on/off use of user specified normal. If on, data normals will be ignored and instance variable Normal will be used instead.</para>
/// </summary>
  void SetUseNormal(int arg0);


  // int GetUseNormal ();
/// <summary>
/// <para>Turn on/off use of user specified normal. If on, data normals will be ignored and instance variable Normal will be used instead.</para>
/// </summary>
  int GetUseNormal();


  // void UseNormalOn ();
/// <summary>
/// <para>Turn on/off use of user specified normal. If on, data normals will be ignored and instance variable Normal will be used instead.</para>
/// </summary>
  void UseNormalOn();


  // void UseNormalOff ();
/// <summary>
/// <para>Turn on/off use of user specified normal. If on, data normals will be ignored and instance variable Normal will be used instead.</para>
/// </summary>
  void UseNormalOff();


  // void SetNormal (double , double , double );
/// <summary>
/// <para>Normal (i.e., direction) along which to warp geometry. Only used if UseNormal boolean set to true or no normals available in data.</para>
/// </summary>
  void SetNormal(double arg0, double arg1, double arg2);


  // void SetNormal (double  a[3]);
/// <summary>
/// <para>Normal (i.e., direction) along which to warp geometry. Only used if UseNormal boolean set to true or no normals available in data.</para>
/// </summary>
  void SetNormal(array<double>^ a);


  // double  *GetNormal ();
/// <summary>
/// <para>Normal (i.e., direction) along which to warp geometry. Only used if UseNormal boolean set to true or no normals available in data.</para>
/// </summary>
  array<double>^ GetNormal();


  // void SetXYPlane (int );
/// <summary>
/// <para>Turn on/off flag specifying that input data is x-y plane. If x-y plane, then the z value is used to warp the surface in the z-axis direction  (times the scale factor) and scalars are used to color the surface.</para>
/// </summary>
  void SetXYPlane(int arg0);


  // int GetXYPlane ();
/// <summary>
/// <para>Turn on/off flag specifying that input data is x-y plane. If x-y plane, then the z value is used to warp the surface in the z-axis direction  (times the scale factor) and scalars are used to color the surface.</para>
/// </summary>
  int GetXYPlane();


  // void XYPlaneOn ();
/// <summary>
/// <para>Turn on/off flag specifying that input data is x-y plane. If x-y plane, then the z value is used to warp the surface in the z-axis direction  (times the scale factor) and scalars are used to color the surface.</para>
/// </summary>
  void XYPlaneOn();


  // void XYPlaneOff ();
/// <summary>
/// <para>Turn on/off flag specifying that input data is x-y plane. If x-y plane, then the z value is used to warp the surface in the z-axis direction  (times the scale factor) and scalars are used to color the surface.</para>
/// </summary>
  void XYPlaneOff();


// Did not wrap:  vtkWarpScalar ();


// Did not wrap:  ~vtkWarpScalar ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkWarpScalar (const vtkWarpScalar &);


// Did not wrap:  void vtkWarpScalar 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkWarpScalar(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkWarpScalar(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkWarpScalar();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkWarpScalar();


};

} // end vtkGraphics
