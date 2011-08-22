#pragma once

// managed includes
#include "vtkAbstractPropPickerDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkRenderer;

public ref class vtkPropPicker : public vtkAbstractPropPicker
{

public:
// Did not wrap:  static vtkPropPicker *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPropPicker *NewInstance ();
  vtkPropPicker^ NewInstance();


  // vtkPropPicker *SafeDownCast (vtkObject* o);
  static vtkPropPicker^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int PickProp (double selectionX, double selectionY, vtkRenderer *renderer);
/// <summary>
/// <para>Perform the pick and set the PickedProp ivar. If something is picked, a 1 is returned, otherwise 0 is returned.  Use the GetViewProp() method to get the instance of vtkProp that was picked.  Props are picked from the renderers list of pickable Props.</para>
/// </summary>
  int PickProp(double selectionX, double selectionY, vtkRenderer^ renderer);


  // int PickProp (double selectionX, double selectionY, vtkRenderer *renderer, vtkPropCollection *pickfrom);
/// <summary>
/// <para>Perform a pick from the user-provided list of vtkProps and not from the list of vtkProps that the render maintains.</para>
/// </summary>
  int PickProp(double selectionX, double selectionY, vtkRenderer^ renderer, vtkPropCollection^ pickfrom);


  // int Pick (double selectionX, double selectionY, double selectionZ, vtkRenderer *renderer);
/// <summary>
/// <para>Overide superclasses' Pick() method.</para>
/// </summary>
  int Pick(double selectionX, double selectionY, double selectionZ, vtkRenderer^ renderer);


  // int Pick (double selectionPt[3], vtkRenderer *renderer);return this Pick selectionPt selectionPt selectionPt renderer 
/// <summary>
/// <para>Overide superclasses' Pick() method.</para>
/// </summary>
  int Pick(array<double>^ selectionPt, vtkRenderer^ renderer);


// Did not wrap:  vtkPropPicker ();


// Did not wrap:  ~vtkPropPicker ();


// Did not wrap:  void Initialize ();


// Did not wrap:  vtkPropPicker (const vtkPropPicker &);


// Did not wrap:  void vtkPropPicker 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPropPicker(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPropPicker(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPropPicker();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPropPicker();


};

} // end vtkRendering
