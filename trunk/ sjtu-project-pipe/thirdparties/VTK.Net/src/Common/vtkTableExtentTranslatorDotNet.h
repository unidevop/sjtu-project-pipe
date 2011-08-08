#pragma once

// managed includes
#include "vtkExtentTranslatorDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkTableExtentTranslator : public vtkExtentTranslator
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTableExtentTranslator *NewInstance ();
  vtkTableExtentTranslator^ NewInstance();


  // vtkTableExtentTranslator *SafeDownCast (vtkObject* o);
  static vtkTableExtentTranslator^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkTableExtentTranslator *New ();


  // void SetNumberOfPieces (int pieces);
  void SetNumberOfPieces(int pieces);


  // void SetNumberOfPiecesInTable (int pieces);
/// <summary>
/// <para>Set the real number of pieces in the extent table.</para>
/// </summary>
  void SetNumberOfPiecesInTable(int pieces);


  // int GetNumberOfPiecesInTable ();
/// <summary>
/// <para>Set the real number of pieces in the extent table.</para>
/// </summary>
  int GetNumberOfPiecesInTable();


  // int PieceToExtent ();
/// <summary>
/// <para>Called to translate the current piece into an extent.  This is not thread safe.</para>
/// </summary>
  int PieceToExtent();


  // int PieceToExtentByPoints ();
/// <summary>
/// <para>Not supported by this subclass of vtkExtentTranslator.</para>
/// </summary>
  int PieceToExtentByPoints();


  // int PieceToExtentThreadSafe (int piece, int numPieces, int ghostLevel, int *wholeExtent, int *resultExtent, int splitMode, int byPoints);
/// <summary>
/// <para>Not supported by this subclass of vtkExtentTranslator.</para>
/// </summary>
  int PieceToExtentThreadSafe(int piece, int numPieces, int ghostLevel, array<int>^ wholeExtent, array<int>^ resultExtent, int splitMode, int byPoints);


  // virtual void SetExtentForPiece (int piece, int *extent);
/// <summary>
/// <para>Set the extent to be used for a piece.  This sets the extent table entry for the piece.</para>
/// </summary>
  void SetExtentForPiece(int piece, array<int>^ extent);


  // virtual void GetExtentForPiece (int piece, int *extent);
/// <summary>
/// <para>Get the extent table entry for the given piece.  This is only for code that is setting up the table.  Extent translation should always be done through the PieceToExtent method.</para>
/// </summary>
  void GetExtentForPiece(int piece, array<int>^ extent);


// Did not wrap:  virtual int *GetExtentForPiece (int piece);


  // void SetMaximumGhostLevel (int );
/// <summary>
/// <para>Set the maximum ghost level that can be requested.  This can be used by a reader to make sure an extent request does not go outside the boundaries of the piece's file.</para>
/// </summary>
  void SetMaximumGhostLevel(int arg0);


  // int GetMaximumGhostLevel ();
/// <summary>
/// <para>Set the maximum ghost level that can be requested.  This can be used by a reader to make sure an extent request does not go outside the boundaries of the piece's file.</para>
/// </summary>
  int GetMaximumGhostLevel();


  // virtual void SetPieceAvailable (int piece, int available);
/// <summary>
/// <para>Get/Set whether the given piece is available.  Requesting a piece that is not available will produce errors in the pipeline.</para>
/// </summary>
  void SetPieceAvailable(int piece, int available);


  // virtual int GetPieceAvailable (int piece);
/// <summary>
/// <para>Get/Set whether the given piece is available.  Requesting a piece that is not available will produce errors in the pipeline.</para>
/// </summary>
  int GetPieceAvailable(int piece);


// Did not wrap:  vtkTableExtentTranslator ();


// Did not wrap:  ~vtkTableExtentTranslator ();


// Did not wrap:  vtkTableExtentTranslator (const vtkTableExtentTranslator &);


// Did not wrap:  void vtkTableExtentTranslator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTableExtentTranslator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTableExtentTranslator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTableExtentTranslator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTableExtentTranslator();


};

} // end vtkCommon
