#pragma once

// managed includes
#include "vtkMapperDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkActor;
ref class vtkRenderer;

public ref class vtkHierarchicalPolyDataMapper : public vtkMapper
{

public:
// Did not wrap:  static vtkHierarchicalPolyDataMapper *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkHierarchicalPolyDataMapper *NewInstance ();
  vtkHierarchicalPolyDataMapper^ NewInstance();


  // vtkHierarchicalPolyDataMapper *SafeDownCast (vtkObject* o);
  static vtkHierarchicalPolyDataMapper^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Render (vtkRenderer *ren, vtkActor *a);
/// <summary>
/// <para>Standard method for rendering a mapper. This method will be  called by the actor.</para>
/// </summary>
  void Render(vtkRenderer^ ren, vtkActor^ a);


// Did not wrap:  double *GetBounds ();


  // void GetBounds (double bounds[6]);this Superclass GetBounds bounds 
/// <summary>
/// <para>Standard vtkProp method to get 3D bounds of a 3D prop</para>
/// </summary>
  void GetBounds(array<double>^ bounds);


  // void ReleaseGraphicsResources (vtkWindow *);
/// <summary>
/// <para>Release the underlying resources associated with this mapper  </para>
/// </summary>
  void ReleaseGraphicsResources(vtkWindow^ arg0);


// Did not wrap:  vtkHierarchicalPolyDataMapper ();


// Did not wrap:  ~vtkHierarchicalPolyDataMapper ();


// Did not wrap:  vtkExecutive *CreateDefaultExecutive ();


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  void BuildPolyDataMapper ();


// Did not wrap:  void ComputeBounds ();


// Did not wrap:  vtkHierarchicalPolyDataMapper (const vtkHierarchicalPolyDataMapper &);


// Did not wrap:  void vtkHierarchicalPolyDataMapper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkHierarchicalPolyDataMapper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkHierarchicalPolyDataMapper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkHierarchicalPolyDataMapper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkHierarchicalPolyDataMapper();


};

} // end vtkRendering
