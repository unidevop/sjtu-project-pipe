#pragma once

// managed includes
#include "vtkDataSetDotNet.h"
#include "vtkDataSetDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkCell;
ref class vtkDataObject;
ref class vtkGenericCell;

public ref class vtkPointSet : public vtkDataSet
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPointSet *NewInstance ();
  vtkPointSet^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Initialize ();
/// <summary>
/// <para>Reset to an empty state and free any memory.</para>
/// </summary>
  void Initialize();


  // void CopyStructure (vtkDataSet *pd);
/// <summary>
/// <para>Copy the geometric structure of an input point set object.</para>
/// </summary>
  void CopyStructure(vtkDataSet^ pd);


  // vtkIdType GetNumberOfPoints ();
/// <summary>
/// <para>See vtkDataSet for additional information.</para>
/// </summary>
  int GetNumberOfPoints();


  // double *GetPoint (vtkIdType ptId);return this Points GetPoint ptId 
/// <summary>
/// <para>See vtkDataSet for additional information.</para>
/// </summary>
  array<double>^ GetPoint(int ptId);


  // void GetPoint (vtkIdType ptId, double x[3]);this Points GetPoint ptId x 
/// <summary>
/// <para>See vtkDataSet for additional information.</para>
/// </summary>
  void GetPoint(int ptId, array<double>^ x);


  // vtkIdType FindPoint (double x[3]);
/// <summary>
/// <para>See vtkDataSet for additional information.</para>
/// </summary>
  int FindPoint(array<double>^ x);


  // vtkIdType FindPoint (double x, double y, double z);return this vtkDataSet FindPoint x y z 
/// <summary>
/// <para>See vtkDataSet for additional information.</para>
/// </summary>
  int FindPoint(double x, double y, double z);


  // vtkIdType FindCell (double x[3], vtkCell *cell, vtkIdType cellId, double tol2, int &subId, double pcoords[3], double *weights);
/// <summary>
/// <para>See vtkDataSet for additional information.</para>
/// </summary>
  int FindCell(array<double>^ x, vtkCell^ cell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights);


  // vtkIdType FindCell (double x[3], vtkCell *cell, vtkGenericCell *gencell, vtkIdType cellId, double tol2, int &subId, double pcoords[3], double *weights);
/// <summary>
/// <para>See vtkDataSet for additional information.</para>
/// </summary>
  int FindCell(array<double>^ x, vtkCell^ cell, vtkGenericCell^ gencell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights);


  // unsigned long GetMTime ();
/// <summary>
/// <para>Get MTime which also considers its vtkPoints MTime.</para>
/// </summary>
  unsigned long GetMTime();


  // void ComputeBounds ();
/// <summary>
/// <para>Compute the (X, Y, Z)  bounds of the data.</para>
/// </summary>
  void ComputeBounds();


  // void Squeeze ();
/// <summary>
/// <para>Reclaim any unused memory.</para>
/// </summary>
  void Squeeze();


  // virtual void SetPoints (vtkPoints *);
/// <summary>
/// <para>Specify point array to define point coordinates.</para>
/// </summary>
  void SetPoints(vtkPoints^ arg0);


  // vtkPoints *GetPoints ();
/// <summary>
/// <para>Specify point array to define point coordinates.</para>
/// </summary>
  vtkPoints^ GetPoints();


  // unsigned long GetActualMemorySize ();
/// <summary>
/// <para>Return the actual size of the data in kilobytes. This number is valid only after the pipeline has updated. The memory size returned is guaranteed to be greater than or equal to the memory required to represent the data (e.g., extra space in arrays, etc. are not included in the return value). THIS METHOD IS THREAD SAFE.</para>
/// </summary>
  unsigned long GetActualMemorySize();


  // void ShallowCopy (vtkDataObject *src);
/// <summary>
/// <para>Shallow and Deep copy.</para>
/// </summary>
  void ShallowCopy(vtkDataObject^ src);


  // void DeepCopy (vtkDataObject *src);
/// <summary>
/// <para>Shallow and Deep copy.</para>
/// </summary>
  void DeepCopy(vtkDataObject^ src);


// Did not wrap:  vtkPointSet ();


// Did not wrap:  ~vtkPointSet ();


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *);


// Did not wrap:  vtkPointSet (const vtkPointSet &);


// Did not wrap:  void vtkPointSet 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPointSet(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPointSet(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPointSet();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPointSet();


};

} // end vtkFiltering
