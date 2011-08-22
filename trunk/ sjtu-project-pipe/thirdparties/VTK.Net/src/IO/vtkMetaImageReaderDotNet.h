#pragma once

// managed includes
#include "vtkImageReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkMetaImageReader : public vtkImageReader
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMetaImageReader *NewInstance ();
  vtkMetaImageReader^ NewInstance();


  // vtkMetaImageReader *SafeDownCast (vtkObject* o);
  static vtkMetaImageReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkMetaImageReader *New ();


  // virtual void SetFileName (const char *fname);
/// <summary>
/// <para>Specify file name of meta file</para>
/// </summary>
  void SetFileName(System::String^ fname);


  // virtual char *GetFileName ();return this MHDFileName 
/// <summary>
/// <para>Test whether the file with the given name can be read by this reader.</para>
/// </summary>
  System::String^ GetFileName();


  // virtual int CanReadFile (const char *name);
/// <summary>
/// <para>Test whether the file with the given name can be read by this reader.</para>
/// </summary>
  int CanReadFile(System::String^ name);


// Did not wrap:  vtkMetaImageReader ();


// Did not wrap:  ~vtkMetaImageReader ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  int GetFileInformation (const char *fname, int populate);


// Did not wrap:  void SetMHDFileName (char *);


// Did not wrap:  vtkMetaImageReader (const vtkMetaImageReader &);


// Did not wrap:  void vtkMetaImageReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMetaImageReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMetaImageReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMetaImageReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMetaImageReader();


};

} // end vtkIO
