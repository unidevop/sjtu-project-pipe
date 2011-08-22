#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkAxes : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkAxes *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkAxes *NewInstance ();
  vtkAxes^ NewInstance();


  // vtkAxes *SafeDownCast (vtkObject* o);
  static vtkAxes^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetOrigin (double , double , double );
/// <summary>
/// <para>Set the origin of the axes.</para>
/// </summary>
  void SetOrigin(double arg0, double arg1, double arg2);


  // void SetOrigin (double  a[3]);
/// <summary>
/// <para>Set the origin of the axes.</para>
/// </summary>
  void SetOrigin(array<double>^ a);


  // double  *GetOrigin ();
/// <summary>
/// <para>Set the origin of the axes.</para>
/// </summary>
  array<double>^ GetOrigin();


  // void SetScaleFactor (double );
/// <summary>
/// <para>Set the scale factor of the axes. Used to control size.</para>
/// </summary>
  void SetScaleFactor(double arg0);


  // double GetScaleFactor ();
/// <summary>
/// <para>Set the scale factor of the axes. Used to control size.</para>
/// </summary>
  double GetScaleFactor();


  // void SetSymmetric (int );
/// <summary>
/// <para>If Symetric is on, the the axis continue to negative values.</para>
/// </summary>
  void SetSymmetric(int arg0);


  // int GetSymmetric ();
/// <summary>
/// <para>If Symetric is on, the the axis continue to negative values.</para>
/// </summary>
  int GetSymmetric();


  // void SymmetricOn ();
/// <summary>
/// <para>If Symetric is on, the the axis continue to negative values.</para>
/// </summary>
  void SymmetricOn();


  // void SymmetricOff ();
/// <summary>
/// <para>If Symetric is on, the the axis continue to negative values.</para>
/// </summary>
  void SymmetricOff();


  // void SetComputeNormals (int );
/// <summary>
/// <para>Option for computing normals.  By default they are computed.</para>
/// </summary>
  void SetComputeNormals(int arg0);


  // int GetComputeNormals ();
/// <summary>
/// <para>Option for computing normals.  By default they are computed.</para>
/// </summary>
  int GetComputeNormals();


  // void ComputeNormalsOn ();
/// <summary>
/// <para>Option for computing normals.  By default they are computed.</para>
/// </summary>
  void ComputeNormalsOn();


  // void ComputeNormalsOff ();
/// <summary>
/// <para>Option for computing normals.  By default they are computed.</para>
/// </summary>
  void ComputeNormalsOff();


// Did not wrap:  vtkAxes ();


// Did not wrap:  ~vtkAxes ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int ComputeDivisionExtents (vtkDataObject *output, int idx, int numDivisions);


// Did not wrap:  vtkAxes (const vtkAxes &);


// Did not wrap:  void vtkAxes 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkAxes(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkAxes(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkAxes();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkAxes();


};

} // end vtkGraphics
