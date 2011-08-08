#pragma once

// managed includes
#include "vtkGenericSubdivisionErrorMetricDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkAttributesErrorMetric : public vtkGenericSubdivisionErrorMetric
{

public:
// Did not wrap:  static vtkAttributesErrorMetric *New ();


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


  // vtkAttributesErrorMetric *NewInstance ();
/// <summary>
/// <para>Standard VTK type and error macros.</para>
/// </summary>
  vtkAttributesErrorMetric^ NewInstance();


  // vtkAttributesErrorMetric *SafeDownCast (vtkObject* o);
/// <summary>
/// <para>Standard VTK type and error macros.</para>
/// </summary>
  static vtkAttributesErrorMetric^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // double GetAbsoluteAttributeTolerance ();
/// <summary>
/// <para>Absolute tolerance of the active scalar (attribute+component). Subdivision is required if the square distance between the real attribute at the mid point on the edge and the interpolated attribute is greater than AbsoluteAttributeTolerance. This is the attribute accuracy. 0.01 will give better result than 0.1.</para>
/// </summary>
  double GetAbsoluteAttributeTolerance();


  // void SetAbsoluteAttributeTolerance (double value);
/// <summary>
/// <para>Set the absolute attribute accuracy to `value'. See GetAbsoluteAttributeTolerance() for details. It is particularly useful when some concrete implementation of vtkGenericAttribute does not support GetRange() request, called internally in SetAttributeTolerance(). It may happen when the implementation support higher order attributes but cannot compute the range. \pre valid_range_value: value&gt;0</para>
/// </summary>
  void SetAbsoluteAttributeTolerance(double value);


  // double GetAttributeTolerance ();
/// <summary>
/// <para>Relative tolerance of the active scalar (attribute+component). Subdivision is required if the square distance between the real attribute at the mid point on the edge and the interpolated attribute is greater than AttributeTolerance. This is the attribute accuracy. 0.01 will give better result than 0.1.</para>
/// </summary>
  double GetAttributeTolerance();


  // void SetAttributeTolerance (double value);
/// <summary>
/// <para>Set the relative attribute accuracy to `value'. See GetAttributeTolerance() for details. \pre valid_range_value: value&gt;0 &amp;&amp; value&lt;1</para>
/// </summary>
  void SetAttributeTolerance(double value);


  // int RequiresEdgeSubdivision (double *leftPoint, double *midPoint, double *rightPoint, double alpha);
/// <summary>
/// <para>Does the edge need to be subdivided according to the distance between the value of the active attribute/component at the midpoint and the mean value between the endpoints? The edge is defined by its `leftPoint' and its `rightPoint'. `leftPoint', `midPoint' and `rightPoint' have to be initialized before calling RequiresEdgeSubdivision(). Their format is global coordinates, parametric coordinates and point centered attributes: xyx rst abc de... `alpha' is the normalized abscissa of the midpoint along the edge. (close to 0 means close to the left point, close to 1 means close to the right point) \pre leftPoint_exists: leftPoint!=0 \pre midPoint_exists: midPoint!=0 \pre rightPoint_exists: rightPoint!=0 \pre clamped_alpha: alpha&gt;0 &amp;&amp; alpha&lt;1 \pre valid_size: sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)          =GetAttributeCollection()-&gt;GetNumberOfPointCenteredComponents()+6</para>
/// </summary>
  int RequiresEdgeSubdivision(array<double>^ leftPoint, array<double>^ midPoint, array<double>^ rightPoint, double alpha);


  // double GetError (double *leftPoint, double *midPoint, double *rightPoint, double alpha);
/// <summary>
/// <para>Return the error at the mid-point. The type of error depends on the state of the concrete error metric. For instance, it can return an absolute or relative error metric. See RequiresEdgeSubdivision() for a description of the arguments. \pre leftPoint_exists: leftPoint!=0 \pre midPoint_exists: midPoint!=0 \pre rightPoint_exists: rightPoint!=0 \pre clamped_alpha: alpha&gt;0 &amp;&amp; alpha&lt;1 \pre valid_size: sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)          =GetAttributeCollection()-&gt;GetNumberOfPointCenteredComponents()+6 \post positive_result: result&gt;=0</para>
/// </summary>
  double GetError(array<double>^ leftPoint, array<double>^ midPoint, array<double>^ rightPoint, double alpha);


// Did not wrap:  vtkAttributesErrorMetric ();


// Did not wrap:  virtual ~vtkAttributesErrorMetric ();


// Did not wrap:  void ComputeSquareAbsoluteAttributeTolerance ();


// Did not wrap:  vtkAttributesErrorMetric (const vtkAttributesErrorMetric &);


// Did not wrap:  void vtkAttributesErrorMetric 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkAttributesErrorMetric(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkAttributesErrorMetric(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkAttributesErrorMetric();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkAttributesErrorMetric();


};

} // end vtkFiltering
