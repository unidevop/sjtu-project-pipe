#pragma once

// managed includes
#include "vtkXMLStructuredDataWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLRectilinearGridWriter : public vtkXMLStructuredDataWriter
{

public:
// Did not wrap:  static vtkXMLRectilinearGridWriter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLRectilinearGridWriter *NewInstance ();
  vtkXMLRectilinearGridWriter^ NewInstance();


  // vtkXMLRectilinearGridWriter *SafeDownCast (vtkObject* o);
  static vtkXMLRectilinearGridWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // const char *GetDefaultFileExtension ();
/// <summary>
/// <para>Get the default file extension for files written by this writer.</para>
/// </summary>
  System::String^ GetDefaultFileExtension();


// Did not wrap:  vtkXMLRectilinearGridWriter ();


// Did not wrap:  ~vtkXMLRectilinearGridWriter ();


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  int WriteAppendedMode (vtkIndent indent);


// Did not wrap:  void WriteAppendedPiece (int index, vtkIndent indent);


// Did not wrap:  void WriteAppendedPieceData (int index);


// Did not wrap:  void WriteInlinePiece (vtkIndent indent);


// Did not wrap:  void GetInputExtent (int *extent);


// Did not wrap:  const char *GetDataSetName ();


// Did not wrap:  vtkDataArray *CreateExactCoordinates (vtkDataArray *a, int xyz);


// Did not wrap:  void CalculateSuperclassFraction (float *fractions);


// Did not wrap:  virtual void AllocatePositionArrays ();


// Did not wrap:  virtual void DeletePositionArrays ();


// Did not wrap:  vtkXMLRectilinearGridWriter (const vtkXMLRectilinearGridWriter &);


// Did not wrap:  void vtkXMLRectilinearGridWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLRectilinearGridWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLRectilinearGridWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLRectilinearGridWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLRectilinearGridWriter();


};

} // end vtkIO
