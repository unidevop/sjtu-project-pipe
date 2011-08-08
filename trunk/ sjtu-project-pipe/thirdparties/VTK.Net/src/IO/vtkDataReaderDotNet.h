#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkDataReader : public vtkAlgorithm
{

public:
// Did not wrap:  static vtkDataReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDataReader *NewInstance ();
  vtkDataReader^ NewInstance();


  // vtkDataReader *SafeDownCast (vtkObject* o);
  static vtkDataReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetFileName (char *);
/// <summary>
/// <para>Specify file name of vtk data file to read.</para>
/// </summary>
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
/// <summary>
/// <para>Specify file name of vtk data file to read.</para>
/// </summary>
  System::String^ GetFileName();


  // int IsFileValid (const char *dstype);
/// <summary>
/// <para>Is the file a valid vtk file of the passed dataset type ? The dataset type is passed as a lower case string.</para>
/// </summary>
  int IsFileValid(System::String^ dstype);


  // int IsFileStructuredPoints ();return this IsFileValid 
/// <summary>
/// <para>Is the file a valid vtk file of the passed dataset type ? The dataset type is passed as a lower case string.</para>
/// </summary>
  int IsFileStructuredPoints();


  // int IsFilePolyData ();return this IsFileValid 
/// <summary>
/// <para>Is the file a valid vtk file of the passed dataset type ? The dataset type is passed as a lower case string.</para>
/// </summary>
  int IsFilePolyData();


  // int IsFileStructuredGrid ();return this IsFileValid 
/// <summary>
/// <para>Is the file a valid vtk file of the passed dataset type ? The dataset type is passed as a lower case string.</para>
/// </summary>
  int IsFileStructuredGrid();


  // int IsFileUnstructuredGrid ();return this IsFileValid 
/// <summary>
/// <para>Is the file a valid vtk file of the passed dataset type ? The dataset type is passed as a lower case string.</para>
/// </summary>
  int IsFileUnstructuredGrid();


  // int IsFileRectilinearGrid ();return this IsFileValid 
/// <summary>
/// <para>Is the file a valid vtk file of the passed dataset type ? The dataset type is passed as a lower case string.</para>
/// </summary>
  int IsFileRectilinearGrid();


  // void SetInputString (const char *in);
/// <summary>
/// <para>Specify the InputString for use when reading from a character array. Optionally include the length for binary strings. Note that a copy of the string is made and stored. If this causes exceedingly large memory consumption, consider using InputArray instead.</para>
/// </summary>
  void SetInputString(System::String^ in);


  // char *GetInputString ();
/// <summary>
/// <para>Specify the InputString for use when reading from a character array. Optionally include the length for binary strings. Note that a copy of the string is made and stored. If this causes exceedingly large memory consumption, consider using InputArray instead.</para>
/// </summary>
  System::String^ GetInputString();


  // void SetInputString (const char *in, int len);
/// <summary>
/// <para>Specify the InputString for use when reading from a character array. Optionally include the length for binary strings. Note that a copy of the string is made and stored. If this causes exceedingly large memory consumption, consider using InputArray instead.</para>
/// </summary>
  void SetInputString(System::String^ in, int len);


  // int GetInputStringLength ();
/// <summary>
/// <para>Specify the InputString for use when reading from a character array. Optionally include the length for binary strings. Note that a copy of the string is made and stored. If this causes exceedingly large memory consumption, consider using InputArray instead.</para>
/// </summary>
  int GetInputStringLength();


  // void SetBinaryInputString (const char *, int len);
/// <summary>
/// <para>Specify the InputString for use when reading from a character array. Optionally include the length for binary strings. Note that a copy of the string is made and stored. If this causes exceedingly large memory consumption, consider using InputArray instead.</para>
/// </summary>
  void SetBinaryInputString(System::String^ arg0, int len);


  // virtual void SetInputArray (vtkCharArray *);
/// <summary>
/// <para>Specify the vtkCharArray to be used  when reading from a string. If set, this array has precendence over InputString. Use this instead of InputString to avoid the extra memory copy. It should be noted that if the underlying char* is owned by the user ( vtkCharArray::SetArray(array, 1); ) and is deleted before the reader, bad things will happen during a pipeline update.</para>
/// </summary>
  void SetInputArray(vtkCharArray^ arg0);


  // vtkCharArray *GetInputArray ();
/// <summary>
/// <para>Specify the vtkCharArray to be used  when reading from a string. If set, this array has precendence over InputString. Use this instead of InputString to avoid the extra memory copy. It should be noted that if the underlying char* is owned by the user ( vtkCharArray::SetArray(array, 1); ) and is deleted before the reader, bad things will happen during a pipeline update.</para>
/// </summary>
  vtkCharArray^ GetInputArray();


  // char *GetHeader ();
/// <summary>
/// <para>Get the header from the vtk data file.</para>
/// </summary>
  System::String^ GetHeader();


  // void SetReadFromInputString (int );
/// <summary>
/// <para>Enable reading from an InputString or InputArray instead of the default,  a file.</para>
/// </summary>
  void SetReadFromInputString(int arg0);


  // int GetReadFromInputString ();
/// <summary>
/// <para>Enable reading from an InputString or InputArray instead of the default,  a file.</para>
/// </summary>
  int GetReadFromInputString();


  // void ReadFromInputStringOn ();
/// <summary>
/// <para>Enable reading from an InputString or InputArray instead of the default,  a file.</para>
/// </summary>
  void ReadFromInputStringOn();


  // void ReadFromInputStringOff ();
/// <summary>
/// <para>Enable reading from an InputString or InputArray instead of the default,  a file.</para>
/// </summary>
  void ReadFromInputStringOff();


  // int GetFileType ();
/// <summary>
/// <para>Get the type of file (ASCII or BINARY). Returned value only valid after file has been read.</para>
/// </summary>
  int GetFileType();


  // int GetNumberOfScalarsInFile ();this CharacterizeFile return this NumberOfScalarsInFile 
/// <summary>
/// <para>How many attributes of various types are in this file? This  requires reading the file, so the filename must be set prior  to invoking this operation. (Note: file characteristics are cached, so only a single read is necessary to return file characteristics.)</para>
/// </summary>
  int GetNumberOfScalarsInFile();


  // int GetNumberOfVectorsInFile ();this CharacterizeFile return this NumberOfVectorsInFile 
/// <summary>
/// <para>How many attributes of various types are in this file? This  requires reading the file, so the filename must be set prior  to invoking this operation. (Note: file characteristics are cached, so only a single read is necessary to return file characteristics.)</para>
/// </summary>
  int GetNumberOfVectorsInFile();


  // int GetNumberOfTensorsInFile ();this CharacterizeFile return this NumberOfTensorsInFile 
/// <summary>
/// <para>How many attributes of various types are in this file? This  requires reading the file, so the filename must be set prior  to invoking this operation. (Note: file characteristics are cached, so only a single read is necessary to return file characteristics.)</para>
/// </summary>
  int GetNumberOfTensorsInFile();


  // int GetNumberOfNormalsInFile ();this CharacterizeFile return this NumberOfNormalsInFile 
/// <summary>
/// <para>How many attributes of various types are in this file? This  requires reading the file, so the filename must be set prior  to invoking this operation. (Note: file characteristics are cached, so only a single read is necessary to return file characteristics.)</para>
/// </summary>
  int GetNumberOfNormalsInFile();


  // int GetNumberOfTCoordsInFile ();this CharacterizeFile return this NumberOfTCoordsInFile 
/// <summary>
/// <para>How many attributes of various types are in this file? This  requires reading the file, so the filename must be set prior  to invoking this operation. (Note: file characteristics are cached, so only a single read is necessary to return file characteristics.)</para>
/// </summary>
  int GetNumberOfTCoordsInFile();


  // int GetNumberOfFieldDataInFile ();this CharacterizeFile return this NumberOfFieldDataInFile 
/// <summary>
/// <para>What is the name of the ith attribute of a certain type in this file? This requires reading the file, so the filename  must be set prior to invoking this operation.</para>
/// </summary>
  int GetNumberOfFieldDataInFile();


  // const char *GetScalarsNameInFile (int i);
/// <summary>
/// <para>What is the name of the ith attribute of a certain type in this file? This requires reading the file, so the filename  must be set prior to invoking this operation.</para>
/// </summary>
  System::String^ GetScalarsNameInFile(int i);


  // const char *GetVectorsNameInFile (int i);
/// <summary>
/// <para>What is the name of the ith attribute of a certain type in this file? This requires reading the file, so the filename  must be set prior to invoking this operation.</para>
/// </summary>
  System::String^ GetVectorsNameInFile(int i);


  // const char *GetTensorsNameInFile (int i);
/// <summary>
/// <para>What is the name of the ith attribute of a certain type in this file? This requires reading the file, so the filename  must be set prior to invoking this operation.</para>
/// </summary>
  System::String^ GetTensorsNameInFile(int i);


  // const char *GetNormalsNameInFile (int i);
/// <summary>
/// <para>What is the name of the ith attribute of a certain type in this file? This requires reading the file, so the filename  must be set prior to invoking this operation.</para>
/// </summary>
  System::String^ GetNormalsNameInFile(int i);


  // const char *GetTCoordsNameInFile (int i);
/// <summary>
/// <para>What is the name of the ith attribute of a certain type in this file? This requires reading the file, so the filename  must be set prior to invoking this operation.</para>
/// </summary>
  System::String^ GetTCoordsNameInFile(int i);


  // const char *GetFieldDataNameInFile (int i);
/// <summary>
/// <para>What is the name of the ith attribute of a certain type in this file? This requires reading the file, so the filename  must be set prior to invoking this operation.</para>
/// </summary>
  System::String^ GetFieldDataNameInFile(int i);


  // void SetScalarsName (char *);
/// <summary>
/// <para>Set the name of the scalar data to extract. If not specified, first  scalar data encountered is extracted.</para>
/// </summary>
  void SetScalarsName(System::String^ arg0);


  // char *GetScalarsName ();
/// <summary>
/// <para>Set the name of the scalar data to extract. If not specified, first  scalar data encountered is extracted.</para>
/// </summary>
  System::String^ GetScalarsName();


  // void SetVectorsName (char *);
/// <summary>
/// <para>Set the name of the vector data to extract. If not specified, first  vector data encountered is extracted.</para>
/// </summary>
  void SetVectorsName(System::String^ arg0);


  // char *GetVectorsName ();
/// <summary>
/// <para>Set the name of the vector data to extract. If not specified, first  vector data encountered is extracted.</para>
/// </summary>
  System::String^ GetVectorsName();


  // void SetTensorsName (char *);
/// <summary>
/// <para>Set the name of the tensor data to extract. If not specified, first  tensor data encountered is extracted.</para>
/// </summary>
  void SetTensorsName(System::String^ arg0);


  // char *GetTensorsName ();
/// <summary>
/// <para>Set the name of the tensor data to extract. If not specified, first  tensor data encountered is extracted.</para>
/// </summary>
  System::String^ GetTensorsName();


  // void SetNormalsName (char *);
/// <summary>
/// <para>Set the name of the normal data to extract. If not specified, first  normal data encountered is extracted.</para>
/// </summary>
  void SetNormalsName(System::String^ arg0);


  // char *GetNormalsName ();
/// <summary>
/// <para>Set the name of the normal data to extract. If not specified, first  normal data encountered is extracted.</para>
/// </summary>
  System::String^ GetNormalsName();


  // void SetTCoordsName (char *);
/// <summary>
/// <para>Set the name of the texture coordinate data to extract. If not specified, first texture coordinate data encountered is extracted.</para>
/// </summary>
  void SetTCoordsName(System::String^ arg0);


  // char *GetTCoordsName ();
/// <summary>
/// <para>Set the name of the texture coordinate data to extract. If not specified, first texture coordinate data encountered is extracted.</para>
/// </summary>
  System::String^ GetTCoordsName();


  // void SetLookupTableName (char *);
/// <summary>
/// <para>Set the name of the lookup table data to extract. If not specified, uses  lookup table named by scalar. Otherwise, this specification supersedes.</para>
/// </summary>
  void SetLookupTableName(System::String^ arg0);


  // char *GetLookupTableName ();
/// <summary>
/// <para>Set the name of the lookup table data to extract. If not specified, uses  lookup table named by scalar. Otherwise, this specification supersedes.</para>
/// </summary>
  System::String^ GetLookupTableName();


  // void SetFieldDataName (char *);
/// <summary>
/// <para>Set the name of the field data to extract. If not specified, uses  first field data encountered in file.</para>
/// </summary>
  void SetFieldDataName(System::String^ arg0);


  // char *GetFieldDataName ();
/// <summary>
/// <para>Set the name of the field data to extract. If not specified, uses  first field data encountered in file.</para>
/// </summary>
  System::String^ GetFieldDataName();


  // void SetReadAllScalars (int );
/// <summary>
/// <para>Enable reading all scalars. </para>
/// </summary>
  void SetReadAllScalars(int arg0);


  // int GetReadAllScalars ();
/// <summary>
/// <para>Enable reading all scalars. </para>
/// </summary>
  int GetReadAllScalars();


  // void ReadAllScalarsOn ();
/// <summary>
/// <para>Enable reading all scalars. </para>
/// </summary>
  void ReadAllScalarsOn();


  // void ReadAllScalarsOff ();
/// <summary>
/// <para>Enable reading all scalars. </para>
/// </summary>
  void ReadAllScalarsOff();


  // void SetReadAllVectors (int );
/// <summary>
/// <para>Enable reading all vectors. </para>
/// </summary>
  void SetReadAllVectors(int arg0);


  // int GetReadAllVectors ();
/// <summary>
/// <para>Enable reading all vectors. </para>
/// </summary>
  int GetReadAllVectors();


  // void ReadAllVectorsOn ();
/// <summary>
/// <para>Enable reading all vectors. </para>
/// </summary>
  void ReadAllVectorsOn();


  // void ReadAllVectorsOff ();
/// <summary>
/// <para>Enable reading all vectors. </para>
/// </summary>
  void ReadAllVectorsOff();


  // void SetReadAllNormals (int );
/// <summary>
/// <para>Enable reading all normals. </para>
/// </summary>
  void SetReadAllNormals(int arg0);


  // int GetReadAllNormals ();
/// <summary>
/// <para>Enable reading all normals. </para>
/// </summary>
  int GetReadAllNormals();


  // void ReadAllNormalsOn ();
/// <summary>
/// <para>Enable reading all normals. </para>
/// </summary>
  void ReadAllNormalsOn();


  // void ReadAllNormalsOff ();
/// <summary>
/// <para>Enable reading all normals. </para>
/// </summary>
  void ReadAllNormalsOff();


  // void SetReadAllTensors (int );
/// <summary>
/// <para>Enable reading all tensors. </para>
/// </summary>
  void SetReadAllTensors(int arg0);


  // int GetReadAllTensors ();
/// <summary>
/// <para>Enable reading all tensors. </para>
/// </summary>
  int GetReadAllTensors();


  // void ReadAllTensorsOn ();
/// <summary>
/// <para>Enable reading all tensors. </para>
/// </summary>
  void ReadAllTensorsOn();


  // void ReadAllTensorsOff ();
/// <summary>
/// <para>Enable reading all tensors. </para>
/// </summary>
  void ReadAllTensorsOff();


  // void SetReadAllColorScalars (int );
/// <summary>
/// <para>Enable reading all color scalars. </para>
/// </summary>
  void SetReadAllColorScalars(int arg0);


  // int GetReadAllColorScalars ();
/// <summary>
/// <para>Enable reading all color scalars. </para>
/// </summary>
  int GetReadAllColorScalars();


  // void ReadAllColorScalarsOn ();
/// <summary>
/// <para>Enable reading all color scalars. </para>
/// </summary>
  void ReadAllColorScalarsOn();


  // void ReadAllColorScalarsOff ();
/// <summary>
/// <para>Enable reading all color scalars. </para>
/// </summary>
  void ReadAllColorScalarsOff();


  // void SetReadAllTCoords (int );
/// <summary>
/// <para>Enable reading all tcoords. </para>
/// </summary>
  void SetReadAllTCoords(int arg0);


  // int GetReadAllTCoords ();
/// <summary>
/// <para>Enable reading all tcoords. </para>
/// </summary>
  int GetReadAllTCoords();


  // void ReadAllTCoordsOn ();
/// <summary>
/// <para>Enable reading all tcoords. </para>
/// </summary>
  void ReadAllTCoordsOn();


  // void ReadAllTCoordsOff ();
/// <summary>
/// <para>Enable reading all tcoords. </para>
/// </summary>
  void ReadAllTCoordsOff();


  // void SetReadAllFields (int );
/// <summary>
/// <para>Enable reading all fields. </para>
/// </summary>
  void SetReadAllFields(int arg0);


  // int GetReadAllFields ();
/// <summary>
/// <para>Enable reading all fields. </para>
/// </summary>
  int GetReadAllFields();


  // void ReadAllFieldsOn ();
/// <summary>
/// <para>Enable reading all fields. </para>
/// </summary>
  void ReadAllFieldsOn();


  // void ReadAllFieldsOff ();
/// <summary>
/// <para>Enable reading all fields. </para>
/// </summary>
  void ReadAllFieldsOff();


  // int OpenVTKFile ();
/// <summary>
/// <para>Open a vtk data file. Returns zero if error.</para>
/// </summary>
  int OpenVTKFile();


  // int ReadHeader ();
/// <summary>
/// <para>Read the header of a vtk data file. Returns 0 if error.</para>
/// </summary>
  int ReadHeader();


  // int ReadCellData (vtkDataSet *ds, int numCells);
/// <summary>
/// <para>Read the cell data of a vtk data file. The number of cells (from the  dataset) must match the number of cells defined in cell attributes (unless no geometry was defined).</para>
/// </summary>
  int ReadCellData(vtkDataSet^ ds, int numCells);


  // int ReadPointData (vtkDataSet *ds, int numPts);
/// <summary>
/// <para>Read the point data of a vtk data file. The number of points (from the dataset) must match the number of points defined in point attributes (unless no geometry was defined).</para>
/// </summary>
  int ReadPointData(vtkDataSet^ ds, int numPts);


  // int ReadPoints (vtkPointSet *ps, int numPts);
/// <summary>
/// <para>Read point coordinates. Return 0 if error.</para>
/// </summary>
  int ReadPoints(vtkPointSet^ ps, int numPts);


  // int ReadCells (int size, int *data);
/// <summary>
/// <para>Read a bunch of &quot;cells&quot;. Return 0 if error.</para>
/// </summary>
  int ReadCells(int size, array<int>^ data);


  // int ReadCells (int size, int *data, int skip1, int read2, int skip3);
/// <summary>
/// <para>Read a piece of the cells (for streaming compliance)</para>
/// </summary>
  int ReadCells(int size, array<int>^ data, int skip1, int read2, int skip3);


  // int ReadCoordinates (vtkRectilinearGrid *rg, int axes, int numCoords);
/// <summary>
/// <para>Read the coordinates for a rectilinear grid. The axes parameter specifies which coordinate axes (0,1,2) is being read.</para>
/// </summary>
  int ReadCoordinates(vtkRectilinearGrid^ rg, int axes, int numCoords);


  // vtkDataArray *ReadArray (const char *dataType, int numTuples, int numComp);
/// <summary>
/// <para>Helper functions for reading data.</para>
/// </summary>
  vtkDataArray^ ReadArray(System::String^ dataType, int numTuples, int numComp);


  // vtkFieldData *ReadFieldData ();
/// <summary>
/// <para>Helper functions for reading data.</para>
/// </summary>
  vtkFieldData^ ReadFieldData();


  // int Read (char *);
/// <summary>
/// <para>Internal function to read in a value.  Returns zero if there was an error.</para>
/// </summary>
  int Read(System::String^ arg0);


  // int Read (unsigned char *);
/// <summary>
/// <para>Internal function to read in a value.  Returns zero if there was an error.</para>
/// </summary>
  int Read(array<unsigned char>^ arg0);


  // int Read (short *);
/// <summary>
/// <para>Internal function to read in a value.  Returns zero if there was an error.</para>
/// </summary>
  int Read(array<short>^ arg0);


  // int Read (unsigned short *);
/// <summary>
/// <para>Internal function to read in a value.  Returns zero if there was an error.</para>
/// </summary>
  int Read(array<unsigned short>^ arg0);


  // int Read (int *);
/// <summary>
/// <para>Internal function to read in a value.  Returns zero if there was an error.</para>
/// </summary>
  int Read(array<int>^ arg0);


  // int Read (unsigned int *);
/// <summary>
/// <para>Internal function to read in a value.  Returns zero if there was an error.</para>
/// </summary>
  int Read(array<unsigned int>^ arg0);


  // int Read (long *);
/// <summary>
/// <para>Internal function to read in a value.  Returns zero if there was an error.</para>
/// </summary>
  int Read(array<long>^ arg0);


  // int Read (unsigned long *);
/// <summary>
/// <para>Internal function to read in a value.  Returns zero if there was an error.</para>
/// </summary>
  int Read(array<unsigned long>^ arg0);


  // int Read (float *);
/// <summary>
/// <para>Internal function to read in a value.  Returns zero if there was an error.</para>
/// </summary>
  int Read(array<float>^ arg0);


  // int Read (double *);
/// <summary>
/// <para>Internal function to read in a value.  Returns zero if there was an error.</para>
/// </summary>
  int Read(array<double>^ arg0);


  // void CloseVTKFile ();
/// <summary>
/// <para>Close the vtk file.</para>
/// </summary>
  void CloseVTKFile();


  // virtual int ReadMetaData (vtkInformation *);return 
  int ReadMetaData(vtkInformation^ arg0);


// Did not wrap:  vtkDataReader ();


// Did not wrap:  ~vtkDataReader ();


// Did not wrap:  void SetScalarLut (char *);


// Did not wrap:  char *GetScalarLut ();


// Did not wrap:  int ReadScalarData (vtkDataSetAttributes *a, int num);


// Did not wrap:  int ReadVectorData (vtkDataSetAttributes *a, int num);


// Did not wrap:  int ReadNormalData (vtkDataSetAttributes *a, int num);


// Did not wrap:  int ReadTensorData (vtkDataSetAttributes *a, int num);


// Did not wrap:  int ReadCoScalarData (vtkDataSetAttributes *a, int num);


// Did not wrap:  int ReadLutData (vtkDataSetAttributes *a);


// Did not wrap:  int ReadTCoordsData (vtkDataSetAttributes *a, int num);


// Did not wrap:  int ReadDataSetData (vtkDataSet *ds);


// Did not wrap:  void InitializeCharacteristics ();


// Did not wrap:  int CharacterizeFile ();


// Did not wrap:  void CheckFor (const char *name, char *line, int &num, char &array, int &allocSize);


// Did not wrap:  void DecodeArrayName (char *resname, const char *name);


// Did not wrap:  virtual int ProcessRequest (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);return 


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);return 


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);return 


// Did not wrap:  vtkDataReader (const vtkDataReader &);


// Did not wrap:  void vtkDataReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDataReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDataReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDataReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDataReader();


};

} // end vtkIO
