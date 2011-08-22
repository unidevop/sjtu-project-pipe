#pragma once

// managed includes
#include "vtkActorDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkMapper;
ref class vtkMapperCollection;
ref class vtkRenderer;

public ref class vtkLODActor : public vtkActor
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkLODActor *NewInstance ();
  vtkLODActor^ NewInstance();


  // vtkLODActor *SafeDownCast (vtkObject* o);
  static vtkLODActor^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkLODActor *New ();


  // virtual void Render (vtkRenderer *, vtkMapper *);
/// <summary>
/// <para>This causes the actor to be rendered. It, in turn, will render the actor's property and then mapper.  </para>
/// </summary>
  void Render(vtkRenderer^ arg0, vtkMapper^ arg1);


  // int RenderOpaqueGeometry (vtkViewport *viewport);
/// <summary>
/// <para>This method is used internally by the rendering process. We overide  the superclass method to properly set the estimated render time.</para>
/// </summary>
  int RenderOpaqueGeometry(vtkViewport^ viewport);


  // void ReleaseGraphicsResources (vtkWindow *);
/// <summary>
/// <para>Release any graphics resources that are being consumed by this actor. The parameter window could be used to determine which graphic resources to release.</para>
/// </summary>
  void ReleaseGraphicsResources(vtkWindow^ arg0);


  // void AddLODMapper (vtkMapper *mapper);
/// <summary>
/// <para>Add another level of detail.  They do not have to be in any order of complexity.</para>
/// </summary>
  void AddLODMapper(vtkMapper^ mapper);


  // int GetNumberOfCloudPoints ();
/// <summary>
/// <para>Set/Get the number of random points for the point cloud.</para>
/// </summary>
  int GetNumberOfCloudPoints();


  // void SetNumberOfCloudPoints (int );
/// <summary>
/// <para>Set/Get the number of random points for the point cloud.</para>
/// </summary>
  void SetNumberOfCloudPoints(int arg0);


  // vtkMapperCollection *GetLODMappers ();
/// <summary>
/// <para>All the mappers for different LODs are stored here. The order is not important.</para>
/// </summary>
  vtkMapperCollection^ GetLODMappers();


  // void Modified ();
/// <summary>
/// <para>When this objects gets modified, this method also modifies the object.</para>
/// </summary>
  void Modified();


  // void ShallowCopy (vtkProp *prop);
/// <summary>
/// <para>Shallow copy of an LOD actor. Overloads the virtual vtkProp method.</para>
/// </summary>
  void ShallowCopy(vtkProp^ prop);


// Did not wrap:  vtkLODActor ();


// Did not wrap:  ~vtkLODActor ();


// Did not wrap:  virtual void CreateOwnLODs ();


// Did not wrap:  virtual void UpdateOwnLODs ();


// Did not wrap:  virtual void DeleteOwnLODs ();


// Did not wrap:  vtkLODActor (const vtkLODActor &);


// Did not wrap:  void vtkLODActor 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkLODActor(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkLODActor(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkLODActor();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkLODActor();


};

} // end vtkRendering
