#pragma once

// managed includes
#include "vtkDataReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkRectilinearGridReader : public vtkDataReader
{

public:
// Did not wrap:  static vtkRectilinearGridReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRectilinearGridReader *NewInstance ();
  vtkRectilinearGridReader^ NewInstance();


  // vtkRectilinearGridReader *SafeDownCast (vtkObject* o);
  static vtkRectilinearGridReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkRectilinearGrid *GetOutput ();
/// <summary>
/// <para>Get and set the output of this reader.</para>
/// </summary>
  vtkRectilinearGrid^ GetOutput();


  // vtkRectilinearGrid *GetOutput (int idx);
/// <summary>
/// <para>Get and set the output of this reader.</para>
/// </summary>
  vtkRectilinearGrid^ GetOutput(int idx);


  // void SetOutput (vtkRectilinearGrid *output);
/// <summary>
/// <para>Get and set the output of this reader.</para>
/// </summary>
  void SetOutput(vtkRectilinearGrid^ output);


  // virtual int ReadMetaData (vtkInformation *outInfo);
/// <summary>
/// <para>Read the meta information from the file.  This needs to be public to it can be accessed by vtkDataSetReader.</para>
/// </summary>
  int ReadMetaData(vtkInformation^ outInfo);


// Did not wrap:  vtkRectilinearGridReader ();


// Did not wrap:  ~vtkRectilinearGridReader ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkRectilinearGridReader (const vtkRectilinearGridReader &);


// Did not wrap:  void vtkRectilinearGridReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRectilinearGridReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRectilinearGridReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRectilinearGridReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRectilinearGridReader();


};

} // end vtkIO
