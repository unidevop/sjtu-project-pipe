#pragma once

// managed includes
#include "vtkImageWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkTIFFWriter : public vtkImageWriter
{

public:
// Did not wrap:  static vtkTIFFWriter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTIFFWriter *NewInstance ();
  vtkTIFFWriter^ NewInstance();


  // vtkTIFFWriter *SafeDownCast (vtkObject* o);
  static vtkTIFFWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetCompression (int );
/// <summary>
/// <para>Set compression type. Sinze LZW compression is patented outside US, the additional work steps have to be taken in order to use that compression.</para>
/// </summary>
  void SetCompression(int arg0);


  // int GetCompressionMinValue ();
/// <summary>
/// <para>Set compression type. Sinze LZW compression is patented outside US, the additional work steps have to be taken in order to use that compression.</para>
/// </summary>
  int GetCompressionMinValue();


  // int GetCompressionMaxValue ();
/// <summary>
/// <para>Set compression type. Sinze LZW compression is patented outside US, the additional work steps have to be taken in order to use that compression.</para>
/// </summary>
  int GetCompressionMaxValue();


  // int GetCompression ();
/// <summary>
/// <para>Set compression type. Sinze LZW compression is patented outside US, the additional work steps have to be taken in order to use that compression.</para>
/// </summary>
  int GetCompression();


  // void SetCompressionToNoCompression ();this SetCompression NoCompression 
/// <summary>
/// <para>Set compression type. Sinze LZW compression is patented outside US, the additional work steps have to be taken in order to use that compression.</para>
/// </summary>
  void SetCompressionToNoCompression();


  // void SetCompressionToPackBits ();this SetCompression PackBits 
/// <summary>
/// <para>Set compression type. Sinze LZW compression is patented outside US, the additional work steps have to be taken in order to use that compression.</para>
/// </summary>
  void SetCompressionToPackBits();


  // void SetCompressionToJPEG ();this SetCompression JPEG 
/// <summary>
/// <para>Set compression type. Sinze LZW compression is patented outside US, the additional work steps have to be taken in order to use that compression.</para>
/// </summary>
  void SetCompressionToJPEG();


  // void SetCompressionToDeflate ();this SetCompression Deflate 
/// <summary>
/// <para>Set compression type. Sinze LZW compression is patented outside US, the additional work steps have to be taken in order to use that compression.</para>
/// </summary>
  void SetCompressionToDeflate();


  // void SetCompressionToLZW ();this SetCompression LZW 
  void SetCompressionToLZW();


// Did not wrap:  vtkTIFFWriter ();


// Did not wrap:  ~vtkTIFFWriter ();


// Did not wrap:  virtual void WriteFile (ofstream *file, vtkImageData *data, int ext[6]);


// Did not wrap:  virtual void WriteFileHeader (ofstream *, vtkImageData *);


// Did not wrap:  virtual void WriteFileTrailer (ofstream *, vtkImageData *);


// Did not wrap:  vtkTIFFWriter (const vtkTIFFWriter &);


// Did not wrap:  void vtkTIFFWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTIFFWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTIFFWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTIFFWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTIFFWriter();


};

} // end vtkIO
