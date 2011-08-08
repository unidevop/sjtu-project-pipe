#pragma once

// managed includes
#include "vtkLightDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkRenderer;

public ref class vtkOpenGLLight : public vtkLight
{

public:
// Did not wrap:  static vtkOpenGLLight *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOpenGLLight *NewInstance ();
  vtkOpenGLLight^ NewInstance();


  // vtkOpenGLLight *SafeDownCast (vtkObject* o);
  static vtkOpenGLLight^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Render (vtkRenderer *ren, int light_index);
/// <summary>
/// <para>Implement base class method.</para>
/// </summary>
  void Render(vtkRenderer^ ren, int light_index);


// Did not wrap:  vtkOpenGLLight ();


// Did not wrap:  ~vtkOpenGLLight ();


// Did not wrap:  vtkOpenGLLight (const vtkOpenGLLight &);


// Did not wrap:  void vtkOpenGLLight 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOpenGLLight(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOpenGLLight(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOpenGLLight();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOpenGLLight();


};

} // end vtkRendering
