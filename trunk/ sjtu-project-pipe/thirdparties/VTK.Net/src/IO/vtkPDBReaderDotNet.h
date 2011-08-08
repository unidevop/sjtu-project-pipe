#pragma once

// managed includes
#include "vtkMoleculeReaderBaseDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkPDBReader : public vtkMoleculeReaderBase
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPDBReader *NewInstance ();
  vtkPDBReader^ NewInstance();


  // vtkPDBReader *SafeDownCast (vtkObject* o);
  static vtkPDBReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkPDBReader *New ();


// Did not wrap:  vtkPDBReader ();


// Did not wrap:  ~vtkPDBReader ();


// Did not wrap:  void ReadSpecificMolecule (FILE *fp);


// Did not wrap:  vtkPDBReader (const vtkPDBReader &);


// Did not wrap:  void vtkPDBReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPDBReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPDBReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPDBReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPDBReader();


};

} // end vtkIO
