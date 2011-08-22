#pragma once

// managed includes
#include "vtkXMLStructuredDataReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLRectilinearGridReader : public vtkXMLStructuredDataReader
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLRectilinearGridReader *NewInstance ();
  vtkXMLRectilinearGridReader^ NewInstance();


  // vtkXMLRectilinearGridReader *SafeDownCast (vtkObject* o);
  static vtkXMLRectilinearGridReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkXMLRectilinearGridReader *New ();


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


// Did not wrap:  vtkXMLRectilinearGridReader ();


// Did not wrap:  ~vtkXMLRectilinearGridReader ();


// Did not wrap:  const char *GetDataSetName ();


// Did not wrap:  void SetOutputExtent (int *extent);


// Did not wrap:  void SetupPieces (int numPieces);


// Did not wrap:  void DestroyPieces ();


// Did not wrap:  void SetupOutputData ();


// Did not wrap:  int ReadPiece (vtkXMLDataElement *ePiece);


// Did not wrap:  int ReadPieceData ();


// Did not wrap:  int ReadSubCoordinates (int *inBounds, int *outBounds, int *subBounds, vtkXMLDataElement *da, vtkDataArray *array);


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkXMLRectilinearGridReader (const vtkXMLRectilinearGridReader &);


// Did not wrap:  void vtkXMLRectilinearGridReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLRectilinearGridReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLRectilinearGridReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLRectilinearGridReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLRectilinearGridReader();


};

} // end vtkIO
