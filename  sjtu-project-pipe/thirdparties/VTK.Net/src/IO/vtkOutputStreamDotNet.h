#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkOutputStream : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOutputStream *NewInstance ();
  vtkOutputStream^ NewInstance();


  // vtkOutputStream *SafeDownCast (vtkObject* o);
  static vtkOutputStream^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkOutputStream *New ();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual int StartWriting ();
/// <summary>
/// <para>Called after the stream position has been set by the caller, but before any Write calls.  The stream position should not be adjusted by the caller until after an EndWriting call.</para>
/// </summary>
  int StartWriting();


  // virtual int Write (const unsigned char *data, unsigned long length);
/// <summary>
/// <para>Write output data of the given length.</para>
/// </summary>
  int Write(array<unsigned char>^ data, unsigned long length);


  // int Write (const char *data, unsigned long length);
/// <summary>
/// <para>Write output data of the given length.</para>
/// </summary>
  int Write(System::String^ data, unsigned long length);


  // virtual int EndWriting ();
/// <summary>
/// <para>Called after all desired calls to Write have been made.  After this call, the caller is free to change the position of the stream.  Additional writes should not be done until after another call to StartWriting.</para>
/// </summary>
  int EndWriting();


// Did not wrap:  vtkOutputStream ();


// Did not wrap:  ~vtkOutputStream ();


// Did not wrap:  vtkOutputStream (const vtkOutputStream &);


// Did not wrap:  void vtkOutputStream 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOutputStream(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOutputStream(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOutputStream();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOutputStream();


};

} // end vtkIO
