#pragma once

// managed includes
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkAssemblyPath;
ref class vtkMatrix4x4;
ref class vtkPropCollection;

public ref class vtkProp : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkProp *NewInstance ();
  vtkProp^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void GetActors (vtkPropCollection *);
/// <summary>
/// <para>For some exporters and other other operations we must be able to collect all the actors or volumes. These methods are used in that process.</para>
/// </summary>
  void GetActors(vtkPropCollection^ arg0);


  // virtual void GetActors2D (vtkPropCollection *);
/// <summary>
/// <para>For some exporters and other other operations we must be able to collect all the actors or volumes. These methods are used in that process.</para>
/// </summary>
  void GetActors2D(vtkPropCollection^ arg0);


  // virtual void GetVolumes (vtkPropCollection *);
/// <summary>
/// <para>Set/Get visibility of this vtkProp.</para>
/// </summary>
  void GetVolumes(vtkPropCollection^ arg0);


  // void SetVisibility (int );
/// <summary>
/// <para>Set/Get visibility of this vtkProp.</para>
/// </summary>
  void SetVisibility(int arg0);


  // int GetVisibility ();
/// <summary>
/// <para>Set/Get visibility of this vtkProp.</para>
/// </summary>
  int GetVisibility();


  // void VisibilityOn ();
/// <summary>
/// <para>Set/Get visibility of this vtkProp.</para>
/// </summary>
  void VisibilityOn();


  // void VisibilityOff ();
/// <summary>
/// <para>Set/Get visibility of this vtkProp.</para>
/// </summary>
  void VisibilityOff();


  // void SetPickable (int );
/// <summary>
/// <para>Set/Get the pickable instance variable.  This determines if the vtkProp can be picked (typically using the mouse). Also see dragable.</para>
/// </summary>
  void SetPickable(int arg0);


  // int GetPickable ();
/// <summary>
/// <para>Set/Get the pickable instance variable.  This determines if the vtkProp can be picked (typically using the mouse). Also see dragable.</para>
/// </summary>
  int GetPickable();


  // void PickableOn ();
/// <summary>
/// <para>Set/Get the pickable instance variable.  This determines if the vtkProp can be picked (typically using the mouse). Also see dragable.</para>
/// </summary>
  void PickableOn();


  // void PickableOff ();
/// <summary>
/// <para>Set/Get the pickable instance variable.  This determines if the vtkProp can be picked (typically using the mouse). Also see dragable.</para>
/// </summary>
  void PickableOff();


  // virtual void Pick ();
/// <summary>
/// <para>Method fires PickEvent if the prop is picked.</para>
/// </summary>
  void Pick();


  // void SetDragable (int );
/// <summary>
/// <para>Set/Get the value of the dragable instance variable. This determines if  an Prop, once picked, can be dragged (translated) through space. This is typically done through an interactive mouse interface. This does not affect methods such as SetPosition, which will continue to work.  It is just intended to prevent some vtkProp'ss from being dragged from within a user interface.</para>
/// </summary>
  void SetDragable(int arg0);


  // int GetDragable ();
/// <summary>
/// <para>Set/Get the value of the dragable instance variable. This determines if  an Prop, once picked, can be dragged (translated) through space. This is typically done through an interactive mouse interface. This does not affect methods such as SetPosition, which will continue to work.  It is just intended to prevent some vtkProp'ss from being dragged from within a user interface.</para>
/// </summary>
  int GetDragable();


  // void DragableOn ();
/// <summary>
/// <para>Set/Get the value of the dragable instance variable. This determines if  an Prop, once picked, can be dragged (translated) through space. This is typically done through an interactive mouse interface. This does not affect methods such as SetPosition, which will continue to work.  It is just intended to prevent some vtkProp'ss from being dragged from within a user interface.</para>
/// </summary>
  void DragableOn();


  // void DragableOff ();
/// <summary>
/// <para>Set/Get the value of the dragable instance variable. This determines if  an Prop, once picked, can be dragged (translated) through space. This is typically done through an interactive mouse interface. This does not affect methods such as SetPosition, which will continue to work.  It is just intended to prevent some vtkProp'ss from being dragged from within a user interface.</para>
/// </summary>
  void DragableOff();


  // virtual unsigned long GetRedrawMTime ();return this GetMTime 
/// <summary>
/// <para>Get the bounds for this Prop as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax). in world coordinates. NULL means that the bounds are not defined.</para>
/// </summary>
  unsigned long GetRedrawMTime();


  // void GetBounds (double bounds[6]);
/// <summary>
/// <para>Set / get the bounding box using various methods.</para>
/// </summary>
  void GetBounds(array<double>^ bounds);


  // virtual void ShallowCopy (vtkProp *prop);
/// <summary>
/// <para>Shallow copy of this vtkProp.</para>
/// </summary>
  void ShallowCopy(vtkProp^ prop);


  // virtual void InitPathTraversal ();
/// <summary>
/// <para>vtkProp and its subclasses can be picked by subclasses of vtkAbstractPicker (e.g., vtkPropPicker). The following methods interface with the picking classes and return &quot;pick paths&quot;. A pick path is a hierarchical, ordered list of props that form an assembly.  Most often, when a vtkProp is picked, its path consists of a single node (i.e., the prop). However, classes like vtkAssembly and vtkPropAssembly can return more than one path, each path being several layers deep. (See vtkAssemblyPath for more information.)  To use these methods - first invoke InitPathTraversal() followed by repeated calls to GetNextPath(). GetNextPath() returns a NULL pointer when the list is exhausted.</para>
/// </summary>
  void InitPathTraversal();


  // virtual vtkAssemblyPath *GetNextPath ();
/// <summary>
/// <para>vtkProp and its subclasses can be picked by subclasses of vtkAbstractPicker (e.g., vtkPropPicker). The following methods interface with the picking classes and return &quot;pick paths&quot;. A pick path is a hierarchical, ordered list of props that form an assembly.  Most often, when a vtkProp is picked, its path consists of a single node (i.e., the prop). However, classes like vtkAssembly and vtkPropAssembly can return more than one path, each path being several layers deep. (See vtkAssemblyPath for more information.)  To use these methods - first invoke InitPathTraversal() followed by repeated calls to GetNextPath(). GetNextPath() returns a NULL pointer when the list is exhausted.</para>
/// </summary>
  vtkAssemblyPath^ GetNextPath();


  // virtual int GetNumberOfPaths ();return 
/// <summary>
/// <para>These methods are used by subclasses to place a matrix (if any) in the prop prior to rendering. Generally used only for picking. See vtkProp3D for more information.</para>
/// </summary>
  int GetNumberOfPaths();


  // virtual void PokeMatrix (vtkMatrix4x4 *);
/// <summary>
/// <para>These methods are used by subclasses to place a matrix (if any) in the prop prior to rendering. Generally used only for picking. See vtkProp3D for more information.</para>
/// </summary>
  void PokeMatrix(vtkMatrix4x4^ arg0);


  // virtual vtkMatrix4x4 *GetMatrix ();return NULL 
  vtkMatrix4x4^ GetMatrix();


// Did not wrap:  vtkProp ();


// Did not wrap:  ~vtkProp ();


// Did not wrap:  vtkProp (const vtkProp &);


// Did not wrap:  void vtkProp 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkProp(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkProp(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkProp();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkProp();


};

} // end vtkCommon
