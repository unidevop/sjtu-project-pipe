#pragma once

// managed includes
#include "vtkInteractorStyleSwitchDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkInteractorStyleTrackball : public vtkInteractorStyleSwitch
{

public:
// Did not wrap:  static vtkInteractorStyleTrackball *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkInteractorStyleTrackball *NewInstance ();
  vtkInteractorStyleTrackball^ NewInstance();


  // vtkInteractorStyleTrackball *SafeDownCast (vtkObject* o);
  static vtkInteractorStyleTrackball^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkInteractorStyleTrackball ();


// Did not wrap:  ~vtkInteractorStyleTrackball ();


// Did not wrap:  vtkInteractorStyleTrackball (const vtkInteractorStyleTrackball &);


// Did not wrap:  void vtkInteractorStyleTrackball 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkInteractorStyleTrackball(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkInteractorStyleTrackball(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkInteractorStyleTrackball();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkInteractorStyleTrackball();


};

} // end vtkRendering
