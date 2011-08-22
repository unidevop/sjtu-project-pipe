#pragma once

// managed includes
#include "vtkAbstractPickerDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkRenderer;

public ref class vtkWorldPointPicker : public vtkAbstractPicker
{

public:
// Did not wrap:  static vtkWorldPointPicker *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkWorldPointPicker *NewInstance ();
  vtkWorldPointPicker^ NewInstance();


  // vtkWorldPointPicker *SafeDownCast (vtkObject* o);
  static vtkWorldPointPicker^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int Pick (double selectionX, double selectionY, double selectionZ, vtkRenderer *renderer);
/// <summary>
/// <para>Perform the pick. (This method overload's the superclass.)</para>
/// </summary>
  int Pick(double selectionX, double selectionY, double selectionZ, vtkRenderer^ renderer);


  // int Pick (double selectionPt[3], vtkRenderer *renderer);return this vtkAbstractPicker Pick selectionPt renderer 
/// <summary>
/// <para>Perform the pick. (This method overload's the superclass.)</para>
/// </summary>
  int Pick(array<double>^ selectionPt, vtkRenderer^ renderer);


// Did not wrap:  vtkWorldPointPicker ();


// Did not wrap:  ~vtkWorldPointPicker ();


// Did not wrap:  vtkWorldPointPicker (const vtkWorldPointPicker &);


// Did not wrap:  void vtkWorldPointPicker 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkWorldPointPicker(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkWorldPointPicker(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkWorldPointPicker();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkWorldPointPicker();


};

} // end vtkRendering
