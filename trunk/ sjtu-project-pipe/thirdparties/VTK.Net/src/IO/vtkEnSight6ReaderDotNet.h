#pragma once

// managed includes
#include "vtkEnSightReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkEnSight6Reader : public vtkEnSightReader
{

public:
// Did not wrap:  static vtkEnSight6Reader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkEnSight6Reader *NewInstance ();
  vtkEnSight6Reader^ NewInstance();


  // vtkEnSight6Reader *SafeDownCast (vtkObject* o);
  static vtkEnSight6Reader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkEnSight6Reader ();


// Did not wrap:  ~vtkEnSight6Reader ();


// Did not wrap:  virtual int ReadGeometryFile (const char *fileName, int timeStep);


// Did not wrap:  virtual int ReadMeasuredGeometryFile (const char *fileName, int timeStep);


// Did not wrap:  virtual int ReadScalarsPerNode (const char *fileName, const char *description, int timeStep, int measured, int numberOfComponents, int component);


// Did not wrap:  virtual int ReadVectorsPerNode (const char *fileName, const char *description, int timeStep, int measured);


// Did not wrap:  virtual int ReadTensorsPerNode (const char *fileName, const char *description, int timeStep);


// Did not wrap:  virtual int ReadScalarsPerElement (const char *fileName, const char *description, int timeStep, int numberOfComponents, int component);


// Did not wrap:  virtual int ReadVectorsPerElement (const char *fileName, const char *description, int timeStep);


// Did not wrap:  virtual int ReadTensorsPerElement (const char *fileName, const char *description, int timeStep);


// Did not wrap:  virtual int CreateUnstructuredGridOutput (int partId, char line[256], const char *name);


// Did not wrap:  virtual int CreateStructuredGridOutput (int partId, char line[256], const char *name);


// Did not wrap:  vtkEnSight6Reader (const vtkEnSight6Reader &);


// Did not wrap:  void vtkEnSight6Reader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkEnSight6Reader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkEnSight6Reader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkEnSight6Reader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkEnSight6Reader();


};

} // end vtkIO
