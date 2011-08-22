#pragma once

// managed includes
#include "vtkDataReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkDataSetReader : public vtkDataReader
{

public:
// Did not wrap:  static vtkDataSetReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDataSetReader *NewInstance ();
  vtkDataSetReader^ NewInstance();


  // vtkDataSetReader *SafeDownCast (vtkObject* o);
  static vtkDataSetReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkDataSet *GetOutput ();
/// <summary>
/// <para>Get the output of this filter</para>
/// </summary>
  vtkDataSet^ GetOutput();


  // vtkDataSet *GetOutput (int idx);
/// <summary>
/// <para>Get the output of this filter</para>
/// </summary>
  vtkDataSet^ GetOutput(int idx);


  // vtkPolyData *GetPolyDataOutput ();
/// <summary>
/// <para>Get the output as various concrete types. This method is typically used when you know exactly what type of data is being read.  Otherwise, use the general GetOutput() method. If the wrong type is used NULL is returned.  (You must also set the filename of the object prior to getting the output.)</para>
/// </summary>
  vtkPolyData^ GetPolyDataOutput();


  // vtkStructuredPoints *GetStructuredPointsOutput ();
/// <summary>
/// <para>Get the output as various concrete types. This method is typically used when you know exactly what type of data is being read.  Otherwise, use the general GetOutput() method. If the wrong type is used NULL is returned.  (You must also set the filename of the object prior to getting the output.)</para>
/// </summary>
  vtkStructuredPoints^ GetStructuredPointsOutput();


  // vtkStructuredGrid *GetStructuredGridOutput ();
/// <summary>
/// <para>Get the output as various concrete types. This method is typically used when you know exactly what type of data is being read.  Otherwise, use the general GetOutput() method. If the wrong type is used NULL is returned.  (You must also set the filename of the object prior to getting the output.)</para>
/// </summary>
  vtkStructuredGrid^ GetStructuredGridOutput();


  // vtkUnstructuredGrid *GetUnstructuredGridOutput ();
/// <summary>
/// <para>Get the output as various concrete types. This method is typically used when you know exactly what type of data is being read.  Otherwise, use the general GetOutput() method. If the wrong type is used NULL is returned.  (You must also set the filename of the object prior to getting the output.)</para>
/// </summary>
  vtkUnstructuredGrid^ GetUnstructuredGridOutput();


  // vtkRectilinearGrid *GetRectilinearGridOutput ();
/// <summary>
/// <para>Get the output as various concrete types. This method is typically used when you know exactly what type of data is being read.  Otherwise, use the general GetOutput() method. If the wrong type is used NULL is returned.  (You must also set the filename of the object prior to getting the output.)</para>
/// </summary>
  vtkRectilinearGrid^ GetRectilinearGridOutput();


  // virtual int ReadOutputType ();
/// <summary>
/// <para>This method can be used to find out the type of output expected without needing to read the whole file.</para>
/// </summary>
  int ReadOutputType();


// Did not wrap:  vtkDataSetReader ();


// Did not wrap:  ~vtkDataSetReader ();


// Did not wrap:  virtual int ProcessRequest (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestDataObject (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkDataSetReader (const vtkDataSetReader &);


// Did not wrap:  void vtkDataSetReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDataSetReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDataSetReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDataSetReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDataSetReader();


};

} // end vtkIO
