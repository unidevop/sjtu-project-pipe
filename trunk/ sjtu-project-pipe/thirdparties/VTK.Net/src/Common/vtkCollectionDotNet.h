#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkCollectionIterator;
ref class vtkObjectBase;

public ref class vtkCollection : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCollection *NewInstance ();
  vtkCollection^ NewInstance();


  // vtkCollection *SafeDownCast (vtkObject* o);
  static vtkCollection^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkCollection *New ();


  // void AddItem (vtkObject *);
/// <summary>
/// <para>Add an object to the list. Does not prevent duplicate entries.</para>
/// </summary>
  void AddItem(vtkObject^ arg0);


  // void ReplaceItem (int i, vtkObject *);
/// <summary>
/// <para>Replace the i'th item in the collection with a</para>
/// </summary>
  void ReplaceItem(int i, vtkObject^ arg1);


  // void RemoveItem (int i);
/// <summary>
/// <para>Remove the i'th item in the list. Be careful if using this function during traversal of the list using  GetNextItemAsObject (or GetNextItem in derived class).  The list WILL be shortened if a valid index is given!  If this-&gt;Current is equal to the element being removed, have it point to then next element in the list.</para>
/// </summary>
  void RemoveItem(int i);


  // void RemoveItem (vtkObject *);
/// <summary>
/// <para>Remove an object from the list. Removes the first object found, not all occurrences. If no object found, list is unaffected.  See warning in description of RemoveItem(int).</para>
/// </summary>
  void RemoveItem(vtkObject^ arg0);


  // void RemoveAllItems ();
/// <summary>
/// <para>Remove all objects from the list.</para>
/// </summary>
  void RemoveAllItems();


  // int IsItemPresent (vtkObject *);
/// <summary>
/// <para>Search for an object and return location in list. If location == 0, object was not found.</para>
/// </summary>
  int IsItemPresent(vtkObject^ arg0);


  // int GetNumberOfItems ();
/// <summary>
/// <para>Return the number of objects in the list.</para>
/// </summary>
  int GetNumberOfItems();


  // void InitTraversal ();this Current this Top 
/// <summary>
/// <para>Initialize the traversal of the collection. This means the data pointer is set at the beginning of the list.</para>
/// </summary>
  void InitTraversal();


  // vtkObject *GetNextItemAsObject ();
/// <summary>
/// <para>Get the next item in the collection. NULL is returned if the collection is exhausted.</para>
/// </summary>
  vtkObject^ GetNextItemAsObject();


  // vtkObject *GetItemAsObject (int i);
/// <summary>
/// <para>Get the i'th item in the collection. NULL is returned if i is out of range</para>
/// </summary>
  vtkObject^ GetItemAsObject(int i);


  // vtkCollectionIterator *NewIterator ();
/// <summary>
/// <para>Get an iterator to traverse the objects in this collection.</para>
/// </summary>
  vtkCollectionIterator^ NewIterator();


  // virtual void Register (vtkObjectBase *o);
/// <summary>
/// <para>Participate in garbage collection.</para>
/// </summary>
  void Register(vtkObjectBase^ o);


  // virtual void UnRegister (vtkObjectBase *o);
/// <summary>
/// <para>Participate in garbage collection.</para>
/// </summary>
  void UnRegister(vtkObjectBase^ o);


// Did not wrap:  vtkCollection ();


// Did not wrap:  ~vtkCollection ();


// Did not wrap:  virtual void DeleteElement (vtkCollectionElement *);


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *collector);


// Did not wrap:  vtkCollection (const vtkCollection &);


// Did not wrap:  void vtkCollection 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCollection(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCollection(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCollection();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCollection();


};

} // end vtkCommon
