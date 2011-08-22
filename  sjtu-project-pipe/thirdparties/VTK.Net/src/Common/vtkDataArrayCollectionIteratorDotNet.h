#pragma once

// managed includes
#include "vtkCollectionIteratorDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkCollection;
ref class vtkDataArray;
ref class vtkDataArrayCollection;
ref class vtkObject;

public ref class vtkDataArrayCollectionIterator : public vtkCollectionIterator
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDataArrayCollectionIterator *NewInstance ();
  vtkDataArrayCollectionIterator^ NewInstance();


  // vtkDataArrayCollectionIterator *SafeDownCast (vtkObject* o);
  static vtkDataArrayCollectionIterator^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkDataArrayCollectionIterator *New ();


  // virtual void SetCollection (vtkCollection *);
/// <summary>
/// <para>Set the collection over which to iterate.</para>
/// </summary>
  void SetCollection(vtkCollection^ arg0);


  // void SetCollection (vtkDataArrayCollection *);
/// <summary>
/// <para>Set the collection over which to iterate.</para>
/// </summary>
  void SetCollection(vtkDataArrayCollection^ arg0);


  // vtkDataArray *GetDataArray ();
/// <summary>
/// <para>Get the item at the current iterator position.  Valid only when IsDoneWithTraversal() returns 1.</para>
/// </summary>
  vtkDataArray^ GetDataArray();


// Did not wrap:  vtkDataArrayCollectionIterator ();


// Did not wrap:  ~vtkDataArrayCollectionIterator ();


// Did not wrap:  vtkDataArrayCollectionIterator (const vtkDataArrayCollectionIterator &);


// Did not wrap:  void vtkDataArrayCollectionIterator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDataArrayCollectionIterator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDataArrayCollectionIterator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDataArrayCollectionIterator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDataArrayCollectionIterator();


};

} // end vtkCommon
