#pragma once

// managed includes
#include "vtkXMLPUnstructuredDataReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLPUnstructuredGridReader : public vtkXMLPUnstructuredDataReader
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLPUnstructuredGridReader *NewInstance ();
  vtkXMLPUnstructuredGridReader^ NewInstance();


  // vtkXMLPUnstructuredGridReader *SafeDownCast (vtkObject* o);
  static vtkXMLPUnstructuredGridReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkXMLPUnstructuredGridReader *New ();


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


// Did not wrap:  vtkXMLPUnstructuredGridReader ();


// Did not wrap:  ~vtkXMLPUnstructuredGridReader ();


// Did not wrap:  const char *GetDataSetName ();


// Did not wrap:  void GetOutputUpdateExtent (int &piece, int &numberOfPieces, int &ghostLevel);


// Did not wrap:  void SetupOutputTotals ();


// Did not wrap:  void SetupOutputData ();


// Did not wrap:  void SetupNextPiece ();


// Did not wrap:  int ReadPieceData ();


// Did not wrap:  void CopyArrayForCells (vtkDataArray *inArray, vtkDataArray *outArray);


// Did not wrap:  vtkXMLDataReader *CreatePieceReader ();


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkXMLPUnstructuredGridReader (const vtkXMLPUnstructuredGridReader &);


// Did not wrap:  void vtkXMLPUnstructuredGridReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLPUnstructuredGridReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLPUnstructuredGridReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLPUnstructuredGridReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLPUnstructuredGridReader();


};

} // end vtkIO
