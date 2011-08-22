#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkByteSwap : public vtkObject
{

public:
// Did not wrap:  static vtkByteSwap *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkByteSwap *NewInstance ();
  vtkByteSwap^ NewInstance();


  // vtkByteSwap *SafeDownCast (vtkObject* o);
  static vtkByteSwap^ SafeDownCast(vtkObject^ o);


  // static void Swap2LE (void *p);
/// <summary>
/// <para>Swap 2, 4, or 8 bytes for storage as Little Endian.</para>
/// </summary>
  static void Swap2LE(System::IntPtr p);


  // static void Swap4LE (void *p);
/// <summary>
/// <para>Swap 2, 4, or 8 bytes for storage as Little Endian.</para>
/// </summary>
  static void Swap4LE(System::IntPtr p);


  // static void Swap8LE (void *p);
/// <summary>
/// <para>Swap 2, 4, or 8 bytes for storage as Little Endian.</para>
/// </summary>
  static void Swap8LE(System::IntPtr p);


  // static void Swap2LERange (void *p, int num);
/// <summary>
/// <para>Swap a block of 2-, 4-, or 8-byte segments for storage as Little Endian.</para>
/// </summary>
  static void Swap2LERange(System::IntPtr p, int num);


  // static void Swap4LERange (void *p, int num);
/// <summary>
/// <para>Swap a block of 2-, 4-, or 8-byte segments for storage as Little Endian.</para>
/// </summary>
  static void Swap4LERange(System::IntPtr p, int num);


  // static void Swap8LERange (void *p, int num);
/// <summary>
/// <para>Swap a block of 2-, 4-, or 8-byte segments for storage as Little Endian.</para>
/// </summary>
  static void Swap8LERange(System::IntPtr p, int num);


// Did not wrap:  static void SwapWrite2LERange (const void *p, int num, FILE *f);


// Did not wrap:  static void SwapWrite4LERange (const void *p, int num, FILE *f);


// Did not wrap:  static void SwapWrite8LERange (const void *p, int num, FILE *f);


// Did not wrap:  static void SwapWrite2LERange (const void *p, int num, ostream *os);


// Did not wrap:  static void SwapWrite4LERange (const void *p, int num, ostream *os);


// Did not wrap:  static void SwapWrite8LERange (const void *p, int num, ostream *os);


  // static void Swap2BE (void *p);
/// <summary>
/// <para>Swap 2, 4, or 8 bytes for storage as Big Endian.</para>
/// </summary>
  static void Swap2BE(System::IntPtr p);


  // static void Swap4BE (void *p);
/// <summary>
/// <para>Swap 2, 4, or 8 bytes for storage as Big Endian.</para>
/// </summary>
  static void Swap4BE(System::IntPtr p);


  // static void Swap8BE (void *p);
/// <summary>
/// <para>Swap 2, 4, or 8 bytes for storage as Big Endian.</para>
/// </summary>
  static void Swap8BE(System::IntPtr p);


  // static void Swap2BERange (void *p, int num);
/// <summary>
/// <para>Swap a block of 2-, 4-, or 8-byte segments for storage as Big Endian.</para>
/// </summary>
  static void Swap2BERange(System::IntPtr p, int num);


  // static void Swap4BERange (void *p, int num);
/// <summary>
/// <para>Swap a block of 2-, 4-, or 8-byte segments for storage as Big Endian.</para>
/// </summary>
  static void Swap4BERange(System::IntPtr p, int num);


  // static void Swap8BERange (void *p, int num);
/// <summary>
/// <para>Swap a block of 2-, 4-, or 8-byte segments for storage as Big Endian.</para>
/// </summary>
  static void Swap8BERange(System::IntPtr p, int num);


// Did not wrap:  static void SwapWrite2BERange (const void *p, int num, FILE *f);


// Did not wrap:  static void SwapWrite4BERange (const void *p, int num, FILE *f);


// Did not wrap:  static void SwapWrite8BERange (const void *p, int num, FILE *f);


// Did not wrap:  static void SwapWrite2BERange (const void *p, int num, ostream *os);


// Did not wrap:  static void SwapWrite4BERange (const void *p, int num, ostream *os);


// Did not wrap:  static void SwapWrite8BERange (const void *p, int num, ostream *os);


  // static void SwapVoidRange (void *buffer, int numWords, int wordSize);
/// <summary>
/// <para>Swaps the bytes of a buffer.  Uses an arbitrary word size, but assumes the word size is divisible by two.</para>
/// </summary>
  static void SwapVoidRange(System::IntPtr buffer, int numWords, int wordSize);


// Did not wrap:  vtkByteSwap ();


// Did not wrap:  ~vtkByteSwap ();


// Did not wrap:  vtkByteSwap (const vtkByteSwap &);


// Did not wrap:  void vtkByteSwap 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkByteSwap(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkByteSwap(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkByteSwap();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkByteSwap();


};

} // end vtkCommon
