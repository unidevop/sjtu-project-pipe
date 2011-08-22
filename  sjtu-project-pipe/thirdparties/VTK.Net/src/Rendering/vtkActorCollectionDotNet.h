#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkActor;
ref class vtkProperty;

public ref class vtkActorCollection : public vtkPropCollection
{

public:
// Did not wrap:  static vtkActorCollection *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkActorCollection *NewInstance ();
  vtkActorCollection^ NewInstance();


  // vtkActorCollection *SafeDownCast (vtkObject* o);
  static vtkActorCollection^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void AddItem (vtkActor *a);
/// <summary>
/// <para>Add an actor to the list.</para>
/// </summary>
  void AddItem(vtkActor^ a);


  // vtkActor *GetNextActor ();
/// <summary>
/// <para>Get the next actor in the list.</para>
/// </summary>
  vtkActor^ GetNextActor();


  // vtkActor *GetLastActor ();
/// <summary>
/// <para>Get the last actor in the list.</para>
/// </summary>
  vtkActor^ GetLastActor();


  // vtkActor *GetNextItem ();
/// <summary>
/// <para>Access routines that are provided for compatibility with previous version of VTK.  Please use the GetNextActor(), GetLastActor() variants where possible.</para>
/// </summary>
  vtkActor^ GetNextItem();


  // vtkActor *GetLastItem ();
/// <summary>
/// <para>Access routines that are provided for compatibility with previous version of VTK.  Please use the GetNextActor(), GetLastActor() variants where possible.</para>
/// </summary>
  vtkActor^ GetLastItem();


  // void ApplyProperties (vtkProperty *p);
/// <summary>
/// <para>Apply properties to all actors in this collection.</para>
/// </summary>
  void ApplyProperties(vtkProperty^ p);


// Did not wrap:  vtkActorCollection ();


// Did not wrap:  ~vtkActorCollection ();


// Did not wrap:  void AddItem (vtkObject *o);this vtkCollection AddItem o 


// Did not wrap:  void AddItem (vtkProp *o);this vtkPropCollection AddItem o 


// Did not wrap:  vtkActorCollection (const vtkActorCollection &);


// Did not wrap:  void vtkActorCollection 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkActorCollection(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkActorCollection(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkActorCollection();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkActorCollection();


};

} // end vtkRendering
