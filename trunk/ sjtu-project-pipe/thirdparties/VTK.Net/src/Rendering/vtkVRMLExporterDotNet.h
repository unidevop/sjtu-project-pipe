#pragma once

// managed includes
#include "vtkExporterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkVRMLExporter : public vtkExporter
{

public:
// Did not wrap:  static vtkVRMLExporter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkVRMLExporter *NewInstance ();
  vtkVRMLExporter^ NewInstance();


  // vtkVRMLExporter *SafeDownCast (vtkObject* o);
  static vtkVRMLExporter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetFileName (char *);
/// <summary>
/// <para>Specify the name of the VRML file to write.</para>
/// </summary>
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
/// <summary>
/// <para>Specify the name of the VRML file to write.</para>
/// </summary>
  System::String^ GetFileName();


  // void SetSpeed (double );
/// <summary>
/// <para>Specify the Speed of navigation. Default is 4.</para>
/// </summary>
  void SetSpeed(double arg0);


  // double GetSpeed ();
/// <summary>
/// <para>Specify the Speed of navigation. Default is 4.</para>
/// </summary>
  double GetSpeed();


// Did not wrap:  void SetFilePointer (FILE *);


// Did not wrap:  vtkVRMLExporter ();


// Did not wrap:  ~vtkVRMLExporter ();


// Did not wrap:  void WriteData ();


// Did not wrap:  void WriteALight (vtkLight *aLight, FILE *fp);


// Did not wrap:  void WriteAnActor (vtkActor *anActor, FILE *fp);


// Did not wrap:  void WritePointData (vtkPoints *points, vtkDataArray *normals, vtkDataArray *tcoords, vtkUnsignedCharArray *colors, FILE *fp);


// Did not wrap:  vtkVRMLExporter (const vtkVRMLExporter &);


// Did not wrap:  void vtkVRMLExporter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkVRMLExporter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkVRMLExporter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkVRMLExporter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkVRMLExporter();


};

} // end vtkRendering
