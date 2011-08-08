#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkStructuredPoints;

public ref class vtkStructuredPointsCollection : public vtkCollection
{

public:
// Did not wrap:  static vtkStructuredPointsCollection *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkStructuredPointsCollection *NewInstance ();
  vtkStructuredPointsCollection^ NewInstance();


  // vtkStructuredPointsCollection *SafeDownCast (vtkObject* o);
  static vtkStructuredPointsCollection^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void AddItem (vtkStructuredPoints *ds);this vtkCollection AddItem vtkObject ds 
/// <summary>
/// <para>Add a pointer to a vtkStructuredPoints to the list.</para>
/// </summary>
  void AddItem(vtkStructuredPoints^ ds);


  // vtkStructuredPoints *GetNextItem ();return static_cast vtkStructuredPoints this GetNextItemAsObject 
/// <summary>
/// <para>Get the next item in the collection. NULL is returned if the collection is exhausted.</para>
/// </summary>
  vtkStructuredPoints^ GetNextItem();


// Did not wrap:  vtkStructuredPointsCollection ();


// Did not wrap:  ~vtkStructuredPointsCollection ();


// Did not wrap:  void AddItem (vtkObject *o);this vtkCollection AddItem o 


// Did not wrap:  vtkStructuredPointsCollection (const vtkStructuredPointsCollection &);


// Did not wrap:  void vtkStructuredPointsCollection 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkStructuredPointsCollection(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkStructuredPointsCollection(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkStructuredPointsCollection();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkStructuredPointsCollection();


};

} // end vtkFiltering
