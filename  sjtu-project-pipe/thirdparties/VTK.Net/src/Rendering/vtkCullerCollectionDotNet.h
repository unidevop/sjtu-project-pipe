#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkCuller;

public ref class vtkCullerCollection : public vtkCollection
{

public:
// Did not wrap:  static vtkCullerCollection *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCullerCollection *NewInstance ();
  vtkCullerCollection^ NewInstance();


  // vtkCullerCollection *SafeDownCast (vtkObject* o);
  static vtkCullerCollection^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void AddItem (vtkCuller *a);this vtkCollection AddItem vtkObject a 
/// <summary>
/// <para>Add an Culler to the list.</para>
/// </summary>
  void AddItem(vtkCuller^ a);


  // vtkCuller *GetNextItem ();return static_cast vtkCuller this GetNextItemAsObject 
/// <summary>
/// <para>Get the next Culler in the list.</para>
/// </summary>
  vtkCuller^ GetNextItem();


  // vtkCuller *GetLastItem ();
/// <summary>
/// <para>Get the last Culler in the list.</para>
/// </summary>
  vtkCuller^ GetLastItem();


// Did not wrap:  vtkCullerCollection ();


// Did not wrap:  ~vtkCullerCollection ();


// Did not wrap:  void AddItem (vtkObject *o);this vtkCollection AddItem o 


// Did not wrap:  vtkCullerCollection (const vtkCullerCollection &);


// Did not wrap:  void vtkCullerCollection 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCullerCollection(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCullerCollection(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCullerCollection();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCullerCollection();


};

} // end vtkRendering
