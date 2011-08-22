#pragma once

// managed includes
#include "vtkProp3DDotNet.h"
#include "vtkProp3DDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkProp3DCollection;

public ref class vtkAssembly : public vtkProp3D
{

public:
// Did not wrap:  static vtkAssembly *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkAssembly *NewInstance ();
  vtkAssembly^ NewInstance();


  // vtkAssembly *SafeDownCast (vtkObject* o);
  static vtkAssembly^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void AddPart (vtkProp3D *);
/// <summary>
/// <para>Add a part to the list of parts.</para>
/// </summary>
  void AddPart(vtkProp3D^ arg0);


  // void RemovePart (vtkProp3D *);
/// <summary>
/// <para>Remove a part from the list of parts,</para>
/// </summary>
  void RemovePart(vtkProp3D^ arg0);


  // vtkProp3DCollection *GetParts ();
/// <summary>
/// <para>Return the parts (direct descendants) of this assembly.</para>
/// </summary>
  vtkProp3DCollection^ GetParts();


  // void GetActors (vtkPropCollection *);
/// <summary>
/// <para>For some exporters and other other operations we must be able to collect all the actors or volumes. These methods are used in that process.</para>
/// </summary>
  void GetActors(vtkPropCollection^ arg0);


  // void GetVolumes (vtkPropCollection *);
/// <summary>
/// <para>For some exporters and other other operations we must be able to collect all the actors or volumes. These methods are used in that process.</para>
/// </summary>
  void GetVolumes(vtkPropCollection^ arg0);


  // int RenderOpaqueGeometry (vtkViewport *ren);
/// <summary>
/// <para>Render this assembly and all its parts.  The rendering process is recursive. Note that a mapper need not be defined. If not defined, then no geometry  will be drawn for this assembly. This allows you to create &quot;logical&quot; assemblies; that is, assemblies that only serve to group and transform its parts.</para>
/// </summary>
  int RenderOpaqueGeometry(vtkViewport^ ren);


  // int RenderTranslucentGeometry (vtkViewport *ren);
/// <summary>
/// <para>Render this assembly and all its parts.  The rendering process is recursive. Note that a mapper need not be defined. If not defined, then no geometry  will be drawn for this assembly. This allows you to create &quot;logical&quot; assemblies; that is, assemblies that only serve to group and transform its parts.</para>
/// </summary>
  int RenderTranslucentGeometry(vtkViewport^ ren);


  // void ReleaseGraphicsResources (vtkWindow *);
/// <summary>
/// <para>Release any graphics resources that are being consumed by this actor. The parameter window could be used to determine which graphic resources to release.</para>
/// </summary>
  void ReleaseGraphicsResources(vtkWindow^ arg0);


  // void InitPathTraversal ();
/// <summary>
/// <para>Methods to traverse the parts of an assembly. Each part (starting from the root) will appear properly transformed and with the correct properties (depending upon the ApplyProperty and ApplyTransform ivars). Note that the part appears as an instance of vtkProp. These methods should be contrasted to those that traverse the list of parts using GetParts().  GetParts() returns a list of children of this assembly, not necessarily with the correct transformation or properties. To use the methods below - first invoke InitPathTraversal() followed by repeated calls to GetNextPath().  GetNextPath() returns a NULL pointer when the list is exhausted.</para>
/// </summary>
  void InitPathTraversal();


  // vtkAssemblyPath *GetNextPath ();
/// <summary>
/// <para>Methods to traverse the parts of an assembly. Each part (starting from the root) will appear properly transformed and with the correct properties (depending upon the ApplyProperty and ApplyTransform ivars). Note that the part appears as an instance of vtkProp. These methods should be contrasted to those that traverse the list of parts using GetParts().  GetParts() returns a list of children of this assembly, not necessarily with the correct transformation or properties. To use the methods below - first invoke InitPathTraversal() followed by repeated calls to GetNextPath().  GetNextPath() returns a NULL pointer when the list is exhausted.</para>
/// </summary>
  vtkAssemblyPath^ GetNextPath();


  // int GetNumberOfPaths ();
/// <summary>
/// <para>Methods to traverse the parts of an assembly. Each part (starting from the root) will appear properly transformed and with the correct properties (depending upon the ApplyProperty and ApplyTransform ivars). Note that the part appears as an instance of vtkProp. These methods should be contrasted to those that traverse the list of parts using GetParts().  GetParts() returns a list of children of this assembly, not necessarily with the correct transformation or properties. To use the methods below - first invoke InitPathTraversal() followed by repeated calls to GetNextPath().  GetNextPath() returns a NULL pointer when the list is exhausted.</para>
/// </summary>
  int GetNumberOfPaths();


  // void GetBounds (double bounds[6]);this vtkProp3D GetBounds bounds 
/// <summary>
/// <para>Get the bounds for the assembly as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).</para>
/// </summary>
  void GetBounds(array<double>^ bounds);


  // double *GetBounds ();
/// <summary>
/// <para>Get the bounds for the assembly as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).</para>
/// </summary>
  array<double>^ GetBounds();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Override default GetMTime method to also consider all of the assembly's parts.</para>
/// </summary>
  unsigned long GetMTime();


  // void ShallowCopy (vtkProp *prop);
/// <summary>
/// <para>Shallow copy of an assembly. Overloads the virtual vtkProp method.</para>
/// </summary>
  void ShallowCopy(vtkProp^ prop);


// Did not wrap:  vtkAssembly ();


// Did not wrap:  ~vtkAssembly ();


// Did not wrap:  virtual void UpdatePaths ();


// Did not wrap:  vtkAssembly (const vtkAssembly &);


// Did not wrap:  void vtkAssembly 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkAssembly(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkAssembly(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkAssembly();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkAssembly();


};

} // end vtkRendering
