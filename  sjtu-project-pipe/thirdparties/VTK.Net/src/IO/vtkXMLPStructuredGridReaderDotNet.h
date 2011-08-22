#pragma once

// managed includes
#include "vtkXMLPStructuredDataReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLPStructuredGridReader : public vtkXMLPStructuredDataReader
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLPStructuredGridReader *NewInstance ();
  vtkXMLPStructuredGridReader^ NewInstance();


  // vtkXMLPStructuredGridReader *SafeDownCast (vtkObject* o);
  static vtkXMLPStructuredGridReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkXMLPStructuredGridReader *New ();


  // void SetOutput (vtkStructuredGrid *output);
/// <summary>
/// <para>Get/Set the reader's output.</para>
/// </summary>
  void SetOutput(vtkStructuredGrid^ output);


  // vtkStructuredGrid *GetOutput ();
/// <summary>
/// <para>Get/Set the reader's output.</para>
/// </summary>
  vtkStructuredGrid^ GetOutput();


  // vtkStructuredGrid *GetOutput (int idx);
/// <summary>
/// <para>Needed for ParaView</para>
/// </summary>
  vtkStructuredGrid^ GetOutput(int idx);


// Did not wrap:  vtkXMLPStructuredGridReader ();


// Did not wrap:  ~vtkXMLPStructuredGridReader ();


// Did not wrap:  vtkStructuredGrid *GetPieceInput (int index);


// Did not wrap:  const char *GetDataSetName ();


// Did not wrap:  void SetOutputExtent (int *extent);


// Did not wrap:  void GetPieceInputExtent (int index, int *extent);


// Did not wrap:  int ReadPrimaryElement (vtkXMLDataElement *ePrimary);


// Did not wrap:  void SetupOutputData ();


// Did not wrap:  int ReadPieceData ();


// Did not wrap:  vtkXMLDataReader *CreatePieceReader ();


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkXMLPStructuredGridReader (const vtkXMLPStructuredGridReader &);


// Did not wrap:  void vtkXMLPStructuredGridReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLPStructuredGridReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLPStructuredGridReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLPStructuredGridReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLPStructuredGridReader();


};

} // end vtkIO
