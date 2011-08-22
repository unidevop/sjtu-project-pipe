#pragma once

// managed includes
#include "vtkCollectionDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;
ref class vtkTransform;

public ref class vtkTransformCollection : public vtkCollection
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTransformCollection *NewInstance ();
  vtkTransformCollection^ NewInstance();


  // vtkTransformCollection *SafeDownCast (vtkObject* o);
  static vtkTransformCollection^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkTransformCollection *New ();


  // void AddItem (vtkTransform *);
/// <summary>
/// <para>Add a Transform to the list.</para>
/// </summary>
  void AddItem(vtkTransform^ arg0);


  // vtkTransform *GetNextItem ();
/// <summary>
/// <para>Get the next Transform in the list. Return NULL when the end of the list is reached.</para>
/// </summary>
  vtkTransform^ GetNextItem();


// Did not wrap:  vtkTransformCollection ();


// Did not wrap:  ~vtkTransformCollection ();


// Did not wrap:  void AddItem (vtkObject *o);this vtkCollection AddItem o 


// Did not wrap:  vtkTransformCollection (const vtkTransformCollection &);


// Did not wrap:  void vtkTransformCollection 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTransformCollection(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTransformCollection(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTransformCollection();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTransformCollection();


};

} // end vtkCommon
