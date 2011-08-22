#pragma once

// managed includes
#include "vtkImageWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkMetaImageWriter : public vtkImageWriter
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMetaImageWriter *NewInstance ();
  vtkMetaImageWriter^ NewInstance();


  // vtkMetaImageWriter *SafeDownCast (vtkObject* o);
  static vtkMetaImageWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkMetaImageWriter *New ();


  // virtual void SetFileName (const char *fname);
/// <summary>
/// <para>Specify file name of meta file</para>
/// </summary>
  void SetFileName(System::String^ fname);


  // virtual char *GetFileName ();return this MHDFileName 
/// <summary>
/// <para>Specify the file name of the raw image data.</para>
/// </summary>
  System::String^ GetFileName();


  // virtual void SetRAWFileName (const char *fname);
/// <summary>
/// <para>Specify the file name of the raw image data.</para>
/// </summary>
  void SetRAWFileName(System::String^ fname);


  // virtual char *GetRAWFileName ();
/// <summary>
/// <para>Specify the file name of the raw image data.</para>
/// </summary>
  System::String^ GetRAWFileName();


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  vtkMetaImageWriter ();


// Did not wrap:  ~vtkMetaImageWriter ();


// Did not wrap:  void SetMHDFileName (char *);


// Did not wrap:  vtkMetaImageWriter (const vtkMetaImageWriter &);


// Did not wrap:  void vtkMetaImageWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMetaImageWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMetaImageWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMetaImageWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMetaImageWriter();


};

} // end vtkIO
