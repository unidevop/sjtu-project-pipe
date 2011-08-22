#pragma once

// managed includes
#include "vtkDataReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkStructuredPointsReader : public vtkDataReader
{

public:
// Did not wrap:  static vtkStructuredPointsReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkStructuredPointsReader *NewInstance ();
  vtkStructuredPointsReader^ NewInstance();


  // vtkStructuredPointsReader *SafeDownCast (vtkObject* o);
  static vtkStructuredPointsReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetOutput (vtkStructuredPoints *output);
/// <summary>
/// <para>Set/Get the output of this reader.</para>
/// </summary>
  void SetOutput(vtkStructuredPoints^ output);


  // vtkStructuredPoints *GetOutput (int idx);
/// <summary>
/// <para>Set/Get the output of this reader.</para>
/// </summary>
  vtkStructuredPoints^ GetOutput(int idx);


  // vtkStructuredPoints *GetOutput ();
/// <summary>
/// <para>Set/Get the output of this reader.</para>
/// </summary>
  vtkStructuredPoints^ GetOutput();


  // virtual int ReadMetaData (vtkInformation *outInfo);
/// <summary>
/// <para>Read the meta information from the file.  This needs to be public to it can be accessed by vtkDataSetReader.</para>
/// </summary>
  int ReadMetaData(vtkInformation^ outInfo);


// Did not wrap:  vtkStructuredPointsReader ();


// Did not wrap:  ~vtkStructuredPointsReader ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkStructuredPointsReader (const vtkStructuredPointsReader &);


// Did not wrap:  void vtkStructuredPointsReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkStructuredPointsReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkStructuredPointsReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkStructuredPointsReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkStructuredPointsReader();


};

} // end vtkIO
