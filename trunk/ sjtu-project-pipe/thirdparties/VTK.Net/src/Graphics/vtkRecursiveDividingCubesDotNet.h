#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkRecursiveDividingCubes : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkRecursiveDividingCubes *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRecursiveDividingCubes *NewInstance ();
  vtkRecursiveDividingCubes^ NewInstance();


  // vtkRecursiveDividingCubes *SafeDownCast (vtkObject* o);
  static vtkRecursiveDividingCubes^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetValue (double );
/// <summary>
/// <para>Set isosurface value.</para>
/// </summary>
  void SetValue(double arg0);


  // double GetValue ();
/// <summary>
/// <para>Set isosurface value.</para>
/// </summary>
  double GetValue();


  // void SetDistance (double );
/// <summary>
/// <para>Specify sub-voxel size at which to generate point.</para>
/// </summary>
  void SetDistance(double arg0);


  // double GetDistanceMinValue ();
/// <summary>
/// <para>Specify sub-voxel size at which to generate point.</para>
/// </summary>
  double GetDistanceMinValue();


  // double GetDistanceMaxValue ();
/// <summary>
/// <para>Specify sub-voxel size at which to generate point.</para>
/// </summary>
  double GetDistanceMaxValue();


  // double GetDistance ();
/// <summary>
/// <para>Specify sub-voxel size at which to generate point.</para>
/// </summary>
  double GetDistance();


  // void SetIncrement (int );
/// <summary>
/// <para>Every &quot;Increment&quot; point is added to the list of points. This parameter, if set to a large value, can be used to limit the number of points while retaining good accuracy.</para>
/// </summary>
  void SetIncrement(int arg0);


  // int GetIncrementMinValue ();
/// <summary>
/// <para>Every &quot;Increment&quot; point is added to the list of points. This parameter, if set to a large value, can be used to limit the number of points while retaining good accuracy.</para>
/// </summary>
  int GetIncrementMinValue();


  // int GetIncrementMaxValue ();
/// <summary>
/// <para>Every &quot;Increment&quot; point is added to the list of points. This parameter, if set to a large value, can be used to limit the number of points while retaining good accuracy.</para>
/// </summary>
  int GetIncrementMaxValue();


  // int GetIncrement ();
/// <summary>
/// <para>Every &quot;Increment&quot; point is added to the list of points. This parameter, if set to a large value, can be used to limit the number of points while retaining good accuracy.</para>
/// </summary>
  int GetIncrement();


// Did not wrap:  vtkRecursiveDividingCubes ();


// Did not wrap:  ~vtkRecursiveDividingCubes ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  void SubDivide (double origin[3], double h[3], double values[8]);


// Did not wrap:  vtkRecursiveDividingCubes (const vtkRecursiveDividingCubes &);


// Did not wrap:  void vtkRecursiveDividingCubes 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRecursiveDividingCubes(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRecursiveDividingCubes(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRecursiveDividingCubes();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRecursiveDividingCubes();


};

} // end vtkGraphics
