#pragma once

// managed includes
#include "vtkXMLPStructuredDataReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLPRectilinearGridReader : public vtkXMLPStructuredDataReader
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLPRectilinearGridReader *NewInstance ();
  vtkXMLPRectilinearGridReader^ NewInstance();


  // vtkXMLPRectilinearGridReader *SafeDownCast (vtkObject* o);
  static vtkXMLPRectilinearGridReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkXMLPRectilinearGridReader *New ();


  // void SetOutput (vtkRectilinearGrid *output);
/// <summary>
/// <para>Get/Set the reader's output.</para>
/// </summary>
  void SetOutput(vtkRectilinearGrid^ output);


  // vtkRectilinearGrid *GetOutput ();
/// <summary>
/// <para>Get/Set the reader's output.</para>
/// </summary>
  vtkRectilinearGrid^ GetOutput();


  // vtkRectilinearGrid *GetOutput (int idx);
/// <summary>
/// <para>Get/Set the reader's output.</para>
/// </summary>
  vtkRectilinearGrid^ GetOutput(int idx);


// Did not wrap:  vtkXMLPRectilinearGridReader ();


// Did not wrap:  ~vtkXMLPRectilinearGridReader ();


// Did not wrap:  vtkRectilinearGrid *GetPieceInput (int index);


// Did not wrap:  const char *GetDataSetName ();


// Did not wrap:  void SetOutputExtent (int *extent);


// Did not wrap:  void GetPieceInputExtent (int index, int *extent);


// Did not wrap:  int ReadPrimaryElement (vtkXMLDataElement *ePrimary);


// Did not wrap:  void SetupOutputData ();


// Did not wrap:  int ReadPieceData ();


// Did not wrap:  vtkXMLDataReader *CreatePieceReader ();


// Did not wrap:  void CopySubCoordinates (int *inBounds, int *outBounds, int *subBounds, vtkDataArray *inArray, vtkDataArray *outArray);


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkXMLPRectilinearGridReader (const vtkXMLPRectilinearGridReader &);


// Did not wrap:  void vtkXMLPRectilinearGridReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLPRectilinearGridReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLPRectilinearGridReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLPRectilinearGridReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLPRectilinearGridReader();


};

} // end vtkIO
