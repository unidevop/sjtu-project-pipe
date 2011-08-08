#pragma once

// managed includes
#include "vtkXMLPDataWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLPUnstructuredDataWriter : public vtkXMLPDataWriter
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLPUnstructuredDataWriter *NewInstance ();
  vtkXMLPUnstructuredDataWriter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  int ProcessRequest (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkXMLPUnstructuredDataWriter ();


// Did not wrap:  ~vtkXMLPUnstructuredDataWriter ();


// Did not wrap:  vtkPointSet *GetInputAsPointSet ();


// Did not wrap:  virtual vtkXMLUnstructuredDataWriter *CreateUnstructuredPieceWriter () = 0;


// Did not wrap:  vtkXMLWriter *CreatePieceWriter (int index);


// Did not wrap:  void WritePData (vtkIndent indent);


// Did not wrap:  vtkXMLPUnstructuredDataWriter (const vtkXMLPUnstructuredDataWriter &);


// Did not wrap:  void vtkXMLPUnstructuredDataWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLPUnstructuredDataWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLPUnstructuredDataWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLPUnstructuredDataWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLPUnstructuredDataWriter();


};

} // end vtkIO
