#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkBase64Utilities : public vtkObject
{

public:
// Did not wrap:  static vtkBase64Utilities *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkBase64Utilities *NewInstance ();
  vtkBase64Utilities^ NewInstance();


  // vtkBase64Utilities *SafeDownCast (vtkObject* o);
  static vtkBase64Utilities^ SafeDownCast(vtkObject^ o);


  // static void EncodeTriplet (unsigned char i0, unsigned char i1, unsigned char i2, unsigned char *o0, unsigned char *o1, unsigned char *o2, unsigned char *o3);
/// <summary>
/// <para>Encode 3 bytes into 4 bytes</para>
/// </summary>
  static void EncodeTriplet(unsigned char i0, unsigned char i1, unsigned char i2, array<unsigned char>^ o0, array<unsigned char>^ o1, array<unsigned char>^ o2, array<unsigned char>^ o3);


  // static void EncodePair (unsigned char i0, unsigned char i1, unsigned char *o0, unsigned char *o1, unsigned char *o2, unsigned char *o3);
/// <summary>
/// <para>Encode 2 bytes into 4 bytes</para>
/// </summary>
  static void EncodePair(unsigned char i0, unsigned char i1, array<unsigned char>^ o0, array<unsigned char>^ o1, array<unsigned char>^ o2, array<unsigned char>^ o3);


  // static void EncodeSingle (unsigned char i0, unsigned char *o0, unsigned char *o1, unsigned char *o2, unsigned char *o3);
/// <summary>
/// <para>Encode 1 byte into 4 bytes</para>
/// </summary>
  static void EncodeSingle(unsigned char i0, array<unsigned char>^ o0, array<unsigned char>^ o1, array<unsigned char>^ o2, array<unsigned char>^ o3);


  // static unsigned long Encode (const unsigned char *input, unsigned long length, unsigned char *output, int mark_end);
/// <summary>
/// <para>Encode 'length' bytes from the input buffer and store the encoded stream into the output buffer. Return the length of the encoded stream. Note that the output buffer must be allocated by the caller (length * 1.5 should be a safe estimate). If 'mark_end' is true than an extra set of 4 bytes is added to the end of the stream if the input is a multiple of 3 bytes. These bytes are invalid chars and therefore they will stop the decoder thus enabling the caller to decode a stream without actually knowing  how much data to expect (if the input is not a multiple of 3 bytes then the extra padding needed to complete the encode 4 bytes will stop the  decoding anyway).</para>
/// </summary>
  static unsigned long Encode(array<unsigned char>^ input, unsigned long length, array<unsigned char>^ output, int mark_end);


  // static int DecodeTriplet (unsigned char i0, unsigned char i1, unsigned char i2, unsigned char i3, unsigned char *o0, unsigned char *o1, unsigned char *o2);
/// <summary>
/// <para>Decode 4 bytes into 3 bytes.</para>
/// </summary>
  static int DecodeTriplet(unsigned char i0, unsigned char i1, unsigned char i2, unsigned char i3, array<unsigned char>^ o0, array<unsigned char>^ o1, array<unsigned char>^ o2);


  // static unsigned long Decode (const unsigned char *input, unsigned long length, unsigned char *output, unsigned long max_input_length);
/// <summary>
/// <para>Decode bytes from the input buffer and store the decoded stream  into the output buffer until 'length' bytes have been decoded.  Return the real length of the decoded stream (which should be equal to  'length'). Note that the output buffer must be allocated by the caller. If 'max_input_length' is not null, then it specifies the number of encoded bytes that should be at most read from the input buffer. In that case the 'length' parameter is ignored. This enables the caller  to decode a stream without actually knowing how much decoded data to  expect (of course, the buffer must be large enough).</para>
/// </summary>
  static unsigned long Decode(array<unsigned char>^ input, unsigned long length, array<unsigned char>^ output, unsigned long max_input_length);


// Did not wrap:  vtkBase64Utilities ();


// Did not wrap:  ~vtkBase64Utilities ();


// Did not wrap:  vtkBase64Utilities (const vtkBase64Utilities &);


// Did not wrap:  void vtkBase64Utilities 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkBase64Utilities(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkBase64Utilities(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkBase64Utilities();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkBase64Utilities();


};

} // end vtkIO
