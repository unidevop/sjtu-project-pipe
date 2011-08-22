#pragma once

// managed includes
#include "vtkCollectionDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;
ref class vtkPlane;

public ref class vtkPlaneCollection : public vtkCollection
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPlaneCollection *NewInstance ();
  vtkPlaneCollection^ NewInstance();


  // vtkPlaneCollection *SafeDownCast (vtkObject* o);
  static vtkPlaneCollection^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkPlaneCollection *New ();


  // void AddItem (vtkPlane *);
/// <summary>
/// <para>Add a plane to the list.</para>
/// </summary>
  void AddItem(vtkPlane^ arg0);


  // vtkPlane *GetNextItem ();
/// <summary>
/// <para>Get the next plane in the list.</para>
/// </summary>
  vtkPlane^ GetNextItem();


// Did not wrap:  vtkPlaneCollection ();


// Did not wrap:  ~vtkPlaneCollection ();


// Did not wrap:  void AddItem (vtkObject *o);this vtkCollection AddItem o 


// Did not wrap:  vtkPlaneCollection (const vtkPlaneCollection &);


// Did not wrap:  void vtkPlaneCollection 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPlaneCollection(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPlaneCollection(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPlaneCollection();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPlaneCollection();


};

} // end vtkCommon
