#pragma once

// managed includes
#include "vtkXMLPStructuredDataWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLPStructuredGridWriter : public vtkXMLPStructuredDataWriter
{

public:
// Did not wrap:  static vtkXMLPStructuredGridWriter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLPStructuredGridWriter *NewInstance ();
  vtkXMLPStructuredGridWriter^ NewInstance();


  // vtkXMLPStructuredGridWriter *SafeDownCast (vtkObject* o);
  static vtkXMLPStructuredGridWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkXMLPStructuredGridWriter ();


// Did not wrap:  ~vtkXMLPStructuredGridWriter ();


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  const char *GetDataSetName ();


// Did not wrap:  const char *GetDefaultFileExtension ();


// Did not wrap:  vtkXMLStructuredDataWriter *CreateStructuredPieceWriter ();


// Did not wrap:  void WritePData (vtkIndent indent);


// Did not wrap:  vtkXMLPStructuredGridWriter (const vtkXMLPStructuredGridWriter &);


// Did not wrap:  void vtkXMLPStructuredGridWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLPStructuredGridWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLPStructuredGridWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLPStructuredGridWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLPStructuredGridWriter();


};

} // end vtkIO
