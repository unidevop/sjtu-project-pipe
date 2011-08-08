#pragma once

// managed includes
#include "vtkDataObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkCellTypes;
ref class vtkGenericAttributeCollection;
ref class vtkGenericCellIterator;
ref class vtkGenericCellTessellator;
ref class vtkGenericPointIterator;

public ref class vtkGenericDataSet : public vtkDataObject
{

public:
  // const char *GetClassName ();
/// <summary>
/// <para>Standard VTK type and print macros.</para>
/// </summary>
  System::String^ GetClassName();


  // int IsA (const char *name);
/// <summary>
/// <para>Standard VTK type and print macros.</para>
/// </summary>
  int IsA(System::String^ name);


  // vtkGenericDataSet *NewInstance ();
/// <summary>
/// <para>Standard VTK type and print macros.</para>
/// </summary>
  vtkGenericDataSet^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual vtkIdType GetNumberOfPoints () = 0;
/// <summary>
/// <para>Return the number of points composing the dataset. See NewPointIterator() for more details. \post positive_result: result&gt;=0</para>
/// </summary>
  int GetNumberOfPoints();


  // virtual vtkIdType GetNumberOfCells (int dim) = 0;
/// <summary>
/// <para>Return the number of cells that explicitly define the dataset. See  NewCellIterator() for more details. \pre valid_dim_range: (dim&gt;=-1) &amp;&amp; (dim&lt;=3) \post positive_result: result&gt;=0</para>
/// </summary>
  int GetNumberOfCells(int dim);


  // virtual int GetCellDimension () = 0;
/// <summary>
/// <para>Return -1 if the dataset is explicitly defined by cells of varying dimensions or if there are no cells. If the dataset is explicitly defined by cells of a unique dimension, return this dimension. \post valid_range: (result&gt;=-1) &amp;&amp; (result&lt;=3)</para>
/// </summary>
  int GetCellDimension();


  // virtual void GetCellTypes (vtkCellTypes *types);
/// <summary>
/// <para>Get a list of types of cells in a dataset. The list consists of an array of types (not necessarily in any order), with a single entry per type. For example a dataset 5 triangles, 3 lines, and 100 hexahedra would result a list of three entries, corresponding to the types VTK_TRIANGLE, VTK_LINE, and VTK_HEXAHEDRON. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED \pre types_exist: types!=0</para>
/// </summary>
  void GetCellTypes(vtkCellTypes^ types);


  // virtual vtkGenericCellIterator *NewCellIterator (int dim) = 0;
/// <summary>
/// <para>Return an iterator to traverse cells of dimension `dim' (or all dimensions if -1) that explicitly define the dataset. For instance, it will return only tetrahedra if the mesh is defined by tetrahedra. If the mesh is composed of two parts, one with tetrahedra and another part with triangles, it will return both, but will not return the boundary edges and vertices of these cells. The user is responsible for deleting the iterator. \pre valid_dim_range: (dim&gt;=-1) &amp;&amp; (dim&lt;=3) \post result_exists: result!=0</para>
/// </summary>
  vtkGenericCellIterator^ NewCellIterator(int dim);


  // virtual vtkGenericCellIterator *NewBoundaryIterator (int dim, int exteriorOnly) = 0;
/// <summary>
/// <para>Return an iterator to traverse cell boundaries of dimension `dim' (or all dimensions if -1) of the dataset.  If `exteriorOnly' is true, only the exterior cell boundaries of the dataset will be returned, otherwise it will return exterior and interior cell boundaries. The user is responsible for deleting the iterator. \pre valid_dim_range: (dim&gt;=-1) &amp;&amp; (dim&lt;=2) \post result_exists: result!=0</para>
/// </summary>
  vtkGenericCellIterator^ NewBoundaryIterator(int dim, int exteriorOnly);


  // virtual vtkGenericPointIterator *NewPointIterator () = 0;
/// <summary>
/// <para>Return an iterator to traverse the points composing the dataset; they can be points that define a cell or isolated. The user is responsible for deleting the iterator. \post result_exists: result!=0</para>
/// </summary>
  vtkGenericPointIterator^ NewPointIterator();


// Did not wrap:  virtual int FindCell (double x[3], vtkGenericCellIterator &cell, double tol2, int &subId, double pcoords[3]) = 0;


  // virtual void FindPoint (double x[3], vtkGenericPointIterator *p) = 0;
/// <summary>
/// <para>Locate the closest point `p' to position `x' (global coordinates). \pre not_empty: GetNumberOfPoints()&gt;0 \pre p_exists: p!=0</para>
/// </summary>
  void FindPoint(array<double>^ x, vtkGenericPointIterator^ p);


  // virtual unsigned long GetMTime ();
/// <summary>
/// <para>Datasets are composite objects and need to check each part for their modified time.</para>
/// </summary>
  unsigned long GetMTime();


  // virtual void ComputeBounds () = 0;
/// <summary>
/// <para>Compute the geometry bounding box.</para>
/// </summary>
  void ComputeBounds();


// Did not wrap:  virtual double *GetBounds ();


  // virtual void GetBounds (double bounds[6]);
/// <summary>
/// <para>Return the geometry bounding box in global coordinates in the form (xmin,xmax, ymin,ymax, zmin,zmax) in the `bounds' array.</para>
/// </summary>
  void GetBounds(array<double>^ bounds);


// Did not wrap:  virtual double *GetCenter ();


  // virtual void GetCenter (double center[3]);
/// <summary>
/// <para>Get the center of the bounding box in global coordinates.</para>
/// </summary>
  void GetCenter(array<double>^ center);


  // virtual double GetLength ();
/// <summary>
/// <para>Return the length of the diagonal of the bounding box. \post positive_result: result&gt;=0</para>
/// </summary>
  double GetLength();


  // vtkGenericAttributeCollection *GetAttributes ();
/// <summary>
/// <para>Get the collection of attributes associated with this dataset.</para>
/// </summary>
  vtkGenericAttributeCollection^ GetAttributes();


  // virtual void SetTessellator (vtkGenericCellTessellator *tessellator);
/// <summary>
/// <para>Set/Get a cell tessellator if cells must be tessellated during processing. \pre tessellator_exists: tessellator!=0</para>
/// </summary>
  void SetTessellator(vtkGenericCellTessellator^ tessellator);


  // vtkGenericCellTessellator *GetTessellator ();
/// <summary>
/// <para>Set/Get a cell tessellator if cells must be tessellated during processing. \pre tessellator_exists: tessellator!=0</para>
/// </summary>
  vtkGenericCellTessellator^ GetTessellator();


  // virtual unsigned long GetActualMemorySize ();
/// <summary>
/// <para>Actual size of the data in kilobytes; only valid after the pipeline has updated. It is guaranteed to be greater than or equal to the memory required to represent the data.</para>
/// </summary>
  unsigned long GetActualMemorySize();


  // int GetDataObjectType ();
/// <summary>
/// <para>Return the type of data object.</para>
/// </summary>
  int GetDataObjectType();


  // virtual vtkIdType GetEstimatedSize () = 0;
/// <summary>
/// <para>Estimated size needed after tessellation (or special operation)</para>
/// </summary>
  int GetEstimatedSize();


// Did not wrap:  vtkGenericDataSet ();


// Did not wrap:  virtual ~vtkGenericDataSet ();


// Did not wrap:  vtkGenericDataSet (const vtkGenericDataSet &);


// Did not wrap:  void vtkGenericDataSet 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGenericDataSet(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGenericDataSet(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGenericDataSet();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGenericDataSet();


};

} // end vtkFiltering
