#pragma once

// managed includes
#include "vtkXMLPDataReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLPUnstructuredDataReader : public vtkXMLPDataReader
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLPUnstructuredDataReader *NewInstance ();
  vtkXMLPUnstructuredDataReader^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void CopyOutputInformation (vtkInformation *outInfo, int port);
  void CopyOutputInformation(vtkInformation^ outInfo, int port);


// Did not wrap:  vtkXMLPUnstructuredDataReader ();


// Did not wrap:  ~vtkXMLPUnstructuredDataReader ();


// Did not wrap:  vtkPointSet *GetOutputAsPointSet ();


// Did not wrap:  vtkPointSet *GetPieceInputAsPointSet (int piece);


// Did not wrap:  virtual void SetupOutputTotals ();


// Did not wrap:  virtual void SetupNextPiece ();


// Did not wrap:  vtkIdType GetNumberOfPoints ();


// Did not wrap:  vtkIdType GetNumberOfCells ();


// Did not wrap:  void CopyArrayForPoints (vtkDataArray *inArray, vtkDataArray *outArray);


// Did not wrap:  void SetupEmptyOutput ();


// Did not wrap:  void SetupOutputInformation (vtkInformation *outInfo);


// Did not wrap:  void SetupOutputData ();


// Did not wrap:  virtual void GetOutputUpdateExtent (int &piece, int &numberOfPieces, int &ghostLevel) = 0;


// Did not wrap:  void ReadXMLData ();


// Did not wrap:  int ReadPrimaryElement (vtkXMLDataElement *ePrimary);


// Did not wrap:  void SetupUpdateExtent (int piece, int numberOfPieces, int ghostLevel);


// Did not wrap:  int ReadPieceData ();


// Did not wrap:  void CopyCellArray (vtkIdType totalNumberOfCells, vtkCellArray *inCells, vtkCellArray *outCells);


// Did not wrap:  virtual vtkIdType GetNumberOfPointsInPiece (int piece);


// Did not wrap:  virtual vtkIdType GetNumberOfCellsInPiece (int piece);


// Did not wrap:  vtkXMLPUnstructuredDataReader (const vtkXMLPUnstructuredDataReader &);


// Did not wrap:  void vtkXMLPUnstructuredDataReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLPUnstructuredDataReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLPUnstructuredDataReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLPUnstructuredDataReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLPUnstructuredDataReader();


};

} // end vtkIO
