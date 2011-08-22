#pragma once

// managed includes
#include "vtkImplicitFunctionDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkBox : public vtkImplicitFunction
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkBox *NewInstance ();
  vtkBox^ NewInstance();


  // vtkBox *SafeDownCast (vtkObject* o);
  static vtkBox^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkBox *New ();


  // double EvaluateFunction (double x[3]);
  double EvaluateFunction(array<double>^ x);


  // double EvaluateFunction (double x, double y, double z);return this vtkImplicitFunction EvaluateFunction x y z 
  double EvaluateFunction(double x, double y, double z);


  // void EvaluateGradient (double x[3], double n[3]);
  void EvaluateGradient(array<double>^ x, array<double>^ n);


  // void SetXMin (double , double , double );
/// <summary>
/// <para>Set / get the bounding box using various methods.</para>
/// </summary>
  void SetXMin(double arg0, double arg1, double arg2);


  // void SetXMin (double  a[3]);
/// <summary>
/// <para>Set / get the bounding box using various methods.</para>
/// </summary>
  void SetXMin(array<double>^ a);


  // double  *GetXMin ();
/// <summary>
/// <para>Set / get the bounding box using various methods.</para>
/// </summary>
  array<double>^ GetXMin();


  // void SetXMax (double , double , double );
/// <summary>
/// <para>Set / get the bounding box using various methods.</para>
/// </summary>
  void SetXMax(double arg0, double arg1, double arg2);


  // void SetXMax (double  a[3]);
/// <summary>
/// <para>Set / get the bounding box using various methods.</para>
/// </summary>
  void SetXMax(array<double>^ a);


  // double  *GetXMax ();
/// <summary>
/// <para>Set / get the bounding box using various methods.</para>
/// </summary>
  array<double>^ GetXMax();


  // void SetBounds (double xMin, double xMax, double yMin, double yMax, double zMin, double zMax);
/// <summary>
/// <para>Set / get the bounding box using various methods.</para>
/// </summary>
  void SetBounds(double xMin, double xMax, double yMin, double yMax, double zMin, double zMax);


  // void SetBounds (double bounds[6]);
/// <summary>
/// <para>Set / get the bounding box using various methods.</para>
/// </summary>
  void SetBounds(array<double>^ bounds);


  // void GetBounds (double &xMin, double &xMax, double &yMin, double &yMax, double &zMin, double &zMax);
/// <summary>
/// <para>Set / get the bounding box using various methods.</para>
/// </summary>
  void GetBounds(double% xMin, double% xMax, double% yMin, double% yMax, double% zMin, double% zMax);


  // void GetBounds (double bounds[6]);
/// <summary>
/// <para>Set / get the bounding box using various methods.</para>
/// </summary>
  void GetBounds(array<double>^ bounds);


  // static char IntersectBox (double bounds[6], double origin[3], double dir[3], double coord[3], double &t);
/// <summary>
/// <para>Bounding box intersection modified from Graphics Gems Vol I. The method returns a non-zero value if the bounding box is hit. Origin[3] starts the ray, dir[3] is the vector components of the ray in the x-y-z directions, coord[3] is the location of hit, and t is the parametric coordinate along line. (Notes: the intersection ray dir[3] is NOT normalized.  Valid intersections will only occur between 0&lt;=t&lt;=1.)</para>
/// </summary>
  static char IntersectBox(array<double>^ bounds, array<double>^ origin, array<double>^ dir, array<double>^ coord, double% t);


// Did not wrap:  vtkBox ();


// Did not wrap:  ~vtkBox ();


// Did not wrap:  vtkBox (const vtkBox &);


// Did not wrap:  void vtkBox 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkBox(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkBox(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkBox();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkBox();


};

} // end vtkCommon
