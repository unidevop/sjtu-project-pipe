#pragma once

// managed includes
#include "vtkDataReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkPolyDataReader : public vtkDataReader
{

public:
// Did not wrap:  static vtkPolyDataReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPolyDataReader *NewInstance ();
  vtkPolyDataReader^ NewInstance();


  // vtkPolyDataReader *SafeDownCast (vtkObject* o);
  static vtkPolyDataReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkPolyData *GetOutput ();
/// <summary>
/// <para>Get the output of this reader.</para>
/// </summary>
  vtkPolyData^ GetOutput();


  // vtkPolyData *GetOutput (int idx);
/// <summary>
/// <para>Get the output of this reader.</para>
/// </summary>
  vtkPolyData^ GetOutput(int idx);


  // void SetOutput (vtkPolyData *output);
/// <summary>
/// <para>Get the output of this reader.</para>
/// </summary>
  void SetOutput(vtkPolyData^ output);


// Did not wrap:  vtkPolyDataReader ();


// Did not wrap:  ~vtkPolyDataReader ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkPolyDataReader (const vtkPolyDataReader &);


// Did not wrap:  void vtkPolyDataReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPolyDataReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPolyDataReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPolyDataReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPolyDataReader();


};

} // end vtkIO
