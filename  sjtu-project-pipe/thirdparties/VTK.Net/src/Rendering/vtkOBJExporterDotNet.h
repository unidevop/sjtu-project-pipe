#pragma once

// managed includes
#include "vtkExporterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkOBJExporter : public vtkExporter
{

public:
// Did not wrap:  static vtkOBJExporter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOBJExporter *NewInstance ();
  vtkOBJExporter^ NewInstance();


  // vtkOBJExporter *SafeDownCast (vtkObject* o);
  static vtkOBJExporter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetFilePrefix (char *);
/// <summary>
/// <para>Specify the prefix of the files to write out. The resulting filenames will have .obj and .mtl appended to them.</para>
/// </summary>
  void SetFilePrefix(System::String^ arg0);


  // char *GetFilePrefix ();
/// <summary>
/// <para>Specify the prefix of the files to write out. The resulting filenames will have .obj and .mtl appended to them.</para>
/// </summary>
  System::String^ GetFilePrefix();


// Did not wrap:  vtkOBJExporter ();


// Did not wrap:  ~vtkOBJExporter ();


// Did not wrap:  void WriteData ();


// Did not wrap:  void WriteAnActor (vtkActor *anActor, FILE *fpObj, FILE *fpMat, int &id);


// Did not wrap:  vtkOBJExporter (const vtkOBJExporter &);


// Did not wrap:  void vtkOBJExporter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOBJExporter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOBJExporter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOBJExporter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOBJExporter();


};

} // end vtkRendering
