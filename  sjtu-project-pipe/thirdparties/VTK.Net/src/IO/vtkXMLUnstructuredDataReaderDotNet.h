#pragma once

// managed includes
#include "vtkXMLDataReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLUnstructuredDataReader : public vtkXMLDataReader
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLUnstructuredDataReader *NewInstance ();
  vtkXMLUnstructuredDataReader^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual vtkIdType GetNumberOfPoints ();
/// <summary>
/// <para>Get the number of points in the output.</para>
/// </summary>
  int GetNumberOfPoints();


  // virtual vtkIdType GetNumberOfCells ();
/// <summary>
/// <para>Get the number of cells in the output.</para>
/// </summary>
  int GetNumberOfCells();


  // void SetupUpdateExtent (int piece, int numberOfPieces, int ghostLevel);
/// <summary>
/// <para>Setup the reader as if the given update extent were requested by its output.  This can be used after an UpdateInformation to validate GetNumberOfPoints() and GetNumberOfCells() without actually reading data.</para>
/// </summary>
  void SetupUpdateExtent(int piece, int numberOfPieces, int ghostLevel);


  // virtual void CopyOutputInformation (vtkInformation *outInfo, int port);
  void CopyOutputInformation(vtkInformation^ outInfo, int port);


// Did not wrap:  vtkXMLUnstructuredDataReader ();


// Did not wrap:  ~vtkXMLUnstructuredDataReader ();


// Did not wrap:  vtkPointSet *GetOutputAsPointSet ();


// Did not wrap:  vtkXMLDataElement *FindDataArrayWithName (vtkXMLDataElement *eParent, const char *name);


// Did not wrap:  vtkIdTypeArray *ConvertToIdTypeArray (vtkDataArray *a);


// Did not wrap:  vtkUnsignedCharArray *ConvertToUnsignedCharArray (vtkDataArray *a);


// Did not wrap:  void ReadXMLData ();


// Did not wrap:  virtual void SetupEmptyOutput ();


// Did not wrap:  virtual void GetOutputUpdateExtent (int &piece, int &numberOfPieces, int &ghostLevel) = 0;


// Did not wrap:  virtual void SetupOutputTotals ();


// Did not wrap:  virtual void SetupNextPiece ();


// Did not wrap:  void SetupPieces (int numPieces);


// Did not wrap:  void DestroyPieces ();


// Did not wrap:  void SetupOutputInformation (vtkInformation *outInfo);


// Did not wrap:  void SetupOutputData ();


// Did not wrap:  int ReadPiece (vtkXMLDataElement *ePiece);


// Did not wrap:  int ReadPieceData ();


// Did not wrap:  int ReadCellArray (vtkIdType numberOfCells, vtkIdType totalNumberOfCells, vtkXMLDataElement *eCells, vtkCellArray *outCells);


// Did not wrap:  int ReadArrayForPoints (vtkXMLDataElement *da, vtkDataArray *outArray);


// Did not wrap:  virtual vtkIdType GetNumberOfPointsInPiece (int piece);


// Did not wrap:  virtual vtkIdType GetNumberOfCellsInPiece (int piece) = 0;


// Did not wrap:  int PointsNeedToReadTimeStep (vtkXMLDataElement *eNested);


// Did not wrap:  int CellsNeedToReadTimeStep (vtkXMLDataElement *eNested, int &cellstimestep, unsigned long &cellsoffset);


// Did not wrap:  vtkXMLUnstructuredDataReader (const vtkXMLUnstructuredDataReader &);


// Did not wrap:  void vtkXMLUnstructuredDataReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLUnstructuredDataReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLUnstructuredDataReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLUnstructuredDataReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLUnstructuredDataReader();


};

} // end vtkIO
