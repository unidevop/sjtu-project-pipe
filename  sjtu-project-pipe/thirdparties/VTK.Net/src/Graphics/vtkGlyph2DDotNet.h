#pragma once

// managed includes
#include "vtkGlyph3DDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkGlyph2D : public vtkGlyph3D
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkGlyph2D *NewInstance ();
  vtkGlyph2D^ NewInstance();


  // vtkGlyph2D *SafeDownCast (vtkObject* o);
  static vtkGlyph2D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkGlyph2D *New ();


// Did not wrap:  vtkGlyph2D ();


// Did not wrap:  ~vtkGlyph2D ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkGlyph2D (const vtkGlyph2D &);


// Did not wrap:  void vtkGlyph2D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGlyph2D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGlyph2D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGlyph2D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGlyph2D();


};

} // end vtkGraphics
