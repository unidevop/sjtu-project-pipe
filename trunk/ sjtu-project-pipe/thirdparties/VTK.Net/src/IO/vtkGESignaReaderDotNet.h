#pragma once

// managed includes
#include "vtkMedicalImageReader2DotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkGESignaReader : public vtkMedicalImageReader2
{

public:
// Did not wrap:  static vtkGESignaReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkGESignaReader *NewInstance ();
  vtkGESignaReader^ NewInstance();


  // vtkGESignaReader *SafeDownCast (vtkObject* o);
  static vtkGESignaReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual int CanReadFile (const char *fname);
/// <summary>
/// </summary>
  int CanReadFile(System::String^ fname);


  // virtual const char *GetFileExtensions ();return 
/// <summary>
/// <para>A descriptive name for this format</para>
/// </summary>
  System::String^ GetFileExtensions();


  // virtual const char *GetDescriptiveName ();return 
  System::String^ GetDescriptiveName();


// Did not wrap:  vtkGESignaReader ();


// Did not wrap:  ~vtkGESignaReader ();


// Did not wrap:  virtual void ExecuteInformation ();


// Did not wrap:  virtual void ExecuteData (vtkDataObject *out);


// Did not wrap:  vtkGESignaReader (const vtkGESignaReader &);


// Did not wrap:  void vtkGESignaReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGESignaReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGESignaReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGESignaReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGESignaReader();


};

} // end vtkIO
