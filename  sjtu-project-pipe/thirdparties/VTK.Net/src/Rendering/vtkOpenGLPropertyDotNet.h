#pragma once

// managed includes
#include "vtkPropertyDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkActor;
ref class vtkRenderer;

public ref class vtkOpenGLProperty : public vtkProperty
{

public:
// Did not wrap:  static vtkOpenGLProperty *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOpenGLProperty *NewInstance ();
  vtkOpenGLProperty^ NewInstance();


  // vtkOpenGLProperty *SafeDownCast (vtkObject* o);
  static vtkOpenGLProperty^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Render (vtkActor *a, vtkRenderer *ren);
/// <summary>
/// <para>Implement base class method.</para>
/// </summary>
  void Render(vtkActor^ a, vtkRenderer^ ren);


  // void BackfaceRender (vtkActor *a, vtkRenderer *ren);
/// <summary>
/// <para>Implement base class method.</para>
/// </summary>
  void BackfaceRender(vtkActor^ a, vtkRenderer^ ren);


// Did not wrap:  vtkOpenGLProperty ();


// Did not wrap:  ~vtkOpenGLProperty ();


// Did not wrap:  vtkOpenGLProperty (const vtkOpenGLProperty &);


// Did not wrap:  void vtkOpenGLProperty 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOpenGLProperty(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOpenGLProperty(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOpenGLProperty();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOpenGLProperty();


};

} // end vtkRendering
