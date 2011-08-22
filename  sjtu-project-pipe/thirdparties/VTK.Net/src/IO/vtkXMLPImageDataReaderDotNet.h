#pragma once

// managed includes
#include "vtkXMLPStructuredDataReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLPImageDataReader : public vtkXMLPStructuredDataReader
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLPImageDataReader *NewInstance ();
  vtkXMLPImageDataReader^ NewInstance();


  // vtkXMLPImageDataReader *SafeDownCast (vtkObject* o);
  static vtkXMLPImageDataReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkXMLPImageDataReader *New ();


  // void SetOutput (vtkImageData *output);
/// <summary>
/// <para>Get/Set the reader's output.</para>
/// </summary>
  void SetOutput(vtkImageData^ output);


  // vtkImageData *GetOutput ();
/// <summary>
/// <para>Get/Set the reader's output.</para>
/// </summary>
  vtkImageData^ GetOutput();


  // vtkImageData *GetOutput (int idx);
/// <summary>
/// <para>Get/Set the reader's output.</para>
/// </summary>
  vtkImageData^ GetOutput(int idx);


  // virtual void CopyOutputInformation (vtkInformation *outInfo, int port);
  void CopyOutputInformation(vtkInformation^ outInfo, int port);


// Did not wrap:  vtkXMLPImageDataReader ();


// Did not wrap:  ~vtkXMLPImageDataReader ();


// Did not wrap:  vtkImageData *GetPieceInput (int index);


// Did not wrap:  const char *GetDataSetName ();


// Did not wrap:  void SetOutputExtent (int *extent);


// Did not wrap:  void GetPieceInputExtent (int index, int *extent);


// Did not wrap:  int ReadPrimaryElement (vtkXMLDataElement *ePrimary);


// Did not wrap:  void SetupOutputInformation (vtkInformation *outInfo);


// Did not wrap:  vtkXMLDataReader *CreatePieceReader ();


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkXMLPImageDataReader (const vtkXMLPImageDataReader &);


// Did not wrap:  void vtkXMLPImageDataReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLPImageDataReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLPImageDataReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLPImageDataReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLPImageDataReader();


};

} // end vtkIO
