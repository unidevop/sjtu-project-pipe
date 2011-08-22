#pragma once

// managed includes
#include "vtkInteractorStyleDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkInteractorStyleTerrain : public vtkInteractorStyle
{

public:
// Did not wrap:  static vtkInteractorStyleTerrain *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkInteractorStyleTerrain *NewInstance ();
  vtkInteractorStyleTerrain^ NewInstance();


  // vtkInteractorStyleTerrain *SafeDownCast (vtkObject* o);
  static vtkInteractorStyleTerrain^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void OnMouseMove ();
/// <summary>
/// <para>Event bindings controlling the effects of pressing mouse buttons or moving the mouse.</para>
/// </summary>
  void OnMouseMove();


  // virtual void OnLeftButtonDown ();
/// <summary>
/// <para>Event bindings controlling the effects of pressing mouse buttons or moving the mouse.</para>
/// </summary>
  void OnLeftButtonDown();


  // virtual void OnLeftButtonUp ();
/// <summary>
/// <para>Event bindings controlling the effects of pressing mouse buttons or moving the mouse.</para>
/// </summary>
  void OnLeftButtonUp();


  // virtual void OnMiddleButtonDown ();
/// <summary>
/// <para>Event bindings controlling the effects of pressing mouse buttons or moving the mouse.</para>
/// </summary>
  void OnMiddleButtonDown();


  // virtual void OnMiddleButtonUp ();
/// <summary>
/// <para>Event bindings controlling the effects of pressing mouse buttons or moving the mouse.</para>
/// </summary>
  void OnMiddleButtonUp();


  // virtual void OnRightButtonDown ();
/// <summary>
/// <para>Event bindings controlling the effects of pressing mouse buttons or moving the mouse.</para>
/// </summary>
  void OnRightButtonDown();


  // virtual void OnRightButtonUp ();
/// <summary>
/// <para>Event bindings controlling the effects of pressing mouse buttons or moving the mouse.</para>
/// </summary>
  void OnRightButtonUp();


  // virtual void OnChar ();
/// <summary>
/// <para>Override the &quot;fly-to&quot; (f keypress) for images.</para>
/// </summary>
  void OnChar();


  // virtual void Rotate ();
  void Rotate();


  // virtual void Pan ();
  void Pan();


  // virtual void Dolly ();
  void Dolly();


  // void SetLatLongLines (int );
/// <summary>
/// <para>Turn on/off the latitude/longitude lines.</para>
/// </summary>
  void SetLatLongLines(int arg0);


  // int GetLatLongLines ();
/// <summary>
/// <para>Turn on/off the latitude/longitude lines.</para>
/// </summary>
  int GetLatLongLines();


  // void LatLongLinesOn ();
/// <summary>
/// <para>Turn on/off the latitude/longitude lines.</para>
/// </summary>
  void LatLongLinesOn();


  // void LatLongLinesOff ();
/// <summary>
/// <para>Turn on/off the latitude/longitude lines.</para>
/// </summary>
  void LatLongLinesOff();


// Did not wrap:  vtkInteractorStyleTerrain ();


// Did not wrap:  ~vtkInteractorStyleTerrain ();


// Did not wrap:  void SelectRepresentation ();


// Did not wrap:  void CreateLatLong ();


// Did not wrap:  vtkInteractorStyleTerrain (const vtkInteractorStyleTerrain &);


// Did not wrap:  void vtkInteractorStyleTerrain 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkInteractorStyleTerrain(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkInteractorStyleTerrain(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkInteractorStyleTerrain();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkInteractorStyleTerrain();


};

} // end vtkRendering
