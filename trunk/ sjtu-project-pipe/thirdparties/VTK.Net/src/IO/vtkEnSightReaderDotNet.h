#pragma once

// managed includes
#include "vtkGenericEnSightReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkEnSightReader : public vtkGenericEnSightReader
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkEnSightReader *NewInstance ();
  vtkEnSightReader^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Update ();
  void Update();


  // void ExecuteInformation ();
  void ExecuteInformation();


  // void ReplaceNthOutput (int n, vtkDataObject *output);
/// <summary>
/// <para>This method sets/replaces one of the outputs of the reader without changing it's modification time. Make sure that you pass the right type of data object.</para>
/// </summary>
  void ReplaceNthOutput(int n, vtkDataObject^ output);


  // int GetOutputsAreValid ();
/// <summary>
/// <para>OutputsAreValid indicates whether the outputs from this reader have changed in a consistent way.  If during re-reading (because of a change in time step or data set) the number of outputs becomes less than the current number or the type of a particular output changes (e.g., from vtkUnstructuredGrid to vtkImageData), then this flag is set to 0. Otherwise it is set to 1.</para>
/// </summary>
  int GetOutputsAreValid();


// Did not wrap:  vtkEnSightReader ();


// Did not wrap:  ~vtkEnSightReader ();


// Did not wrap:  void Execute ();


// Did not wrap:  int ReadCaseFile ();


// Did not wrap:  virtual int ReadGeometryFile (const char *fileName, int timeStep) = 0;


// Did not wrap:  virtual int ReadMeasuredGeometryFile (const char *fileName, int timeStep) = 0;


// Did not wrap:  int ReadVariableFiles ();


// Did not wrap:  virtual int ReadScalarsPerNode (const char *fileName, const char *description, int timeStep, int measured, int numberOfComponents, int component) = 0;


// Did not wrap:  virtual int ReadVectorsPerNode (const char *fileName, const char *description, int timeStep, int measured) = 0;


// Did not wrap:  virtual int ReadTensorsPerNode (const char *fileName, const char *description, int timeStep) = 0;


// Did not wrap:  virtual int ReadScalarsPerElement (const char *fileName, const char *description, int timeStep, int numberOfComponents, int component) = 0;


// Did not wrap:  virtual int ReadVectorsPerElement (const char *fileName, const char *description, int timeStep) = 0;


// Did not wrap:  virtual int ReadTensorsPerElement (const char *fileName, const char *description, int timeStep) = 0;


// Did not wrap:  virtual int CreateUnstructuredGridOutput (int partId, char line[80], const char *name) = 0;


// Did not wrap:  virtual int CreateStructuredGridOutput (int partId, char line[80], const char *name) = 0;


// Did not wrap:  void SetGeometryFileName (char *);


// Did not wrap:  char *GetGeometryFileName ();


// Did not wrap:  void SetMeasuredFileName (char *);


// Did not wrap:  char *GetMeasuredFileName ();


// Did not wrap:  void SetMatchFileName (char *);


// Did not wrap:  char *GetMatchFileName ();


// Did not wrap:  void AddVariableFileName (const char *fileName1, const char *fileName2NULL);


// Did not wrap:  void AddVariableDescription (const char *description);


// Did not wrap:  void AddVariableType ();


// Did not wrap:  int GetElementType (const char *line);


// Did not wrap:  int GetSectionType (const char *line);


// Did not wrap:  void ReplaceWildcards (char *filename, int num);


// Did not wrap:  vtkIdList *GetCellIds (int index, int cellType);


// Did not wrap:  void SetUseTimeSets (int );


// Did not wrap:  int GetUseTimeSets ();


// Did not wrap:  void UseTimeSetsOn ();


// Did not wrap:  void UseTimeSetsOff ();


// Did not wrap:  void SetUseFileSets (int );


// Did not wrap:  int GetUseFileSets ();


// Did not wrap:  void UseFileSetsOn ();


// Did not wrap:  void UseFileSetsOff ();


// Did not wrap:  void SetNumberOfOutputsInternal (int num);


// Did not wrap:  int CheckOutputConsistency ();


// Did not wrap:  vtkEnSightReader (const vtkEnSightReader &);


// Did not wrap:  void vtkEnSightReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkEnSightReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkEnSightReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkEnSightReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkEnSightReader();


};

} // end vtkIO
