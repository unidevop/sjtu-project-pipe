#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkProp3D;

public ref class vtkProp3DCollection : public vtkPropCollection
{

public:
// Did not wrap:  static vtkProp3DCollection *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkProp3DCollection *NewInstance ();
  vtkProp3DCollection^ NewInstance();


  // vtkProp3DCollection *SafeDownCast (vtkObject* o);
  static vtkProp3DCollection^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void AddItem (vtkProp3D *p);
/// <summary>
/// <para>Add an actor to the list.</para>
/// </summary>
  void AddItem(vtkProp3D^ p);


  // vtkProp3D *GetNextProp3D ();
/// <summary>
/// <para>Get the next actor in the list.</para>
/// </summary>
  vtkProp3D^ GetNextProp3D();


  // vtkProp3D *GetLastProp3D ();
/// <summary>
/// <para>Get the last actor in the list.</para>
/// </summary>
  vtkProp3D^ GetLastProp3D();


// Did not wrap:  vtkProp3DCollection ();


// Did not wrap:  ~vtkProp3DCollection ();


// Did not wrap:  void AddItem (vtkObject *o);this vtkCollection AddItem o 


// Did not wrap:  void AddItem (vtkProp *o);this vtkPropCollection AddItem o 


// Did not wrap:  vtkProp3DCollection (const vtkProp3DCollection &);


// Did not wrap:  void vtkProp3DCollection 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkProp3DCollection(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkProp3DCollection(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkProp3DCollection();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkProp3DCollection();


};

} // end vtkRendering
