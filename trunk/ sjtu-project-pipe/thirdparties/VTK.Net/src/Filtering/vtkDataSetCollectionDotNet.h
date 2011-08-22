#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkDataSet;

public ref class vtkDataSetCollection : public vtkCollection
{

public:
// Did not wrap:  static vtkDataSetCollection *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDataSetCollection *NewInstance ();
  vtkDataSetCollection^ NewInstance();


  // vtkDataSetCollection *SafeDownCast (vtkObject* o);
  static vtkDataSetCollection^ SafeDownCast(vtkObject^ o);


  // void AddItem (vtkDataSet *ds);this vtkCollection AddItem vtkObject ds 
/// <summary>
/// <para>Add a dataset to the list.</para>
/// </summary>
  void AddItem(vtkDataSet^ ds);


  // vtkDataSet *GetNextItem ();return static_cast vtkDataSet this GetNextItemAsObject 
/// <summary>
/// <para>Get the next dataset in the list.</para>
/// </summary>
  vtkDataSet^ GetNextItem();


  // vtkDataSet *GetNextDataSet ();return static_cast vtkDataSet this GetNextItemAsObject 
/// <summary>
/// <para>Get the next dataset in the list.</para>
/// </summary>
  vtkDataSet^ GetNextDataSet();


  // vtkDataSet *GetItem (int i);return static_cast vtkDataSet this GetItemAsObject i 
/// <summary>
/// <para>Get the ith dataset in the list.</para>
/// </summary>
  vtkDataSet^ GetItem(int i);


  // vtkDataSet *GetDataSet (int i);return static_cast vtkDataSet this GetItemAsObject i 
/// <summary>
/// <para>Get the ith dataset in the list.</para>
/// </summary>
  vtkDataSet^ GetDataSet(int i);


// Did not wrap:  vtkDataSetCollection ();


// Did not wrap:  ~vtkDataSetCollection ();


// Did not wrap:  void AddItem (vtkObject *o);this vtkCollection AddItem o 


// Did not wrap:  vtkDataSetCollection (const vtkDataSetCollection &);


// Did not wrap:  void vtkDataSetCollection 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDataSetCollection(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDataSetCollection(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDataSetCollection();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDataSetCollection();


};

} // end vtkFiltering
