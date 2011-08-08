#pragma once

// managed includes
#include "vtkXMLWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLStructuredDataWriter : public vtkXMLWriter
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLStructuredDataWriter *NewInstance ();
  vtkXMLStructuredDataWriter^ NewInstance();


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


  // void SetWriteExtent (int , int , int , int , int , int );
/// <summary>
/// <para>Get/Set the extent of the input that should be treated as the WholeExtent in the output file.  The default is the WholeExtent of the input.</para>
/// </summary>
  void SetWriteExtent(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5);


  // void SetWriteExtent (int  a[6]);
/// <summary>
/// <para>Get/Set the extent of the input that should be treated as the WholeExtent in the output file.  The default is the WholeExtent of the input.</para>
/// </summary>
  void SetWriteExtent(array<int>^ a);


  // int  *GetWriteExtent ();
/// <summary>
/// <para>Get/Set the extent of the input that should be treated as the WholeExtent in the output file.  The default is the WholeExtent of the input.</para>
/// </summary>
  array<int>^ GetWriteExtent();


  // virtual void SetExtentTranslator (vtkExtentTranslator *);
/// <summary>
/// <para>Get/Set the extent translator used for streaming.</para>
/// </summary>
  void SetExtentTranslator(vtkExtentTranslator^ arg0);


  // vtkExtentTranslator *GetExtentTranslator ();
/// <summary>
/// <para>Get/Set the extent translator used for streaming.</para>
/// </summary>
  vtkExtentTranslator^ GetExtentTranslator();


// Did not wrap:  vtkXMLStructuredDataWriter ();


// Did not wrap:  ~vtkXMLStructuredDataWriter ();


// Did not wrap:  virtual void WritePrimaryElementAttributes (ostream &os, vtkIndent indent);


// Did not wrap:  virtual void WriteAppendedPiece (int index, vtkIndent indent);


// Did not wrap:  virtual void WriteAppendedPieceData (int index);


// Did not wrap:  virtual void WriteInlinePiece (vtkIndent indent);


// Did not wrap:  virtual void GetInputExtent (int *extent) = 0;


// Did not wrap:  virtual int WriteHeader ();


// Did not wrap:  virtual int WriteAPiece ();


// Did not wrap:  virtual int WriteFooter ();


// Did not wrap:  virtual void AllocatePositionArrays ();


// Did not wrap:  virtual void DeletePositionArrays ();


// Did not wrap:  void SetupExtentTranslator ();


// Did not wrap:  vtkDataArray *CreateExactExtent (vtkDataArray *array, int *inExtent, int *outExtent, int isPoint);


// Did not wrap:  virtual int WriteInlineMode (vtkIndent indent);


// Did not wrap:  vtkIdType GetStartTuple (int *extent, vtkIdType *increments, int i, int j, int k);


// Did not wrap:  void CalculatePieceFractions (float *fractions);


// Did not wrap:  vtkDataArray *CreateArrayForPoints (vtkDataArray *inArray);


// Did not wrap:  vtkDataArray *CreateArrayForCells (vtkDataArray *inArray);


// Did not wrap:  void SetInputUpdateExtent (int piece);


// Did not wrap:  int ProcessRequest (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  void SetInternalWriteExtent (int , int , int , int , int , int );


// Did not wrap:  void SetInternalWriteExtent (int  a[6]);


// Did not wrap:  vtkXMLStructuredDataWriter (const vtkXMLStructuredDataWriter &);


// Did not wrap:  void vtkXMLStructuredDataWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLStructuredDataWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLStructuredDataWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLStructuredDataWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLStructuredDataWriter();


};

} // end vtkIO
