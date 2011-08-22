#pragma once

// managed includes
#include "vtkInteractorStyleDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkInteractorStyleRubberBandZoom : public vtkInteractorStyle
{

public:
// Did not wrap:  static vtkInteractorStyleRubberBandZoom *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkInteractorStyleRubberBandZoom *NewInstance ();
  vtkInteractorStyleRubberBandZoom^ NewInstance();


  // vtkInteractorStyleRubberBandZoom *SafeDownCast (vtkObject* o);
  static vtkInteractorStyleRubberBandZoom^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void OnMouseMove ();
/// <summary>
/// <para>Event bindings</para>
/// </summary>
  void OnMouseMove();


  // virtual void OnLeftButtonDown ();
/// <summary>
/// <para>Event bindings</para>
/// </summary>
  void OnLeftButtonDown();


  // virtual void OnLeftButtonUp ();
/// <summary>
/// <para>Event bindings</para>
/// </summary>
  void OnLeftButtonUp();


// Did not wrap:  vtkInteractorStyleRubberBandZoom ();


// Did not wrap:  ~vtkInteractorStyleRubberBandZoom ();


// Did not wrap:  virtual void Zoom ();


// Did not wrap:  vtkInteractorStyleRubberBandZoom (const vtkInteractorStyleRubberBandZoom &);


// Did not wrap:  void vtkInteractorStyleRubberBandZoom 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkInteractorStyleRubberBandZoom(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkInteractorStyleRubberBandZoom(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkInteractorStyleRubberBandZoom();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkInteractorStyleRubberBandZoom();


};

} // end vtkRendering
