#pragma once

// managed includes
#include "vtkDataReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkStructuredGridReader : public vtkDataReader
{

public:
// Did not wrap:  static vtkStructuredGridReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkStructuredGridReader *NewInstance ();
  vtkStructuredGridReader^ NewInstance();


  // vtkStructuredGridReader *SafeDownCast (vtkObject* o);
  static vtkStructuredGridReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkStructuredGrid *GetOutput ();
/// <summary>
/// <para>Get the output of this reader.</para>
/// </summary>
  vtkStructuredGrid^ GetOutput();


  // vtkStructuredGrid *GetOutput (int idx);
/// <summary>
/// <para>Get the output of this reader.</para>
/// </summary>
  vtkStructuredGrid^ GetOutput(int idx);


  // void SetOutput (vtkStructuredGrid *output);
/// <summary>
/// <para>Get the output of this reader.</para>
/// </summary>
  void SetOutput(vtkStructuredGrid^ output);


  // virtual int ReadMetaData (vtkInformation *outInfo);
/// <summary>
/// <para>Read the meta information from the file.  This needs to be public to it can be accessed by vtkDataSetReader.</para>
/// </summary>
  int ReadMetaData(vtkInformation^ outInfo);


// Did not wrap:  vtkStructuredGridReader ();


// Did not wrap:  ~vtkStructuredGridReader ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkStructuredGridReader (const vtkStructuredGridReader &);


// Did not wrap:  void vtkStructuredGridReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkStructuredGridReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkStructuredGridReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkStructuredGridReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkStructuredGridReader();


};

} // end vtkIO
