#pragma once

// managed includes
#include "vtkXMLPDataReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLPStructuredDataReader : public vtkXMLPDataReader
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLPStructuredDataReader *NewInstance ();
  vtkXMLPStructuredDataReader^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual vtkExtentTranslator *GetExtentTranslator ();
/// <summary>
/// <para>Get an extent translator that will create pieces matching the input file's piece breakdown.  This can be used further down the pipeline to prevent reading from outside this process's piece. The translator is only valid after an UpdateInformation has been called.</para>
/// </summary>
  vtkExtentTranslator^ GetExtentTranslator();


  // virtual void CopyOutputInformation (vtkInformation *outInfo, int port);
  void CopyOutputInformation(vtkInformation^ outInfo, int port);


// Did not wrap:  vtkXMLPStructuredDataReader ();


// Did not wrap:  ~vtkXMLPStructuredDataReader ();


// Did not wrap:  vtkIdType GetNumberOfPoints ();


// Did not wrap:  vtkIdType GetNumberOfCells ();


// Did not wrap:  void CopyArrayForPoints (vtkDataArray *inArray, vtkDataArray *outArray);


// Did not wrap:  void CopyArrayForCells (vtkDataArray *inArray, vtkDataArray *outArray);


// Did not wrap:  virtual void SetOutputExtent (int *extent) = 0;


// Did not wrap:  virtual void GetPieceInputExtent (int index, int *extent) = 0;


// Did not wrap:  void ReadXMLData ();


// Did not wrap:  int ReadPrimaryElement (vtkXMLDataElement *ePrimary);


// Did not wrap:  void SetupOutputData ();


// Did not wrap:  void SetupEmptyOutput ();


// Did not wrap:  void SetupPieces (int numPieces);


// Did not wrap:  void DestroyPieces ();


// Did not wrap:  int ReadPiece (vtkXMLDataElement *ePiece);


// Did not wrap:  int ReadPieceData ();


// Did not wrap:  void CopySubExtent (int *inExtent, int *inDimensions, vtkIdType *inIncrements, int *outExtent, int *outDimensions, vtkIdType *outIncrements, int *subExtent, int *subDimensions, vtkDataArray *inArray, vtkDataArray *outArray);


// Did not wrap:  int ComputePieceSubExtents ();


// Did not wrap:  vtkXMLPStructuredDataReader (const vtkXMLPStructuredDataReader &);


// Did not wrap:  void vtkXMLPStructuredDataReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLPStructuredDataReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLPStructuredDataReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLPStructuredDataReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLPStructuredDataReader();


};

} // end vtkIO
