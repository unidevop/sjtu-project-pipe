#pragma once

// managed includes
#include "vtkCollectionDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataArray;
ref class vtkObject;

public ref class vtkDataArrayCollection : public vtkCollection
{

public:
// Did not wrap:  static vtkDataArrayCollection *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDataArrayCollection *NewInstance ();
  vtkDataArrayCollection^ NewInstance();


  // vtkDataArrayCollection *SafeDownCast (vtkObject* o);
  static vtkDataArrayCollection^ SafeDownCast(vtkObject^ o);


  // void AddItem (vtkDataArray *ds);this vtkCollection AddItem vtkObject ds 
/// <summary>
/// <para>Add a dataarray to the list.</para>
/// </summary>
  void AddItem(vtkDataArray^ ds);


  // vtkDataArray *GetNextItem ();return static_cast vtkDataArray this GetNextItemAsObject 
/// <summary>
/// <para>Get the next dataarray in the list.</para>
/// </summary>
  vtkDataArray^ GetNextItem();


  // vtkDataArray *GetItem (int i);return static_cast vtkDataArray this GetItemAsObject i 
/// <summary>
/// <para>Get the ith dataarray in the list.</para>
/// </summary>
  vtkDataArray^ GetItem(int i);


// Did not wrap:  vtkDataArrayCollection ();


// Did not wrap:  ~vtkDataArrayCollection ();


// Did not wrap:  void AddItem (vtkObject *o);this vtkCollection AddItem o 


// Did not wrap:  vtkDataArrayCollection (const vtkDataArrayCollection &);


// Did not wrap:  void vtkDataArrayCollection 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDataArrayCollection(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDataArrayCollection(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDataArrayCollection();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDataArrayCollection();


};

} // end vtkCommon
