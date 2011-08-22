#pragma once

// managed includes
#include "vtkAbstractMapperDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkActor2D;
ref class vtkViewport;

public ref class vtkMapper2D : public vtkAbstractMapper
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMapper2D *NewInstance ();
  vtkMapper2D^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void RenderOverlay (vtkViewport *, vtkActor2D *);
  void RenderOverlay(vtkViewport^ arg0, vtkActor2D^ arg1);


  // virtual void RenderOpaqueGeometry (vtkViewport *, vtkActor2D *);
  void RenderOpaqueGeometry(vtkViewport^ arg0, vtkActor2D^ arg1);


  // virtual void RenderTranslucentGeometry (vtkViewport *, vtkActor2D *);
  void RenderTranslucentGeometry(vtkViewport^ arg0, vtkActor2D^ arg1);


// Did not wrap:  vtkMapper2D ();


// Did not wrap:  ~vtkMapper2D ();


// Did not wrap:  vtkMapper2D (const vtkMapper2D &);


// Did not wrap:  void vtkMapper2D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMapper2D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMapper2D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMapper2D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMapper2D();


};

} // end vtkFiltering
