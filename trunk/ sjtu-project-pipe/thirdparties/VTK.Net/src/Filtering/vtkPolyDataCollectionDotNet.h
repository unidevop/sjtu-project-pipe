#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkPolyData;

public ref class vtkPolyDataCollection : public vtkCollection
{

public:
// Did not wrap:  static vtkPolyDataCollection *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPolyDataCollection *NewInstance ();
  vtkPolyDataCollection^ NewInstance();


  // vtkPolyDataCollection *SafeDownCast (vtkObject* o);
  static vtkPolyDataCollection^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void AddItem (vtkPolyData *pd);this vtkCollection AddItem vtkObject pd 
/// <summary>
/// <para>Add a poly data to the list.</para>
/// </summary>
  void AddItem(vtkPolyData^ pd);


  // vtkPolyData *GetNextItem ();return static_cast vtkPolyData this GetNextItemAsObject 
/// <summary>
/// <para>Get the next poly data in the list.</para>
/// </summary>
  vtkPolyData^ GetNextItem();


// Did not wrap:  vtkPolyDataCollection ();


// Did not wrap:  ~vtkPolyDataCollection ();


// Did not wrap:  void AddItem (vtkObject *o);this vtkCollection AddItem o 


// Did not wrap:  vtkPolyDataCollection (const vtkPolyDataCollection &);


// Did not wrap:  void vtkPolyDataCollection 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPolyDataCollection(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPolyDataCollection(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPolyDataCollection();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPolyDataCollection();


};

} // end vtkFiltering
