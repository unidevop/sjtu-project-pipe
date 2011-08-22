#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkDataObject;

public ref class vtkDataObjectCollection : public vtkCollection
{

public:
// Did not wrap:  static vtkDataObjectCollection *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDataObjectCollection *NewInstance ();
  vtkDataObjectCollection^ NewInstance();


  // vtkDataObjectCollection *SafeDownCast (vtkObject* o);
  static vtkDataObjectCollection^ SafeDownCast(vtkObject^ o);


  // void AddItem (vtkDataObject *ds);this vtkCollection AddItem vtkObject ds 
/// <summary>
/// <para>Add a data object to the list.</para>
/// </summary>
  void AddItem(vtkDataObject^ ds);


  // vtkDataObject *GetNextItem ();return static_cast vtkDataObject this GetNextItemAsObject 
/// <summary>
/// <para>Get the next data object in the list.</para>
/// </summary>
  vtkDataObject^ GetNextItem();


  // vtkDataObject *GetItem (int i);return static_cast vtkDataObject this GetItemAsObject i 
/// <summary>
/// <para>Get the ith data object in the list.</para>
/// </summary>
  vtkDataObject^ GetItem(int i);


// Did not wrap:  vtkDataObjectCollection ();


// Did not wrap:  ~vtkDataObjectCollection ();


// Did not wrap:  void AddItem (vtkObject *o);this vtkCollection AddItem o 


// Did not wrap:  vtkDataObjectCollection (const vtkDataObjectCollection &);


// Did not wrap:  void vtkDataObjectCollection 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDataObjectCollection(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDataObjectCollection(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDataObjectCollection();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDataObjectCollection();


};

} // end vtkFiltering
