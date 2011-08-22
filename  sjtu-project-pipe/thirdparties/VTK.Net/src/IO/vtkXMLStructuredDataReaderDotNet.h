#pragma once

// managed includes
#include "vtkXMLDataReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLStructuredDataReader : public vtkXMLDataReader
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLStructuredDataReader *NewInstance ();
  vtkXMLStructuredDataReader^ NewInstance();


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


  // void SetWholeSlices (int );
/// <summary>
/// <para>Get/Set whether the reader gets a whole slice from disk when only a rectangle inside it is needed.  This mode reads more data than necessary, but prevents many short reads from interacting poorly with the compression and encoding schemes.</para>
/// </summary>
  void SetWholeSlices(int arg0);


  // int GetWholeSlices ();
/// <summary>
/// <para>Get/Set whether the reader gets a whole slice from disk when only a rectangle inside it is needed.  This mode reads more data than necessary, but prevents many short reads from interacting poorly with the compression and encoding schemes.</para>
/// </summary>
  int GetWholeSlices();


  // void WholeSlicesOn ();
/// <summary>
/// <para>Get/Set whether the reader gets a whole slice from disk when only a rectangle inside it is needed.  This mode reads more data than necessary, but prevents many short reads from interacting poorly with the compression and encoding schemes.</para>
/// </summary>
  void WholeSlicesOn();


  // void WholeSlicesOff ();
/// <summary>
/// <para>Get/Set whether the reader gets a whole slice from disk when only a rectangle inside it is needed.  This mode reads more data than necessary, but prevents many short reads from interacting poorly with the compression and encoding schemes.</para>
/// </summary>
  void WholeSlicesOff();


  // virtual void CopyOutputInformation (vtkInformation *outInfo, int port);
/// <summary>
/// <para>For the specified port, copy the information this reader sets up in SetupOutputInformation to outInfo</para>
/// </summary>
  void CopyOutputInformation(vtkInformation^ outInfo, int port);


// Did not wrap:  vtkXMLStructuredDataReader ();


// Did not wrap:  ~vtkXMLStructuredDataReader ();


// Did not wrap:  virtual void SetOutputExtent (int *extent) = 0;


// Did not wrap:  int ReadPrimaryElement (vtkXMLDataElement *ePrimary);


// Did not wrap:  void ReadXMLData ();


// Did not wrap:  void SetupEmptyOutput ();


// Did not wrap:  void SetupPieces (int numPieces);


// Did not wrap:  void DestroyPieces ();


// Did not wrap:  int ReadArrayForPoints (vtkXMLDataElement *da, vtkDataArray *outArray);


// Did not wrap:  int ReadArrayForCells (vtkXMLDataElement *da, vtkDataArray *outArray);


// Did not wrap:  int ReadPiece (vtkXMLDataElement *ePiece);


// Did not wrap:  int ReadSubExtent (int *inExtent, int *inDimensions, vtkIdType *inIncrements, int *outExtent, int *outDimensions, vtkIdType *outIncrements, int *subExtent, int *subDimensions, vtkXMLDataElement *da, vtkDataArray *array);


// Did not wrap:  vtkXMLStructuredDataReader (const vtkXMLStructuredDataReader &);


// Did not wrap:  void vtkXMLStructuredDataReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLStructuredDataReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLStructuredDataReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLStructuredDataReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLStructuredDataReader();


};

} // end vtkIO
