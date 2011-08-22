#pragma once

// managed includes
#include "vtkGenericEnSightReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkEnSightMasterServerReader : public vtkGenericEnSightReader
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkEnSightMasterServerReader *NewInstance ();
  vtkEnSightMasterServerReader^ NewInstance();


  // vtkEnSightMasterServerReader *SafeDownCast (vtkObject* o);
  static vtkEnSightMasterServerReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkEnSightMasterServerReader *New ();


  // int DetermineFileName (int piece);
/// <summary>
/// <para>Determine which file should be read for piece</para>
/// </summary>
  int DetermineFileName(int piece);


  // char *GetPieceCaseFileName ();
/// <summary>
/// <para>Get the file name that will be read.</para>
/// </summary>
  System::String^ GetPieceCaseFileName();


  // void SetCurrentPiece (int );
/// <summary>
/// <para>Set or get the current piece.</para>
/// </summary>
  void SetCurrentPiece(int arg0);


  // int GetCurrentPiece ();
/// <summary>
/// <para>Set or get the current piece.</para>
/// </summary>
  int GetCurrentPiece();


// Did not wrap:  vtkEnSightMasterServerReader ();


// Did not wrap:  ~vtkEnSightMasterServerReader ();


// Did not wrap:  void Execute ();


// Did not wrap:  void ExecuteInformation ();


// Did not wrap:  void SetPieceCaseFileName (char *);


// Did not wrap:  vtkEnSightMasterServerReader (const vtkEnSightMasterServerReader &);


// Did not wrap:  void vtkEnSightMasterServerReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkEnSightMasterServerReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkEnSightMasterServerReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkEnSightMasterServerReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkEnSightMasterServerReader();


};

} // end vtkIO
