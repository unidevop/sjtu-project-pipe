#pragma once

// managed includes
#include "vtkMoleculeReaderBaseDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXYZMolReader : public vtkMoleculeReaderBase
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXYZMolReader *NewInstance ();
  vtkXYZMolReader^ NewInstance();


  // vtkXYZMolReader *SafeDownCast (vtkObject* o);
  static vtkXYZMolReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkXYZMolReader *New ();


  // virtual int CanReadFile (const char *name);
/// <summary>
/// <para>Test whether the file with the given name can be read by this reader.</para>
/// </summary>
  int CanReadFile(System::String^ name);


  // void SetTimeStep (int );
/// <summary>
/// <para>Set the current time step. It should be greater than 0 and smaller than MaxTimeStep.</para>
/// </summary>
  void SetTimeStep(int arg0);


  // int GetTimeStep ();
/// <summary>
/// <para>Set the current time step. It should be greater than 0 and smaller than MaxTimeStep.</para>
/// </summary>
  int GetTimeStep();


  // int GetMaxTimeStep ();
/// <summary>
/// <para>Get the maximum time step.</para>
/// </summary>
  int GetMaxTimeStep();


// Did not wrap:  vtkXYZMolReader ();


// Did not wrap:  ~vtkXYZMolReader ();


// Did not wrap:  void ReadSpecificMolecule (FILE *fp);


// Did not wrap:  char *GetNextLine (FILE *fp, char *line, int maxlen);


// Did not wrap:  int GetLine1 (const char *line, int *cnt);


// Did not wrap:  int GetLine2 (const char *line, char *name);


// Did not wrap:  int GetAtom (const char *line, char *atom, float *x);


// Did not wrap:  void InsertAtom (const char *atom, float *pos);


// Did not wrap:  void SetMaxTimeStep (int );


// Did not wrap:  vtkXYZMolReader (const vtkXYZMolReader &);


// Did not wrap:  void vtkXYZMolReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXYZMolReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXYZMolReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXYZMolReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXYZMolReader();


};

} // end vtkIO
