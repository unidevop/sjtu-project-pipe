#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkRenderWindow;

public ref class vtkRenderWindowCollection : public vtkCollection
{

public:
// Did not wrap:  static vtkRenderWindowCollection *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRenderWindowCollection *NewInstance ();
  vtkRenderWindowCollection^ NewInstance();


  // vtkRenderWindowCollection *SafeDownCast (vtkObject* o);
  static vtkRenderWindowCollection^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void AddItem (vtkRenderWindow *a);this vtkCollection AddItem vtkObject a 
/// <summary>
/// <para>Add a RenderWindow to the list.</para>
/// </summary>
  void AddItem(vtkRenderWindow^ a);


  // vtkRenderWindow *GetNextItem ();return static_cast vtkRenderWindow this GetNextItemAsObject 
/// <summary>
/// <para>Get the next RenderWindow in the list. Return NULL when at the end of the  list.</para>
/// </summary>
  vtkRenderWindow^ GetNextItem();


// Did not wrap:  vtkRenderWindowCollection ();


// Did not wrap:  ~vtkRenderWindowCollection ();


// Did not wrap:  void AddItem (vtkObject *o);this vtkCollection AddItem o 


// Did not wrap:  vtkRenderWindowCollection (const vtkRenderWindowCollection &);


// Did not wrap:  void vtkRenderWindowCollection 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRenderWindowCollection(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRenderWindowCollection(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRenderWindowCollection();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRenderWindowCollection();


};

} // end vtkRendering
