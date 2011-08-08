#pragma once

// managed includes
#include "vtkDataReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkDataObjectReader : public vtkDataReader
{

public:
// Did not wrap:  static vtkDataObjectReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDataObjectReader *NewInstance ();
  vtkDataObjectReader^ NewInstance();


  // vtkDataObjectReader *SafeDownCast (vtkObject* o);
  static vtkDataObjectReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkDataObject *GetOutput ();
/// <summary>
/// <para>Get the output field of this reader.</para>
/// </summary>
  vtkDataObject^ GetOutput();


  // vtkDataObject *GetOutput (int idx);
/// <summary>
/// <para>Get the output field of this reader.</para>
/// </summary>
  vtkDataObject^ GetOutput(int idx);


  // void SetOutput (vtkDataObject *);
/// <summary>
/// <para>Get the output field of this reader.</para>
/// </summary>
  void SetOutput(vtkDataObject^ arg0);


// Did not wrap:  vtkDataObjectReader ();


// Did not wrap:  ~vtkDataObjectReader ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkDataObjectReader (const vtkDataObjectReader &);


// Did not wrap:  void vtkDataObjectReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDataObjectReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDataObjectReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDataObjectReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDataObjectReader();


};

} // end vtkIO
