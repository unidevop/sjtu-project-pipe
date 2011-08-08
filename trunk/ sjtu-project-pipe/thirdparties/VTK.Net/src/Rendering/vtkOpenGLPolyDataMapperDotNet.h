#pragma once

// managed includes
#include "vtkPolyDataMapperDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkActor;
ref class vtkRenderer;

public ref class vtkOpenGLPolyDataMapper : public vtkPolyDataMapper
{

public:
// Did not wrap:  static vtkOpenGLPolyDataMapper *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOpenGLPolyDataMapper *NewInstance ();
  vtkOpenGLPolyDataMapper^ NewInstance();


  // vtkOpenGLPolyDataMapper *SafeDownCast (vtkObject* o);
  static vtkOpenGLPolyDataMapper^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void RenderPiece (vtkRenderer *ren, vtkActor *a);
/// <summary>
/// <para>Implement superclass render method.</para>
/// </summary>
  void RenderPiece(vtkRenderer^ ren, vtkActor^ a);


  // void ReleaseGraphicsResources (vtkWindow *);
/// <summary>
/// <para>Release any graphics resources that are being consumed by this mapper. The parameter window could be used to determine which graphic resources to release.</para>
/// </summary>
  void ReleaseGraphicsResources(vtkWindow^ arg0);


  // virtual int Draw (vtkRenderer *ren, vtkActor *a);
/// <summary>
/// <para>Draw method for OpenGL.</para>
/// </summary>
  int Draw(vtkRenderer^ ren, vtkActor^ a);


// Did not wrap:  vtkOpenGLPolyDataMapper ();


// Did not wrap:  ~vtkOpenGLPolyDataMapper ();


// Did not wrap:  void DrawPoints (int idx, vtkPoints *p, vtkDataArray *n, vtkUnsignedCharArray *c, vtkDataArray *t, vtkIdType &cellNum, int &noAbort, vtkCellArray *ca, vtkRenderer *ren);


// Did not wrap:  void DrawLines (int idx, vtkPoints *p, vtkDataArray *n, vtkUnsignedCharArray *c, vtkDataArray *t, vtkIdType &cellNum, int &noAbort, vtkCellArray *ca, vtkRenderer *ren);


// Did not wrap:  void DrawPolygons (int idx, vtkPoints *p, vtkDataArray *n, vtkUnsignedCharArray *c, vtkDataArray *t, vtkIdType &cellNum, int &noAbort, GLenum rep, vtkCellArray *ca, vtkRenderer *ren);


// Did not wrap:  void DrawTStrips (int idx, vtkPoints *p, vtkDataArray *n, vtkUnsignedCharArray *c, vtkDataArray *t, vtkIdType &cellNum, int &noAbort, GLenum rep, vtkCellArray *ca, vtkRenderer *ren);


// Did not wrap:  vtkOpenGLPolyDataMapper (const vtkOpenGLPolyDataMapper &);


// Did not wrap:  void vtkOpenGLPolyDataMapper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOpenGLPolyDataMapper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOpenGLPolyDataMapper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOpenGLPolyDataMapper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOpenGLPolyDataMapper();


};

} // end vtkRendering
