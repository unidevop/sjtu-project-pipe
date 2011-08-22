#pragma once

// managed includes
#include "vtkImageWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkPNMWriter : public vtkImageWriter
{

public:
// Did not wrap:  static vtkPNMWriter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPNMWriter *NewInstance ();
  vtkPNMWriter^ NewInstance();


  // vtkPNMWriter *SafeDownCast (vtkObject* o);
  static vtkPNMWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkPNMWriter ();


// Did not wrap:  ~vtkPNMWriter ();


// Did not wrap:  virtual void WriteFile (ofstream *file, vtkImageData *data, int extent[6]);


// Did not wrap:  virtual void WriteFileHeader (ofstream *, vtkImageData *);


// Did not wrap:  vtkPNMWriter (const vtkPNMWriter &);


// Did not wrap:  void vtkPNMWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPNMWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPNMWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPNMWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPNMWriter();


};

} // end vtkIO
