#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkLight;

public ref class vtkLightCollection : public vtkCollection
{

public:
// Did not wrap:  static vtkLightCollection *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkLightCollection *NewInstance ();
  vtkLightCollection^ NewInstance();


  // vtkLightCollection *SafeDownCast (vtkObject* o);
  static vtkLightCollection^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void AddItem (vtkLight *a);
/// <summary>
/// <para>Add a light to the list.</para>
/// </summary>
  void AddItem(vtkLight^ a);


  // vtkLight *GetNextItem ();
/// <summary>
/// <para>Get the next light in the list. NULL is returned when the collection is  exhausted.</para>
/// </summary>
  vtkLight^ GetNextItem();


// Did not wrap:  vtkLightCollection ();


// Did not wrap:  ~vtkLightCollection ();


// Did not wrap:  void AddItem (vtkObject *o);this vtkCollection AddItem o 


// Did not wrap:  vtkLightCollection (const vtkLightCollection &);


// Did not wrap:  void vtkLightCollection 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkLightCollection(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkLightCollection(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkLightCollection();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkLightCollection();


};

} // end vtkRendering
