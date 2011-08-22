#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkVisibilitySort : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkVisibilitySort *NewInstance ();
  vtkVisibilitySort^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void InitTraversal () = 0;
/// <summary>
/// <para>To facilitate incremental sorting algorithms, the cells are retrieved in an iteration process.  That is, call InitTraversal to start the iteration and call GetNextCells to get the cell IDs in order. However, for efficiencies sake, GetNextCells returns an ordered list of several id's in once call (but not necessarily all).  GetNextCells will return NULL once the entire sorted list is output.  The vtkIdTypeArray returned from GetNextCells is a cached array, so do not delete it.  At the same note, do not expect the array to be valid after subsequent calls to GetNextCells.</para>
/// </summary>
  void InitTraversal();


  // virtual vtkIdTypeArray *GetNextCells () = 0;
/// <summary>
/// <para>To facilitate incremental sorting algorithms, the cells are retrieved in an iteration process.  That is, call InitTraversal to start the iteration and call GetNextCells to get the cell IDs in order. However, for efficiencies sake, GetNextCells returns an ordered list of several id's in once call (but not necessarily all).  GetNextCells will return NULL once the entire sorted list is output.  The vtkIdTypeArray returned from GetNextCells is a cached array, so do not delete it.  At the same note, do not expect the array to be valid after subsequent calls to GetNextCells.</para>
/// </summary>
  vtkIdTypeArray^ GetNextCells();


  // void SetMaxCellsReturned (int );
/// <summary>
/// <para>Set/Get the maximum number of cells that GetNextCells will return in one invocation.</para>
/// </summary>
  void SetMaxCellsReturned(int arg0);


  // int GetMaxCellsReturnedMinValue ();
/// <summary>
/// <para>Set/Get the maximum number of cells that GetNextCells will return in one invocation.</para>
/// </summary>
  int GetMaxCellsReturnedMinValue();


  // int GetMaxCellsReturnedMaxValue ();
/// <summary>
/// <para>Set/Get the maximum number of cells that GetNextCells will return in one invocation.</para>
/// </summary>
  int GetMaxCellsReturnedMaxValue();


  // int GetMaxCellsReturned ();
/// <summary>
/// <para>Set/Get the maximum number of cells that GetNextCells will return in one invocation.</para>
/// </summary>
  int GetMaxCellsReturned();


  // virtual void SetModelTransform (vtkMatrix4x4 *mat);
/// <summary>
/// <para>Set/Get the matrix that transforms from object space to world space. Generally, you get this matrix from a call to GetMatrix of a vtkProp3D (vtkActor).</para>
/// </summary>
  void SetModelTransform(vtkMatrix4x4^ mat);


  // vtkMatrix4x4 *GetModelTransform ();
/// <summary>
/// <para>Set/Get the matrix that transforms from object space to world space. Generally, you get this matrix from a call to GetMatrix of a vtkProp3D (vtkActor).</para>
/// </summary>
  vtkMatrix4x4^ GetModelTransform();


  // vtkMatrix4x4 *GetInverseModelTransform ();
  vtkMatrix4x4^ GetInverseModelTransform();


// Did not wrap:  virtual void SetCamera (vtkCamera *camera);


// Did not wrap:  vtkCamera *GetCamera ();


  // virtual void SetInput (vtkDataSet *data);
/// <summary>
/// <para>Set/Get the data set containing the cells to sort.</para>
/// </summary>
  void SetInput(vtkDataSet^ data);


  // vtkDataSet *GetInput ();
/// <summary>
/// <para>Set/Get the data set containing the cells to sort.</para>
/// </summary>
  vtkDataSet^ GetInput();


  // int GetDirection ();
/// <summary>
/// <para>Set/Get the sorting direction.  Be default, the direction is set to back to front.</para>
/// </summary>
  int GetDirection();


  // void SetDirection (int );
/// <summary>
/// <para>Set/Get the sorting direction.  Be default, the direction is set to back to front.</para>
/// </summary>
  void SetDirection(int arg0);


  // void SetDirectionToBackToFront ();this SetDirection BACK_TO_FRONT 
/// <summary>
/// <para>Set/Get the sorting direction.  Be default, the direction is set to back to front.</para>
/// </summary>
  void SetDirectionToBackToFront();


  // void SetDirectionToFrontToBack ();this SetDirection FRONT_TO_BACK 
/// <summary>
/// <para>Overwritten to enable garbage collection.</para>
/// </summary>
  void SetDirectionToFrontToBack();


  // virtual void Register (vtkObjectBase *o);
/// <summary>
/// <para>Overwritten to enable garbage collection.</para>
/// </summary>
  void Register(vtkObjectBase^ o);


  // virtual void UnRegister (vtkObjectBase *o);
/// <summary>
/// <para>Overwritten to enable garbage collection.</para>
/// </summary>
  void UnRegister(vtkObjectBase^ o);


// Did not wrap:  vtkVisibilitySort ();


// Did not wrap:  virtual ~vtkVisibilitySort ();


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *collector);


// Did not wrap:  vtkVisibilitySort (const vtkVisibilitySort &);


// Did not wrap:  void vtkVisibilitySort 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkVisibilitySort(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkVisibilitySort(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkVisibilitySort();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkVisibilitySort();


};

} // end vtkGraphics
