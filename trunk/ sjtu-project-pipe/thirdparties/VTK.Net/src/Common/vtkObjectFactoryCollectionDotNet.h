#pragma once

// managed includes
#include "vtkCollectionDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;
ref class vtkObjectFactory;

public ref class vtkObjectFactoryCollection : public vtkCollection
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkObjectFactoryCollection *NewInstance ();
  vtkObjectFactoryCollection^ NewInstance();


  // vtkObjectFactoryCollection *SafeDownCast (vtkObject* o);
  static vtkObjectFactoryCollection^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkObjectFactoryCollection *New ();


  // void AddItem (vtkObjectFactory *t);this vtkCollection AddItem vtkObject t 
/// <summary>
/// <para>Get the next ObjectFactory in the list. Return NULL when the end of the list is reached.</para>
/// </summary>
  void AddItem(vtkObjectFactory^ t);


  // vtkObjectFactory *GetNextItem ();return static_cast vtkObjectFactory this GetNextItemAsObject 
  vtkObjectFactory^ GetNextItem();


// Did not wrap:  vtkObjectFactoryCollection ();


// Did not wrap:  ~vtkObjectFactoryCollection ();


// Did not wrap:  void AddItem (vtkObject *o);this vtkCollection AddItem o 


// Did not wrap:  vtkObjectFactoryCollection (const vtkObjectFactoryCollection &);


// Did not wrap:  void vtkObjectFactoryCollection 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkObjectFactoryCollection(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkObjectFactoryCollection(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkObjectFactoryCollection();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkObjectFactoryCollection();


};

} // end vtkCommon
