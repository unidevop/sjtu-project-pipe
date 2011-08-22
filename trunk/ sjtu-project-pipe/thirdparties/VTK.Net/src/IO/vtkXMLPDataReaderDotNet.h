#pragma once

// managed includes
#include "vtkXMLReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLPDataReader : public vtkXMLReader
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLPDataReader *NewInstance ();
  vtkXMLPDataReader^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int GetNumberOfPieces ();
/// <summary>
/// <para>Get the number of pieces from the summary file being read.</para>
/// </summary>
  int GetNumberOfPieces();


  // virtual void CopyOutputInformation (vtkInformation *outInfo, int port);
  void CopyOutputInformation(vtkInformation^ outInfo, int port);


// Did not wrap:  vtkXMLPDataReader ();


// Did not wrap:  ~vtkXMLPDataReader ();


// Did not wrap:  int ReadXMLInformation ();


// Did not wrap:  virtual void SetupOutputInformation (vtkInformation *outInfo);


// Did not wrap:  int ReadPrimaryElement (vtkXMLDataElement *ePrimary);


// Did not wrap:  vtkDataSet *GetPieceInputAsDataSet (int piece);


// Did not wrap:  void SetupOutputData ();


// Did not wrap:  virtual vtkXMLDataReader *CreatePieceReader () = 0;


// Did not wrap:  virtual vtkIdType GetNumberOfPoints () = 0;


// Did not wrap:  virtual vtkIdType GetNumberOfCells () = 0;


// Did not wrap:  virtual void CopyArrayForPoints (vtkDataArray *inArray, vtkDataArray *outArray) = 0;


// Did not wrap:  virtual void CopyArrayForCells (vtkDataArray *inArray, vtkDataArray *outArray) = 0;


// Did not wrap:  virtual void SetupPieces (int numPieces);


// Did not wrap:  virtual void DestroyPieces ();


// Did not wrap:  int ReadPiece (vtkXMLDataElement *ePiece, int index);


// Did not wrap:  virtual int ReadPiece (vtkXMLDataElement *ePiece);


// Did not wrap:  int ReadPieceData (int index);


// Did not wrap:  virtual int ReadPieceData ();


// Did not wrap:  int CanReadPiece (int index);


// Did not wrap:  char *CreatePieceFileName (const char *fileName);


// Did not wrap:  void SplitFileName ();


// Did not wrap:  static void PieceProgressCallbackFunction (vtkObject *, unsigned long , void *, void *);


// Did not wrap:  virtual void PieceProgressCallback ();


// Did not wrap:  vtkXMLPDataReader (const vtkXMLPDataReader &);


// Did not wrap:  void vtkXMLPDataReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLPDataReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLPDataReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLPDataReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLPDataReader();


};

} // end vtkIO
