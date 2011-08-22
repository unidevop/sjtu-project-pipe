#pragma once

// managed includes
#include "vtkTextActorDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkScaledTextActor : public vtkTextActor
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkScaledTextActor *NewInstance ();
  vtkScaledTextActor^ NewInstance();


  // vtkScaledTextActor *SafeDownCast (vtkObject* o);
  static vtkScaledTextActor^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkScaledTextActor *New ();


// Did not wrap:  vtkScaledTextActor ();


// Did not wrap:  vtkScaledTextActor (const vtkScaledTextActor &);


// Did not wrap:  void vtkScaledTextActor 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkScaledTextActor(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkScaledTextActor(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkScaledTextActor();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkScaledTextActor();


};

} // end vtkRendering
