#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkImageReader2;

public ref class vtkImageReader2Collection : public vtkCollection
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageReader2Collection *NewInstance ();
  vtkImageReader2Collection^ NewInstance();


  // vtkImageReader2Collection *SafeDownCast (vtkObject* o);
  static vtkImageReader2Collection^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkImageReader2Collection *New ();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void AddItem (vtkImageReader2 *);
/// <summary>
/// <para>Add an implicit function to the list.</para>
/// </summary>
  void AddItem(vtkImageReader2^ arg0);


  // vtkImageReader2 *GetNextItem ();
/// <summary>
/// <para>Get the next implicit function in the list.</para>
/// </summary>
  vtkImageReader2^ GetNextItem();


// Did not wrap:  vtkImageReader2Collection ();


// Did not wrap:  ~vtkImageReader2Collection ();


// Did not wrap:  void AddItem (vtkObject *o);this vtkCollection AddItem o 


// Did not wrap:  vtkImageReader2Collection (const vtkImageReader2Collection &);


// Did not wrap:  void vtkImageReader2Collection 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageReader2Collection(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageReader2Collection(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageReader2Collection();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageReader2Collection();


};

} // end vtkIO
