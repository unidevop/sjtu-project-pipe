#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLReader : public vtkAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLReader *NewInstance ();
  vtkXMLReader^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetFileName (char *);
/// <summary>
/// <para>Get/Set the name of the input file.</para>
/// </summary>
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
/// <summary>
/// <para>Get/Set the name of the input file.</para>
/// </summary>
  System::String^ GetFileName();


  // virtual int CanReadFile (const char *name);
/// <summary>
/// <para>Test whether the file with the given name can be read by this reader.</para>
/// </summary>
  int CanReadFile(System::String^ name);


  // vtkDataSet *GetOutputAsDataSet ();
/// <summary>
/// <para>Get the output as a vtkDataSet pointer.</para>
/// </summary>
  vtkDataSet^ GetOutputAsDataSet();


  // vtkDataSet *GetOutputAsDataSet (int index);
/// <summary>
/// <para>Get the output as a vtkDataSet pointer.</para>
/// </summary>
  vtkDataSet^ GetOutputAsDataSet(int index);


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


  // virtual void CopyOutputInformation (vtkInformation *, int );
/// <summary>
/// <para>Which TimeStep to read.    </para>
/// </summary>
  void CopyOutputInformation(vtkInformation^ arg0, int arg1);


  // void SetTimeStep (int );
/// <summary>
/// <para>Which TimeStep to read.    </para>
/// </summary>
  void SetTimeStep(int arg0);


  // int GetTimeStep ();
/// <summary>
/// <para>Which TimeStep to read.    </para>
/// </summary>
  int GetTimeStep();


  // int GetNumberOfTimeSteps ();
  int GetNumberOfTimeSteps();


  // int  *GetTimeStepRange ();
/// <summary>
/// <para>Which TimeStepRange to read</para>
/// </summary>
  array<int>^ GetTimeStepRange();


  // void SetTimeStepRange (int , int );
/// <summary>
/// <para>Which TimeStepRange to read</para>
/// </summary>
  void SetTimeStepRange(int arg0, int arg1);


  // void SetTimeStepRange (int  a[2]);
/// <summary>
/// <para>Which TimeStepRange to read</para>
/// </summary>
  void SetTimeStepRange(array<int>^ a);


// Did not wrap:  vtkXMLReader ();


// Did not wrap:  ~vtkXMLReader ();


// Did not wrap:  virtual int ReadXMLInformation ();


// Did not wrap:  virtual void ReadXMLData ();


// Did not wrap:  virtual const char *GetDataSetName () = 0;


// Did not wrap:  virtual int CanReadFileVersion (int major, int minor);


// Did not wrap:  virtual void SetupEmptyOutput () = 0;


// Did not wrap:  virtual void SetupOutputInformation (vtkInformation *);


// Did not wrap:  virtual void SetupOutputData ();


// Did not wrap:  virtual int ReadPrimaryElement (vtkXMLDataElement *ePrimary);


// Did not wrap:  int ReadVTKFile (vtkXMLDataElement *eVTKFile);


// Did not wrap:  vtkDataArray *CreateDataArray (vtkXMLDataElement *da);


// Did not wrap:  int OpenVTKFile ();


// Did not wrap:  void CloseVTKFile ();


// Did not wrap:  virtual void CreateXMLParser ();


// Did not wrap:  virtual void DestroyXMLParser ();


// Did not wrap:  void SetupCompressor (const char *type);


// Did not wrap:  int CanReadFileVersionString (const char *version);


// Did not wrap:  int IntersectExtents (int *extent1, int *extent2, int *result);


// Did not wrap:  int Min (int a, int b);


// Did not wrap:  int Max (int a, int b);


// Did not wrap:  void ComputePointDimensions (int *extent, int *dimensions);


// Did not wrap:  void ComputePointIncrements (int *extent, vtkIdType *increments);


// Did not wrap:  void ComputeCellDimensions (int *extent, int *dimensions);


// Did not wrap:  void ComputeCellIncrements (int *extent, vtkIdType *increments);


// Did not wrap:  vtkIdType GetStartTuple (int *extent, vtkIdType *increments, int i, int j, int k);


// Did not wrap:  void ReadAttributeIndices (vtkXMLDataElement *eDSA, vtkDataSetAttributes *dsa);


// Did not wrap:  char *CreateStringArray (int numStrings);


// Did not wrap:  void DestroyStringArray (int numStrings, char *strings);


// Did not wrap:  void SetDataArraySelections (vtkXMLDataElement *eDSA, vtkDataArraySelection *sel);


// Did not wrap:  int PointDataArrayIsEnabled (vtkXMLDataElement *ePDA);


// Did not wrap:  int CellDataArrayIsEnabled (vtkXMLDataElement *eCDA);


// Did not wrap:  static void SelectionModifiedCallback (vtkObject *caller, unsigned long eid, void *clientdata, void *calldata);


// Did not wrap:  virtual void GetProgressRange (float *range);


// Did not wrap:  virtual void SetProgressRange (float *range, int curStep, int numSteps);


// Did not wrap:  virtual void SetProgressRange (float *range, int curStep, float *fractions);


// Did not wrap:  virtual void UpdateProgressDiscrete (float progress);


// Did not wrap:  virtual int ProcessRequest (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  virtual int RequestDataObject (vtkInformation *, vtkInformationVector *, vtkInformationVector *);return 


// Did not wrap:  virtual int RequestInformation (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  void SetNumberOfTimeSteps (int num);


// Did not wrap:  static int IsTimeStepInArray (int timestep, int *timesteps, int length);


// Did not wrap:  vtkXMLReader (const vtkXMLReader &);


// Did not wrap:  void vtkXMLReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLReader();


};

} // end vtkIO
