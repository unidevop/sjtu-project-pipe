#pragma once

// managed includes
#include "vtkXMLPDataWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLPStructuredDataWriter : public vtkXMLPDataWriter
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLPStructuredDataWriter *NewInstance ();
  vtkXMLPStructuredDataWriter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetExtentTranslator (vtkExtentTranslator *);
/// <summary>
/// <para>Get/Set the extent translator used for creating pieces.</para>
/// </summary>
  void SetExtentTranslator(vtkExtentTranslator^ arg0);


  // vtkExtentTranslator *GetExtentTranslator ();
/// <summary>
/// <para>Get/Set the extent translator used for creating pieces.</para>
/// </summary>
  vtkExtentTranslator^ GetExtentTranslator();


// Did not wrap:  vtkXMLPStructuredDataWriter ();


// Did not wrap:  ~vtkXMLPStructuredDataWriter ();


// Did not wrap:  virtual vtkXMLStructuredDataWriter *CreateStructuredPieceWriter () = 0;


// Did not wrap:  void WritePrimaryElementAttributes (ostream &os, vtkIndent indent);


// Did not wrap:  void WritePPieceAttributes (int index);


// Did not wrap:  vtkXMLWriter *CreatePieceWriter (int index);


// Did not wrap:  vtkXMLPStructuredDataWriter (const vtkXMLPStructuredDataWriter &);


// Did not wrap:  void vtkXMLPStructuredDataWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLPStructuredDataWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLPStructuredDataWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLPStructuredDataWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLPStructuredDataWriter();


};

} // end vtkIO
