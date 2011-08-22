#pragma once

// managed includes
#include "vtkDataSetAlgorithmDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkCastToConcrete : public vtkDataSetAlgorithm
{

public:
// Did not wrap:  static vtkCastToConcrete *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCastToConcrete *NewInstance ();
  vtkCastToConcrete^ NewInstance();


  // vtkCastToConcrete *SafeDownCast (vtkObject* o);
  static vtkCastToConcrete^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkCastToConcrete ();


// Did not wrap:  ~vtkCastToConcrete ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkCastToConcrete (const vtkCastToConcrete &);


// Did not wrap:  void vtkCastToConcrete 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCastToConcrete(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCastToConcrete(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCastToConcrete();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCastToConcrete();


};

} // end vtkFiltering
