#pragma once

// managed includes
#include "vtkCollectionDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkOverrideInformation;

public ref class vtkOverrideInformationCollection : public vtkCollection
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOverrideInformationCollection *NewInstance ();
  vtkOverrideInformationCollection^ NewInstance();


// Did not wrap:  static vtkOverrideInformationCollection *New ();


  // void AddItem (vtkOverrideInformation *);
/// <summary>
/// <para>Add a OverrideInformation to the list.</para>
/// </summary>
  void AddItem(vtkOverrideInformation^ arg0);


  // vtkOverrideInformation *GetNextItem ();
/// <summary>
/// <para>Get the next OverrideInformation in the list.</para>
/// </summary>
  vtkOverrideInformation^ GetNextItem();


// Did not wrap:  vtkOverrideInformationCollection ();


// Did not wrap:  ~vtkOverrideInformationCollection ();


// Did not wrap:  void AddItem (vtkObject *o);this vtkCollection AddItem o 


// Did not wrap:  vtkOverrideInformationCollection (const vtkOverrideInformationCollection &);


// Did not wrap:  void vtkOverrideInformationCollection 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOverrideInformationCollection(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOverrideInformationCollection(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOverrideInformationCollection();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOverrideInformationCollection();


};

} // end vtkCommon
