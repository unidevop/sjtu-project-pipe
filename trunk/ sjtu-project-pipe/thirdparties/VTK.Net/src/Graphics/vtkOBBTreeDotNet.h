#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkOBBTree : public vtkCellLocator
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOBBTree *NewInstance ();
  vtkOBBTree^ NewInstance();


  // vtkOBBTree *SafeDownCast (vtkObject* o);
  static vtkOBBTree^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkOBBTree *New ();


  // void ComputeOBB (vtkPoints *pts, double corner[3], double max[3], double mid[3], double min[3], double size[3]);
/// <summary>
/// <para>Compute an OBB from the list of points given. Return the corner point and the three axes defining the orientation of the OBB. Also return a sorted list of relative &quot;sizes&quot; of axes for comparison purposes.</para>
/// </summary>
  void ComputeOBB(vtkPoints^ pts, array<double>^ corner, array<double>^ max, array<double>^ mid, array<double>^ min, array<double>^ size);


  // void ComputeOBB (vtkDataSet *input, double corner[3], double max[3], double mid[3], double min[3], double size[3]);
/// <summary>
/// <para>Compute an OBB for the input dataset using the cells in the data. Return the corner point and the three axes defining the orientation of the OBB. Also return a sorted list of relative &quot;sizes&quot; of axes for comparison purposes.</para>
/// </summary>
  void ComputeOBB(vtkDataSet^ input, array<double>^ corner, array<double>^ max, array<double>^ mid, array<double>^ min, array<double>^ size);


  // int InsideOrOutside (const double point[3]);
/// <summary>
/// <para>Determine whether a point is inside or outside the data used to build this OBB tree.  The data must be a closed surface vtkPolyData data set. The return value is +1 if outside, -1 if inside, and 0 if undecided.</para>
/// </summary>
  int InsideOrOutside(array<double>^ point);


  // int IntersectWithLine (const double a0[3], const double a1[3], vtkPoints *points, vtkIdList *cellIds);
/// <summary>
/// <para>Take the passed line segment and intersect it with the data set. This method assumes that the data set is a vtkPolyData that describes a closed surface, and the intersection points that are returned in 'points' alternate between entrance points and exit points. The return value of the function is 0 if no intersections were found, -1 if point 'a0' lies inside the closed surface, or +1 if point 'a0' lies outside the closed surface. Either 'points' or 'cellIds' can be set to NULL if you don't want to receive that information.</para>
/// </summary>
  int IntersectWithLine(array<double>^ a0, array<double>^ a1, vtkPoints^ points, vtkIdList^ cellIds);


  // int IntersectWithLine (double a0[3], double a1[3], double tol, double &t, double x[3], double pcoords[3], int &subId);
/// <summary>
/// <para>Return the first intersection of the specified line segment with the OBB tree, as well as information about the cell which the line segment intersected.</para>
/// </summary>
  int IntersectWithLine(array<double>^ a0, array<double>^ a1, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId);


  // int IntersectWithLine (double a0[3], double a1[3], double tol, double &t, double x[3], double pcoords[3], int &subId, vtkIdType &cellId);
  int IntersectWithLine(array<double>^ a0, array<double>^ a1, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId, int% cellId);


  // int IntersectWithLine (double a0[3], double a1[3], double tol, double &t, double x[3], double pcoords[3], int &subId, vtkIdType &cellId, vtkGenericCell *cell);
  int IntersectWithLine(array<double>^ a0, array<double>^ a1, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId, int% cellId, vtkGenericCell^ cell);


  // void FreeSearchStructure ();
/// <summary>
/// <para>Satisfy locator's abstract interface, see vtkLocator.</para>
/// </summary>
  void FreeSearchStructure();


  // void BuildLocator ();
/// <summary>
/// <para>Satisfy locator's abstract interface, see vtkLocator.</para>
/// </summary>
  void BuildLocator();


  // void GenerateRepresentation (int level, vtkPolyData *pd);
/// <summary>
/// <para>Create polygonal representation for OBB tree at specified level. If level &lt; 0, then the leaf OBB nodes will be gathered. The aspect ratio (ar) and line diameter (d) are used to control the building of the representation. If a OBB node edge ratio's are greater than ar, then the dimension of the OBB is collapsed (OBB-&gt;plane-&gt;line). A &quot;line&quot; OBB will be represented either as two crossed polygons, or as a line, depending on the relative diameter of the OBB compared to the diameter (d).</para>
/// </summary>
  void GenerateRepresentation(int level, vtkPolyData^ pd);


// Did not wrap:  vtkOBBTree (const vtkOBBTree &);


// Did not wrap:  void vtkOBBTree 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOBBTree(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOBBTree(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOBBTree();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOBBTree();


};

} // end vtkGraphics
