#pragma once

// managed includes
#include "vtkScalarTreeDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkSimpleScalarTree : public vtkScalarTree
{

public:
// Did not wrap:  static vtkSimpleScalarTree *New ();


  // const char *GetClassName ();
/// <summary>
/// <para>Standard type related macros and PrintSelf() method.</para>
/// </summary>
  System::String^ GetClassName();


  // int IsA (const char *name);
/// <summary>
/// <para>Standard type related macros and PrintSelf() method.</para>
/// </summary>
  int IsA(System::String^ name);


  // vtkSimpleScalarTree *NewInstance ();
/// <summary>
/// <para>Standard type related macros and PrintSelf() method.</para>
/// </summary>
  vtkSimpleScalarTree^ NewInstance();


  // vtkSimpleScalarTree *SafeDownCast (vtkObject* o);
/// <summary>
/// <para>Standard type related macros and PrintSelf() method.</para>
/// </summary>
  static vtkSimpleScalarTree^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetBranchingFactor (int );
/// <summary>
/// <para>Set the branching factor for the tree. This is the number of children per tree node. Smaller values (minimum is 2) mean deeper trees and more memory overhead. Larger values mean shallower trees, less memory usage, but worse performance.</para>
/// </summary>
  void SetBranchingFactor(int arg0);


  // int GetBranchingFactorMinValue ();
/// <summary>
/// <para>Set the branching factor for the tree. This is the number of children per tree node. Smaller values (minimum is 2) mean deeper trees and more memory overhead. Larger values mean shallower trees, less memory usage, but worse performance.</para>
/// </summary>
  int GetBranchingFactorMinValue();


  // int GetBranchingFactorMaxValue ();
/// <summary>
/// <para>Set the branching factor for the tree. This is the number of children per tree node. Smaller values (minimum is 2) mean deeper trees and more memory overhead. Larger values mean shallower trees, less memory usage, but worse performance.</para>
/// </summary>
  int GetBranchingFactorMaxValue();


  // int GetBranchingFactor ();
/// <summary>
/// <para>Set the branching factor for the tree. This is the number of children per tree node. Smaller values (minimum is 2) mean deeper trees and more memory overhead. Larger values mean shallower trees, less memory usage, but worse performance.</para>
/// </summary>
  int GetBranchingFactor();


  // int GetLevel ();
/// <summary>
/// <para>Get the level of the scalar tree. This value may change each time the scalar tree is built and the branching factor changes.</para>
/// </summary>
  int GetLevel();


  // void SetMaxLevel (int );
/// <summary>
/// <para>Set the maximum allowable level for the tree. </para>
/// </summary>
  void SetMaxLevel(int arg0);


  // int GetMaxLevelMinValue ();
/// <summary>
/// <para>Set the maximum allowable level for the tree. </para>
/// </summary>
  int GetMaxLevelMinValue();


  // int GetMaxLevelMaxValue ();
/// <summary>
/// <para>Set the maximum allowable level for the tree. </para>
/// </summary>
  int GetMaxLevelMaxValue();


  // int GetMaxLevel ();
/// <summary>
/// <para>Set the maximum allowable level for the tree. </para>
/// </summary>
  int GetMaxLevel();


  // virtual void BuildTree ();
/// <summary>
/// <para>Construct the scalar tree from the dataset provided. Checks build times and modified time from input and reconstructs the tree if necessary.</para>
/// </summary>
  void BuildTree();


  // virtual void Initialize ();
/// <summary>
/// <para>Initialize locator. Frees memory and resets object as appropriate.</para>
/// </summary>
  void Initialize();


  // virtual void InitTraversal (double scalarValue);
/// <summary>
/// <para>Begin to traverse the cells based on a scalar value. Returned cells will have scalar values that span the scalar value specified.</para>
/// </summary>
  void InitTraversal(double scalarValue);


// Did not wrap:  virtual vtkCell *GetNextCell (vtkIdType &cellId, vtkIdList &ptIds, vtkDataArray *cellScalars);


// Did not wrap:  vtkSimpleScalarTree ();


// Did not wrap:  ~vtkSimpleScalarTree ();


// Did not wrap:  int FindStartLeaf (vtkIdType index, int level);


// Did not wrap:  int FindNextLeaf (vtkIdType index, int level);


// Did not wrap:  vtkSimpleScalarTree (const vtkSimpleScalarTree &);


// Did not wrap:  void vtkSimpleScalarTree 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSimpleScalarTree(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSimpleScalarTree(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSimpleScalarTree();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSimpleScalarTree();


};

} // end vtkFiltering
