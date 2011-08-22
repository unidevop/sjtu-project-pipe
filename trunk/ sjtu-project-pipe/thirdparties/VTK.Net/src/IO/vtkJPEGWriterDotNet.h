#pragma once

// managed includes
#include "vtkImageWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkJPEGWriter : public vtkImageWriter
{

public:
// Did not wrap:  static vtkJPEGWriter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkJPEGWriter *NewInstance ();
  vtkJPEGWriter^ NewInstance();


  // vtkJPEGWriter *SafeDownCast (vtkObject* o);
  static vtkJPEGWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void Write ();
/// <summary>
/// <para>The main interface which triggers the writer to start.</para>
/// </summary>
  void Write();


  // void SetQuality (int );
/// <summary>
/// <para>Compression quality. 0 = Low quality, 100 = High quality</para>
/// </summary>
  void SetQuality(int arg0);


  // int GetQualityMinValue ();
/// <summary>
/// <para>Compression quality. 0 = Low quality, 100 = High quality</para>
/// </summary>
  int GetQualityMinValue();


  // int GetQualityMaxValue ();
/// <summary>
/// <para>Compression quality. 0 = Low quality, 100 = High quality</para>
/// </summary>
  int GetQualityMaxValue();


  // int GetQuality ();
/// <summary>
/// <para>Compression quality. 0 = Low quality, 100 = High quality</para>
/// </summary>
  int GetQuality();


  // void SetProgressive (unsigned int );
/// <summary>
/// <para>Progressive JPEG generation.</para>
/// </summary>
  void SetProgressive(unsigned int arg0);


  // int unsigned GetProgressive ();
/// <summary>
/// <para>Progressive JPEG generation.</para>
/// </summary>
  unsigned int GetProgressive();


  // void ProgressiveOn ();
/// <summary>
/// <para>Progressive JPEG generation.</para>
/// </summary>
  void ProgressiveOn();


  // void ProgressiveOff ();
/// <summary>
/// <para>Progressive JPEG generation.</para>
/// </summary>
  void ProgressiveOff();


  // void SetWriteToMemory (unsigned int );
/// <summary>
/// <para>Write the image to memory (a vtkUnsignedCharArray)</para>
/// </summary>
  void SetWriteToMemory(unsigned int arg0);


  // int unsigned GetWriteToMemory ();
/// <summary>
/// <para>Write the image to memory (a vtkUnsignedCharArray)</para>
/// </summary>
  unsigned int GetWriteToMemory();


  // void WriteToMemoryOn ();
/// <summary>
/// <para>Write the image to memory (a vtkUnsignedCharArray)</para>
/// </summary>
  void WriteToMemoryOn();


  // void WriteToMemoryOff ();
/// <summary>
/// <para>Write the image to memory (a vtkUnsignedCharArray)</para>
/// </summary>
  void WriteToMemoryOff();


  // virtual void SetResult (vtkUnsignedCharArray *);
/// <summary>
/// <para>When writing to memory this is the result, it will be NULL until the  data is written the first time</para>
/// </summary>
  void SetResult(vtkUnsignedCharArray^ arg0);


  // vtkUnsignedCharArray *GetResult ();
/// <summary>
/// <para>When writing to memory this is the result, it will be NULL until the  data is written the first time</para>
/// </summary>
  vtkUnsignedCharArray^ GetResult();


// Did not wrap:  vtkJPEGWriter ();


// Did not wrap:  ~vtkJPEGWriter ();


// Did not wrap:  void WriteSlice (vtkImageData *data);


// Did not wrap:  vtkJPEGWriter (const vtkJPEGWriter &);


// Did not wrap:  void vtkJPEGWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkJPEGWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkJPEGWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkJPEGWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkJPEGWriter();


};

} // end vtkIO
