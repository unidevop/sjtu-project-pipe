#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkMapper;

public ref class vtkMapperCollection : public vtkCollection
{

public:
// Did not wrap:  static vtkMapperCollection *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMapperCollection *NewInstance ();
  vtkMapperCollection^ NewInstance();


  // vtkMapperCollection *SafeDownCast (vtkObject* o);
  static vtkMapperCollection^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void AddItem (vtkMapper *a);this vtkCollection AddItem static_cast vtkObject a 
/// <summary>
/// <para>Add an mapper to the list.</para>
/// </summary>
  void AddItem(vtkMapper^ a);


  // vtkMapper *GetNextItem ();return static_cast vtkMapper this GetNextItemAsObject 
/// <summary>
/// <para>Get the next mapper in the list.</para>
/// </summary>
  vtkMapper^ GetNextItem();


  // vtkMapper *GetLastItem ();
/// <summary>
/// <para>Get the last mapper in the list.</para>
/// </summary>
  vtkMapper^ GetLastItem();


// Did not wrap:  vtkMapperCollection ();


// Did not wrap:  ~vtkMapperCollection ();


// Did not wrap:  void AddItem (vtkObject *o);this vtkCollection AddItem o 


// Did not wrap:  vtkMapperCollection (const vtkMapperCollection &);


// Did not wrap:  void vtkMapperCollection 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMapperCollection(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMapperCollection(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMapperCollection();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMapperCollection();


};

} // end vtkRendering
