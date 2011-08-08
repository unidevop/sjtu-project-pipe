#pragma once

// managed includes
#include "vtkRendererDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkOpenGLRenderer : public vtkRenderer
{

public:
// Did not wrap:  static vtkOpenGLRenderer *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOpenGLRenderer *NewInstance ();
  vtkOpenGLRenderer^ NewInstance();


  // vtkOpenGLRenderer *SafeDownCast (vtkObject* o);
  static vtkOpenGLRenderer^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void DeviceRender (void );
/// <summary>
/// <para>Concrete open gl render method.</para>
/// </summary>
  void DeviceRender();


  // void ClearLights (void );
/// <summary>
/// <para>Internal method temporarily removes lights before reloading them into graphics pipeline.</para>
/// </summary>
  void ClearLights();


  // void Clear (void );
  void Clear();


  // int UpdateLights (void );
/// <summary>
/// <para>Ask lights to load themselves into graphics pipeline.</para>
/// </summary>
  int UpdateLights();


// Did not wrap:  vtkOpenGLRenderer ();


// Did not wrap:  ~vtkOpenGLRenderer ();


// Did not wrap:  vtkOpenGLRenderer (const vtkOpenGLRenderer &);


// Did not wrap:  void vtkOpenGLRenderer 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOpenGLRenderer(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOpenGLRenderer(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOpenGLRenderer();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOpenGLRenderer();


};

} // end vtkRendering
