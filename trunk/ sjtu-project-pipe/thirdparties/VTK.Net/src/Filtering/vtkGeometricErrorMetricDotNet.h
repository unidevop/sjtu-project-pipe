#pragma once

// managed includes
#include "vtkGenericSubdivisionErrorMetricDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkGenericDataSet;

public ref class vtkGeometricErrorMetric : public vtkGenericSubdivisionErrorMetric
{

public:
// Did not wrap:  static vtkGeometricErrorMetric *New ();


  // const char *GetClassName ();
/// <summary>
/// <para>Standard VTK type and error macros.</para>
/// </summary>
  System::String^ GetClassName();


  // int IsA (const char *name);
/// <summary>
/// <para>Standard VTK type and error macros.</para>
/// </summary>
  int IsA(System::String^ name);


  // vtkGeometricErrorMetric *NewInstance ();
/// <summary>
/// <para>Standard VTK type and error macros.</para>
/// </summary>
  vtkGeometricErrorMetric^ NewInstance();


  // vtkGeometricErrorMetric *SafeDownCast (vtkObject* o);
/// <summary>
/// <para>Standard VTK type and error macros.</para>
/// </summary>
  static vtkGeometricErrorMetric^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // double GetAbsoluteGeometricTolerance ();
/// <summary>
/// <para>Return the squared absolute geometric accuracy. See SetAbsoluteGeometricTolerance() for details. \post positive_result: result&gt;0</para>
/// </summary>
  double GetAbsoluteGeometricTolerance();


  // void SetAbsoluteGeometricTolerance (double value);
/// <summary>
/// <para>Set the geometric accuracy with a squared absolute value. This is the geometric object-based accuracy. Subdivision will be required if the square distance between the real point and the straight line passing through the vertices of the edge is greater than `value'. For instance 0.01 will give better result than 0.1. \pre positive_value: value&gt;0</para>
/// </summary>
  void SetAbsoluteGeometricTolerance(double value);


  // void SetRelativeGeometricTolerance (double value, vtkGenericDataSet *ds);
/// <summary>
/// <para>Set the geometric accuracy with a value relative to the length of the bounding box of the dataset. Internally compute the absolute tolerance. For instance 0.01 will give better result than 0.1. \pre valid_range_value: value&gt;0 &amp;&amp; value&lt;1 \pre ds_exists: ds!=0</para>
/// </summary>
  void SetRelativeGeometricTolerance(double value, vtkGenericDataSet^ ds);


  // int RequiresEdgeSubdivision (double *leftPoint, double *midPoint, double *rightPoint, double alpha);
/// <summary>
/// <para>Does the edge need to be subdivided according to the distance between the line passing through its endpoints and the mid point? The edge is defined by its `leftPoint' and its `rightPoint'. `leftPoint', `midPoint' and `rightPoint' have to be initialized before calling RequiresEdgeSubdivision(). Their format is global coordinates, parametric coordinates and point centered attributes: xyx rst abc de... `alpha' is the normalized abscissa of the midpoint along the edge. (close to 0 means close to the left point, close to 1 means close to the right point) \pre leftPoint_exists: leftPoint!=0 \pre midPoint_exists: midPoint!=0 \pre rightPoint_exists: rightPoint!=0 \pre clamped_alpha: alpha&gt;0 &amp;&amp; alpha&lt;1 \pre valid_size: sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)          =GetAttributeCollection()-&gt;GetNumberOfPointCenteredComponents()+6</para>
/// </summary>
  int RequiresEdgeSubdivision(array<double>^ leftPoint, array<double>^ midPoint, array<double>^ rightPoint, double alpha);


  // double GetError (double *leftPoint, double *midPoint, double *rightPoint, double alpha);
/// <summary>
/// <para>Return the error at the mid-point. It will return an error relative to the bounding box size if GetRelative() is true, a square absolute error otherwise. See RequiresEdgeSubdivision() for a description of the arguments. \pre leftPoint_exists: leftPoint!=0 \pre midPoint_exists: midPoint!=0 \pre rightPoint_exists: rightPoint!=0 \pre clamped_alpha: alpha&gt;0 &amp;&amp; alpha&lt;1 \pre valid_size: sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)          =GetAttributeCollection()-&gt;GetNumberOfPointCenteredComponents()+6 \post positive_result: result&gt;=0</para>
/// </summary>
  double GetError(array<double>^ leftPoint, array<double>^ midPoint, array<double>^ rightPoint, double alpha);


  // int GetRelative ();
/// <summary>
/// <para>Return the type of output of GetError()</para>
/// </summary>
  int GetRelative();


// Did not wrap:  vtkGeometricErrorMetric ();


// Did not wrap:  virtual ~vtkGeometricErrorMetric ();


// Did not wrap:  double Distance2LinePoint (double x[3], double y[3], double z[3]);


// Did not wrap:  vtkGeometricErrorMetric (const vtkGeometricErrorMetric &);


// Did not wrap:  void vtkGeometricErrorMetric 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGeometricErrorMetric(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGeometricErrorMetric(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGeometricErrorMetric();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGeometricErrorMetric();


};

} // end vtkFiltering
