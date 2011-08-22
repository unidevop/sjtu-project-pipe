#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkCellArray;
ref class vtkGenericAdaptorCell;
ref class vtkGenericAttributeCollection;
ref class vtkGenericDataSet;
ref class vtkPointData;

public ref class vtkGenericCellTessellator : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkGenericCellTessellator *NewInstance ();
  vtkGenericCellTessellator^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void TessellateFace (vtkGenericAdaptorCell *cell, vtkGenericAttributeCollection *att, vtkIdType index, vtkDoubleArray *points, vtkCellArray *cellArray, vtkPointData *internalPd) = 0;
/// <summary>
/// <para>Tessellate a face of a 3D `cell'. The face is specified by the index value. The result is a set of smaller linear triangles in `cellArray' with `points' and point data `internalPd'. \pre cell_exists: cell!=0 \pre valid_dimension: cell-&gt;GetDimension()==3 \pre valid_index_range: (index&gt;=0) &amp;&amp; (index&lt;cell-&gt;GetNumberOfBoundaries(2)) \pre att_exists: att!=0 \pre points_exists: points!=0 \pre cellArray_exists: cellArray!=0 \pre internalPd_exists: internalPd!=0</para>
/// </summary>
  void TessellateFace(vtkGenericAdaptorCell^ cell, vtkGenericAttributeCollection^ att, int index, vtkDoubleArray^ points, vtkCellArray^ cellArray, vtkPointData^ internalPd);


  // virtual void Tessellate (vtkGenericAdaptorCell *cell, vtkGenericAttributeCollection *att, vtkDoubleArray *points, vtkCellArray *cellArray, vtkPointData *internalPd) = 0;
/// <summary>
/// <para>Tessellate a 3D `cell'. The result is a set of smaller linear tetrahedra in `cellArray' with `points' and point data `internalPd'. \pre cell_exists: cell!=0 \pre valid_dimension: cell-&gt;GetDimension()==3 \pre att_exists: att!=0 \pre points_exists: points!=0 \pre cellArray_exists: cellArray!=0 \pre internalPd_exists: internalPd!=0</para>
/// </summary>
  void Tessellate(vtkGenericAdaptorCell^ cell, vtkGenericAttributeCollection^ att, vtkDoubleArray^ points, vtkCellArray^ cellArray, vtkPointData^ internalPd);


  // virtual void Triangulate (vtkGenericAdaptorCell *cell, vtkGenericAttributeCollection *att, vtkDoubleArray *points, vtkCellArray *cellArray, vtkPointData *internalPd) = 0;
/// <summary>
/// <para>Triangulate a 2D `cell'. The result is a set of smaller linear triangles in `cellArray' with `points' and point data `internalPd'. \pre cell_exists: cell!=0 \pre valid_dimension: cell-&gt;GetDimension()==2 \pre att_exists: att!=0 \pre points_exists: points!=0 \pre cellArray_exists: cellArray!=0 \pre internalPd_exists: internalPd!=0</para>
/// </summary>
  void Triangulate(vtkGenericAdaptorCell^ cell, vtkGenericAttributeCollection^ att, vtkDoubleArray^ points, vtkCellArray^ cellArray, vtkPointData^ internalPd);


  // virtual void SetErrorMetrics (vtkCollection *someErrorMetrics);
/// <summary>
/// <para>Specify the list of error metrics used to decide if an edge has to be splitted or not. It is a collection of vtkGenericSubdivisionErrorMetric-s.</para>
/// </summary>
  void SetErrorMetrics(vtkCollection^ someErrorMetrics);


  // vtkCollection *GetErrorMetrics ();
/// <summary>
/// <para>Specify the list of error metrics used to decide if an edge has to be splitted or not. It is a collection of vtkGenericSubdivisionErrorMetric-s.</para>
/// </summary>
  vtkCollection^ GetErrorMetrics();


  // virtual void Initialize (vtkGenericDataSet *ds) = 0;
/// <summary>
/// <para>Initialize the tessellator with a data set `ds'.</para>
/// </summary>
  void Initialize(vtkGenericDataSet^ ds);


  // void InitErrorMetrics (vtkGenericDataSet *ds);
/// <summary>
/// <para>Init the error metric with the dataset. Should be called in each filter before any tessellation of any cell.</para>
/// </summary>
  void InitErrorMetrics(vtkGenericDataSet^ ds);


  // int GetMeasurement ();
/// <summary>
/// <para>If true, measure the quality of the fixed subdivision.</para>
/// </summary>
  int GetMeasurement();


  // void SetMeasurement (int flag);
/// <summary>
/// <para>If true, measure the quality of the fixed subdivision.</para>
/// </summary>
  void SetMeasurement(int flag);


  // void GetMaxErrors (double *errors);
/// <summary>
/// <para>Get the maximum error measured after the fixed subdivision. \pre errors_exists: errors!=0 \pre valid_size: sizeof(errors)==GetErrorMetrics()-&gt;GetNumberOfItems()</para>
/// </summary>
  void GetMaxErrors(array<double>^ errors);


// Did not wrap:  vtkGenericCellTessellator ();


// Did not wrap:  ~vtkGenericCellTessellator ();


// Did not wrap:  int RequiresEdgeSubdivision (double *left, double *mid, double *right, double alpha);


// Did not wrap:  virtual void UpdateMaxError (double *leftPoint, double *midPoint, double *rightPoint, double alpha);


// Did not wrap:  void ResetMaxErrors ();


// Did not wrap:  void SetGenericCell (vtkGenericAdaptorCell *cell);


// Did not wrap:  vtkGenericCellTessellator (const vtkGenericCellTessellator &);


// Did not wrap:  void vtkGenericCellTessellator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGenericCellTessellator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGenericCellTessellator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGenericCellTessellator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGenericCellTessellator();


};

} // end vtkFiltering
