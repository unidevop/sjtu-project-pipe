#pragma once

// managed includes
#include "vtkCollectionDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkAssemblyPath;
ref class vtkObject;

public ref class vtkAssemblyPaths : public vtkCollection
{

public:
// Did not wrap:  static vtkAssemblyPaths *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkAssemblyPaths *NewInstance ();
  vtkAssemblyPaths^ NewInstance();


  // vtkAssemblyPaths *SafeDownCast (vtkObject* o);
  static vtkAssemblyPaths^ SafeDownCast(vtkObject^ o);


  // void AddItem (vtkAssemblyPath *p);
/// <summary>
/// <para>Add a path to the list.</para>
/// </summary>
  void AddItem(vtkAssemblyPath^ p);


  // void RemoveItem (vtkAssemblyPath *p);
/// <summary>
/// <para>Remove a path from the list.</para>
/// </summary>
  void RemoveItem(vtkAssemblyPath^ p);


  // int IsItemPresent (vtkAssemblyPath *p);
/// <summary>
/// <para>Determine whether a particular path is present. Returns its position in the list.</para>
/// </summary>
  int IsItemPresent(vtkAssemblyPath^ p);


  // vtkAssemblyPath *GetNextItem ();
/// <summary>
/// <para>Get the next path in the list.</para>
/// </summary>
  vtkAssemblyPath^ GetNextItem();


  // virtual unsigned long GetMTime ();
/// <summary>
/// <para>Override the standard GetMTime() to check for the modified times of the paths.</para>
/// </summary>
  unsigned long GetMTime();


// Did not wrap:  vtkAssemblyPaths ();


// Did not wrap:  ~vtkAssemblyPaths ();


// Did not wrap:  void AddItem (vtkObject *o);this vtkCollection AddItem o 


// Did not wrap:  void RemoveItem (vtkObject *o);this vtkCollection RemoveItem o 


// Did not wrap:  void RemoveItem (int i);this vtkCollection RemoveItem i 


// Did not wrap:  int IsItemPresent (vtkObject *o);return this vtkCollection IsItemPresent o 


// Did not wrap:  vtkAssemblyPaths (const vtkAssemblyPaths &);


// Did not wrap:  void vtkAssemblyPaths 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkAssemblyPaths(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkAssemblyPaths(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkAssemblyPaths();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkAssemblyPaths();


};

} // end vtkCommon
