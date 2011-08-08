#pragma once

// managed includes
#include "vtkGenericSubdivisionErrorMetricDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkSmoothErrorMetric : public vtkGenericSubdivisionErrorMetric
{

public:
// Did not wrap:  static vtkSmoothErrorMetric *New ();


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


  // vtkSmoothErrorMetric *NewInstance ();
/// <summary>
/// <para>Standard VTK type and error macros.</para>
/// </summary>
  vtkSmoothErrorMetric^ NewInstance();


  // vtkSmoothErrorMetric *SafeDownCast (vtkObject* o);
/// <summary>
/// <para>Standard VTK type and error macros.</para>
/// </summary>
  static vtkSmoothErrorMetric^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // double GetAngleTolerance ();
/// <summary>
/// <para>Return the flatness threshold. \post positive_result: result&gt;90 &amp;&amp; result&lt;180</para>
/// </summary>
  double GetAngleTolerance();


  // void SetAngleTolerance (double value);
/// <summary>
/// <para>Set the flatness threshold with an angle in degrees. Internally compute the cosine. value is supposed to be in ]90,180[, if not it is clamped in [90.1,179.9]. For instance 178  will give better result than 150.</para>
/// </summary>
  void SetAngleTolerance(double value);


  // int RequiresEdgeSubdivision (double *leftPoint, double *midPoint, double *rightPoint, double alpha);
/// <summary>
/// <para>Does the edge need to be subdivided according to the cosine between the two chords passing through the mid-point and the endpoints? The edge is defined by its `leftPoint' and its `rightPoint'. `leftPoint', `midPoint' and `rightPoint' have to be initialized before calling RequiresEdgeSubdivision(). Their format is global coordinates, parametric coordinates and point centered attributes: xyx rst abc de... `alpha' is the normalized abscissa of the midpoint along the edge. (close to 0 means close to the left point, close to 1 means close to the right point) \pre leftPoint_exists: leftPoint!=0 \pre midPoint_exists: midPoint!=0 \pre rightPoint_exists: rightPoint!=0 \pre clamped_alpha: alpha&gt;0 &amp;&amp; alpha&lt;1 \pre valid_size: sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)          =GetAttributeCollection()-&gt;GetNumberOfPointCenteredComponents()+6</para>
/// </summary>
  int RequiresEdgeSubdivision(array<double>^ leftPoint, array<double>^ midPoint, array<double>^ rightPoint, double alpha);


  // double GetError (double *leftPoint, double *midPoint, double *rightPoint, double alpha);
/// <summary>
/// <para>Return the error at the mid-point. It will return an error relative to the bounding box size if GetRelative() is true, a square absolute error otherwise. See RequiresEdgeSubdivision() for a description of the arguments. \pre leftPoint_exists: leftPoint!=0 \pre midPoint_exists: midPoint!=0 \pre rightPoint_exists: rightPoint!=0 \pre clamped_alpha: alpha&gt;0 &amp;&amp; alpha&lt;1 \pre valid_size: sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)          =GetAttributeCollection()-&gt;GetNumberOfPointCenteredComponents()+6 \post positive_result: result&gt;=0</para>
/// </summary>
  double GetError(array<double>^ leftPoint, array<double>^ midPoint, array<double>^ rightPoint, double alpha);


// Did not wrap:  vtkSmoothErrorMetric ();


// Did not wrap:  virtual ~vtkSmoothErrorMetric ();


// Did not wrap:  vtkSmoothErrorMetric (const vtkSmoothErrorMetric &);


// Did not wrap:  void vtkSmoothErrorMetric 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSmoothErrorMetric(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSmoothErrorMetric(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSmoothErrorMetric();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSmoothErrorMetric();


};

} // end vtkFiltering
