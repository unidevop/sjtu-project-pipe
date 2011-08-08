#pragma once

// managed includes
#include "vtkGenericCellTessellatorDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkCellArray;
ref class vtkGenericAdaptorCell;
ref class vtkGenericAttributeCollection;
ref class vtkGenericDataSet;
ref class vtkPointData;

public ref class vtkSimpleCellTessellator : public vtkGenericCellTessellator
{

public:
// Did not wrap:  static vtkSimpleCellTessellator *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSimpleCellTessellator *NewInstance ();
  vtkSimpleCellTessellator^ NewInstance();


  // vtkSimpleCellTessellator *SafeDownCast (vtkObject* o);
  static vtkSimpleCellTessellator^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkGenericAdaptorCell *GetGenericCell ();
/// <summary>
/// <para>Get the higher order cell in order to access the evaluation function.</para>
/// </summary>
  vtkGenericAdaptorCell^ GetGenericCell();


  // void TessellateFace (vtkGenericAdaptorCell *cell, vtkGenericAttributeCollection *att, vtkIdType index, vtkDoubleArray *points, vtkCellArray *cellArray, vtkPointData *internalPd);
/// <summary>
/// <para>Tessellate a face of a 3D `cell'. The face is specified by the index value. The result is a set of smaller linear triangles in `cellArray' with `points' and point data `internalPd'. \pre cell_exists: cell!=0 \pre valid_dimension: cell-&gt;GetDimension()==3 \pre valid_index_range: (index&gt;=0) &amp;&amp; (index&lt;cell-&gt;GetNumberOfBoundaries(2)) \pre att_exists: att!=0 \pre points_exists: points!=0 \pre cellArray_exists: cellArray!=0 \pre internalPd_exists: internalPd!=0</para>
/// </summary>
  void TessellateFace(vtkGenericAdaptorCell^ cell, vtkGenericAttributeCollection^ att, int index, vtkDoubleArray^ points, vtkCellArray^ cellArray, vtkPointData^ internalPd);


  // void Tessellate (vtkGenericAdaptorCell *cell, vtkGenericAttributeCollection *att, vtkDoubleArray *points, vtkCellArray *cellArray, vtkPointData *internalPd);
/// <summary>
/// <para>Tessellate a 3D `cell'. The result is a set of smaller linear tetrahedra in `cellArray' with `points' and point data `internalPd'. \pre cell_exists: cell!=0 \pre valid_dimension: cell-&gt;GetDimension()==3 \pre att_exists: att!=0 \pre points_exists: points!=0 \pre cellArray_exists: cellArray!=0 \pre internalPd_exists: internalPd!=0</para>
/// </summary>
  void Tessellate(vtkGenericAdaptorCell^ cell, vtkGenericAttributeCollection^ att, vtkDoubleArray^ points, vtkCellArray^ cellArray, vtkPointData^ internalPd);


  // void Triangulate (vtkGenericAdaptorCell *cell, vtkGenericAttributeCollection *att, vtkDoubleArray *points, vtkCellArray *cellArray, vtkPointData *internalPd);
/// <summary>
/// <para>Triangulate a 2D `cell'. The result is a set of smaller linear triangles in `cellArray' with `points' and point data `internalPd'. \pre cell_exists: cell!=0 \pre valid_dimension: cell-&gt;GetDimension()==2 \pre att_exists: att!=0 \pre points_exists: points!=0 \pre cellArray_exists: cellArray!=0 \pre internalPd_exists: internalPd!=0</para>
/// </summary>
  void Triangulate(vtkGenericAdaptorCell^ cell, vtkGenericAttributeCollection^ att, vtkDoubleArray^ points, vtkCellArray^ cellArray, vtkPointData^ internalPd);


  // void Reset ();
/// <summary>
/// <para>Reset the output for repeated use of this class.</para>
/// </summary>
  void Reset();


  // void Initialize (vtkGenericDataSet *ds);
/// <summary>
/// <para>Initialize the tessellator with a data set `ds'.</para>
/// </summary>
  void Initialize(vtkGenericDataSet^ ds);


  // int GetFixedSubdivisions ();
/// <summary>
/// <para>Return the number of fixed subdivisions. It is used to prevent from infinite loop in degenerated cases. For order 3 or higher, if the inflection point is exactly on the mid-point, error metric will not detect that a subdivision is required. 0 means no fixed subdivision: there will be only adaptive subdivisions.</para>
/// <para>The algorithm first performs `GetFixedSubdivisions' non adaptive subdivisions followed by at most `GetMaxAdaptiveSubdivisions' adaptive subdivisions. Hence, there are at most `GetMaxSubdivisionLevel' subdivisions. \post positive_result: result&gt;=0 &amp;&amp; result&lt;=GetMaxSubdivisionLevel()</para>
/// </summary>
  int GetFixedSubdivisions();


  // int GetMaxSubdivisionLevel ();
/// <summary>
/// <para>Return the maximum level of subdivision. It is used to prevent from infinite loop in degenerated cases. For order 3 or higher, if the inflection point is exactly on the mid-point, error metric will not detect that a subdivision is required. 0 means no subdivision, neither fixed nor adaptive. \post positive_result: result&gt;=GetFixedSubdivisions()</para>
/// </summary>
  int GetMaxSubdivisionLevel();


  // int GetMaxAdaptiveSubdivisions ();
/// <summary>
/// <para>Return the maximum number of adaptive subdivisions. \post valid_result: result==GetMaxSubdivisionLevel()-GetFixedSubdivisions()</para>
/// </summary>
  int GetMaxAdaptiveSubdivisions();


  // void SetFixedSubdivisions (int level);
/// <summary>
/// <para>Set the number of fixed subdivisions. See GetFixedSubdivisions() for more explanations. \pre positive_level: level&gt;=0 &amp;&amp; level&lt;=GetMaxSubdivisionLevel() \post is_set: GetFixedSubdivisions()==level</para>
/// </summary>
  void SetFixedSubdivisions(int level);


  // void SetMaxSubdivisionLevel (int level);
/// <summary>
/// <para>Set the maximum level of subdivision. See GetMaxSubdivisionLevel() for more explanations. \pre positive_level: level&gt;=GetFixedSubdivisions() \post is_set: level==GetMaxSubdivisionLevel()</para>
/// </summary>
  void SetMaxSubdivisionLevel(int level);


  // void SetSubdivisionLevels (int fixed, int maxLevel);
/// <summary>
/// <para>Set both the number of fixed subdivisions and the maximum level of subdivisions. See GetFixedSubdivisions(), GetMaxSubdivisionLevel() and GetMaxAdaptiveSubdivisions() for more explanations. \pre positive_fixed: fixed&gt;=0 \pre valid_range: fixed&lt;=maxLevel \post fixed_is_set: fixed==GetFixedSubdivisions() \post maxLevel_is_set: maxLevel==GetMaxSubdivisionLevel()</para>
/// </summary>
  void SetSubdivisionLevels(int fixed, int maxLevel);


// Did not wrap:  vtkSimpleCellTessellator ();


// Did not wrap:  ~vtkSimpleCellTessellator ();


// Did not wrap:  void CopyPoint (vtkIdType pointId);


// Did not wrap:  void InsertEdgesIntoEdgeTable (vtkTriangleTile &tri);


// Did not wrap:  void RemoveEdgesFromEdgeTable (vtkTriangleTile &tri);


// Did not wrap:  void InsertPointsIntoEdgeTable (vtkTriangleTile &tri);


// Did not wrap:  void InsertEdgesIntoEdgeTable (vtkTetraTile &tetra);


// Did not wrap:  void RemoveEdgesFromEdgeTable (vtkTetraTile &tetra);


// Did not wrap:  void InitTetraTile (vtkTetraTile &root, vtkIdType *localIds, vtkIdType *ids, int *edgeIds, int *faceIds);


// Did not wrap:  void TriangulateTriangle (vtkGenericAdaptorCell *cell, vtkIdType *localIds, vtkIdType *ids, int *edgeIds, vtkGenericAttributeCollection *att, vtkDoubleArray *points, vtkCellArray *cellArray, vtkPointData *internalPd);


// Did not wrap:  void AllocateScalars (int size);


// Did not wrap:  int FindEdgeReferenceCount (double p1[3], double p2[3], vtkIdType &e1, vtkIdType &e2);


// Did not wrap:  int GetNumberOfCellsUsingFace (int faceId);


// Did not wrap:  int GetNumberOfCellsUsingEdge (int edgeId);


// Did not wrap:  int IsEdgeOnFace (double p1[3], double p2[3]);


// Did not wrap:  int FindEdgeParent2D (double p1[3], double p2[3], int &localId);


// Did not wrap:  int FindEdgeParent (double p1[3], double p2[3], int &localId);


// Did not wrap:  void AllocatePointIds (int size);


// Did not wrap:  int FacesAreEqual (int *originalFace, int face[3]);


// Did not wrap:  vtkSimpleCellTessellator (const vtkSimpleCellTessellator &);


// Did not wrap:  void vtkSimpleCellTessellator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSimpleCellTessellator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSimpleCellTessellator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSimpleCellTessellator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSimpleCellTessellator();


};

} // end vtkFiltering
