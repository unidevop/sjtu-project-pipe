#pragma once

// managed includes
#include "vtkXMLReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLDataReader : public vtkXMLReader
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLDataReader *NewInstance ();
  vtkXMLDataReader^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual vtkIdType GetNumberOfPoints () = 0;
/// <summary>
/// <para>Get the number of points in the output.</para>
/// </summary>
  int GetNumberOfPoints();


  // virtual vtkIdType GetNumberOfCells () = 0;
/// <summary>
/// <para>Get the number of cells in the output.</para>
/// </summary>
  int GetNumberOfCells();


  // virtual void CopyOutputInformation (vtkInformation *outInfo, int port);
  void CopyOutputInformation(vtkInformation^ outInfo, int port);


// Did not wrap:  vtkXMLDataReader ();


// Did not wrap:  ~vtkXMLDataReader ();


// Did not wrap:  virtual void CreateXMLParser ();


// Did not wrap:  virtual void DestroyXMLParser ();


// Did not wrap:  virtual void SetupOutputInformation (vtkInformation *outInfo);


// Did not wrap:  int ReadPrimaryElement (vtkXMLDataElement *ePrimary);


// Did not wrap:  void SetupOutputData ();


// Did not wrap:  virtual void SetupPieces (int numPieces);


// Did not wrap:  virtual void DestroyPieces ();


// Did not wrap:  int ReadPiece (vtkXMLDataElement *ePiece, int piece);


// Did not wrap:  virtual int ReadPiece (vtkXMLDataElement *ePiece);


// Did not wrap:  int ReadPieceData (int piece);


// Did not wrap:  virtual int ReadPieceData ();


// Did not wrap:  virtual void ReadXMLData ();


// Did not wrap:  virtual int ReadArrayForPoints (vtkXMLDataElement *da, vtkDataArray *outArray);


// Did not wrap:  virtual int ReadArrayForCells (vtkXMLDataElement *da, vtkDataArray *outArray);


// Did not wrap:  int ReadData (vtkXMLDataElement *da, void *data, int wordType, vtkIdType startWord, vtkIdType numWords);


// Did not wrap:  static void DataProgressCallbackFunction (vtkObject *, unsigned long , void *, void *);


// Did not wrap:  virtual void DataProgressCallback ();


// Did not wrap:  int PointDataNeedToReadTimeStep (vtkXMLDataElement *eNested);


// Did not wrap:  int CellDataNeedToReadTimeStep (vtkXMLDataElement *eNested);


// Did not wrap:  vtkXMLDataReader (const vtkXMLDataReader &);


// Did not wrap:  void vtkXMLDataReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLDataReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLDataReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLDataReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLDataReader();


};

} // end vtkIO
