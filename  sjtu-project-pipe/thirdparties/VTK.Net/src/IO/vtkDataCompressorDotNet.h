#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkDataCompressor : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDataCompressor *NewInstance ();
  vtkDataCompressor^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual unsigned long GetMaximumCompressionSpace (unsigned long size) = 0;
/// <summary>
/// <para>Get the maximum space that may be needed to store data of the given uncompressed size after compression.  This is the minimum size of the output buffer that can be passed to the four-argument Compress method.</para>
/// </summary>
  unsigned long GetMaximumCompressionSpace(unsigned long size);


  // unsigned long Compress (const unsigned char *uncompressedData, unsigned long uncompressedSize, unsigned char *compressedData, unsigned long compressionSpace);
/// <summary>
/// <para>Compress the given input data buffer into the given output buffer.  The size of the output buffer must be at least as large as the value given by GetMaximumCompressionSpace for the given input size.</para>
/// </summary>
  unsigned long Compress(array<unsigned char>^ uncompressedData, unsigned long uncompressedSize, array<unsigned char>^ compressedData, unsigned long compressionSpace);


  // unsigned long Uncompress (const unsigned char *compressedData, unsigned long compressedSize, unsigned char *uncompressedData, unsigned long uncompressedSize);
/// <summary>
/// <para>Uncompress the given input data into the given output buffer. The size of the uncompressed data must be known by the caller. It should be transmitted from the compressor by a means outside of this class.</para>
/// </summary>
  unsigned long Uncompress(array<unsigned char>^ compressedData, unsigned long compressedSize, array<unsigned char>^ uncompressedData, unsigned long uncompressedSize);


  // vtkUnsignedCharArray *Compress (const unsigned char *uncompressedData, unsigned long uncompressedSize);
/// <summary>
/// <para>Compress the given data.  A vtkUnsignedCharArray containing the compressed data is returned with a reference count of 1.</para>
/// </summary>
  vtkUnsignedCharArray^ Compress(array<unsigned char>^ uncompressedData, unsigned long uncompressedSize);


  // vtkUnsignedCharArray *Uncompress (const unsigned char *compressedData, unsigned long compressedSize, unsigned long uncompressedSize);
/// <summary>
/// <para>Uncompress the given data.  A vtkUnsignedCharArray containing the compressed data is returned with a reference count of 1.  The size of the uncompressed data must be known by the caller.  It should be transmitted from the compressor by a means outside of this class.</para>
/// </summary>
  vtkUnsignedCharArray^ Uncompress(array<unsigned char>^ compressedData, unsigned long compressedSize, unsigned long uncompressedSize);


// Did not wrap:  vtkDataCompressor ();


// Did not wrap:  ~vtkDataCompressor ();


// Did not wrap:  virtual unsigned long CompressBuffer (const unsigned char *uncompressedData, unsigned long uncompressedSize, unsigned char *compressedData, unsigned long compressionSpace) = 0;


// Did not wrap:  virtual unsigned long UncompressBuffer (const unsigned char *compressedData, unsigned long compressedSize, unsigned char *uncompressedData, unsigned long uncompressedSize) = 0;


// Did not wrap:  vtkDataCompressor (const vtkDataCompressor &);


// Did not wrap:  void vtkDataCompressor 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDataCompressor(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDataCompressor(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDataCompressor();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDataCompressor();


};

} // end vtkIO
