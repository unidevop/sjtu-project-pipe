#pragma once

// managed includes
#include "vtkDataCompressorDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkZLibDataCompressor : public vtkDataCompressor
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkZLibDataCompressor *NewInstance ();
  vtkZLibDataCompressor^ NewInstance();


  // vtkZLibDataCompressor *SafeDownCast (vtkObject* o);
  static vtkZLibDataCompressor^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkZLibDataCompressor *New ();


  // unsigned long GetMaximumCompressionSpace (unsigned long size);
/// <summary>
/// <para>Get the maximum space that may be needed to store data of the given uncompressed size after compression.  This is the minimum size of the output buffer that can be passed to the four-argument Compress method.</para>
/// </summary>
  unsigned long GetMaximumCompressionSpace(unsigned long size);


  // void SetCompressionLevel (int );
/// <summary>
/// <para>Get/Set the compression level.</para>
/// </summary>
  void SetCompressionLevel(int arg0);


  // int GetCompressionLevelMinValue ();
/// <summary>
/// <para>Get/Set the compression level.</para>
/// </summary>
  int GetCompressionLevelMinValue();


  // int GetCompressionLevelMaxValue ();
/// <summary>
/// <para>Get/Set the compression level.</para>
/// </summary>
  int GetCompressionLevelMaxValue();


  // int GetCompressionLevel ();
/// <summary>
/// <para>Get/Set the compression level.</para>
/// </summary>
  int GetCompressionLevel();


// Did not wrap:  vtkZLibDataCompressor ();


// Did not wrap:  ~vtkZLibDataCompressor ();


// Did not wrap:  unsigned long CompressBuffer (const unsigned char *uncompressedData, unsigned long uncompressedSize, unsigned char *compressedData, unsigned long compressionSpace);


// Did not wrap:  unsigned long UncompressBuffer (const unsigned char *compressedData, unsigned long compressedSize, unsigned char *uncompressedData, unsigned long uncompressedSize);


// Did not wrap:  vtkZLibDataCompressor (const vtkZLibDataCompressor &);


// Did not wrap:  void vtkZLibDataCompressor 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkZLibDataCompressor(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkZLibDataCompressor(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkZLibDataCompressor();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkZLibDataCompressor();


};

} // end vtkIO
