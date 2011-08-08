#pragma once

// managed includes
#include "vtkImageReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkPNMReader : public vtkImageReader
{

public:
// Did not wrap:  static vtkPNMReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPNMReader *NewInstance ();
  vtkPNMReader^ NewInstance();


  // vtkPNMReader *SafeDownCast (vtkObject* o);
  static vtkPNMReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int CanReadFile (const char *fname);
  int CanReadFile(System::String^ fname);


  // virtual const char *GetFileExtensions ();return 
/// <summary>
/// <para>PNM </para>
/// </summary>
  System::String^ GetFileExtensions();


  // virtual const char *GetDescriptiveName ();return 
  System::String^ GetDescriptiveName();


// Did not wrap:  vtkPNMReader ();


// Did not wrap:  ~vtkPNMReader ();


// Did not wrap:  void ExecuteInformation ();


// Did not wrap:  vtkPNMReader (const vtkPNMReader &);


// Did not wrap:  void vtkPNMReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPNMReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPNMReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPNMReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPNMReader();


};

} // end vtkIO
