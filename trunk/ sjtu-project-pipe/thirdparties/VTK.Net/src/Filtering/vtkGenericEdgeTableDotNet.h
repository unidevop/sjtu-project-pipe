#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkGenericEdgeTable : public vtkObject
{

public:
// Did not wrap:  static vtkGenericEdgeTable *New ();


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


  // vtkGenericEdgeTable *NewInstance ();
/// <summary>
/// <para>Standard VTK type and print macros.</para>
/// </summary>
  vtkGenericEdgeTable^ NewInstance();


  // vtkGenericEdgeTable *SafeDownCast (vtkObject* o);
/// <summary>
/// <para>Standard VTK type and print macros.</para>
/// </summary>
  static vtkGenericEdgeTable^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void InsertEdge (vtkIdType e1, vtkIdType e2, vtkIdType cellId, int ref, vtkIdType &ptId);
/// <summary>
/// <para>Split the edge with the indicated point id.</para>
/// </summary>
  void InsertEdge(int e1, int e2, int cellId, int ref, int% ptId);


  // void InsertEdge (vtkIdType e1, vtkIdType e2, vtkIdType cellId, int ref);
/// <summary>
/// <para>Insert an edge but do not split it.</para>
/// </summary>
  void InsertEdge(int e1, int e2, int cellId, int ref);


  // int RemoveEdge (vtkIdType e1, vtkIdType e2);
/// <summary>
/// <para>Method to remove an edge from the table. The method returns the current reference count.</para>
/// </summary>
  int RemoveEdge(int e1, int e2);


  // int CheckEdge (vtkIdType e1, vtkIdType e2, vtkIdType &ptId);
/// <summary>
/// <para>Method to determine whether an edge is in the table (0 or 1), or not (-1). It returns whether the edge was split (1) or not (0), and the point id exists.</para>
/// </summary>
  int CheckEdge(int e1, int e2, int% ptId);


  // int IncrementEdgeReferenceCount (vtkIdType e1, vtkIdType e2, vtkIdType cellId);
/// <summary>
/// <para>Method that increments the referencecount and returns it.</para>
/// </summary>
  int IncrementEdgeReferenceCount(int e1, int e2, int cellId);


  // int CheckEdgeReferenceCount (vtkIdType e1, vtkIdType e2);
/// <summary>
/// <para>Return the edge reference count.</para>
/// </summary>
  int CheckEdgeReferenceCount(int e1, int e2);


  // void Initialize (vtkIdType start);
/// <summary>
/// <para>To specify the starting point id. It will initialize LastPointId This is very sensitive the start point should be cautiously chosen</para>
/// </summary>
  void Initialize(int start);


  // int GetNumberOfComponents ();
/// <summary>
/// <para>Return the total number of components for the point-centered attributes. \post positive_result: result&gt;0</para>
/// </summary>
  int GetNumberOfComponents();


  // void SetNumberOfComponents (int count);
/// <summary>
/// <para>Set the total number of components for the point-centered attributes. \pre positive_count: count&gt;0</para>
/// </summary>
  void SetNumberOfComponents(int count);


  // int CheckPoint (vtkIdType ptId);
/// <summary>
/// <para>Check if a point is already in the point table.</para>
/// </summary>
  int CheckPoint(int ptId);


  // int CheckPoint (vtkIdType ptId, double point[3], double *scalar);
/// <summary>
/// <para>Check for the existence of a point and return its coordinate value. \pre scalar_size: sizeof(scalar)==this-&gt;GetNumberOfComponents()</para>
/// </summary>
  int CheckPoint(int ptId, array<double>^ point, array<double>^ scalar);


  // void InsertPoint (vtkIdType ptId, double point[3]);
/// <summary>
/// <para>Insert point associated with an edge.</para>
/// </summary>
  void InsertPoint(int ptId, array<double>^ point);


  // void InsertPointAndScalar (vtkIdType ptId, double pt[3], double *s);
/// <summary>
/// <para>Insert point associated with an edge. \pre: sizeof(s)==GetNumberOfComponents()</para>
/// </summary>
  void InsertPointAndScalar(int ptId, array<double>^ pt, array<double>^ s);


  // void RemovePoint (vtkIdType ptId);
/// <summary>
/// <para>Remove a point from the point table.</para>
/// </summary>
  void RemovePoint(int ptId);


  // void IncrementPointReferenceCount (vtkIdType ptId);
/// <summary>
/// <para>Increment the reference count for the indicated point.</para>
/// </summary>
  void IncrementPointReferenceCount(int ptId);


  // void DumpTable ();
/// <summary>
/// <para>For debugging purposes. It is particularly useful to dump the table and check that nothing is left after a complete iteration. LoadFactor should ideally be very low to be able to have a constant time access</para>
/// </summary>
  void DumpTable();


  // void LoadFactor ();
/// <summary>
/// <para>For debugging purposes. It is particularly useful to dump the table and check that nothing is left after a complete iteration. LoadFactor should ideally be very low to be able to have a constant time access</para>
/// </summary>
  void LoadFactor();


// Did not wrap:  vtkGenericEdgeTable ();


// Did not wrap:  ~vtkGenericEdgeTable ();


// Did not wrap:  void InsertEdge (vtkIdType e1, vtkIdType e2, vtkIdType cellId, int ref, int toSplit, vtkIdType &ptId);


// Did not wrap:  vtkIdType HashFunction (vtkIdType e1, vtkIdType e2);


// Did not wrap:  vtkIdType HashFunction (vtkIdType ptId);


// Did not wrap:  vtkGenericEdgeTable (const vtkGenericEdgeTable &);


// Did not wrap:  void vtkGenericEdgeTable 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGenericEdgeTable(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGenericEdgeTable(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGenericEdgeTable();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGenericEdgeTable();


};

} // end vtkFiltering
