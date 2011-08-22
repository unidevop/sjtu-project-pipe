#pragma once

// managed includes
#include "vtkXMLUnstructuredDataReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLUnstructuredGridReader : public vtkXMLUnstructuredDataReader
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLUnstructuredGridReader *NewInstance ();
  vtkXMLUnstructuredGridReader^ NewInstance();


  // vtkXMLUnstructuredGridReader *SafeDownCast (vtkObject* o);
  static vtkXMLUnstructuredGridReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkXMLUnstructuredGridReader *New ();


  // void SetOutput (vtkUnstructuredGrid *output);
/// <summary>
/// <para>Get/Set the reader's output.</para>
/// </summary>
  void SetOutput(vtkUnstructuredGrid^ output);


  // vtkUnstructuredGrid *GetOutput ();
/// <summary>
/// <para>Get/Set the reader's output.</para>
/// </summary>
  vtkUnstructuredGrid^ GetOutput();


  // vtkUnstructuredGrid *GetOutput (int idx);
/// <summary>
/// <para>Get/Set the reader's output.</para>
/// </summary>
  vtkUnstructuredGrid^ GetOutput(int idx);


// Did not wrap:  vtkXMLUnstructuredGridReader ();


// Did not wrap:  ~vtkXMLUnstructuredGridReader ();


// Did not wrap:  const char *GetDataSetName ();


// Did not wrap:  void GetOutputUpdateExtent (int &piece, int &numberOfPieces, int &ghostLevel);


// Did not wrap:  void SetupOutputTotals ();


// Did not wrap:  void SetupPieces (int numPieces);


// Did not wrap:  void DestroyPieces ();


// Did not wrap:  void SetupOutputData ();


// Did not wrap:  int ReadPiece (vtkXMLDataElement *ePiece);


// Did not wrap:  void SetupNextPiece ();


// Did not wrap:  int ReadPieceData ();


// Did not wrap:  int ReadArrayForCells (vtkXMLDataElement *da, vtkDataArray *outArray);


// Did not wrap:  virtual vtkIdType GetNumberOfCellsInPiece (int piece);


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkXMLUnstructuredGridReader (const vtkXMLUnstructuredGridReader &);


// Did not wrap:  void vtkXMLUnstructuredGridReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLUnstructuredGridReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLUnstructuredGridReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLUnstructuredGridReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLUnstructuredGridReader();


};

} // end vtkIO
