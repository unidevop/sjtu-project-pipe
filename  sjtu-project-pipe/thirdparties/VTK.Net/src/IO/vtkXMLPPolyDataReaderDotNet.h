#pragma once

// managed includes
#include "vtkXMLPUnstructuredDataReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLPPolyDataReader : public vtkXMLPUnstructuredDataReader
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLPPolyDataReader *NewInstance ();
  vtkXMLPPolyDataReader^ NewInstance();


  // vtkXMLPPolyDataReader *SafeDownCast (vtkObject* o);
  static vtkXMLPPolyDataReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkXMLPPolyDataReader *New ();


  // void SetOutput (vtkPolyData *output);
/// <summary>
/// <para>Get/Set the reader's output.</para>
/// </summary>
  void SetOutput(vtkPolyData^ output);


  // vtkPolyData *GetOutput ();
/// <summary>
/// <para>Get/Set the reader's output.</para>
/// </summary>
  vtkPolyData^ GetOutput();


  // vtkPolyData *GetOutput (int idx);
/// <summary>
/// <para>Get/Set the reader's output.</para>
/// </summary>
  vtkPolyData^ GetOutput(int idx);


// Did not wrap:  vtkXMLPPolyDataReader ();


// Did not wrap:  ~vtkXMLPPolyDataReader ();


// Did not wrap:  const char *GetDataSetName ();


// Did not wrap:  void GetOutputUpdateExtent (int &piece, int &numberOfPieces, int &ghostLevel);


// Did not wrap:  vtkIdType GetNumberOfCellsInPiece (int piece);


// Did not wrap:  vtkIdType GetNumberOfVertsInPiece (int piece);


// Did not wrap:  vtkIdType GetNumberOfLinesInPiece (int piece);


// Did not wrap:  vtkIdType GetNumberOfStripsInPiece (int piece);


// Did not wrap:  vtkIdType GetNumberOfPolysInPiece (int piece);


// Did not wrap:  void SetupOutputTotals ();


// Did not wrap:  void SetupOutputData ();


// Did not wrap:  void SetupNextPiece ();


// Did not wrap:  int ReadPieceData ();


// Did not wrap:  void CopyArrayForCells (vtkDataArray *inArray, vtkDataArray *outArray);


// Did not wrap:  vtkXMLDataReader *CreatePieceReader ();


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkXMLPPolyDataReader (const vtkXMLPPolyDataReader &);


// Did not wrap:  void vtkXMLPPolyDataReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLPPolyDataReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLPPolyDataReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLPPolyDataReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLPPolyDataReader();


};

} // end vtkIO
