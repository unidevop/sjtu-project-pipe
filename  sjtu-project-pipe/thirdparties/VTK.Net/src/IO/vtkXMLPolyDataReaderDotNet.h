#pragma once

// managed includes
#include "vtkXMLUnstructuredDataReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLPolyDataReader : public vtkXMLUnstructuredDataReader
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLPolyDataReader *NewInstance ();
  vtkXMLPolyDataReader^ NewInstance();


  // vtkXMLPolyDataReader *SafeDownCast (vtkObject* o);
  static vtkXMLPolyDataReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkXMLPolyDataReader *New ();


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


  // virtual vtkIdType GetNumberOfVerts ();
/// <summary>
/// <para>Get the number of verts/lines/strips/polys in the output.</para>
/// </summary>
  int GetNumberOfVerts();


  // virtual vtkIdType GetNumberOfLines ();
/// <summary>
/// <para>Get the number of verts/lines/strips/polys in the output.</para>
/// </summary>
  int GetNumberOfLines();


  // virtual vtkIdType GetNumberOfStrips ();
/// <summary>
/// <para>Get the number of verts/lines/strips/polys in the output.</para>
/// </summary>
  int GetNumberOfStrips();


  // virtual vtkIdType GetNumberOfPolys ();
/// <summary>
/// <para>Get the number of verts/lines/strips/polys in the output.</para>
/// </summary>
  int GetNumberOfPolys();


// Did not wrap:  vtkXMLPolyDataReader ();


// Did not wrap:  ~vtkXMLPolyDataReader ();


// Did not wrap:  const char *GetDataSetName ();


// Did not wrap:  void GetOutputUpdateExtent (int &piece, int &numberOfPieces, int &ghostLevel);


// Did not wrap:  void SetupOutputTotals ();


// Did not wrap:  void SetupNextPiece ();


// Did not wrap:  void SetupPieces (int numPieces);


// Did not wrap:  void DestroyPieces ();


// Did not wrap:  void SetupOutputData ();


// Did not wrap:  int ReadPiece (vtkXMLDataElement *ePiece);


// Did not wrap:  int ReadPieceData ();


// Did not wrap:  int ReadArrayForCells (vtkXMLDataElement *da, vtkDataArray *outArray);


// Did not wrap:  virtual vtkIdType GetNumberOfCellsInPiece (int piece);


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkXMLPolyDataReader (const vtkXMLPolyDataReader &);


// Did not wrap:  void vtkXMLPolyDataReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLPolyDataReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLPolyDataReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLPolyDataReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLPolyDataReader();


};

} // end vtkIO
