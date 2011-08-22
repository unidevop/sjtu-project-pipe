#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkCollection;

public ref class vtkCollectionIterator : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCollectionIterator *NewInstance ();
  vtkCollectionIterator^ NewInstance();


  // vtkCollectionIterator *SafeDownCast (vtkObject* o);
  static vtkCollectionIterator^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkCollectionIterator *New ();


  // virtual void SetCollection (vtkCollection *);
/// <summary>
/// <para>Set/Get the collection over which to iterate.</para>
/// </summary>
  void SetCollection(vtkCollection^ arg0);


  // vtkCollection *GetCollection ();
/// <summary>
/// <para>Set/Get the collection over which to iterate.</para>
/// </summary>
  vtkCollection^ GetCollection();


  // void InitTraversal ();this GoToFirstItem 
/// <summary>
/// <para>Position the iterator at the first item in the collection.</para>
/// </summary>
  void InitTraversal();


  // void GoToFirstItem ();
/// <summary>
/// <para>Position the iterator at the first item in the collection.</para>
/// </summary>
  void GoToFirstItem();


  // void GoToNextItem ();
/// <summary>
/// <para>Move the iterator to the next item in the collection.</para>
/// </summary>
  void GoToNextItem();


  // int IsDoneWithTraversal ();
/// <summary>
/// <para>Test whether the iterator is currently positioned at a valid item. Returns 1 for yes, 0 for no.</para>
/// </summary>
  int IsDoneWithTraversal();


  // vtkObject *GetCurrentObject ();
/// <summary>
/// <para>Get the item at the current iterator position.  Valid only when IsDoneWithTraversal() returns 1.</para>
/// </summary>
  vtkObject^ GetCurrentObject();


  // vtkObject *GetObject ();
/// <summary>
/// <para>@deprecated Replaced by vtkCollectionIterator::GetCurrentObject() as of VTK 5.0.</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  vtkObject^ GetObject();


// Did not wrap:  vtkCollectionIterator ();


// Did not wrap:  ~vtkCollectionIterator ();


// Did not wrap:  vtkObject *GetObjectInternal ();


// Did not wrap:  vtkCollectionIterator (const vtkCollectionIterator &);


// Did not wrap:  void vtkCollectionIterator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCollectionIterator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCollectionIterator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCollectionIterator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCollectionIterator();


};

} // end vtkCommon
