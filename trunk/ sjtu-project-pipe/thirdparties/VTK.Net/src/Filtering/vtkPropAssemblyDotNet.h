#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkViewport;

public ref class vtkPropAssembly : public vtkProp
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPropAssembly *NewInstance ();
  vtkPropAssembly^ NewInstance();


  // vtkPropAssembly *SafeDownCast (vtkObject* o);
  static vtkPropAssembly^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkPropAssembly *New ();


  // void AddPart (vtkProp *);
/// <summary>
/// <para>Add a part to the list of parts.</para>
/// </summary>
  void AddPart(vtkProp^ arg0);


  // void RemovePart (vtkProp *);
/// <summary>
/// <para>Remove a part from the list of parts,</para>
/// </summary>
  void RemovePart(vtkProp^ arg0);


  // vtkPropCollection *GetParts ();
/// <summary>
/// <para>Return the list of parts.</para>
/// </summary>
  vtkPropCollection^ GetParts();


  // int RenderOpaqueGeometry (vtkViewport *ren);
/// <summary>
/// <para>Render this assembly and all its parts.  The rendering process is recursive. The parts of each assembly are rendered only if the visibility for the prop is turned on.</para>
/// </summary>
  int RenderOpaqueGeometry(vtkViewport^ ren);


  // int RenderTranslucentGeometry (vtkViewport *ren);
/// <summary>
/// <para>Render this assembly and all its parts.  The rendering process is recursive. The parts of each assembly are rendered only if the visibility for the prop is turned on.</para>
/// </summary>
  int RenderTranslucentGeometry(vtkViewport^ ren);


  // int RenderOverlay (vtkViewport *);
/// <summary>
/// <para>Render this assembly and all its parts.  The rendering process is recursive. The parts of each assembly are rendered only if the visibility for the prop is turned on.</para>
/// </summary>
  int RenderOverlay(vtkViewport^ arg0);


  // void ReleaseGraphicsResources (vtkWindow *);
/// <summary>
/// <para>Release any graphics resources that are being consumed by this actor. The parameter window could be used to determine which graphic resources to release.</para>
/// </summary>
  void ReleaseGraphicsResources(vtkWindow^ arg0);


  // double *GetBounds ();
/// <summary>
/// <para>Get the bounds for this prop assembly as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax). May return NULL in some cases (meaning the bounds is undefined).</para>
/// </summary>
  array<double>^ GetBounds();


  // void ShallowCopy (vtkProp *Prop);
/// <summary>
/// <para>Shallow copy of this vtkPropAssembly.</para>
/// </summary>
  void ShallowCopy(vtkProp^ Prop);


  // unsigned long GetMTime ();
/// <summary>
/// <para>Override default GetMTime method to also consider all of the prop assembly's parts.</para>
/// </summary>
  unsigned long GetMTime();


  // void InitPathTraversal ();
/// <summary>
/// <para>Methods to traverse the paths (i.e., leaf nodes) of a prop assembly. These methods should be contrasted to those that traverse the list of parts using GetParts().  GetParts() returns a list of children of this assembly, not necessarily the leaf nodes of the assembly. To use the methods below - first invoke InitPathTraversal() followed by repeated calls to GetNextPath().  GetNextPath() returns a NULL pointer when the list is exhausted. (See the superclass vtkProp for more information about paths.)</para>
/// </summary>
  void InitPathTraversal();


  // vtkAssemblyPath *GetNextPath ();
/// <summary>
/// <para>Methods to traverse the paths (i.e., leaf nodes) of a prop assembly. These methods should be contrasted to those that traverse the list of parts using GetParts().  GetParts() returns a list of children of this assembly, not necessarily the leaf nodes of the assembly. To use the methods below - first invoke InitPathTraversal() followed by repeated calls to GetNextPath().  GetNextPath() returns a NULL pointer when the list is exhausted. (See the superclass vtkProp for more information about paths.)</para>
/// </summary>
  vtkAssemblyPath^ GetNextPath();


  // int GetNumberOfPaths ();
/// <summary>
/// <para>Methods to traverse the paths (i.e., leaf nodes) of a prop assembly. These methods should be contrasted to those that traverse the list of parts using GetParts().  GetParts() returns a list of children of this assembly, not necessarily the leaf nodes of the assembly. To use the methods below - first invoke InitPathTraversal() followed by repeated calls to GetNextPath().  GetNextPath() returns a NULL pointer when the list is exhausted. (See the superclass vtkProp for more information about paths.)</para>
/// </summary>
  int GetNumberOfPaths();


// Did not wrap:  vtkPropAssembly ();


// Did not wrap:  ~vtkPropAssembly ();


// Did not wrap:  void UpdatePaths ();


// Did not wrap:  vtkPropAssembly (const vtkPropAssembly &);


// Did not wrap:  void vtkPropAssembly 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPropAssembly(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPropAssembly(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPropAssembly();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPropAssembly();


};

} // end vtkFiltering
