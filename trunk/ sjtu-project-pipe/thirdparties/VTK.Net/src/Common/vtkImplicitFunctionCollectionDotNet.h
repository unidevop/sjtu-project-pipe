#pragma once

// managed includes
#include "vtkCollectionDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkImplicitFunction;
ref class vtkObject;

public ref class vtkImplicitFunctionCollection : public vtkCollection
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImplicitFunctionCollection *NewInstance ();
  vtkImplicitFunctionCollection^ NewInstance();


  // vtkImplicitFunctionCollection *SafeDownCast (vtkObject* o);
  static vtkImplicitFunctionCollection^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkImplicitFunctionCollection *New ();


  // void AddItem (vtkImplicitFunction *);
/// <summary>
/// <para>Add an implicit function to the list.</para>
/// </summary>
  void AddItem(vtkImplicitFunction^ arg0);


  // vtkImplicitFunction *GetNextItem ();
/// <summary>
/// <para>Get the next implicit function in the list.</para>
/// </summary>
  vtkImplicitFunction^ GetNextItem();


// Did not wrap:  vtkImplicitFunctionCollection ();


// Did not wrap:  ~vtkImplicitFunctionCollection ();


// Did not wrap:  void AddItem (vtkObject *o);this vtkCollection AddItem o 


// Did not wrap:  vtkImplicitFunctionCollection (const vtkImplicitFunctionCollection &);


// Did not wrap:  void vtkImplicitFunctionCollection 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImplicitFunctionCollection(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImplicitFunctionCollection(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImplicitFunctionCollection();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImplicitFunctionCollection();


};

} // end vtkCommon