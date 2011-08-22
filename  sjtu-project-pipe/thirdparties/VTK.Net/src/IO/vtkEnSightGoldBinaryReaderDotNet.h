#pragma once

// managed includes
#include "vtkEnSightReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkEnSightGoldBinaryReader : public vtkEnSightReader
{

public:
// Did not wrap:  static vtkEnSightGoldBinaryReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkEnSightGoldBinaryReader *NewInstance ();
  vtkEnSightGoldBinaryReader^ NewInstance();


  // vtkEnSightGoldBinaryReader *SafeDownCast (vtkObject* o);
  static vtkEnSightGoldBinaryReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkEnSightGoldBinaryReader ();


// Did not wrap:  ~vtkEnSightGoldBinaryReader ();


// Did not wrap:  int OpenFile (const char *filename);


// Did not wrap:  virtual int ReadGeometryFile (const char *fileName, int timeStep);


// Did not wrap:  virtual int ReadMeasuredGeometryFile (const char *fileName, int timeStep);


// Did not wrap:  virtual int ReadScalarsPerNode (const char *fileName, const char *description, int timeStep, int measured, int numberOfComponents, int component);


// Did not wrap:  virtual int ReadVectorsPerNode (const char *fileName, const char *description, int timeStep, int measured);


// Did not wrap:  virtual int ReadTensorsPerNode (const char *fileName, const char *description, int timeStep);


// Did not wrap:  virtual int ReadScalarsPerElement (const char *fileName, const char *description, int timeStep, int numberOfComponents, int component);


// Did not wrap:  virtual int ReadVectorsPerElement (const char *fileName, const char *description, int timeStep);


// Did not wrap:  virtual int ReadTensorsPerElement (const char *fileName, const char *description, int timeStep);


// Did not wrap:  virtual int CreateUnstructuredGridOutput (int partId, char line[80], const char *name);


// Did not wrap:  virtual int CreateStructuredGridOutput (int partId, char line[256], const char *name);


// Did not wrap:  int CreateRectilinearGridOutput (int partId, char line[256], const char *name);


// Did not wrap:  int CreateImageDataOutput (int partId, char line[80], const char *name);


// Did not wrap:  int ReadLine (char result[80]);


// Did not wrap:  int ReadInt (int *result);


// Did not wrap:  int ReadPartId (int *result);


// Did not wrap:  int ReadIntArray (int *result, int numInts);


// Did not wrap:  int ReadFloatArray (float *result, int numFloats);


// Did not wrap:  int SkipTimeStep ();


// Did not wrap:  int SkipStructuredGrid (char line[256]);


// Did not wrap:  int SkipUnstructuredGrid (char line[256]);


// Did not wrap:  int SkipRectilinearGrid (char line[256]);


// Did not wrap:  int SkipImageData (char line[256]);


// Did not wrap:  vtkEnSightGoldBinaryReader (const vtkEnSightGoldBinaryReader &);


// Did not wrap:  void vtkEnSightGoldBinaryReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkEnSightGoldBinaryReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkEnSightGoldBinaryReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkEnSightGoldBinaryReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkEnSightGoldBinaryReader();


};

} // end vtkIO
