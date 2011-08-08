#pragma once

// managed includes
#include "vtkMoleculeReaderBaseDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkGaussianCubeReader : public vtkMoleculeReaderBase
{

public:
// Did not wrap:  static vtkGaussianCubeReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkGaussianCubeReader *NewInstance ();
  vtkGaussianCubeReader^ NewInstance();


  // vtkGaussianCubeReader *SafeDownCast (vtkObject* o);
  static vtkGaussianCubeReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkTransform *GetTransform ();
  vtkTransform^ GetTransform();


  // void SetFileName (char *);
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
  System::String^ GetFileName();


  // vtkImageData *GetGridOutput ();
  vtkImageData^ GetGridOutput();


// Did not wrap:  vtkGaussianCubeReader ();


// Did not wrap:  ~vtkGaussianCubeReader ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void ReadSpecificMolecule (FILE *fp);


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkGaussianCubeReader (const vtkGaussianCubeReader &);


// Did not wrap:  void vtkGaussianCubeReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGaussianCubeReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGaussianCubeReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGaussianCubeReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGaussianCubeReader();


};

} // end vtkIO
