#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkRenderer;

public ref class vtkRendererCollection : public vtkCollection
{

public:
// Did not wrap:  static vtkRendererCollection *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRendererCollection *NewInstance ();
  vtkRendererCollection^ NewInstance();


  // vtkRendererCollection *SafeDownCast (vtkObject* o);
  static vtkRendererCollection^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void AddItem (vtkRenderer *a);this vtkCollection AddItem vtkObject a 
/// <summary>
/// <para>Add a Renderer to the list.</para>
/// </summary>
  void AddItem(vtkRenderer^ a);


  // vtkRenderer *GetNextItem ();return static_cast vtkRenderer this GetNextItemAsObject 
/// <summary>
/// <para>Get the next Renderer in the list. Return NULL when at the end of the  list.</para>
/// </summary>
  vtkRenderer^ GetNextItem();


  // void Render ();
/// <summary>
/// <para>Forward the Render() method to each renderer in the list.</para>
/// </summary>
  void Render();


  // vtkRenderer *GetFirstRenderer ();
/// <summary>
/// <para>Get the first Renderer in the list. Return NULL when at the end of the  list.</para>
/// </summary>
  vtkRenderer^ GetFirstRenderer();


// Did not wrap:  vtkRendererCollection ();


// Did not wrap:  ~vtkRendererCollection ();


// Did not wrap:  void AddItem (vtkObject *o);this vtkCollection AddItem o 


// Did not wrap:  vtkRendererCollection (const vtkRendererCollection &);


// Did not wrap:  void vtkRendererCollection 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRendererCollection(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRendererCollection(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRendererCollection();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRendererCollection();


};

} // end vtkRendering
