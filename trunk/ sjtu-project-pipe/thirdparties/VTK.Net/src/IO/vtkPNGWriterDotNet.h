#pragma once

// managed includes
#include "vtkImageWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkPNGWriter : public vtkImageWriter
{

public:
// Did not wrap:  static vtkPNGWriter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPNGWriter *NewInstance ();
  vtkPNGWriter^ NewInstance();


  // vtkPNGWriter *SafeDownCast (vtkObject* o);
  static vtkPNGWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void Write ();
/// <summary>
/// <para>The main interface which triggers the writer to start.</para>
/// </summary>
  void Write();


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


// Did not wrap:  vtkPNGWriter ();


// Did not wrap:  ~vtkPNGWriter ();


// Did not wrap:  void WriteSlice (vtkImageData *data);


// Did not wrap:  vtkPNGWriter (const vtkPNGWriter &);


// Did not wrap:  void vtkPNGWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPNGWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPNGWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPNGWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPNGWriter();


};

} // end vtkIO
