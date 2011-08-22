#pragma once

// managed includes
#include "vtkAbstractPickerDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkActor;
ref class vtkAssembly;
ref class vtkProp3D;
ref class vtkVolume;

public ref class vtkAbstractPropPicker : public vtkAbstractPicker
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkAbstractPropPicker *NewInstance ();
  vtkAbstractPropPicker^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetPath (vtkAssemblyPath *);
/// <summary>
/// <para>Return the vtkAssemblyPath that has been picked. The assembly path lists all the vtkProps that form an assembly. If no assembly is present, then the assembly path will have one node (which is the picked prop). The set method is used internally to set the path. (Note: the structure of an assembly path is a collection of vtkAssemblyNode, each node pointing to a vtkProp and (possibly) a transformation matrix.)</para>
/// </summary>
  void SetPath(vtkAssemblyPath^ arg0);


  // vtkAssemblyPath *GetPath ();
/// <summary>
/// <para>Return the vtkAssemblyPath that has been picked. The assembly path lists all the vtkProps that form an assembly. If no assembly is present, then the assembly path will have one node (which is the picked prop). The set method is used internally to set the path. (Note: the structure of an assembly path is a collection of vtkAssemblyNode, each node pointing to a vtkProp and (possibly) a transformation matrix.)</para>
/// </summary>
  vtkAssemblyPath^ GetPath();


  // virtual vtkProp *GetViewProp ();
/// <summary>
/// <para>Return the vtkProp that has been picked. If NULL, nothing was picked. If anything at all was picked, this method will return something.</para>
/// </summary>
  vtkProp^ GetViewProp();


  // virtual vtkProp3D *GetProp3D ();
/// <summary>
/// <para>Return the vtkProp that has been picked. If NULL, no vtkProp3D was picked.</para>
/// </summary>
  vtkProp3D^ GetProp3D();


  // virtual vtkActor *GetActor ();
/// <summary>
/// <para>Return the vtkActor that has been picked. If NULL, no actor was picked.</para>
/// </summary>
  vtkActor^ GetActor();


  // virtual vtkActor2D *GetActor2D ();
/// <summary>
/// <para>Return the vtkActor2D that has been picked. If NULL, no actor2D was  picked.</para>
/// </summary>
  vtkActor2D^ GetActor2D();


  // virtual vtkVolume *GetVolume ();
/// <summary>
/// <para>Return the vtkVolume that has been picked. If NULL, no volume was picked.</para>
/// </summary>
  vtkVolume^ GetVolume();


  // virtual vtkAssembly *GetAssembly ();
/// <summary>
/// <para>Return the vtkAssembly that has been picked. If NULL, no assembly  was picked. (Note: the returned assembly is the first node in the assembly path. If the path is one node long, then the assembly and the prop are the same, assuming that the first node is a vtkAssembly.)</para>
/// </summary>
  vtkAssembly^ GetAssembly();


  // virtual vtkPropAssembly *GetPropAssembly ();
/// <summary>
/// <para>Return the vtkPropAssembly that has been picked. If NULL, no prop assembly was picked. (Note: the returned prop assembly is the first node in the assembly path. If the path is one node long, then the prop assembly and the prop are the same, assuming that the first node is a vtkPropAssembly.)</para>
/// </summary>
  vtkPropAssembly^ GetPropAssembly();


  // virtual vtkProp *GetProp ();
/// <summary>
/// <para>@deprecated Replaced by vtkAbstractPicker::GetViewProp() as of VTK 5.0.</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  vtkProp^ GetProp();


// Did not wrap:  vtkAbstractPropPicker ();


// Did not wrap:  ~vtkAbstractPropPicker ();


// Did not wrap:  void Initialize ();


// Did not wrap:  vtkAbstractPropPicker (const vtkAbstractPropPicker &);


// Did not wrap:  void vtkAbstractPropPicker 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkAbstractPropPicker(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkAbstractPropPicker(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkAbstractPropPicker();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkAbstractPropPicker();


};

} // end vtkRendering
