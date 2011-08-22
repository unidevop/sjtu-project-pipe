#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkMergeCells : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMergeCells *NewInstance ();
  vtkMergeCells^ NewInstance();


  // vtkMergeCells *SafeDownCast (vtkObject* o);
  static vtkMergeCells^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkMergeCells *New ();


  // virtual void SetUnstructuredGrid (vtkUnstructuredGrid *);
  void SetUnstructuredGrid(vtkUnstructuredGrid^ arg0);


  // vtkUnstructuredGrid *GetUnstructuredGrid ();
  vtkUnstructuredGrid^ GetUnstructuredGrid();


  // void SetTotalNumberOfCells (vtkIdType );
  void SetTotalNumberOfCells(int arg0);


  // vtkIdType GetTotalNumberOfCells ();
  int GetTotalNumberOfCells();


  // void SetTotalNumberOfPoints (vtkIdType );
  void SetTotalNumberOfPoints(int arg0);


  // vtkIdType GetTotalNumberOfPoints ();
  int GetTotalNumberOfPoints();


  // void SetGlobalIdArrayName (char *);
  void SetGlobalIdArrayName(System::String^ arg0);


  // char *GetGlobalIdArrayName ();
  System::String^ GetGlobalIdArrayName();


  // void SetPointMergeTolerance (float );
  void SetPointMergeTolerance(float arg0);


  // float GetPointMergeToleranceMinValue ();
  float GetPointMergeToleranceMinValue();


  // float GetPointMergeToleranceMaxValue ();
  float GetPointMergeToleranceMaxValue();


  // float GetPointMergeTolerance ();
  float GetPointMergeTolerance();


  // void SetGlobalCellIdArrayName (char *);
  void SetGlobalCellIdArrayName(System::String^ arg0);


  // char *GetGlobalCellIdArrayName ();
  System::String^ GetGlobalCellIdArrayName();


  // void SetMergeDuplicatePoints (int );
  void SetMergeDuplicatePoints(int arg0);


  // int GetMergeDuplicatePoints ();
  int GetMergeDuplicatePoints();


  // void MergeDuplicatePointsOn ();
  void MergeDuplicatePointsOn();


  // void MergeDuplicatePointsOff ();
  void MergeDuplicatePointsOff();


  // void SetTotalNumberOfDataSets (int );
  void SetTotalNumberOfDataSets(int arg0);


  // int GetTotalNumberOfDataSets ();
  int GetTotalNumberOfDataSets();


  // int MergeDataSet (vtkDataSet *set);
  int MergeDataSet(vtkDataSet^ set);


  // void Finish ();
  void Finish();


// Did not wrap:  vtkMergeCells ();


// Did not wrap:  ~vtkMergeCells ();


// Did not wrap:  void FreeLists ();


// Did not wrap:  void StartUGrid (vtkDataSet *set);


// Did not wrap:  vtkIdType *MapPointsToIdsUsingGlobalIds (vtkDataSet *set);


// Did not wrap:  vtkIdType *MapPointsToIdsUsingLocator (vtkDataSet *set);


// Did not wrap:  vtkIdType AddNewCellsUnstructuredGrid (vtkDataSet *set, vtkIdType *idMap);


// Did not wrap:  vtkIdType AddNewCellsDataSet (vtkDataSet *set, vtkIdType *idMap);


// Did not wrap:  vtkIdType GlobalCellIdAccessGetId (vtkIdType idx);


// Did not wrap:  int GlobalCellIdAccessStart (vtkDataSet *set);


// Did not wrap:  vtkIdType GlobalNodeIdAccessGetId (vtkIdType idx);


// Did not wrap:  int GlobalNodeIdAccessStart (vtkDataSet *set);


// Did not wrap:  vtkMergeCells (const vtkMergeCells &);


// Did not wrap:  void vtkMergeCells 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMergeCells(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMergeCells(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMergeCells();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMergeCells();


};

} // end vtkGraphics
