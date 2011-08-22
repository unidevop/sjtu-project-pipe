#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkParticleReader : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkParticleReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkParticleReader *NewInstance ();
  vtkParticleReader^ NewInstance();


  // vtkParticleReader *SafeDownCast (vtkObject* o);
  static vtkParticleReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetFileName (char *);
/// <summary>
/// <para>Specify file name.</para>
/// </summary>
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
/// <summary>
/// <para>Specify file name.</para>
/// </summary>
  System::String^ GetFileName();


  // void SetDataByteOrderToBigEndian ();
/// <summary>
/// <para>These methods should be used instead of the SwapBytes methods. They indicate the byte ordering of the file you are trying to read in. These methods will then either swap or not swap the bytes depending on the byte ordering of the machine it is being run on. For example, reading in a BigEndian file on a BigEndian machine will result in no swapping. Trying to read the same file on a LittleEndian machine will result in swapping. As a quick note most UNIX machines are BigEndian while PC's and VAX tend to be LittleEndian. So if the file you are reading in was generated on a VAX or PC, SetDataByteOrderToLittleEndian  otherwise SetDataByteOrderToBigEndian. Not used when reading text files. </para>
/// </summary>
  void SetDataByteOrderToBigEndian();


  // void SetDataByteOrderToLittleEndian ();
/// <summary>
/// <para>These methods should be used instead of the SwapBytes methods. They indicate the byte ordering of the file you are trying to read in. These methods will then either swap or not swap the bytes depending on the byte ordering of the machine it is being run on. For example, reading in a BigEndian file on a BigEndian machine will result in no swapping. Trying to read the same file on a LittleEndian machine will result in swapping. As a quick note most UNIX machines are BigEndian while PC's and VAX tend to be LittleEndian. So if the file you are reading in was generated on a VAX or PC, SetDataByteOrderToLittleEndian  otherwise SetDataByteOrderToBigEndian. Not used when reading text files. </para>
/// </summary>
  void SetDataByteOrderToLittleEndian();


  // int GetDataByteOrder ();
/// <summary>
/// <para>These methods should be used instead of the SwapBytes methods. They indicate the byte ordering of the file you are trying to read in. These methods will then either swap or not swap the bytes depending on the byte ordering of the machine it is being run on. For example, reading in a BigEndian file on a BigEndian machine will result in no swapping. Trying to read the same file on a LittleEndian machine will result in swapping. As a quick note most UNIX machines are BigEndian while PC's and VAX tend to be LittleEndian. So if the file you are reading in was generated on a VAX or PC, SetDataByteOrderToLittleEndian  otherwise SetDataByteOrderToBigEndian. Not used when reading text files. </para>
/// </summary>
  int GetDataByteOrder();


  // void SetDataByteOrder (int );
/// <summary>
/// <para>These methods should be used instead of the SwapBytes methods. They indicate the byte ordering of the file you are trying to read in. These methods will then either swap or not swap the bytes depending on the byte ordering of the machine it is being run on. For example, reading in a BigEndian file on a BigEndian machine will result in no swapping. Trying to read the same file on a LittleEndian machine will result in swapping. As a quick note most UNIX machines are BigEndian while PC's and VAX tend to be LittleEndian. So if the file you are reading in was generated on a VAX or PC, SetDataByteOrderToLittleEndian  otherwise SetDataByteOrderToBigEndian. Not used when reading text files. </para>
/// </summary>
  void SetDataByteOrder(int arg0);


  // const char *GetDataByteOrderAsString ();
/// <summary>
/// <para>These methods should be used instead of the SwapBytes methods. They indicate the byte ordering of the file you are trying to read in. These methods will then either swap or not swap the bytes depending on the byte ordering of the machine it is being run on. For example, reading in a BigEndian file on a BigEndian machine will result in no swapping. Trying to read the same file on a LittleEndian machine will result in swapping. As a quick note most UNIX machines are BigEndian while PC's and VAX tend to be LittleEndian. So if the file you are reading in was generated on a VAX or PC, SetDataByteOrderToLittleEndian  otherwise SetDataByteOrderToBigEndian. Not used when reading text files. </para>
/// </summary>
  System::String^ GetDataByteOrderAsString();


  // void SetSwapBytes (int );
/// <summary>
/// <para>Set/Get the byte swapping to explicitly swap the bytes of a file. Not used when reading text files.</para>
/// </summary>
  void SetSwapBytes(int arg0);


  // int GetSwapBytes ();return this SwapBytes 
/// <summary>
/// <para>Set/Get the byte swapping to explicitly swap the bytes of a file. Not used when reading text files.</para>
/// </summary>
  int GetSwapBytes();


  // void SwapBytesOn ();
/// <summary>
/// <para>Set/Get the byte swapping to explicitly swap the bytes of a file. Not used when reading text files.</para>
/// </summary>
  void SwapBytesOn();


  // void SwapBytesOff ();
/// <summary>
/// <para>Set/Get the byte swapping to explicitly swap the bytes of a file. Not used when reading text files.</para>
/// </summary>
  void SwapBytesOff();


  // void SetHasScalar (int );
/// <summary>
/// <para>Default: 1. If 1 then each particle has a value associated with it.</para>
/// </summary>
  void SetHasScalar(int arg0);


  // int GetHasScalar ();
/// <summary>
/// <para>Default: 1. If 1 then each particle has a value associated with it.</para>
/// </summary>
  int GetHasScalar();


  // void HasScalarOn ();
/// <summary>
/// <para>Default: 1. If 1 then each particle has a value associated with it.</para>
/// </summary>
  void HasScalarOn();


  // void HasScalarOff ();
/// <summary>
/// <para>Default: 1. If 1 then each particle has a value associated with it.</para>
/// </summary>
  void HasScalarOff();


  // void SetFileType (int );
/// <summary>
/// <para>Get/Set the file type.  The options are: - FILE_TYPE_IS_UNKNOWN (default) the class      will attempt to determine the file type.     If this fails then you should set the file type     yourself. - FILE_TYPE_IS_TEXT the file type is text. - FILE_TYPE_IS_BINARY the file type is binary.</para>
/// </summary>
  void SetFileType(int arg0);


  // int GetFileTypeMinValue ();
/// <summary>
/// <para>Get/Set the file type.  The options are: - FILE_TYPE_IS_UNKNOWN (default) the class      will attempt to determine the file type.     If this fails then you should set the file type     yourself. - FILE_TYPE_IS_TEXT the file type is text. - FILE_TYPE_IS_BINARY the file type is binary.</para>
/// </summary>
  int GetFileTypeMinValue();


  // int GetFileTypeMaxValue ();
/// <summary>
/// <para>Get/Set the file type.  The options are: - FILE_TYPE_IS_UNKNOWN (default) the class      will attempt to determine the file type.     If this fails then you should set the file type     yourself. - FILE_TYPE_IS_TEXT the file type is text. - FILE_TYPE_IS_BINARY the file type is binary.</para>
/// </summary>
  int GetFileTypeMaxValue();


  // int GetFileType ();
/// <summary>
/// <para>Get/Set the file type.  The options are: - FILE_TYPE_IS_UNKNOWN (default) the class      will attempt to determine the file type.     If this fails then you should set the file type     yourself. - FILE_TYPE_IS_TEXT the file type is text. - FILE_TYPE_IS_BINARY the file type is binary.</para>
/// </summary>
  int GetFileType();


  // void SetFileTypeToUnknown ();this SetFileType FILE_TYPE_IS_UNKNOWN 
/// <summary>
/// <para>Get/Set the file type.  The options are: - FILE_TYPE_IS_UNKNOWN (default) the class      will attempt to determine the file type.     If this fails then you should set the file type     yourself. - FILE_TYPE_IS_TEXT the file type is text. - FILE_TYPE_IS_BINARY the file type is binary.</para>
/// </summary>
  void SetFileTypeToUnknown();


  // void SetFileTypeToText ();this SetFileType FILE_TYPE_IS_TEXT 
/// <summary>
/// <para>Get/Set the file type.  The options are: - FILE_TYPE_IS_UNKNOWN (default) the class      will attempt to determine the file type.     If this fails then you should set the file type     yourself. - FILE_TYPE_IS_TEXT the file type is text. - FILE_TYPE_IS_BINARY the file type is binary.</para>
/// </summary>
  void SetFileTypeToText();


  // void SetFileTypeToBinary ();this SetFileType FILE_TYPE_IS_BINARY 
/// <summary>
/// <para>Get/Set the data type.  The options are: - VTK_FLOAT (default) single precision floating point. - VTK_DOUBLE double precision floating point.</para>
/// </summary>
  void SetFileTypeToBinary();


  // void SetDataType (int );
/// <summary>
/// <para>Get/Set the data type.  The options are: - VTK_FLOAT (default) single precision floating point. - VTK_DOUBLE double precision floating point.</para>
/// </summary>
  void SetDataType(int arg0);


  // int GetDataTypeMinValue ();
/// <summary>
/// <para>Get/Set the data type.  The options are: - VTK_FLOAT (default) single precision floating point. - VTK_DOUBLE double precision floating point.</para>
/// </summary>
  int GetDataTypeMinValue();


  // int GetDataTypeMaxValue ();
/// <summary>
/// <para>Get/Set the data type.  The options are: - VTK_FLOAT (default) single precision floating point. - VTK_DOUBLE double precision floating point.</para>
/// </summary>
  int GetDataTypeMaxValue();


  // int GetDataType ();
/// <summary>
/// <para>Get/Set the data type.  The options are: - VTK_FLOAT (default) single precision floating point. - VTK_DOUBLE double precision floating point.</para>
/// </summary>
  int GetDataType();


  // void SetDataTypeToFloat ();this SetDataType VTK_FLOAT 
/// <summary>
/// <para>Get/Set the data type.  The options are: - VTK_FLOAT (default) single precision floating point. - VTK_DOUBLE double precision floating point.</para>
/// </summary>
  void SetDataTypeToFloat();


  // void SetDataTypeToDouble ();this SetDataType VTK_DOUBLE 
  void SetDataTypeToDouble();


// Did not wrap:  vtkParticleReader ();


// Did not wrap:  ~vtkParticleReader ();


// Did not wrap:  void OpenFile ();


// Did not wrap:  int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int ProduceOutputFromTextFileDouble (vtkInformationVector *outputVector);


// Did not wrap:  int ProduceOutputFromTextFileFloat (vtkInformationVector *outputVector);


// Did not wrap:  int ProduceOutputFromBinaryFileDouble (vtkInformationVector *outputVector);


// Did not wrap:  int ProduceOutputFromBinaryFileFloat (vtkInformationVector *outputVector);


// Did not wrap:  int DetermineFileType ();


// Did not wrap:  void DoProgressUpdate (size_t &bytesRead, size_t &fileLength);


// Did not wrap:  vtkParticleReader (const vtkParticleReader &);


// Did not wrap:  void vtkParticleReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkParticleReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkParticleReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkParticleReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkParticleReader();


};

} // end vtkIO
