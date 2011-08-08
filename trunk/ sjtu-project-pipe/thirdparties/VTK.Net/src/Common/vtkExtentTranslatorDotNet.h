#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkExtentTranslator : public vtkObject
{

public:
// Did not wrap:  static vtkExtentTranslator *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkExtentTranslator *NewInstance ();
  vtkExtentTranslator^ NewInstance();


  // vtkExtentTranslator *SafeDownCast (vtkObject* o);
  static vtkExtentTranslator^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetWholeExtent (int , int , int , int , int , int );
/// <summary>
/// <para>Set the Piece/NumPieces. Set the WholeExtent and then call PieceToExtent. The result can be obtained from the Extent ivar.</para>
/// </summary>
  void SetWholeExtent(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5);


  // void SetWholeExtent (int  a[6]);
/// <summary>
/// <para>Set the Piece/NumPieces. Set the WholeExtent and then call PieceToExtent. The result can be obtained from the Extent ivar.</para>
/// </summary>
  void SetWholeExtent(array<int>^ a);


  // int  *GetWholeExtent ();
/// <summary>
/// <para>Set the Piece/NumPieces. Set the WholeExtent and then call PieceToExtent. The result can be obtained from the Extent ivar.</para>
/// </summary>
  array<int>^ GetWholeExtent();


  // void SetExtent (int , int , int , int , int , int );
/// <summary>
/// <para>Set the Piece/NumPieces. Set the WholeExtent and then call PieceToExtent. The result can be obtained from the Extent ivar.</para>
/// </summary>
  void SetExtent(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5);


  // void SetExtent (int  a[6]);
/// <summary>
/// <para>Set the Piece/NumPieces. Set the WholeExtent and then call PieceToExtent. The result can be obtained from the Extent ivar.</para>
/// </summary>
  void SetExtent(array<int>^ a);


  // int  *GetExtent ();
/// <summary>
/// <para>Set the Piece/NumPieces. Set the WholeExtent and then call PieceToExtent. The result can be obtained from the Extent ivar.</para>
/// </summary>
  array<int>^ GetExtent();


  // void SetPiece (int );
/// <summary>
/// <para>Set the Piece/NumPieces. Set the WholeExtent and then call PieceToExtent. The result can be obtained from the Extent ivar.</para>
/// </summary>
  void SetPiece(int arg0);


  // int GetPiece ();
/// <summary>
/// <para>Set the Piece/NumPieces. Set the WholeExtent and then call PieceToExtent. The result can be obtained from the Extent ivar.</para>
/// </summary>
  int GetPiece();


  // void SetNumberOfPieces (int );
/// <summary>
/// <para>Set the Piece/NumPieces. Set the WholeExtent and then call PieceToExtent. The result can be obtained from the Extent ivar.</para>
/// </summary>
  void SetNumberOfPieces(int arg0);


  // int GetNumberOfPieces ();
/// <summary>
/// <para>Set the Piece/NumPieces. Set the WholeExtent and then call PieceToExtent. The result can be obtained from the Extent ivar.</para>
/// </summary>
  int GetNumberOfPieces();


  // void SetGhostLevel (int );
/// <summary>
/// <para>Set the Piece/NumPieces. Set the WholeExtent and then call PieceToExtent. The result can be obtained from the Extent ivar.</para>
/// </summary>
  void SetGhostLevel(int arg0);


  // int GetGhostLevel ();
/// <summary>
/// <para>Set the Piece/NumPieces. Set the WholeExtent and then call PieceToExtent. The result can be obtained from the Extent ivar.</para>
/// </summary>
  int GetGhostLevel();


  // virtual int PieceToExtent ();
/// <summary>
/// <para>These are the main methods that should be called. These methods  are responsible for converting a piece to an extent. The signatures without arguments are only thread safe when each thread accesses a different instance. The signatures with arguements are fully thread safe. </para>
/// </summary>
  int PieceToExtent();


  // virtual int PieceToExtentByPoints ();
/// <summary>
/// <para>These are the main methods that should be called. These methods  are responsible for converting a piece to an extent. The signatures without arguments are only thread safe when each thread accesses a different instance. The signatures with arguements are fully thread safe. </para>
/// </summary>
  int PieceToExtentByPoints();


  // virtual int PieceToExtentThreadSafe (int piece, int numPieces, int ghostLevel, int *wholeExtent, int *resultExtent, int splitMode, int byPoints);
/// <summary>
/// <para>These are the main methods that should be called. These methods  are responsible for converting a piece to an extent. The signatures without arguments are only thread safe when each thread accesses a different instance. The signatures with arguements are fully thread safe. </para>
/// </summary>
  int PieceToExtentThreadSafe(int piece, int numPieces, int ghostLevel, array<int>^ wholeExtent, array<int>^ resultExtent, int splitMode, int byPoints);


  // void SetSplitModeToBlock ();this SplitMode vtkExtentTranslator BLOCK_MODE 
/// <summary>
/// <para>How should the streamer break up extents. Block mode tries to break an extent up into cube blocks.  It always chooses the largest axis to split. Slab mode first breaks up the Z axis.  If it gets to one slice, then it starts breaking up other axes.</para>
/// </summary>
  void SetSplitModeToBlock();


  // void SetSplitModeToXSlab ();this SplitMode vtkExtentTranslator X_SLAB_MODE 
/// <summary>
/// <para>How should the streamer break up extents. Block mode tries to break an extent up into cube blocks.  It always chooses the largest axis to split. Slab mode first breaks up the Z axis.  If it gets to one slice, then it starts breaking up other axes.</para>
/// </summary>
  void SetSplitModeToXSlab();


  // void SetSplitModeToYSlab ();this SplitMode vtkExtentTranslator Y_SLAB_MODE 
/// <summary>
/// <para>How should the streamer break up extents. Block mode tries to break an extent up into cube blocks.  It always chooses the largest axis to split. Slab mode first breaks up the Z axis.  If it gets to one slice, then it starts breaking up other axes.</para>
/// </summary>
  void SetSplitModeToYSlab();


  // void SetSplitModeToZSlab ();this SplitMode vtkExtentTranslator Z_SLAB_MODE 
/// <summary>
/// <para>How should the streamer break up extents. Block mode tries to break an extent up into cube blocks.  It always chooses the largest axis to split. Slab mode first breaks up the Z axis.  If it gets to one slice, then it starts breaking up other axes.</para>
/// </summary>
  void SetSplitModeToZSlab();


  // int GetSplitMode ();
/// <summary>
/// <para>How should the streamer break up extents. Block mode tries to break an extent up into cube blocks.  It always chooses the largest axis to split. Slab mode first breaks up the Z axis.  If it gets to one slice, then it starts breaking up other axes.</para>
/// </summary>
  int GetSplitMode();


// Did not wrap:  vtkExtentTranslator ();


// Did not wrap:  ~vtkExtentTranslator ();


// Did not wrap:  int SplitExtent (int piece, int numPieces, int *extent, int splitMode);


// Did not wrap:  int SplitExtentByPoints (int piece, int numPieces, int *extent, int splitMode);


// Did not wrap:  vtkExtentTranslator (const vtkExtentTranslator &);


// Did not wrap:  void vtkExtentTranslator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkExtentTranslator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkExtentTranslator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkExtentTranslator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkExtentTranslator();


};

} // end vtkCommon
