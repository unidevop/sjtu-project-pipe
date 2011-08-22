#pragma once

// managed includes
#include "vtkGenericSubdivisionErrorMetricDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkViewport;

public ref class vtkViewDependentErrorMetric : public vtkGenericSubdivisionErrorMetric
{

public:
// Did not wrap:  static vtkViewDependentErrorMetric *New ();


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


  // vtkViewDependentErrorMetric *NewInstance ();
/// <summary>
/// <para>Standard VTK type and error macros.</para>
/// </summary>
  vtkViewDependentErrorMetric^ NewInstance();


  // vtkViewDependentErrorMetric *SafeDownCast (vtkObject* o);
/// <summary>
/// <para>Standard VTK type and error macros.</para>
/// </summary>
  static vtkViewDependentErrorMetric^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // double GetPixelTolerance ();
/// <summary>
/// <para>Return the squared screen-based geometric accurary measured in pixels. An accuracy less or equal to 0.25 (0.5^2) ensures that the screen-space interpolation of a mid-point matchs exactly with the projection of the mid-point (a value less than 1 but greater than 0.25 is not enough, because of 8-neighbors). Maybe it is useful for lower accuracy in case of anti-aliasing? \post positive_result: result&gt;0</para>
/// </summary>
  double GetPixelTolerance();


  // void SetPixelTolerance (double value);
/// <summary>
/// <para>Set the squared screen-based geometric accuracy measured in pixels. Subdivision will be required if the square distance between the projection of the real point and the straight line passing through the projection of the vertices of the edge is greater than `value'. For instance, 0.25 will give better result than 1. \pre positive_value: value&gt;0</para>
/// </summary>
  void SetPixelTolerance(double value);


  // vtkViewport *GetViewport ();
/// <summary>
/// <para>Set/Get the renderer with `renderer' on which the error metric  is based. The error metric use the active camera of the renderer.</para>
/// </summary>
  vtkViewport^ GetViewport();


  // void SetViewport (vtkViewport *viewport);
/// <summary>
/// <para>Set/Get the renderer with `renderer' on which the error metric  is based. The error metric use the active camera of the renderer.</para>
/// </summary>
  void SetViewport(vtkViewport^ viewport);


  // int RequiresEdgeSubdivision (double *leftPoint, double *midPoint, double *rightPoint, double alpha);
/// <summary>
/// <para>Does the edge need to be subdivided according to the distance between the line passing through its endpoints in screen space and the projection of its mid point? The edge is defined by its `leftPoint' and its `rightPoint'. `leftPoint', `midPoint' and `rightPoint' have to be initialized before calling RequiresEdgeSubdivision(). Their format is global coordinates, parametric coordinates and point centered attributes: xyx rst abc de... `alpha' is the normalized abscissa of the midpoint along the edge. (close to 0 means close to the left point, close to 1 means close to the right point) \pre leftPoint_exists: leftPoint!=0 \pre midPoint_exists: midPoint!=0 \pre rightPoint_exists: rightPoint!=0 \pre clamped_alpha: alpha&gt;0 &amp;&amp; alpha&lt;1 \pre valid_size: sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)          =GetAttributeCollection()-&gt;GetNumberOfPointCenteredComponents()+6</para>
/// </summary>
  int RequiresEdgeSubdivision(array<double>^ leftPoint, array<double>^ midPoint, array<double>^ rightPoint, double alpha);


  // double GetError (double *leftPoint, double *midPoint, double *rightPoint, double alpha);
/// <summary>
/// <para>Return the error at the mid-point. The type of error depends on the state of the concrete error metric. For instance, it can return an absolute or relative error metric. See RequiresEdgeSubdivision() for a description of the arguments. \pre leftPoint_exists: leftPoint!=0 \pre midPoint_exists: midPoint!=0 \pre rightPoint_exists: rightPoint!=0 \pre clamped_alpha: alpha&gt;0 &amp;&amp; alpha&lt;1 \pre valid_size: sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)          =GetAttributeCollection()-&gt;GetNumberOfPointCenteredComponents()+6 \post positive_result: result&gt;=0</para>
/// </summary>
  double GetError(array<double>^ leftPoint, array<double>^ midPoint, array<double>^ rightPoint, double alpha);


// Did not wrap:  vtkViewDependentErrorMetric ();


// Did not wrap:  ~vtkViewDependentErrorMetric ();


// Did not wrap:  double Distance2LinePoint (double x[2], double y[2], double z[2]);


// Did not wrap:  vtkViewDependentErrorMetric (const vtkViewDependentErrorMetric &);


// Did not wrap:  void vtkViewDependentErrorMetric 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkViewDependentErrorMetric(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkViewDependentErrorMetric(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkViewDependentErrorMetric();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkViewDependentErrorMetric();


};

} // end vtkFiltering
