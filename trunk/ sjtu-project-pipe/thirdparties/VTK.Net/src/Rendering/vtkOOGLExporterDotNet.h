#pragma once

// managed includes
#include "vtkExporterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkOOGLExporter : public vtkExporter
{

public:
// Did not wrap:  static vtkOOGLExporter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOOGLExporter *NewInstance ();
  vtkOOGLExporter^ NewInstance();


  // vtkOOGLExporter *SafeDownCast (vtkObject* o);
  static vtkOOGLExporter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetFileName (char *);
/// <summary>
/// <para>Specify the name of the Geomview file to write.</para>
/// </summary>
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
/// <summary>
/// <para>Specify the name of the Geomview file to write.</para>
/// </summary>
  System::String^ GetFileName();


// Did not wrap:  vtkOOGLExporter ();


// Did not wrap:  ~vtkOOGLExporter ();


// Did not wrap:  void WriteData ();


// Did not wrap:  void WriteALight (vtkLight *aLight, FILE *fp);


// Did not wrap:  void WriteAnActor (vtkActor *anActor, FILE *fp, int count);


// Did not wrap:  vtkOOGLExporter (const vtkOOGLExporter &);


// Did not wrap:  void vtkOOGLExporter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOOGLExporter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOOGLExporter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOOGLExporter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOOGLExporter();


};

} // end vtkRendering
