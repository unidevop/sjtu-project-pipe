#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkGenericEnSightReader : public vtkDataSetSource
{

public:
// Did not wrap:  static vtkGenericEnSightReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkGenericEnSightReader *NewInstance ();
  vtkGenericEnSightReader^ NewInstance();


  // vtkGenericEnSightReader *SafeDownCast (vtkObject* o);
  static vtkGenericEnSightReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetCaseFileName (const char *fileName);
/// <summary>
/// <para>Set/Get the Case file name.</para>
/// </summary>
  void SetCaseFileName(System::String^ fileName);


  // char *GetCaseFileName ();
/// <summary>
/// <para>Set/Get the Case file name.</para>
/// </summary>
  System::String^ GetCaseFileName();


  // void SetFilePath (char *);
/// <summary>
/// <para>Set/Get the file path.</para>
/// </summary>
  void SetFilePath(System::String^ arg0);


  // char *GetFilePath ();
/// <summary>
/// <para>Set/Get the file path.</para>
/// </summary>
  System::String^ GetFilePath();


  // virtual void Update ();
  void Update();


  // virtual void ExecuteInformation ();
  void ExecuteInformation();


  // int GetNumberOfVariables ();
/// <summary>
/// <para>Get the number of variables listed in the case file.</para>
/// </summary>
  int GetNumberOfVariables();


  // int GetNumberOfComplexVariables ();
/// <summary>
/// <para>Get the number of variables listed in the case file.</para>
/// </summary>
  int GetNumberOfComplexVariables();


  // int GetNumberOfVariables (int type);
/// <summary>
/// <para>Get the number of variables of a particular type.</para>
/// </summary>
  int GetNumberOfVariables(int type);


  // int GetNumberOfScalarsPerNode ();
/// <summary>
/// <para>Get the number of variables of a particular type.</para>
/// </summary>
  int GetNumberOfScalarsPerNode();


  // int GetNumberOfVectorsPerNode ();
/// <summary>
/// <para>Get the number of variables of a particular type.</para>
/// </summary>
  int GetNumberOfVectorsPerNode();


  // int GetNumberOfTensorsSymmPerNode ();
/// <summary>
/// <para>Get the number of variables of a particular type.</para>
/// </summary>
  int GetNumberOfTensorsSymmPerNode();


  // int GetNumberOfScalarsPerElement ();
/// <summary>
/// <para>Get the number of variables of a particular type.</para>
/// </summary>
  int GetNumberOfScalarsPerElement();


  // int GetNumberOfVectorsPerElement ();
/// <summary>
/// <para>Get the number of variables of a particular type.</para>
/// </summary>
  int GetNumberOfVectorsPerElement();


  // int GetNumberOfTensorsSymmPerElement ();
/// <summary>
/// <para>Get the number of variables of a particular type.</para>
/// </summary>
  int GetNumberOfTensorsSymmPerElement();


  // int GetNumberOfScalarsPerMeasuredNode ();
/// <summary>
/// <para>Get the number of variables of a particular type.</para>
/// </summary>
  int GetNumberOfScalarsPerMeasuredNode();


  // int GetNumberOfVectorsPerMeasuredNode ();
/// <summary>
/// <para>Get the number of variables of a particular type.</para>
/// </summary>
  int GetNumberOfVectorsPerMeasuredNode();


  // int GetNumberOfComplexScalarsPerNode ();
/// <summary>
/// <para>Get the number of variables of a particular type.</para>
/// </summary>
  int GetNumberOfComplexScalarsPerNode();


  // int GetNumberOfComplexVectorsPerNode ();
/// <summary>
/// <para>Get the number of variables of a particular type.</para>
/// </summary>
  int GetNumberOfComplexVectorsPerNode();


  // int GetNumberOfComplexScalarsPerElement ();
/// <summary>
/// <para>Get the number of variables of a particular type.</para>
/// </summary>
  int GetNumberOfComplexScalarsPerElement();


  // int GetNumberOfComplexVectorsPerElement ();
/// <summary>
/// <para>Get the number of variables of a particular type.</para>
/// </summary>
  int GetNumberOfComplexVectorsPerElement();


  // const char *GetDescription (int n);
/// <summary>
/// <para>Get the nth description for a non-complex variable.</para>
/// </summary>
  System::String^ GetDescription(int n);


  // const char *GetComplexDescription (int n);
/// <summary>
/// <para>Get the nth description for a complex variable.</para>
/// </summary>
  System::String^ GetComplexDescription(int n);


  // const char *GetDescription (int n, int type);
/// <summary>
/// <para>Get the nth description of a particular variable type.  Returns NULL if no variable of this type exists in this data set. SCALAR_PER_NODE = 0; VECTOR_PER_NODE = 1; TENSOR_SYMM_PER_NODE = 2; SCALAR_PER_ELEMENT = 3; VECTOR_PER_ELEMENT = 4; TENSOR_SYMM_PER_ELEMENT = 5; SCALAR_PER_MEASURED_NODE = 6; VECTOR_PER_MEASURED_NODE = 7; COMPLEX_SCALAR_PER_NODE = 8; COMPLEX_VECTOR_PER_NODE 9; COMPLEX_SCALAR_PER_ELEMENT  = 10; COMPLEX_VECTOR_PER_ELEMENT = 11</para>
/// </summary>
  System::String^ GetDescription(int n, int type);


  // int GetVariableType (int n);
/// <summary>
/// <para>Get the variable type of variable n.</para>
/// </summary>
  int GetVariableType(int n);


  // int GetComplexVariableType (int n);
/// <summary>
/// <para>Get the variable type of variable n.</para>
/// </summary>
  int GetComplexVariableType(int n);


  // virtual void SetTimeValue (float value);
/// <summary>
/// <para>Set/Get the time value at which to get the value.</para>
/// </summary>
  void SetTimeValue(float value);


  // float GetTimeValue ();
/// <summary>
/// <para>Set/Get the time value at which to get the value.</para>
/// </summary>
  float GetTimeValue();


  // float GetMinimumTimeValue ();
/// <summary>
/// <para>Get the minimum or maximum time value for this data set.</para>
/// </summary>
  float GetMinimumTimeValue();


  // float GetMaximumTimeValue ();
/// <summary>
/// <para>Get the minimum or maximum time value for this data set.</para>
/// </summary>
  float GetMaximumTimeValue();


  // vtkDataArrayCollection *GetTimeSets ();
/// <summary>
/// <para>Get the time values per time set</para>
/// </summary>
  vtkDataArrayCollection^ GetTimeSets();


  // int DetermineEnSightVersion ();
/// <summary>
/// <para>Reads the FORMAT part of the case file to determine whether this is an EnSight6 or EnSightGold data set.  Returns 0 if the format is EnSight6, 1 if it is EnSightGold, and -1 otherwise (meaning an error occurred).</para>
/// </summary>
  int DetermineEnSightVersion();


  // void ReadAllVariablesOn ();
/// <summary>
/// <para>Set/get the flag for whether to read all the variables</para>
/// </summary>
  void ReadAllVariablesOn();


  // void ReadAllVariablesOff ();
/// <summary>
/// <para>Set/get the flag for whether to read all the variables</para>
/// </summary>
  void ReadAllVariablesOff();


  // void SetReadAllVariables (int );
/// <summary>
/// <para>Set/get the flag for whether to read all the variables</para>
/// </summary>
  void SetReadAllVariables(int arg0);


  // int GetReadAllVariables ();
/// <summary>
/// <para>Set/get the flag for whether to read all the variables</para>
/// </summary>
  int GetReadAllVariables();


  // vtkDataArraySelection *GetPointDataArraySelection ();
/// <summary>
/// <para>Get the data array selection tables used to configure which data arrays are loaded by the reader.</para>
/// </summary>
  vtkDataArraySelection^ GetPointDataArraySelection();


  // vtkDataArraySelection *GetCellDataArraySelection ();
/// <summary>
/// <para>Get the data array selection tables used to configure which data arrays are loaded by the reader.</para>
/// </summary>
  vtkDataArraySelection^ GetCellDataArraySelection();


  // int GetNumberOfPointArrays ();
/// <summary>
/// <para>Get the number of point or cell arrays available in the input.</para>
/// </summary>
  int GetNumberOfPointArrays();


  // int GetNumberOfCellArrays ();
/// <summary>
/// <para>Get the number of point or cell arrays available in the input.</para>
/// </summary>
  int GetNumberOfCellArrays();


  // const char *GetPointArrayName (int index);
/// <summary>
/// <para>Get the name of the point or cell array with the given index in the input.</para>
/// </summary>
  System::String^ GetPointArrayName(int index);


  // const char *GetCellArrayName (int index);
/// <summary>
/// <para>Get the name of the point or cell array with the given index in the input.</para>
/// </summary>
  System::String^ GetCellArrayName(int index);


  // int GetPointArrayStatus (const char *name);
/// <summary>
/// <para>Get/Set whether the point or cell array with the given name is to be read.</para>
/// </summary>
  int GetPointArrayStatus(System::String^ name);


  // int GetCellArrayStatus (const char *name);
/// <summary>
/// <para>Get/Set whether the point or cell array with the given name is to be read.</para>
/// </summary>
  int GetCellArrayStatus(System::String^ name);


  // void SetPointArrayStatus (const char *name, int status);
/// <summary>
/// <para>Get/Set whether the point or cell array with the given name is to be read.</para>
/// </summary>
  void SetPointArrayStatus(System::String^ name, int status);


  // void SetCellArrayStatus (const char *name, int status);
/// <summary>
/// <para>Get/Set whether the point or cell array with the given name is to be read.</para>
/// </summary>
  void SetCellArrayStatus(System::String^ name, int status);


  // void SetByteOrderToBigEndian ();
/// <summary>
/// <para>Set the byte order of the file (remember, more Unix workstations write big endian whereas PCs write little endian). Default is big endian (since most older PLOT3D files were written by workstations).</para>
/// </summary>
  void SetByteOrderToBigEndian();


  // void SetByteOrderToLittleEndian ();
/// <summary>
/// <para>Set the byte order of the file (remember, more Unix workstations write big endian whereas PCs write little endian). Default is big endian (since most older PLOT3D files were written by workstations).</para>
/// </summary>
  void SetByteOrderToLittleEndian();


  // void SetByteOrder (int );
/// <summary>
/// <para>Set the byte order of the file (remember, more Unix workstations write big endian whereas PCs write little endian). Default is big endian (since most older PLOT3D files were written by workstations).</para>
/// </summary>
  void SetByteOrder(int arg0);


  // int GetByteOrder ();
/// <summary>
/// <para>Set the byte order of the file (remember, more Unix workstations write big endian whereas PCs write little endian). Default is big endian (since most older PLOT3D files were written by workstations).</para>
/// </summary>
  int GetByteOrder();


  // const char *GetByteOrderAsString ();
/// <summary>
/// <para>Set the byte order of the file (remember, more Unix workstations write big endian whereas PCs write little endian). Default is big endian (since most older PLOT3D files were written by workstations).</para>
/// </summary>
  System::String^ GetByteOrderAsString();


// Did not wrap:  vtkGenericEnSightReader ();


// Did not wrap:  ~vtkGenericEnSightReader ();


// Did not wrap:  void Execute ();


// Did not wrap:  int ReadLine (char result[256]);


// Did not wrap:  int ReadBinaryLine (char result[80]);


// Did not wrap:  int ReadNextDataLine (char result[256]);


// Did not wrap:  void SetGeometryFileName (char *);


// Did not wrap:  char *GetGeometryFileName ();


// Did not wrap:  void AddVariableDescription (const char *description);


// Did not wrap:  void AddComplexVariableDescription (const char *description);


// Did not wrap:  void AddVariableType (int variableType);


// Did not wrap:  void AddComplexVariableType (int variableType);


// Did not wrap:  void ReplaceWildcards (char *fileName, int timeSet, int fileSet);


// Did not wrap:  void ReplaceWildcardsHelper (char *fileName, int num);


// Did not wrap:  static void SelectionModifiedCallback (vtkObject *caller, unsigned long eid, void *clientdata, void *calldata);


// Did not wrap:  void SelectionModified ();


// Did not wrap:  char *CreateStringArray (int numStrings);


// Did not wrap:  void DestroyStringArray (int numStrings, char *strings);


// Did not wrap:  void SetDataArraySelectionSetsFromVariables ();


// Did not wrap:  void SetDataArraySelectionSetsFromReader ();


// Did not wrap:  void SetReaderDataArraySelectionSetsFromSelf ();


// Did not wrap:  virtual void SetTimeSets (vtkDataArrayCollection *);


// Did not wrap:  int InsertNewPartId (int partId);


// Did not wrap:  vtkGenericEnSightReader (const vtkGenericEnSightReader &);


// Did not wrap:  void vtkGenericEnSightReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGenericEnSightReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGenericEnSightReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGenericEnSightReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGenericEnSightReader();


};

} // end vtkIO
