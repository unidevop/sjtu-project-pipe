#pragma once

// managed includes
#include "vtkImageReader2DotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkJPEGReader : public vtkImageReader2
{

public:
// Did not wrap:  static vtkJPEGReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkJPEGReader *NewInstance ();
  vtkJPEGReader^ NewInstance();


  // vtkJPEGReader *SafeDownCast (vtkObject* o);
  static vtkJPEGReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int CanReadFile (const char *fname);
/// <summary>
/// <para>Is the given file a JPEG file?</para>
/// </summary>
  int CanReadFile(System::String^ fname);


  // virtual const char *GetFileExtensions ();return 
/// <summary>
/// <para>Return a descriptive name for the file format that might be useful in a GUI.</para>
/// </summary>
  System::String^ GetFileExtensions();


  // virtual const char *GetDescriptiveName ();return 
/// <summary>
/// <para>Return a descriptive name for the file format that might be useful in a GUI.</para>
/// </summary>
  System::String^ GetDescriptiveName();


// Did not wrap:  vtkJPEGReader ();


// Did not wrap:  ~vtkJPEGReader ();


// Did not wrap:  virtual void ExecuteInformation ();


// Did not wrap:  virtual void ExecuteData (vtkDataObject *out);


// Did not wrap:  vtkJPEGReader (const vtkJPEGReader &);


// Did not wrap:  void vtkJPEGReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkJPEGReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkJPEGReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkJPEGReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkJPEGReader();


};

} // end vtkIO
