#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkActor2D;
ref class vtkViewport;

public ref class vtkActor2DCollection : public vtkPropCollection
{

public:
// Did not wrap:  static vtkActor2DCollection *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkActor2DCollection *NewInstance ();
  vtkActor2DCollection^ NewInstance();


  // vtkActor2DCollection *SafeDownCast (vtkObject* o);
  static vtkActor2DCollection^ SafeDownCast(vtkObject^ o);


  // void Sort ();
/// <summary>
/// <para>Sorts the vtkActor2DCollection by layer number.  Smaller layer numbers are first.  Layer numbers can be any integer value.</para>
/// </summary>
  void Sort();


  // void AddItem (vtkActor2D *a);
/// <summary>
/// <para>Add an actor to the list.  The new actor is inserted in the list according to it's layer number.</para>
/// </summary>
  void AddItem(vtkActor2D^ a);


  // int IsItemPresent (vtkActor2D *a);
/// <summary>
/// <para>Standard Collection methods</para>
/// </summary>
  int IsItemPresent(vtkActor2D^ a);


  // vtkActor2D *GetNextActor2D ();
/// <summary>
/// <para>Standard Collection methods</para>
/// </summary>
  vtkActor2D^ GetNextActor2D();


  // vtkActor2D *GetLastActor2D ();
/// <summary>
/// <para>Standard Collection methods</para>
/// </summary>
  vtkActor2D^ GetLastActor2D();


  // vtkActor2D *GetNextItem ();
/// <summary>
/// <para>Access routines that are provided for compatibility with previous version of VTK.  Please use the GetNextActor2D(), GetLastActor2D() variants where possible.</para>
/// </summary>
  vtkActor2D^ GetNextItem();


  // vtkActor2D *GetLastItem ();
/// <summary>
/// <para>Access routines that are provided for compatibility with previous version of VTK.  Please use the GetNextActor2D(), GetLastActor2D() variants where possible.</para>
/// </summary>
  vtkActor2D^ GetLastItem();


  // void RenderOverlay (vtkViewport *viewport);
/// <summary>
/// <para>Sort and then render the collection of 2D actors.  </para>
/// </summary>
  void RenderOverlay(vtkViewport^ viewport);


// Did not wrap:  vtkActor2DCollection ();


// Did not wrap:  ~vtkActor2DCollection ();


// Did not wrap:  virtual void DeleteElement (vtkCollectionElement *);


// Did not wrap:  void AddItem (vtkObject *o);this vtkCollection AddItem o 


// Did not wrap:  void AddItem (vtkProp *o);this vtkPropCollection AddItem o 


// Did not wrap:  int IsItemPresent (vtkObject *o);return this vtkCollection IsItemPresent o 


// Did not wrap:  vtkActor2DCollection (const vtkActor2DCollection &);


// Did not wrap:  void vtkActor2DCollection 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkActor2DCollection(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkActor2DCollection(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkActor2DCollection();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkActor2DCollection();


};

} // end vtkFiltering
