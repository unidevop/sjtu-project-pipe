#pragma once

// managed includes
#include "vtkImplicitFunctionDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkPlane : public vtkImplicitFunction
{

public:
// Did not wrap:  static vtkPlane *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPlane *NewInstance ();
  vtkPlane^ NewInstance();


  // vtkPlane *SafeDownCast (vtkObject* o);
  static vtkPlane^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // double EvaluateFunction (double x[3]);
  double EvaluateFunction(array<double>^ x);


  // double EvaluateFunction (double x, double y, double z);return this vtkImplicitFunction EvaluateFunction x y z 
  double EvaluateFunction(double x, double y, double z);


  // void EvaluateGradient (double x[3], double g[3]);
  void EvaluateGradient(array<double>^ x, array<double>^ g);


  // void SetNormal (double , double , double );
/// <summary>
/// <para>Set/get plane normal. Plane is defined by point and normal.</para>
/// </summary>
  void SetNormal(double arg0, double arg1, double arg2);


  // void SetNormal (double  a[3]);
/// <summary>
/// <para>Set/get plane normal. Plane is defined by point and normal.</para>
/// </summary>
  void SetNormal(array<double>^ a);


  // double  *GetNormal ();
/// <summary>
/// <para>Set/get plane normal. Plane is defined by point and normal.</para>
/// </summary>
  array<double>^ GetNormal();


  // void SetOrigin (double , double , double );
/// <summary>
/// <para>Set/get point through which plane passes. Plane is defined by point  and normal.</para>
/// </summary>
  void SetOrigin(double arg0, double arg1, double arg2);


  // void SetOrigin (double  a[3]);
/// <summary>
/// <para>Set/get point through which plane passes. Plane is defined by point  and normal.</para>
/// </summary>
  void SetOrigin(array<double>^ a);


  // double  *GetOrigin ();
/// <summary>
/// <para>Set/get point through which plane passes. Plane is defined by point  and normal.</para>
/// </summary>
  array<double>^ GetOrigin();


  // void Push (double distance);
/// <summary>
/// <para>Translate the plane in the direction of the normal by the distance specified.  Negative values move the plane in the opposite direction.</para>
/// </summary>
  void Push(double distance);


  // static void ProjectPoint (double x[3], double origin[3], double normal[3], double xproj[3]);
  static void ProjectPoint(array<double>^ x, array<double>^ origin, array<double>^ normal, array<double>^ xproj);


  // static void GeneralizedProjectPoint (double x[3], double origin[3], double normal[3], double xproj[3]);
  static void GeneralizedProjectPoint(array<double>^ x, array<double>^ origin, array<double>^ normal, array<double>^ xproj);


  // static double Evaluate (double normal[3], double origin[3], double x[3]);
/// <summary>
/// <para>Quick evaluation of plane equation n(x-origin)=0.</para>
/// </summary>
  static double Evaluate(array<double>^ normal, array<double>^ origin, array<double>^ x);


  // static double DistanceToPlane (double x[3], double n[3], double p0[3]);
/// <summary>
/// <para>Return the distance of a point x to a plane defined by n(x-p0) = 0. The normal n[3] must be magnitude=1.</para>
/// </summary>
  static double DistanceToPlane(array<double>^ x, array<double>^ n, array<double>^ p0);


  // static int IntersectWithLine (double p1[3], double p2[3], double n[3], double p0[3], double &t, double x[3]);
/// <summary>
/// <para>Given a line defined by the two points p1,p2; and a plane defined by the normal n and point p0, compute an intersection. The parametric coordinate along the line is returned in t, and the coordinates of  intersection are returned in x. A zero is returned if the plane and line do not intersect between (0&lt;=t&lt;=1). If the plane and line are parallel, zero is returned and t is set to VTK_LARGE_DOUBLE.</para>
/// </summary>
  static int IntersectWithLine(array<double>^ p1, array<double>^ p2, array<double>^ n, array<double>^ p0, double% t, array<double>^ x);


// Did not wrap:  vtkPlane ();


// Did not wrap:  ~vtkPlane ();


// Did not wrap:  vtkPlane (const vtkPlane &);


// Did not wrap:  void vtkPlane 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPlane(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPlane(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPlane();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPlane();


};

} // end vtkCommon
