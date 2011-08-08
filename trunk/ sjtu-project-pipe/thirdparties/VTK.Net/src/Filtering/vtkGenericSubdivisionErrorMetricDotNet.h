#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkGenericAdaptorCell;
ref class vtkGenericDataSet;

public ref class vtkGenericSubdivisionErrorMetric : public vtkObject
{

public:
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


  // vtkGenericSubdivisionErrorMetric *NewInstance ();
/// <summary>
/// <para>Standard VTK type and error macros.</para>
/// </summary>
  vtkGenericSubdivisionErrorMetric^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual int RequiresEdgeSubdivision (double *leftPoint, double *midPoint, double *rightPoint, double alpha) = 0;
/// <summary>
/// <para>Does the edge need to be subdivided according to the implemented computation? The edge is defined by its `leftPoint' and its `rightPoint'. `leftPoint', `midPoint' and `rightPoint' have to be initialized before calling RequiresEdgeSubdivision(). Their format is global coordinates, parametric coordinates and point centered attributes: xyx rst abc de... `alpha' is the normalized abscissa of the midpoint along the edge. (close to 0 means close to the left point, close to 1 means close to the right point) \pre leftPoint_exists: leftPoint!=0 \pre midPoint_exists: midPoint!=0 \pre rightPoint_exists: rightPoint!=0 \pre clamped_alpha: alpha&gt;0 &amp;&amp; alpha&lt;1 \pre valid_size: sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)          =GetAttributeCollection()-&gt;GetNumberOfPointCenteredComponents()+6</para>
/// </summary>
  int RequiresEdgeSubdivision(array<double>^ leftPoint, array<double>^ midPoint, array<double>^ rightPoint, double alpha);


  // virtual double GetError (double *leftPoint, double *midPoint, double *rightPoint, double alpha) = 0;
/// <summary>
/// <para>Return the error at the mid-point. The type of error depends on the state of the concrete error metric. For instance, it can return an absolute or relative error metric. See RequiresEdgeSubdivision() for a description of the arguments. \pre leftPoint_exists: leftPoint!=0 \pre midPoint_exists: midPoint!=0 \pre rightPoint_exists: rightPoint!=0 \pre clamped_alpha: alpha&gt;0 &amp;&amp; alpha&lt;1 \pre valid_size: sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)          =GetAttributeCollection()-&gt;GetNumberOfPointCenteredComponents()+6 \post positive_result: result&gt;=0</para>
/// </summary>
  double GetError(array<double>^ leftPoint, array<double>^ midPoint, array<double>^ rightPoint, double alpha);


  // void SetGenericCell (vtkGenericAdaptorCell *cell);
/// <summary>
/// <para>The cell that the edge belongs to.</para>
/// </summary>
  void SetGenericCell(vtkGenericAdaptorCell^ cell);


  // vtkGenericAdaptorCell *GetGenericCell ();
/// <summary>
/// <para>The cell that the edge belongs to.</para>
/// </summary>
  vtkGenericAdaptorCell^ GetGenericCell();


  // void SetDataSet (vtkGenericDataSet *ds);
/// <summary>
/// <para>Set/Get the dataset to be tessellated.</para>
/// </summary>
  void SetDataSet(vtkGenericDataSet^ ds);


  // vtkGenericDataSet *GetDataSet ();
/// <summary>
/// <para>Set/Get the dataset to be tessellated.</para>
/// </summary>
  vtkGenericDataSet^ GetDataSet();


// Did not wrap:  vtkGenericSubdivisionErrorMetric ();


// Did not wrap:  ~vtkGenericSubdivisionErrorMetric ();


// Did not wrap:  vtkGenericSubdivisionErrorMetric (const vtkGenericSubdivisionErrorMetric &);


// Did not wrap:  void vtkGenericSubdivisionErrorMetric 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGenericSubdivisionErrorMetric(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGenericSubdivisionErrorMetric(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGenericSubdivisionErrorMetric();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGenericSubdivisionErrorMetric();


};

} // end vtkFiltering
