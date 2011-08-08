#pragma once

// managed includes
#include "vtkCollectionDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;
ref class vtkProp;

public ref class vtkPropCollection : public vtkCollection
{

public:
// Did not wrap:  static vtkPropCollection *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPropCollection *NewInstance ();
  vtkPropCollection^ NewInstance();


  // vtkPropCollection *SafeDownCast (vtkObject* o);
  static vtkPropCollection^ SafeDownCast(vtkObject^ o);


  // void AddItem (vtkProp *a);
/// <summary>
/// <para>Add an Prop to the list.</para>
/// </summary>
  void AddItem(vtkProp^ a);


  // vtkProp *GetNextProp ();
/// <summary>
/// <para>Get the next Prop in the list.</para>
/// </summary>
  vtkProp^ GetNextProp();


  // vtkProp *GetLastProp ();
/// <summary>
/// <para>Get the last Prop in the list.</para>
/// </summary>
  vtkProp^ GetLastProp();


  // int GetNumberOfPaths ();
/// <summary>
/// <para>Get the number of paths contained in this list. (Recall that a vtkProp can consist of multiple parts.) Used in picking and other activities to get the parts of composite entities like vtkAssembly or vtkPropAssembly.</para>
/// </summary>
  int GetNumberOfPaths();


// Did not wrap:  vtkPropCollection ();


// Did not wrap:  ~vtkPropCollection ();


// Did not wrap:  void AddItem (vtkObject *o);this vtkCollection AddItem o 


// Did not wrap:  vtkPropCollection (const vtkPropCollection &);


// Did not wrap:  void vtkPropCollection 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPropCollection(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPropCollection(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPropCollection();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPropCollection();


};

} // end vtkCommon
