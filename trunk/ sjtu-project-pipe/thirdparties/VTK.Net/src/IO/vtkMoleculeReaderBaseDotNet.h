#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkMoleculeReaderBase : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMoleculeReaderBase *NewInstance ();
  vtkMoleculeReaderBase^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetFileName (char *);
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
  System::String^ GetFileName();


  // void SetBScale (double );
  void SetBScale(double arg0);


  // double GetBScale ();
  double GetBScale();


  // void SetHBScale (double );
  void SetHBScale(double arg0);


  // double GetHBScale ();
  double GetHBScale();


  // int GetNumberOfAtoms ();
  int GetNumberOfAtoms();


// Did not wrap:  vtkMoleculeReaderBase ();


// Did not wrap:  ~vtkMoleculeReaderBase ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int ReadMolecule (FILE *fp, vtkPolyData *output);


// Did not wrap:  int MakeAtomType (const char *atype);


// Did not wrap:  int MakeBonds (vtkPoints *, vtkIdTypeArray *, vtkCellArray *);


// Did not wrap:  virtual void ReadSpecificMolecule (FILE *fp) = 0;


// Did not wrap:  vtkMoleculeReaderBase (const vtkMoleculeReaderBase &);


// Did not wrap:  void vtkMoleculeReaderBase 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMoleculeReaderBase(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMoleculeReaderBase(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMoleculeReaderBase();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMoleculeReaderBase();


};

} // end vtkIO
