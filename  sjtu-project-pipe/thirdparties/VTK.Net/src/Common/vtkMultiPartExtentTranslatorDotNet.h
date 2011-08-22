#pragma once

// managed includes
#include "vtkExtentTranslatorDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkMultiPartExtentTranslator : public vtkExtentTranslator
{

public:
// Did not wrap:  static vtkMultiPartExtentTranslator *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMultiPartExtentTranslator *NewInstance ();
  vtkMultiPartExtentTranslator^ NewInstance();


  // vtkMultiPartExtentTranslator *SafeDownCast (vtkObject* o);
  static vtkMultiPartExtentTranslator^ SafeDownCast(vtkObject^ o);


  // virtual int PieceToExtentThreadSafe (int piece, int numPieces, int ghostLevel, int *wholeExtent, int *resultExtent, int splitMode, int byPoints);
/// <summary>
/// <para>These are the main methods that should be called. These methods  are responsible for converting a piece to an extent. The signatures without arguments are only thread safe when each thread accesses a different instance. The signatures with arguements are fully thread safe. </para>
/// </summary>
  int PieceToExtentThreadSafe(int piece, int numPieces, int ghostLevel, array<int>^ wholeExtent, array<int>^ resultExtent, int splitMode, int byPoints);


// Did not wrap:  vtkMultiPartExtentTranslator ();


// Did not wrap:  ~vtkMultiPartExtentTranslator ();


// Did not wrap:  vtkMultiPartExtentTranslator (const vtkMultiPartExtentTranslator &);


// Did not wrap:  void vtkMultiPartExtentTranslator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMultiPartExtentTranslator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMultiPartExtentTranslator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMultiPartExtentTranslator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMultiPartExtentTranslator();


};

} // end vtkCommon
