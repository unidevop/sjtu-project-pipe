#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkDataCompressor;

public ref class vtkXMLWriter : public vtkAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLWriter *NewInstance ();
  vtkXMLWriter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetByteOrder (int );
/// <summary>
/// <para>Get/Set the byte order of data written to the file.  The default is the machine's hardware byte order.</para>
/// </summary>
  void SetByteOrder(int arg0);


  // int GetByteOrder ();
/// <summary>
/// <para>Get/Set the byte order of data written to the file.  The default is the machine's hardware byte order.</para>
/// </summary>
  int GetByteOrder();


  // void SetByteOrderToBigEndian ();
/// <summary>
/// <para>Get/Set the byte order of data written to the file.  The default is the machine's hardware byte order.</para>
/// </summary>
  void SetByteOrderToBigEndian();


  // void SetByteOrderToLittleEndian ();
/// <summary>
/// <para>Get/Set the byte order of data written to the file.  The default is the machine's hardware byte order.</para>
/// </summary>
  void SetByteOrderToLittleEndian();


  // virtual void SetIdType (int );
/// <summary>
/// <para>Get/Set the size of the vtkIdType values stored in the file.  The default is the real size of vtkIdType.</para>
/// </summary>
  void SetIdType(int arg0);


  // int GetIdType ();
/// <summary>
/// <para>Get/Set the size of the vtkIdType values stored in the file.  The default is the real size of vtkIdType.</para>
/// </summary>
  int GetIdType();


  // void SetIdTypeToInt32 ();
/// <summary>
/// <para>Get/Set the size of the vtkIdType values stored in the file.  The default is the real size of vtkIdType.</para>
/// </summary>
  void SetIdTypeToInt32();


  // void SetIdTypeToInt64 ();
/// <summary>
/// <para>Get/Set the size of the vtkIdType values stored in the file.  The default is the real size of vtkIdType.</para>
/// </summary>
  void SetIdTypeToInt64();


  // void SetFileName (char *);
/// <summary>
/// <para>Get/Set the name of the output file.</para>
/// </summary>
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
/// <summary>
/// <para>Get/Set the name of the output file.</para>
/// </summary>
  System::String^ GetFileName();


  // virtual void SetCompressor (vtkDataCompressor *);
/// <summary>
/// <para>Get/Set the compressor used to compress binary and appended data before writing to the file.  Default is no compression.</para>
/// </summary>
  void SetCompressor(vtkDataCompressor^ arg0);


  // vtkDataCompressor *GetCompressor ();
/// <summary>
/// <para>Get/Set the compressor used to compress binary and appended data before writing to the file.  Default is no compression.</para>
/// </summary>
  vtkDataCompressor^ GetCompressor();


  // virtual void SetBlockSize (unsigned int blockSize);
/// <summary>
/// <para>Get/Set the block size used in compression.  When reading, this controls the granularity of how much extra information must be read when only part of the data are requested.  The value should be a multiple of the largest scalar data type.</para>
/// </summary>
  void SetBlockSize(unsigned int blockSize);


  // int unsigned GetBlockSize ();
/// <summary>
/// <para>Get/Set the block size used in compression.  When reading, this controls the granularity of how much extra information must be read when only part of the data are requested.  The value should be a multiple of the largest scalar data type.</para>
/// </summary>
  unsigned int GetBlockSize();


  // void SetDataMode (int );
/// <summary>
/// <para>Get/Set the data mode used for the file's data.  The options are vtkXMLWriter::Ascii, vtkXMLWriter::Binary, and vtkXMLWriter::Appended.</para>
/// </summary>
  void SetDataMode(int arg0);


  // int GetDataMode ();
/// <summary>
/// <para>Get/Set the data mode used for the file's data.  The options are vtkXMLWriter::Ascii, vtkXMLWriter::Binary, and vtkXMLWriter::Appended.</para>
/// </summary>
  int GetDataMode();


  // void SetDataModeToAscii ();
/// <summary>
/// <para>Get/Set the data mode used for the file's data.  The options are vtkXMLWriter::Ascii, vtkXMLWriter::Binary, and vtkXMLWriter::Appended.</para>
/// </summary>
  void SetDataModeToAscii();


  // void SetDataModeToBinary ();
/// <summary>
/// <para>Get/Set the data mode used for the file's data.  The options are vtkXMLWriter::Ascii, vtkXMLWriter::Binary, and vtkXMLWriter::Appended.</para>
/// </summary>
  void SetDataModeToBinary();


  // void SetDataModeToAppended ();
/// <summary>
/// <para>Get/Set the data mode used for the file's data.  The options are vtkXMLWriter::Ascii, vtkXMLWriter::Binary, and vtkXMLWriter::Appended.</para>
/// </summary>
  void SetDataModeToAppended();


  // void SetEncodeAppendedData (int );
/// <summary>
/// <para>Get/Set whether the appended data section is base64 encoded.  If encoded, reading and writing will be slower, but the file will be fully valid XML and text-only.  If not encoded, the XML specification will be violated, but reading and writing will be fast.  The default is to do the encoding.</para>
/// </summary>
  void SetEncodeAppendedData(int arg0);


  // int GetEncodeAppendedData ();
/// <summary>
/// <para>Get/Set whether the appended data section is base64 encoded.  If encoded, reading and writing will be slower, but the file will be fully valid XML and text-only.  If not encoded, the XML specification will be violated, but reading and writing will be fast.  The default is to do the encoding.</para>
/// </summary>
  int GetEncodeAppendedData();


  // void EncodeAppendedDataOn ();
/// <summary>
/// <para>Get/Set whether the appended data section is base64 encoded.  If encoded, reading and writing will be slower, but the file will be fully valid XML and text-only.  If not encoded, the XML specification will be violated, but reading and writing will be fast.  The default is to do the encoding.</para>
/// </summary>
  void EncodeAppendedDataOn();


  // void EncodeAppendedDataOff ();
/// <summary>
/// <para>Get/Set whether the appended data section is base64 encoded.  If encoded, reading and writing will be slower, but the file will be fully valid XML and text-only.  If not encoded, the XML specification will be violated, but reading and writing will be fast.  The default is to do the encoding.</para>
/// </summary>
  void EncodeAppendedDataOff();


  // void SetInput (vtkDataObject *);
/// <summary>
/// <para>Set/Get an input of this algorithm. You should not override these methods because they are not the only way to connect a pipeline</para>
/// </summary>
  void SetInput(vtkDataObject^ arg0);


  // void SetInput (int , vtkDataObject *);
/// <summary>
/// <para>Set/Get an input of this algorithm. You should not override these methods because they are not the only way to connect a pipeline</para>
/// </summary>
  void SetInput(int arg0, vtkDataObject^ arg1);


  // vtkDataObject *GetInput (int port);
/// <summary>
/// <para>Set/Get an input of this algorithm. You should not override these methods because they are not the only way to connect a pipeline</para>
/// </summary>
  vtkDataObject^ GetInput(int port);


  // vtkDataObject *GetInput ();return this GetInput 
/// <summary>
/// <para>Set/Get an input of this algorithm. You should not override these methods because they are not the only way to connect a pipeline</para>
/// </summary>
  vtkDataObject^ GetInput();


  // virtual const char *GetDefaultFileExtension () = 0;
/// <summary>
/// <para>Get the default file extension for files written by this writer.</para>
/// </summary>
  System::String^ GetDefaultFileExtension();


  // int Write ();
/// <summary>
/// <para>Invoke the writer.  Returns 1 for success, 0 for failure.</para>
/// </summary>
  int Write();


// Did not wrap:  virtual int ProcessRequest (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


  // void SetTimeStep (int );
/// <summary>
/// <para>Which TimeStep to write.</para>
/// </summary>
  void SetTimeStep(int arg0);


  // int GetTimeStep ();
/// <summary>
/// <para>Which TimeStep to write.</para>
/// </summary>
  int GetTimeStep();


  // int  *GetTimeStepRange ();
/// <summary>
/// <para>Which TimeStepRange to write.</para>
/// </summary>
  array<int>^ GetTimeStepRange();


  // void SetTimeStepRange (int , int );
/// <summary>
/// <para>Which TimeStepRange to write.</para>
/// </summary>
  void SetTimeStepRange(int arg0, int arg1);


  // void SetTimeStepRange (int  a[2]);
/// <summary>
/// <para>Which TimeStepRange to write.</para>
/// </summary>
  void SetTimeStepRange(array<int>^ a);


  // int GetNumberOfTimeSteps ();
/// <summary>
/// <para>Set the number of time steps</para>
/// </summary>
  int GetNumberOfTimeSteps();


  // void SetNumberOfTimeSteps (int );
/// <summary>
/// <para>Set the number of time steps</para>
/// </summary>
  void SetNumberOfTimeSteps(int arg0);


  // void Start ();
/// <summary>
/// <para>API to interface an outside the VTK pipeline control</para>
/// </summary>
  void Start();


  // void Stop ();
/// <summary>
/// <para>API to interface an outside the VTK pipeline control</para>
/// </summary>
  void Stop();


  // void WriteNextTime (double time);
/// <summary>
/// <para>API to interface an outside the VTK pipeline control</para>
/// </summary>
  void WriteNextTime(double time);


// Did not wrap:  vtkXMLWriter ();


// Did not wrap:  ~vtkXMLWriter ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  virtual void SetDataStream (vtkOutputStream *);


// Did not wrap:  vtkOutputStream *GetDataStream ();


// Did not wrap:  virtual int WriteInternal ();


// Did not wrap:  virtual int WriteData ();return 


// Did not wrap:  virtual const char *GetDataSetName () = 0;


// Did not wrap:  virtual int GetDataSetMajorVersion ();


// Did not wrap:  virtual int GetDataSetMinorVersion ();


// Did not wrap:  vtkDataSet *GetInputAsDataSet ();


// Did not wrap:  int StartFile ();


// Did not wrap:  virtual void WriteFileAttributes ();


// Did not wrap:  int EndFile ();


// Did not wrap:  void DeleteAFile ();


// Did not wrap:  void DeleteAFile (const char *name);


// Did not wrap:  virtual int WritePrimaryElement (ostream &os, vtkIndent indent);


// Did not wrap:  virtual void WritePrimaryElementAttributes (ostream &os, vtkIndent indent);


// Did not wrap:  void StartAppendedData ();


// Did not wrap:  void EndAppendedData ();


// Did not wrap:  unsigned long ReserveAttributeSpace (const char *attr, int length);


// Did not wrap:  unsigned long GetAppendedDataOffset ();


// Did not wrap:  unsigned long WriteAppendedDataOffset (unsigned long streamPos, unsigned long &lastoffset, const char *attr);


// Did not wrap:  unsigned long ForwardAppendedDataOffset (unsigned long streamPos, unsigned long offset, const char *attr);


// Did not wrap:  int WriteBinaryData (void *data, int numWords, int wordType);


// Did not wrap:  int WriteBinaryData (char *data);return this WriteBinaryData data static_cast int strlen data VTK_CHAR 


// Did not wrap:  int WriteBinaryData (char *data, int numWords);return this WriteBinaryData data numWords VTK_CHAR 


// Did not wrap:  int WriteBinaryData (unsigned char *data, int numWords);return this WriteBinaryData data numWords VTK_UNSIGNED_CHAR 


// Did not wrap:  int WriteBinaryData (short *data, int numWords);return this WriteBinaryData data numWords VTK_SHORT 


// Did not wrap:  int WriteBinaryData (unsigned short *data, int numWords);return this WriteBinaryData data numWords VTK_UNSIGNED_SHORT 


// Did not wrap:  int WriteBinaryData (int *data, int numWords);return this WriteBinaryData data numWords VTK_INT 


// Did not wrap:  int WriteBinaryData (unsigned int *data, int numWords);return this WriteBinaryData data numWords VTK_UNSIGNED_INT 


// Did not wrap:  int WriteAsciiData (void *data, int numWords, int wordType, vtkIndent indent);


// Did not wrap:  int WriteAsciiData (char *data, vtkIndent indent);return this WriteAsciiData data static_cast int strlen data VTK_CHAR indent 


// Did not wrap:  int WriteAsciiData (char *data, int numWords, vtkIndent indent);return this WriteAsciiData data numWords VTK_CHAR indent 


// Did not wrap:  int WriteAsciiData (unsigned char *data, int numWords, vtkIndent indent);return this WriteAsciiData data numWords VTK_UNSIGNED_CHAR indent 


// Did not wrap:  int WriteAsciiData (short *data, int numWords, vtkIndent indent);return this WriteAsciiData data numWords VTK_SHORT indent 


// Did not wrap:  int WriteAsciiData (unsigned short *data, int numWords, vtkIndent indent);return this WriteAsciiData data numWords VTK_UNSIGNED_SHORT indent 


// Did not wrap:  int WriteAsciiData (int *data, int numWords, vtkIndent indent);return this WriteAsciiData data numWords VTK_INT indent 


// Did not wrap:  int WriteAsciiData (unsigned int *data, int numWords, vtkIndent indent);return this WriteAsciiData data numWords VTK_UNSIGNED_INT indent 


// Did not wrap:  int WriteScalarAttribute (const char *name, int data);


// Did not wrap:  int WriteScalarAttribute (const char *name, float data);


// Did not wrap:  int WriteScalarAttribute (const char *name, vtkIdType data);


// Did not wrap:  int WriteVectorAttribute (const char *name, int length, int *data);


// Did not wrap:  int WriteVectorAttribute (const char *name, int length, float *data);


// Did not wrap:  int WriteVectorAttribute (const char *name, int length, double *data);


// Did not wrap:  int WriteVectorAttribute (const char *name, int length, vtkIdType *data);


// Did not wrap:  int WriteDataModeAttribute (const char *name);


// Did not wrap:  int WriteWordTypeAttribute (const char *name, int dataType);


// Did not wrap:  int WriteStringAttribute (const char *name, const char *value);


// Did not wrap:  unsigned long WriteDataArrayAppended (vtkDataArray *a, vtkIndent indent, const char *alternateName, int writeNumTuples, int timestep);


// Did not wrap:  void WriteDataArrayAppendedData (vtkDataArray *a, unsigned long pos, unsigned long &lastoffset);


// Did not wrap:  void WriteDataArrayInline (vtkDataArray *a, vtkIndent indent, const char *alternateName, int writeNumTuples);


// Did not wrap:  void WriteInlineData (void *data, int numWords, int wordType, vtkIndent indent);


// Did not wrap:  void WriteDataArrayHeader (vtkDataArray *a, vtkIndent indent, const char *alternateName, int writeNumTuples, int timestep);


// Did not wrap:  void WriteDataArrayFooter (ostream &os, vtkIndent indent);


// Did not wrap:  void WriteFieldData (vtkIndent indent);


// Did not wrap:  void WriteFieldDataInline (vtkFieldData *fd, vtkIndent indent);


// Did not wrap:  void WritePointDataInline (vtkPointData *pd, vtkIndent indent);


// Did not wrap:  void WriteCellDataInline (vtkCellData *cd, vtkIndent indent);


// Did not wrap:  void WriteFieldDataAppended (vtkFieldData *fd, vtkIndent indent, OffsetsManagerGroup *fdManager);


// Did not wrap:  void WriteFieldDataAppendedData (vtkFieldData *fd, int timestep, OffsetsManagerGroup *fdManager);


// Did not wrap:  void WritePointDataAppended (vtkPointData *pd, vtkIndent indent, OffsetsManagerGroup *pdManager);


// Did not wrap:  void WritePointDataAppendedData (vtkPointData *pd, int timestep, OffsetsManagerGroup *pdManager);


// Did not wrap:  void WriteCellDataAppended (vtkCellData *cd, vtkIndent indent, OffsetsManagerGroup *cdManager);


// Did not wrap:  void WriteCellDataAppendedData (vtkCellData *cd, int timestep, OffsetsManagerGroup *cdManager);


// Did not wrap:  void WriteAttributeIndices (vtkDataSetAttributes *dsa, char *names);


// Did not wrap:  void WritePointsAppended (vtkPoints *points, vtkIndent indent, OffsetsManager *manager);


// Did not wrap:  void WritePointsAppendedData (vtkPoints *points, int timestep, OffsetsManager *pdManager);


// Did not wrap:  void WritePointsInline (vtkPoints *points, vtkIndent indent);


// Did not wrap:  void WriteCoordinatesInline (vtkDataArray *xc, vtkDataArray *yc, vtkDataArray *zc, vtkIndent indent);


// Did not wrap:  void WriteCoordinatesAppended (vtkDataArray *xc, vtkDataArray *yc, vtkDataArray *zc, vtkIndent indent, OffsetsManagerGroup *coordManager);


// Did not wrap:  void WriteCoordinatesAppendedData (vtkDataArray *xc, vtkDataArray *yc, vtkDataArray *zc, int timestep, OffsetsManagerGroup *coordManager);


// Did not wrap:  virtual vtkDataArray *CreateArrayForPoints (vtkDataArray *inArray);


// Did not wrap:  virtual vtkDataArray *CreateArrayForCells (vtkDataArray *inArray);


// Did not wrap:  virtual vtkDataArray *CreateExactCoordinates (vtkDataArray *inArray, int xyz);


// Did not wrap:  void WritePPointData (vtkPointData *pd, vtkIndent indent);


// Did not wrap:  void WritePCellData (vtkCellData *cd, vtkIndent indent);


// Did not wrap:  void WritePPoints (vtkPoints *points, vtkIndent indent);


// Did not wrap:  void WritePDataArray (vtkDataArray *a, vtkIndent indent, const char *alternateName);


// Did not wrap:  void WritePCoordinates (vtkDataArray *xc, vtkDataArray *yc, vtkDataArray *zc, vtkIndent indent);


// Did not wrap:  int WriteBinaryDataInternal (void *data, int numWords, int wordType);


// Did not wrap:  int WriteBinaryDataBlock (unsigned char *in_data, int numWords, int wordType);


// Did not wrap:  void PerformByteSwap (void *data, int numWords, int wordSize);


// Did not wrap:  int CreateCompressionHeader (unsigned long size);


// Did not wrap:  int WriteCompressionBlock (unsigned char *data, unsigned long size);


// Did not wrap:  int WriteCompressionHeader ();


// Did not wrap:  unsigned long GetWordTypeSize (int dataType);


// Did not wrap:  const char *GetWordTypeName (int dataType);


// Did not wrap:  unsigned long GetOutputWordTypeSize (int dataType);


// Did not wrap:  char *CreateStringArray (int numStrings);


// Did not wrap:  void DestroyStringArray (int numStrings, char *strings);


// Did not wrap:  virtual void GetProgressRange (float *range);


// Did not wrap:  virtual void SetProgressRange (float *range, int curStep, int numSteps);


// Did not wrap:  virtual void SetProgressRange (float *range, int curStep, float *fractions);


// Did not wrap:  virtual void SetProgressPartial (float fraction);


// Did not wrap:  virtual void UpdateProgressDiscrete (float progress);


// Did not wrap:  int OpenFile ();


// Did not wrap:  void CloseFile ();


// Did not wrap:  vtkXMLWriter (const vtkXMLWriter &);


// Did not wrap:  void vtkXMLWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLWriter();


};

} // end vtkIO
