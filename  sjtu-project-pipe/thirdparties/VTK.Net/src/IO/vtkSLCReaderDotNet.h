#pragma once

// managed includes
#include "vtkImageReader2DotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkSLCReader : public vtkImageReader2
{

public:
// Did not wrap:  static vtkSLCReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSLCReader *NewInstance ();
  vtkSLCReader^ NewInstance();


  // vtkSLCReader *SafeDownCast (vtkObject* o);
  static vtkSLCReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetFileName (char *);
/// <summary>
/// <para>Set/Get the name of the file to read.</para>
/// </summary>
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
/// <summary>
/// <para>Set/Get the name of the file to read.</para>
/// </summary>
  System::String^ GetFileName();


  // int GetError ();
/// <summary>
/// <para>Was there an error on the last read performed?</para>
/// </summary>
  int GetError();


  // int CanReadFile (const char *fname);
/// <summary>
/// <para>Is the given file an SLC file?</para>
/// </summary>
  int CanReadFile(System::String^ fname);


  // virtual const char *GetFileExtensions ();return 
/// <summary>
/// <para>SLC </para>
/// </summary>
  System::String^ GetFileExtensions();


  // virtual const char *GetDescriptiveName ();return 
  System::String^ GetDescriptiveName();


// Did not wrap:  vtkSLCReader ();


// Did not wrap:  ~vtkSLCReader ();


// Did not wrap:  virtual void ExecuteData (vtkDataObject *);


// Did not wrap:  virtual int RequestInformation (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  unsigned char *Decode8BitData (unsigned char *in_ptr, int size);


// Did not wrap:  vtkSLCReader (const vtkSLCReader &);


// Did not wrap:  void vtkSLCReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSLCReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSLCReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSLCReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSLCReader();


};

} // end vtkIO
