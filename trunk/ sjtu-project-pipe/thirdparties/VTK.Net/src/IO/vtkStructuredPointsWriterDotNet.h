#pragma once

// managed includes
#include "vtkDataWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkStructuredPointsWriter : public vtkDataWriter
{

public:
// Did not wrap:  static vtkStructuredPointsWriter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkStructuredPointsWriter *NewInstance ();
  vtkStructuredPointsWriter^ NewInstance();


  // vtkStructuredPointsWriter *SafeDownCast (vtkObject* o);
  static vtkStructuredPointsWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkImageData *GetInput ();
/// <summary>
/// <para>Get the input to this writer.</para>
/// </summary>
  vtkImageData^ GetInput();


  // vtkImageData *GetInput (int port);
/// <summary>
/// <para>Get the input to this writer.</para>
/// </summary>
  vtkImageData^ GetInput(int port);


// Did not wrap:  vtkStructuredPointsWriter ();


// Did not wrap:  ~vtkStructuredPointsWriter ();


// Did not wrap:  void WriteData ();


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkStructuredPointsWriter (const vtkStructuredPointsWriter &);


// Did not wrap:  void vtkStructuredPointsWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkStructuredPointsWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkStructuredPointsWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkStructuredPointsWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkStructuredPointsWriter();


};

} // end vtkIO
