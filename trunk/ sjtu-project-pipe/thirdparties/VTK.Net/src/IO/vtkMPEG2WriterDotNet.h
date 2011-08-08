#pragma once

// managed includes
#include "vtkGenericMovieWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkMPEG2Writer : public vtkGenericMovieWriter
{

public:
// Did not wrap:  struct MPEG2_structure static vtkMPEG2Writer *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMPEG2Writer *NewInstance ();
  vtkMPEG2Writer^ NewInstance();


  // vtkMPEG2Writer *SafeDownCast (vtkObject* o);
  static vtkMPEG2Writer^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Start ();
/// <summary>
/// <para>These methods start writing an Movie file, write a frame to the file and then end the writing process.</para>
/// </summary>
  void Start();


  // void Write ();
/// <summary>
/// <para>These methods start writing an Movie file, write a frame to the file and then end the writing process.</para>
/// </summary>
  void Write();


  // void End ();
/// <summary>
/// <para>These methods start writing an Movie file, write a frame to the file and then end the writing process.</para>
/// </summary>
  void End();


// Did not wrap:  vtkMPEG2Writer ();


// Did not wrap:  ~vtkMPEG2Writer ();


// Did not wrap:  void Initialize ();


// Did not wrap:  vtkMPEG2Writer (const vtkMPEG2Writer &);


// Did not wrap:  void vtkMPEG2Writer 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMPEG2Writer(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMPEG2Writer(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMPEG2Writer();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMPEG2Writer();


};

} // end vtkIO
