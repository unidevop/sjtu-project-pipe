#pragma once

// managed includes
#include "vtkPolyDataWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkMCubesWriter : public vtkPolyDataWriter
{

public:
// Did not wrap:  static vtkMCubesWriter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMCubesWriter *NewInstance ();
  vtkMCubesWriter^ NewInstance();


  // vtkMCubesWriter *SafeDownCast (vtkObject* o);
  static vtkMCubesWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetLimitsFileName (char *);
/// <summary>
/// <para>Set/get file name of marching cubes limits file.</para>
/// </summary>
  void SetLimitsFileName(System::String^ arg0);


  // char *GetLimitsFileName ();
/// <summary>
/// <para>Set/get file name of marching cubes limits file.</para>
/// </summary>
  System::String^ GetLimitsFileName();


// Did not wrap:  vtkMCubesWriter ();


// Did not wrap:  ~vtkMCubesWriter ();


// Did not wrap:  void WriteData ();


// Did not wrap:  vtkMCubesWriter (const vtkMCubesWriter &);


// Did not wrap:  void vtkMCubesWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMCubesWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMCubesWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMCubesWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMCubesWriter();


};

} // end vtkIO
