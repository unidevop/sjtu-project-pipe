#pragma once

// managed includes
#include "vtkCompositeDataIteratorDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataObject;
ref class vtkHierarchicalDataSet;

public ref class vtkHierarchicalDataIterator : public vtkCompositeDataIterator
{

public:
// Did not wrap:  static vtkHierarchicalDataIterator *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkHierarchicalDataIterator *NewInstance ();
  vtkHierarchicalDataIterator^ NewInstance();


  // vtkHierarchicalDataIterator *SafeDownCast (vtkObject* o);
  static vtkHierarchicalDataIterator^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void GoToFirstItem ();
/// <summary>
/// <para>Move the iterator to the beginning of the collection.</para>
/// </summary>
  void GoToFirstItem();


  // virtual void GoToNextItem ();
/// <summary>
/// <para>Move the iterator to the next item in the collection.</para>
/// </summary>
  void GoToNextItem();


  // virtual int IsDoneWithTraversal ();
/// <summary>
/// <para>Test whether the iterator is currently pointing to a valid item. Returns 1 for yes, 0 for no.</para>
/// </summary>
  int IsDoneWithTraversal();


  // virtual vtkDataObject *GetCurrentDataObject ();
/// <summary>
/// <para>Get the current item. Valid only when IsDoneWithTraversal() returns 1.</para>
/// </summary>
  vtkDataObject^ GetCurrentDataObject();


  // void SetDataSet (vtkHierarchicalDataSet *dataset);
/// <summary>
/// <para>Set the data object to iterator over.</para>
/// </summary>
  void SetDataSet(vtkHierarchicalDataSet^ dataset);


  // vtkHierarchicalDataSet *GetDataSet ();
/// <summary>
/// <para>Set the data object to iterator over.</para>
/// </summary>
  vtkHierarchicalDataSet^ GetDataSet();


// Did not wrap:  vtkHierarchicalDataIterator ();


// Did not wrap:  virtual ~vtkHierarchicalDataIterator ();


// Did not wrap:  void GoToNextNonEmptyLevel ();


// Did not wrap:  vtkHierarchicalDataIterator (const vtkHierarchicalDataIterator &);


// Did not wrap:  void vtkHierarchicalDataIterator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkHierarchicalDataIterator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkHierarchicalDataIterator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkHierarchicalDataIterator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkHierarchicalDataIterator();


};

} // end vtkFiltering
