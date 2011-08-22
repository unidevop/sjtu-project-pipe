#pragma once

// managed includes
#include "vtkXMLPDataWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLPDataSetWriter : public vtkXMLPDataWriter
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLPDataSetWriter *NewInstance ();
  vtkXMLPDataSetWriter^ NewInstance();


  // vtkXMLPDataSetWriter *SafeDownCast (vtkObject* o);
  static vtkXMLPDataSetWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkXMLPDataSetWriter *New ();


// Did not wrap:  vtkXMLPDataSetWriter ();


// Did not wrap:  ~vtkXMLPDataSetWriter ();


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  virtual int WriteInternal ();


// Did not wrap:  const char *GetDataSetName ();


// Did not wrap:  const char *GetDefaultFileExtension ();


// Did not wrap:  vtkXMLWriter *CreatePieceWriter (int index);


// Did not wrap:  vtkXMLPDataSetWriter (const vtkXMLPDataSetWriter &);


// Did not wrap:  void vtkXMLPDataSetWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLPDataSetWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLPDataSetWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLPDataSetWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLPDataSetWriter();


};

} // end vtkIO
