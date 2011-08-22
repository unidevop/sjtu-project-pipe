#pragma once

// managed includes
#include "vtkXMLWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLPDataWriter : public vtkXMLWriter
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLPDataWriter *NewInstance ();
  vtkXMLPDataWriter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetNumberOfPieces (int );
/// <summary>
/// <para>Get/Set the number of pieces that are being written in parallel.</para>
/// </summary>
  void SetNumberOfPieces(int arg0);


  // int GetNumberOfPieces ();
/// <summary>
/// <para>Get/Set the number of pieces that are being written in parallel.</para>
/// </summary>
  int GetNumberOfPieces();


  // void SetStartPiece (int );
/// <summary>
/// <para>Get/Set the range of pieces assigned to this writer.</para>
/// </summary>
  void SetStartPiece(int arg0);


  // int GetStartPiece ();
/// <summary>
/// <para>Get/Set the range of pieces assigned to this writer.</para>
/// </summary>
  int GetStartPiece();


  // void SetEndPiece (int );
/// <summary>
/// <para>Get/Set the range of pieces assigned to this writer.</para>
/// </summary>
  void SetEndPiece(int arg0);


  // int GetEndPiece ();
/// <summary>
/// <para>Get/Set the range of pieces assigned to this writer.</para>
/// </summary>
  int GetEndPiece();


  // void SetGhostLevel (int );
/// <summary>
/// <para>Get/Set the ghost level used for this writer's piece.</para>
/// </summary>
  void SetGhostLevel(int arg0);


  // int GetGhostLevel ();
/// <summary>
/// <para>Get/Set the ghost level used for this writer's piece.</para>
/// </summary>
  int GetGhostLevel();


  // virtual void SetWriteSummaryFile (int flag);
/// <summary>
/// <para>Get/Set whether this instance of the writer should write the summary file that refers to all of the pieces' individual files. Default is yes only for piece 0 writer.</para>
/// </summary>
  void SetWriteSummaryFile(int flag);


  // int GetWriteSummaryFile ();
/// <summary>
/// <para>Get/Set whether this instance of the writer should write the summary file that refers to all of the pieces' individual files. Default is yes only for piece 0 writer.</para>
/// </summary>
  int GetWriteSummaryFile();


  // void WriteSummaryFileOn ();
/// <summary>
/// <para>Get/Set whether this instance of the writer should write the summary file that refers to all of the pieces' individual files. Default is yes only for piece 0 writer.</para>
/// </summary>
  void WriteSummaryFileOn();


  // void WriteSummaryFileOff ();
/// <summary>
/// <para>Get/Set whether this instance of the writer should write the summary file that refers to all of the pieces' individual files. Default is yes only for piece 0 writer.</para>
/// </summary>
  void WriteSummaryFileOff();


// Did not wrap:  vtkXMLPDataWriter ();


// Did not wrap:  ~vtkXMLPDataWriter ();


// Did not wrap:  virtual int WriteInternal ();


// Did not wrap:  virtual vtkXMLWriter *CreatePieceWriter (int index) = 0;


// Did not wrap:  virtual void WritePrimaryElementAttributes (ostream &os, vtkIndent indent);


// Did not wrap:  int WriteData ();


// Did not wrap:  virtual void WritePData (vtkIndent indent);


// Did not wrap:  virtual void WritePPieceAttributes (int index);


// Did not wrap:  char *CreatePieceFileName (int index, const char *path);


// Did not wrap:  void SplitFileName ();


// Did not wrap:  int WritePieces ();


// Did not wrap:  int WritePiece (int index);


// Did not wrap:  static void ProgressCallbackFunction (vtkObject *, unsigned long , void *, void *);


// Did not wrap:  virtual void ProgressCallback (vtkAlgorithm *w);


// Did not wrap:  vtkXMLPDataWriter (const vtkXMLPDataWriter &);


// Did not wrap:  void vtkXMLPDataWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLPDataWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLPDataWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLPDataWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLPDataWriter();


};

} // end vtkIO
