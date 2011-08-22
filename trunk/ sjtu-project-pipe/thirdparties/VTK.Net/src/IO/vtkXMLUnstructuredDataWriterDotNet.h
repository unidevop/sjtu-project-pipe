#pragma once

// managed includes
#include "vtkXMLWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLUnstructuredDataWriter : public vtkXMLWriter
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLUnstructuredDataWriter *NewInstance ();
  vtkXMLUnstructuredDataWriter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetNumberOfPieces (int );
/// <summary>
/// <para>Get/Set the number of pieces used to stream the image through the pipeline while writing to the file.</para>
/// </summary>
  void SetNumberOfPieces(int arg0);


  // int GetNumberOfPieces ();
/// <summary>
/// <para>Get/Set the number of pieces used to stream the image through the pipeline while writing to the file.</para>
/// </summary>
  int GetNumberOfPieces();


  // void SetWritePiece (int );
/// <summary>
/// <para>Get/Set the piece to write to the file.  If this is negative or equal to the NumberOfPieces, all pieces will be written.</para>
/// </summary>
  void SetWritePiece(int arg0);


  // int GetWritePiece ();
/// <summary>
/// <para>Get/Set the piece to write to the file.  If this is negative or equal to the NumberOfPieces, all pieces will be written.</para>
/// </summary>
  int GetWritePiece();


  // void SetGhostLevel (int );
/// <summary>
/// <para>Get/Set the ghost level used to pad each piece.</para>
/// </summary>
  void SetGhostLevel(int arg0);


  // int GetGhostLevel ();
/// <summary>
/// <para>Get/Set the ghost level used to pad each piece.</para>
/// </summary>
  int GetGhostLevel();


// Did not wrap:  int ProcessRequest (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkXMLUnstructuredDataWriter ();


// Did not wrap:  ~vtkXMLUnstructuredDataWriter ();


// Did not wrap:  vtkPointSet *GetInputAsPointSet ();


// Did not wrap:  virtual const char *GetDataSetName () = 0;


// Did not wrap:  virtual void SetInputUpdateExtent (int piece, int numPieces, int ghostLevel);


// Did not wrap:  virtual int WriteHeader ();


// Did not wrap:  virtual int WriteAPiece ();


// Did not wrap:  virtual int WriteFooter ();


// Did not wrap:  virtual void AllocatePositionArrays ();


// Did not wrap:  virtual void DeletePositionArrays ();


// Did not wrap:  virtual int WriteInlineMode (vtkIndent indent);


// Did not wrap:  virtual void WriteInlinePieceAttributes ();


// Did not wrap:  virtual void WriteInlinePiece (vtkIndent indent);


// Did not wrap:  virtual void WriteAppendedPieceAttributes (int index);


// Did not wrap:  virtual void WriteAppendedPiece (int index, vtkIndent indent);


// Did not wrap:  virtual void WriteAppendedPieceData (int index);


// Did not wrap:  void WriteCellsInline (const char *name, vtkCellArray *cells, vtkDataArray *types, vtkIndent indent);


// Did not wrap:  void WriteCellsAppended (const char *name, vtkDataArray *types, vtkIndent indent, OffsetsManagerGroup *cellsManager);


// Did not wrap:  void WriteCellsAppendedData (vtkCellArray *cells, vtkDataArray *types, int timestep, OffsetsManagerGroup *cellsManager);


// Did not wrap:  void ConvertCells (vtkCellArray *cells);


// Did not wrap:  virtual vtkIdType GetNumberOfInputPoints ();


// Did not wrap:  virtual vtkIdType GetNumberOfInputCells () = 0;


// Did not wrap:  void CalculateDataFractions (float *fractions);


// Did not wrap:  void CalculateCellFractions (float *fractions, vtkIdType typesSize);


// Did not wrap:  vtkXMLUnstructuredDataWriter (const vtkXMLUnstructuredDataWriter &);


// Did not wrap:  void vtkXMLUnstructuredDataWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLUnstructuredDataWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLUnstructuredDataWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLUnstructuredDataWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLUnstructuredDataWriter();


};

} // end vtkIO
