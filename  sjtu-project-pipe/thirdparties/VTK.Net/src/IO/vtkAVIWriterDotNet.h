#pragma once

// managed includes
#include "vtkGenericMovieWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkAVIWriter : public vtkGenericMovieWriter
{

public:
// Did not wrap:  static vtkAVIWriter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkAVIWriter *NewInstance ();
  vtkAVIWriter^ NewInstance();


  // vtkAVIWriter *SafeDownCast (vtkObject* o);
  static vtkAVIWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Start ();
/// <summary>
/// <para>These methods start writing an AVI file, write a frame to the file and then end the writing process.</para>
/// </summary>
  void Start();


  // void Write ();
/// <summary>
/// <para>These methods start writing an AVI file, write a frame to the file and then end the writing process.</para>
/// </summary>
  void Write();


  // void End ();
/// <summary>
/// <para>These methods start writing an AVI file, write a frame to the file and then end the writing process.</para>
/// </summary>
  void End();


// Did not wrap:  vtkAVIWriter ();


// Did not wrap:  ~vtkAVIWriter ();


// Did not wrap:  vtkAVIWriter (const vtkAVIWriter &);


// Did not wrap:  void vtkAVIWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkAVIWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkAVIWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkAVIWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkAVIWriter();


};

} // end vtkIO
