#pragma once

// managed includes
#include "vtkCollectionDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkIdList;
ref class vtkObject;

public ref class vtkIdListCollection : public vtkCollection
{

public:
// Did not wrap:  static vtkIdListCollection *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkIdListCollection *NewInstance ();
  vtkIdListCollection^ NewInstance();


  // vtkIdListCollection *SafeDownCast (vtkObject* o);
  static vtkIdListCollection^ SafeDownCast(vtkObject^ o);


  // void AddItem (vtkIdList *ds);this vtkCollection AddItem vtkObject ds 
/// <summary>
/// <para>Add a dataset to the list.</para>
/// </summary>
  void AddItem(vtkIdList^ ds);


  // vtkIdList *GetNextItem ();return static_cast vtkIdList this GetNextItemAsObject 
/// <summary>
/// <para>Get the next dataset in the list.</para>
/// </summary>
  vtkIdList^ GetNextItem();


  // vtkIdList *GetItem (int i);return static_cast vtkIdList this GetItemAsObject i 
/// <summary>
/// <para>Get the ith dataset in the list.</para>
/// </summary>
  vtkIdList^ GetItem(int i);


// Did not wrap:  vtkIdListCollection ();


// Did not wrap:  ~vtkIdListCollection ();


// Did not wrap:  void AddItem (vtkObject *o);this vtkCollection AddItem o 


// Did not wrap:  vtkIdListCollection (const vtkIdListCollection &);


// Did not wrap:  void vtkIdListCollection 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkIdListCollection(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkIdListCollection(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkIdListCollection();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkIdListCollection();


};

} // end vtkCommon
