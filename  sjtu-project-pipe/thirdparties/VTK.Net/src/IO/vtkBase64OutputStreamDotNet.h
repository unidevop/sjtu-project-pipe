#pragma once

// managed includes
#include "vtkOutputStreamDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkBase64OutputStream : public vtkOutputStream
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkBase64OutputStream *NewInstance ();
  vtkBase64OutputStream^ NewInstance();


  // vtkBase64OutputStream *SafeDownCast (vtkObject* o);
  static vtkBase64OutputStream^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkBase64OutputStream *New ();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int StartWriting ();
/// <summary>
/// <para>Called after the stream position has been set by the caller, but before any Write calls.  The stream position should not be adjusted by the caller until after an EndWriting call.</para>
/// </summary>
  int StartWriting();


  // int Write (const unsigned char *data, unsigned long length);
/// <summary>
/// <para>Write output data of the given length.</para>
/// </summary>
  int Write(array<unsigned char>^ data, unsigned long length);


  // int EndWriting ();
/// <summary>
/// <para>Called after all desired calls to Write have been made.  After this call, the caller is free to change the position of the stream.  Additional writes should not be done until after another call to StartWriting.</para>
/// </summary>
  int EndWriting();


// Did not wrap:  vtkBase64OutputStream ();


// Did not wrap:  ~vtkBase64OutputStream ();


// Did not wrap:  int EncodeTriplet (unsigned char c0, unsigned char c1, unsigned char c2);


// Did not wrap:  int EncodeEnding (unsigned char c0, unsigned char c1);


// Did not wrap:  int EncodeEnding (unsigned char c0);


// Did not wrap:  vtkBase64OutputStream (const vtkBase64OutputStream &);


// Did not wrap:  void vtkBase64OutputStream 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkBase64OutputStream(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkBase64OutputStream(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkBase64OutputStream();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkBase64OutputStream();


};

} // end vtkIO
