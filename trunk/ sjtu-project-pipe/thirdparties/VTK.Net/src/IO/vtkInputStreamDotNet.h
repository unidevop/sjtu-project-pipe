#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkInputStream : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkInputStream *NewInstance ();
  vtkInputStream^ NewInstance();


  // vtkInputStream *SafeDownCast (vtkObject* o);
  static vtkInputStream^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkInputStream *New ();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void StartReading ();
/// <summary>
/// <para>Called after the stream position has been set by the caller, but before any Seek or Read calls.  The stream position should not be adjusted by the caller until after an EndReading call.</para>
/// </summary>
  void StartReading();


  // virtual int Seek (unsigned long offset);
/// <summary>
/// <para>Seek to the given offset in the input data.  Returns 1 for success, 0 for failure.</para>
/// </summary>
  int Seek(unsigned long offset);


  // virtual unsigned long Read (unsigned char *data, unsigned long length);
/// <summary>
/// <para>Read input data of the given length.  Returns amount actually read.</para>
/// </summary>
  unsigned long Read(array<unsigned char>^ data, unsigned long length);


  // unsigned long Read (char *data, unsigned long length);
/// <summary>
/// <para>Read input data of the given length.  Returns amount actually read.</para>
/// </summary>
  unsigned long Read(System::String^ data, unsigned long length);


  // virtual void EndReading ();
/// <summary>
/// <para>Called after all desired calls to Seek and Read have been made. After this call, the caller is free to change the position of the stream.  Additional reads should not be done until after another call to StartReading.</para>
/// </summary>
  void EndReading();


// Did not wrap:  vtkInputStream ();


// Did not wrap:  ~vtkInputStream ();


// Did not wrap:  vtkInputStream (const vtkInputStream &);


// Did not wrap:  void vtkInputStream 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkInputStream(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkInputStream(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkInputStream();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkInputStream();


};

} // end vtkIO
