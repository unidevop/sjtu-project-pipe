#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkPoints;

public ref class vtkEdgeTable : public vtkObject
{

public:
// Did not wrap:  static vtkEdgeTable *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkEdgeTable *NewInstance ();
  vtkEdgeTable^ NewInstance();


  // vtkEdgeTable *SafeDownCast (vtkObject* o);
  static vtkEdgeTable^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Initialize ();
/// <summary>
/// <para>Free memory and return to the initially instantiated state.</para>
/// </summary>
  void Initialize();


  // int InitEdgeInsertion (vtkIdType numPoints, int storeAttributes);
/// <summary>
/// <para>Initialize the edge insertion process. Provide an estimate of the number of points in a dataset (the maximum range value of p1 or p2).  The storeAttributes variable controls whether attributes are to be stored with the edge, and what type of attributes. If storeAttributes==1, then attributes of vtkIdType can be stored. If storeAttributes==2, then attributes of type void* can be stored. In either case, additional memory will be required by the data structure to store attribute data per each edge.  This method is used in conjunction with one of the three InsertEdge() methods described below (don't mix the InsertEdge() methods---make sure that the one used is consistent with the storeAttributes flag set in InitEdgeInsertion()).</para>
/// </summary>
  int InitEdgeInsertion(int numPoints, int storeAttributes);


  // vtkIdType InsertEdge (vtkIdType p1, vtkIdType p2);
/// <summary>
/// <para>Insert the edge (p1,p2) into the table. It is the user's responsibility to check if the edge has already been inserted (use IsEdge()). If the storeAttributes flag in InitEdgeInsertion() has been set, then the method returns a unique integer id (i.e., the edge id) that can be used to set and get edge attributes. Otherwise, the method will return 1. Do not mix this method with the InsertEdge() method that follows.</para>
/// </summary>
  int InsertEdge(int p1, int p2);


  // void InsertEdge (vtkIdType p1, vtkIdType p2, vtkIdType attributeId);
/// <summary>
/// <para>Insert the edge (p1,p2) into the table with the attribute id specified (make sure the attributeId &gt;= 0). Note that the attributeId is ignored if the storeAttributes variable was set to 0 in the InitEdgeInsertion() method. It is the user's responsibility to check if the edge has already been inserted (use IsEdge()). Do not mix this method with the other two InsertEdge() methods.</para>
/// </summary>
  void InsertEdge(int p1, int p2, int attributeId);


  // void InsertEdge (vtkIdType p1, vtkIdType p2, void *ptr);
/// <summary>
/// <para>Insert the edge (p1,p2) into the table with the attribute id specified (make sure the attributeId &gt;= 0). Note that the attributeId is ignored if the storeAttributes variable was set to 0 in the InitEdgeInsertion() method. It is the user's responsibility to check if the edge has already been inserted (use IsEdge()). Do not mix this method with the other two InsertEdge() methods.</para>
/// </summary>
  void InsertEdge(int p1, int p2, System::IntPtr ptr);


  // vtkIdType IsEdge (vtkIdType p1, vtkIdType p2);
/// <summary>
/// <para>Return an integer id for the edge, or an attribute id of the edge (p1,p2) if the edge has been previously defined (it depends upon which version of InsertEdge() is being used); otherwise -1. The unique integer id can be used to set and retrieve attributes to the edge.</para>
/// </summary>
  int IsEdge(int p1, int p2);


// Did not wrap:  void IsEdge (vtkIdType p1, vtkIdType p2, void &ptr);


  // int InitPointInsertion (vtkPoints *newPts, vtkIdType estSize);
/// <summary>
/// <para>Initialize the point insertion process. The newPts is an object representing point coordinates into which incremental insertion methods place their data. The points are associated with the edge.</para>
/// </summary>
  int InitPointInsertion(vtkPoints^ newPts, int estSize);


  // int InsertUniquePoint (vtkIdType p1, vtkIdType p2, double x[3], vtkIdType &ptId);
/// <summary>
/// <para>Insert a unique point on the specified edge. Invoke this method only after InitPointInsertion() has been called. Return 0 if point was  already in the list, otherwise return 1.</para>
/// </summary>
  int InsertUniquePoint(int p1, int p2, array<double>^ x, int% ptId);


  // vtkIdType GetNumberOfEdges ();
/// <summary>
/// <para>Return the number of edges that have been inserted thus far.</para>
/// </summary>
  int GetNumberOfEdges();


  // void InitTraversal ();
/// <summary>
/// <para>Intialize traversal of edges in table.</para>
/// </summary>
  void InitTraversal();


  // vtkIdType GetNextEdge (vtkIdType &p1, vtkIdType &p2);
/// <summary>
/// <para>Traverse list of edges in table. Return the edge as (p1,p2), where p1 and p2 are point id's. Method return value is &lt;0 if list is exhausted; non-zero otherwise. The value of p1 is guaranteed to be &lt;= p2.</para>
/// </summary>
  int GetNextEdge(int% p1, int% p2);


// Did not wrap:  int GetNextEdge (vtkIdType &p1, vtkIdType &p2, void &ptr);


  // void Reset ();
/// <summary>
/// <para>Reset the object and prepare for reinsertion of edges. Does not delete memory like the Initialize() method.</para>
/// </summary>
  void Reset();


// Did not wrap:  vtkEdgeTable ();


// Did not wrap:  ~vtkEdgeTable ();


// Did not wrap:  vtkIdList *Resize (vtkIdType size);


// Did not wrap:  vtkEdgeTable (const vtkEdgeTable &);


// Did not wrap:  void vtkEdgeTable 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkEdgeTable(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkEdgeTable(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkEdgeTable();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkEdgeTable();


};

} // end vtkCommon
