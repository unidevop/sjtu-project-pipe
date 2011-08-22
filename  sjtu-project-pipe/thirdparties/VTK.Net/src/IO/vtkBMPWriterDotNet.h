#pragma once

// managed includes
#include "vtkImageWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkBMPWriter : public vtkImageWriter
{

public:
// Did not wrap:  static vtkBMPWriter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkBMPWriter *NewInstance ();
  vtkBMPWriter^ NewInstance();


  // vtkBMPWriter *SafeDownCast (vtkObject* o);
  static vtkBMPWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkBMPWriter ();


// Did not wrap:  ~vtkBMPWriter ();


// Did not wrap:  virtual void WriteFile (ofstream *file, vtkImageData *data, int ext[6]);


// Did not wrap:  virtual void WriteFileHeader (ofstream *, vtkImageData *);


// Did not wrap:  vtkBMPWriter (const vtkBMPWriter &);


// Did not wrap:  void vtkBMPWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkBMPWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkBMPWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkBMPWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkBMPWriter();


};

} // end vtkIO
