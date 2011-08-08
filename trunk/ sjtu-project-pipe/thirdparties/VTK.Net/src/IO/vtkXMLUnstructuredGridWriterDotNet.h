#pragma once

// managed includes
#include "vtkXMLUnstructuredDataWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLUnstructuredGridWriter : public vtkXMLUnstructuredDataWriter
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLUnstructuredGridWriter *NewInstance ();
  vtkXMLUnstructuredGridWriter^ NewInstance();


  // vtkXMLUnstructuredGridWriter *SafeDownCast (vtkObject* o);
  static vtkXMLUnstructuredGridWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkXMLUnstructuredGridWriter *New ();


  // const char *GetDefaultFileExtension ();
/// <summary>
/// <para>Get the default file extension for files written by this writer.</para>
/// </summary>
  System::String^ GetDefaultFileExtension();


// Did not wrap:  vtkXMLUnstructuredGridWriter ();


// Did not wrap:  ~vtkXMLUnstructuredGridWriter ();


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  virtual void AllocatePositionArrays ();


// Did not wrap:  virtual void DeletePositionArrays ();


// Did not wrap:  const char *GetDataSetName ();


// Did not wrap:  void WriteInlinePieceAttributes ();


// Did not wrap:  void WriteInlinePiece (vtkIndent indent);


// Did not wrap:  void WriteAppendedPieceAttributes (int index);


// Did not wrap:  void WriteAppendedPiece (int index, vtkIndent indent);


// Did not wrap:  void WriteAppendedPieceData (int index);


// Did not wrap:  virtual vtkIdType GetNumberOfInputCells ();


// Did not wrap:  void CalculateSuperclassFraction (float *fractions);


// Did not wrap:  vtkXMLUnstructuredGridWriter (const vtkXMLUnstructuredGridWriter &);


// Did not wrap:  void vtkXMLUnstructuredGridWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLUnstructuredGridWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLUnstructuredGridWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLUnstructuredGridWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLUnstructuredGridWriter();


};

} // end vtkIO
