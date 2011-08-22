#pragma once

// managed includes
#include "vtkProp3DDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkMapper;
ref class vtkProperty;
ref class vtkRenderer;
ref class vtkTexture;

public ref class vtkActor : public vtkProp3D
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkActor *NewInstance ();
  vtkActor^ NewInstance();


  // vtkActor *SafeDownCast (vtkObject* o);
  static vtkActor^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkActor *New ();


  // virtual void GetActors (vtkPropCollection *);
/// <summary>
/// <para>For some exporters and other other operations we must be able to collect all the actors or volumes. These methods are used in that process.</para>
/// </summary>
  void GetActors(vtkPropCollection^ arg0);


  // virtual int RenderOpaqueGeometry (vtkViewport *viewport);
/// <summary>
/// <para>Support the standard render methods.</para>
/// </summary>
  int RenderOpaqueGeometry(vtkViewport^ viewport);


  // virtual int RenderTranslucentGeometry (vtkViewport *viewport);
/// <summary>
/// <para>Support the standard render methods.</para>
/// </summary>
  int RenderTranslucentGeometry(vtkViewport^ viewport);


  // virtual void Render (vtkRenderer *, vtkMapper *);
/// <summary>
/// <para>This causes the actor to be rendered. It in turn will render the actor's property, texture map and then mapper. If a property hasn't been assigned, then the actor will create one automatically. Note that a side effect of this method is that the pipeline will be updated.</para>
/// </summary>
  void Render(vtkRenderer^ arg0, vtkMapper^ arg1);


  // void ShallowCopy (vtkProp *prop);
/// <summary>
/// <para>Shallow copy of an actor. Overloads the virtual vtkProp method.</para>
/// </summary>
  void ShallowCopy(vtkProp^ prop);


  // void ReleaseGraphicsResources (vtkWindow *);
/// <summary>
/// <para>Release any graphics resources that are being consumed by this actor. The parameter window could be used to determine which graphic resources to release.</para>
/// </summary>
  void ReleaseGraphicsResources(vtkWindow^ arg0);


  // void SetProperty (vtkProperty *lut);
/// <summary>
/// <para>Set/Get the property object that controls this actors surface properties.  This should be an instance of a vtkProperty object.  Every actor must have a property associated with it.  If one isn't specified, then one will be generated automatically. Multiple actors can share one property object.</para>
/// </summary>
  void SetProperty(vtkProperty^ lut);


  // vtkProperty *GetProperty ();
/// <summary>
/// <para>Set/Get the property object that controls this actors surface properties.  This should be an instance of a vtkProperty object.  Every actor must have a property associated with it.  If one isn't specified, then one will be generated automatically. Multiple actors can share one property object.</para>
/// </summary>
  vtkProperty^ GetProperty();


  // virtual vtkProperty *MakeProperty ();
/// <summary>
/// <para>Create a new property sutible for use with this type of Actor. For example, a vtkMesaActor should create a vtkMesaProperty  in this function.   The default is to just call vtkProperty::New.</para>
/// </summary>
  vtkProperty^ MakeProperty();


  // void SetBackfaceProperty (vtkProperty *lut);
/// <summary>
/// <para>Set/Get the property object that controls this actors backface surface properties.  This should be an instance of a vtkProperty object. If one isn't specified, then the front face properties will be used.  Multiple actors can share one property object.</para>
/// </summary>
  void SetBackfaceProperty(vtkProperty^ lut);


  // vtkProperty *GetBackfaceProperty ();
/// <summary>
/// <para>Set/Get the property object that controls this actors backface surface properties.  This should be an instance of a vtkProperty object. If one isn't specified, then the front face properties will be used.  Multiple actors can share one property object.</para>
/// </summary>
  vtkProperty^ GetBackfaceProperty();


  // virtual void SetTexture (vtkTexture *);
/// <summary>
/// <para>Set/Get the texture object to control rendering texture maps.  This will be a vtkTexture object. An actor does not need to have an associated texture map and multiple actors can share one texture.</para>
/// </summary>
  void SetTexture(vtkTexture^ arg0);


  // vtkTexture *GetTexture ();
/// <summary>
/// <para>Set/Get the texture object to control rendering texture maps.  This will be a vtkTexture object. An actor does not need to have an associated texture map and multiple actors can share one texture.</para>
/// </summary>
  vtkTexture^ GetTexture();


  // virtual void SetMapper (vtkMapper *);
/// <summary>
/// <para>This is the method that is used to connect an actor to the end of a visualization pipeline, i.e. the mapper. This should be a subclass of vtkMapper. Typically vtkPolyDataMapper and vtkDataSetMapper will be used.</para>
/// </summary>
  void SetMapper(vtkMapper^ arg0);


  // vtkMapper *GetMapper ();
/// <summary>
/// <para>Returns the Mapper that this actor is getting its data from.</para>
/// </summary>
  vtkMapper^ GetMapper();


  // void GetBounds (double bounds[6]);this vtkProp3D GetBounds bounds 
/// <summary>
/// <para>Get the bounds for this Actor as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax). (The method GetBounds(double bounds[6]) is available from the superclass.)</para>
/// </summary>
  void GetBounds(array<double>^ bounds);


  // double *GetBounds ();
/// <summary>
/// <para>Get the bounds for this Actor as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax). (The method GetBounds(double bounds[6]) is available from the superclass.)</para>
/// </summary>
  array<double>^ GetBounds();


  // virtual void ApplyProperties ();return 
/// <summary>
/// <para>Apply the current properties to all parts that compose this actor. This method is overloaded in vtkAssembly to apply the assemblies' properties to all its parts in a recursive manner. Typically the use of this method is to set the desired properties in the assembly, and then push the properties down to the assemblies parts with ApplyProperties().</para>
/// </summary>
  void ApplyProperties();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Get the actors mtime plus consider its properties and texture if set.</para>
/// </summary>
  unsigned long GetMTime();


  // virtual unsigned long GetRedrawMTime ();
/// <summary>
/// <para>Return the mtime of anything that would cause the rendered image to  appear differently. Usually this involves checking the mtime of the  prop plus anything else it depends on such as properties, textures etc.</para>
/// </summary>
  unsigned long GetRedrawMTime();


  // virtual void InitPartTraversal ();
/// <summary>
/// <para>The following methods are for compatibility. The methods will be deprecated in the near future. Use vtkProp::GetNextPath() (and related functionality) to get the parts in an assembly (or more correctly, the paths in the assembly).</para>
/// </summary>
  void InitPartTraversal();


  // virtual vtkActor *GetNextPart ();
/// <summary>
/// <para>The following methods are for compatibility. The methods will be deprecated in the near future. Use vtkProp::GetNextPath() (and related functionality) to get the parts in an assembly (or more correctly, the paths in the assembly).</para>
/// </summary>
  vtkActor^ GetNextPart();


  // virtual int GetNumberOfParts ();
/// <summary>
/// <para>The following methods are for compatibility. The methods will be deprecated in the near future. Use vtkProp::GetNextPath() (and related functionality) to get the parts in an assembly (or more correctly, the paths in the assembly).</para>
/// </summary>
  int GetNumberOfParts();


// Did not wrap:  vtkActor ();


// Did not wrap:  ~vtkActor ();


// Did not wrap:  int GetIsOpaque ();


// Did not wrap:  vtkActor (const vtkActor &);


// Did not wrap:  void vtkActor 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkActor(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkActor(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkActor();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkActor();


};

} // end vtkRendering
