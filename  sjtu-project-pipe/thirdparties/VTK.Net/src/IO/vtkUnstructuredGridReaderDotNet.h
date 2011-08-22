#pragma once

// managed includes
#include "vtkDataReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkUnstructuredGridReader : public vtkDataReader
{

public:
// Did not wrap:  static vtkUnstructuredGridReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkUnstructuredGridReader *NewInstance ();
  vtkUnstructuredGridReader^ NewInstance();


  // vtkUnstructuredGridReader *SafeDownCast (vtkObject* o);
  static vtkUnstructuredGridReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkUnstructuredGrid *GetOutput ();
/// <summary>
/// <para>Get the output of this reader.</para>
/// </summary>
  vtkUnstructuredGrid^ GetOutput();


  // vtkUnstructuredGrid *GetOutput (int idx);
/// <summary>
/// <para>Get the output of this reader.</para>
/// </summary>
  vtkUnstructuredGrid^ GetOutput(int idx);


  // void SetOutput (vtkUnstructuredGrid *output);
/// <summary>
/// <para>Get the output of this reader.</para>
/// </summary>
  void SetOutput(vtkUnstructuredGrid^ output);


// Did not wrap:  vtkUnstructuredGridReader ();


// Did not wrap:  ~vtkUnstructuredGridReader ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkUnstructuredGridReader (const vtkUnstructuredGridReader &);


// Did not wrap:  void vtkUnstructuredGridReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkUnstructuredGridReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkUnstructuredGridReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkUnstructuredGridReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkUnstructuredGridReader();


};

} // end vtkIO
