#pragma once

// managed includes
#include "vtkImageReader2DotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkPNGReader : public vtkImageReader2
{

public:
// Did not wrap:  static vtkPNGReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPNGReader *NewInstance ();
  vtkPNGReader^ NewInstance();


  // vtkPNGReader *SafeDownCast (vtkObject* o);
  static vtkPNGReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkPNGReader ();


// Did not wrap:  ~vtkPNGReader ();


// Did not wrap:  virtual int CanReadFile (const char *fname);


// Did not wrap:  virtual const char *GetFileExtensions ();return 


// Did not wrap:  virtual const char *GetDescriptiveName ();return 


// Did not wrap:  virtual void ExecuteInformation ();


// Did not wrap:  virtual void ExecuteData (vtkDataObject *out);


// Did not wrap:  vtkPNGReader (const vtkPNGReader &);


// Did not wrap:  void vtkPNGReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPNGReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPNGReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPNGReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPNGReader();


};

} // end vtkIO
