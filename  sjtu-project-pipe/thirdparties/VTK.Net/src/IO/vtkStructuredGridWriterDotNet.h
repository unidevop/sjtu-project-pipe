#pragma once

// managed includes
#include "vtkDataWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkStructuredGridWriter : public vtkDataWriter
{

public:
// Did not wrap:  static vtkStructuredGridWriter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkStructuredGridWriter *NewInstance ();
  vtkStructuredGridWriter^ NewInstance();


  // vtkStructuredGridWriter *SafeDownCast (vtkObject* o);
  static vtkStructuredGridWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkStructuredGrid *GetInput ();
/// <summary>
/// <para>Get the input to this writer.</para>
/// </summary>
  vtkStructuredGrid^ GetInput();


  // vtkStructuredGrid *GetInput (int port);
/// <summary>
/// <para>Get the input to this writer.</para>
/// </summary>
  vtkStructuredGrid^ GetInput(int port);


// Did not wrap:  vtkStructuredGridWriter ();


// Did not wrap:  ~vtkStructuredGridWriter ();


// Did not wrap:  void WriteData ();


// Did not wrap:  int WriteBlanking (ostream *fp, vtkStructuredGrid *ds);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkStructuredGridWriter (const vtkStructuredGridWriter &);


// Did not wrap:  void vtkStructuredGridWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkStructuredGridWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkStructuredGridWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkStructuredGridWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkStructuredGridWriter();


};

} // end vtkIO
