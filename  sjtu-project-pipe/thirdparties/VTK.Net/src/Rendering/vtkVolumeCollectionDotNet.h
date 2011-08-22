#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkVolume;

public ref class vtkVolumeCollection : public vtkPropCollection
{

public:
// Did not wrap:  static vtkVolumeCollection *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkVolumeCollection *NewInstance ();
  vtkVolumeCollection^ NewInstance();


  // vtkVolumeCollection *SafeDownCast (vtkObject* o);
  static vtkVolumeCollection^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void AddItem (vtkVolume *a);this vtkCollection AddItem vtkObject a 
/// <summary>
/// <para>Add a Volume to the list.</para>
/// </summary>
  void AddItem(vtkVolume^ a);


  // vtkVolume *GetNextVolume ();return static_cast vtkVolume this GetNextItemAsObject 
/// <summary>
/// <para>Get the next Volume in the list. Return NULL when at the end of the  list.</para>
/// </summary>
  vtkVolume^ GetNextVolume();


  // vtkVolume *GetNextItem ();return this GetNextVolume 
/// <summary>
/// <para>Access routine provided for compatibility with previous versions of VTK.  Please use the GetNextVolume() variant where possible.</para>
/// </summary>
  vtkVolume^ GetNextItem();


// Did not wrap:  vtkVolumeCollection ();


// Did not wrap:  ~vtkVolumeCollection ();


// Did not wrap:  void AddItem (vtkObject *o);this vtkCollection AddItem o 


// Did not wrap:  void AddItem (vtkProp *o);this vtkPropCollection AddItem o 


// Did not wrap:  vtkVolumeCollection (const vtkVolumeCollection &);


// Did not wrap:  void vtkVolumeCollection 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkVolumeCollection(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkVolumeCollection(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkVolumeCollection();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkVolumeCollection();


};

} // end vtkRendering
