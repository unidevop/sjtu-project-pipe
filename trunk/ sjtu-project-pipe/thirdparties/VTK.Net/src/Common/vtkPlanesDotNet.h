#pragma once

// managed includes
#include "vtkImplicitFunctionDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataArray;
ref class vtkObject;
ref class vtkPlane;
ref class vtkPoints;

public ref class vtkPlanes : public vtkImplicitFunction
{

public:
// Did not wrap:  static vtkPlanes *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPlanes *NewInstance ();
  vtkPlanes^ NewInstance();


  // vtkPlanes *SafeDownCast (vtkObject* o);
  static vtkPlanes^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // double EvaluateFunction (double x[3]);
  double EvaluateFunction(array<double>^ x);


  // double EvaluateFunction (double x, double y, double z);return this vtkImplicitFunction EvaluateFunction x y z 
  double EvaluateFunction(double x, double y, double z);


  // void EvaluateGradient (double x[3], double n[3]);
  void EvaluateGradient(array<double>^ x, array<double>^ n);


  // virtual void SetPoints (vtkPoints *);
/// <summary>
/// <para>Specify a list of points defining points through which the planes pass.</para>
/// </summary>
  void SetPoints(vtkPoints^ arg0);


  // vtkPoints *GetPoints ();
/// <summary>
/// <para>Specify a list of points defining points through which the planes pass.</para>
/// </summary>
  vtkPoints^ GetPoints();


  // void SetNormals (vtkDataArray *normals);
/// <summary>
/// <para>Specify a list of normal vectors for the planes. There is a one-to-one correspondence between plane points and plane normals.</para>
/// </summary>
  void SetNormals(vtkDataArray^ normals);


  // vtkDataArray *GetNormals ();
/// <summary>
/// <para>Specify a list of normal vectors for the planes. There is a one-to-one correspondence between plane points and plane normals.</para>
/// </summary>
  vtkDataArray^ GetNormals();


  // void SetFrustumPlanes (double planes[24]);
/// <summary>
/// <para>An alternative method to specify six planes defined by the camera view  frustrum. See vtkCamera::GetFrustumPlanes() documentation.</para>
/// </summary>
  void SetFrustumPlanes(array<double>^ planes);


  // void SetBounds (double bounds[6]);
/// <summary>
/// <para>An alternative method to specify six planes defined by a bounding box. The bounding box is a six-vector defined as (xmin,xmax,ymin,ymax,zmin,zmax). It defines six planes orthogonal to the x-y-z coordinate axes.</para>
/// </summary>
  void SetBounds(array<double>^ bounds);


  // void SetBounds (double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);
/// <summary>
/// <para>An alternative method to specify six planes defined by a bounding box. The bounding box is a six-vector defined as (xmin,xmax,ymin,ymax,zmin,zmax). It defines six planes orthogonal to the x-y-z coordinate axes.</para>
/// </summary>
  void SetBounds(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);


  // int GetNumberOfPlanes ();
/// <summary>
/// <para>Return the number of planes in the set of planes.</para>
/// </summary>
  int GetNumberOfPlanes();


  // vtkPlane *GetPlane (int i);
/// <summary>
/// <para>Create and return a pointer to a vtkPlane object at the ith position. Asking for a plane outside the allowable range returns NULL. This method always returns the same object.  Use GetPlane(int i, vtkPlane *plane) instead</para>
/// </summary>
  vtkPlane^ GetPlane(int i);


  // void GetPlane (int i, vtkPlane *plane);
/// <summary>
/// <para>Create and return a pointer to a vtkPlane object at the ith position. Asking for a plane outside the allowable range returns NULL. This method always returns the same object.  Use GetPlane(int i, vtkPlane *plane) instead</para>
/// </summary>
  void GetPlane(int i, vtkPlane^ plane);


// Did not wrap:  vtkPlanes ();


// Did not wrap:  ~vtkPlanes ();


// Did not wrap:  vtkPlanes (const vtkPlanes &);


// Did not wrap:  void vtkPlanes 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPlanes(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPlanes(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPlanes();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPlanes();


};

} // end vtkCommon
