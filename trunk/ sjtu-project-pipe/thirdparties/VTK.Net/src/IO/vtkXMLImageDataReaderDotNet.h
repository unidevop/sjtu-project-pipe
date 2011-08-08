#pragma once

// managed includes
#include "vtkXMLStructuredDataReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLImageDataReader : public vtkXMLStructuredDataReader
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLImageDataReader *NewInstance ();
  vtkXMLImageDataReader^ NewInstance();


  // vtkXMLImageDataReader *SafeDownCast (vtkObject* o);
  static vtkXMLImageDataReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkXMLImageDataReader *New ();


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
/// <summary>
/// <para>For the specified port, copy the information this reader sets up in SetupOutputInformation to outInfo</para>
/// </summary>
  void CopyOutputInformation(vtkInformation^ outInfo, int port);


// Did not wrap:  vtkXMLImageDataReader ();


// Did not wrap:  ~vtkXMLImageDataReader ();


// Did not wrap:  const char *GetDataSetName ();


// Did not wrap:  void SetOutputExtent (int *extent);


// Did not wrap:  int ReadPrimaryElement (vtkXMLDataElement *ePrimary);


// Did not wrap:  void SetupOutputInformation (vtkInformation *outInfo);


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkXMLImageDataReader (const vtkXMLImageDataReader &);


// Did not wrap:  void vtkXMLImageDataReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLImageDataReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLImageDataReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLImageDataReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLImageDataReader();


};

} // end vtkIO
