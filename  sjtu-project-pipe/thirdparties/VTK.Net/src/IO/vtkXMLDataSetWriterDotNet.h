#pragma once

// managed includes
#include "vtkXMLWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLDataSetWriter : public vtkXMLWriter
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLDataSetWriter *NewInstance ();
  vtkXMLDataSetWriter^ NewInstance();


  // vtkXMLDataSetWriter *SafeDownCast (vtkObject* o);
  static vtkXMLDataSetWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkXMLDataSetWriter *New ();


// Did not wrap:  vtkXMLDataSetWriter ();


// Did not wrap:  ~vtkXMLDataSetWriter ();


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  virtual int WriteInternal ();


// Did not wrap:  const char *GetDataSetName ();


// Did not wrap:  const char *GetDefaultFileExtension ();


// Did not wrap:  static void ProgressCallbackFunction (vtkObject *, unsigned long , void *, void *);


// Did not wrap:  virtual void ProgressCallback (vtkAlgorithm *w);


// Did not wrap:  vtkXMLDataSetWriter (const vtkXMLDataSetWriter &);


// Did not wrap:  void vtkXMLDataSetWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLDataSetWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLDataSetWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLDataSetWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLDataSetWriter();


};

} // end vtkIO
