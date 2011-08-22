#pragma once

// managed includes
#include "vtkImageWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkPostScriptWriter : public vtkImageWriter
{

public:
// Did not wrap:  static vtkPostScriptWriter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPostScriptWriter *NewInstance ();
  vtkPostScriptWriter^ NewInstance();


  // vtkPostScriptWriter *SafeDownCast (vtkObject* o);
  static vtkPostScriptWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkPostScriptWriter ();


// Did not wrap:  ~vtkPostScriptWriter ();


// Did not wrap:  virtual void WriteFile (ofstream *file, vtkImageData *data, int extent[6]);


// Did not wrap:  virtual void WriteFileHeader (ofstream *, vtkImageData *);


// Did not wrap:  virtual void WriteFileTrailer (ofstream *, vtkImageData *);


// Did not wrap:  vtkPostScriptWriter (const vtkPostScriptWriter &);


// Did not wrap:  void vtkPostScriptWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPostScriptWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPostScriptWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPostScriptWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPostScriptWriter();


};

} // end vtkIO
