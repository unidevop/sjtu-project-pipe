#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageReader2 : public vtkImageAlgorithm
{

public:
// Did not wrap:  static vtkImageReader2 *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageReader2 *NewInstance ();
  vtkImageReader2^ NewInstance();


  // vtkImageReader2 *SafeDownCast (vtkObject* o);
  static vtkImageReader2^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetFileName (const char *);
/// <summary>
/// <para>Specify file name for the image file. You should specify either a FileName or a FilePrefix. Use FilePrefix if the data is stored  in multiple files.</para>
/// </summary>
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
/// <summary>
/// <para>Specify file name for the image file. You should specify either a FileName or a FilePrefix. Use FilePrefix if the data is stored  in multiple files.</para>
/// </summary>
  System::String^ GetFileName();


  // virtual void SetFilePrefix (const char *);
/// <summary>
/// <para>Specify file prefix for the image file(s).You should specify either a FileName or FilePrefix. Use FilePrefix if the data is stored in multiple files.</para>
/// </summary>
  void SetFilePrefix(System::String^ arg0);


  // char *GetFilePrefix ();
/// <summary>
/// <para>Specify file prefix for the image file(s).You should specify either a FileName or FilePrefix. Use FilePrefix if the data is stored in multiple files.</para>
/// </summary>
  System::String^ GetFilePrefix();


  // virtual void SetFilePattern (const char *);
/// <summary>
/// <para>The sprintf format used to build filename from FilePrefix and number.</para>
/// </summary>
  void SetFilePattern(System::String^ arg0);


  // char *GetFilePattern ();
/// <summary>
/// <para>The sprintf format used to build filename from FilePrefix and number.</para>
/// </summary>
  System::String^ GetFilePattern();


  // virtual void SetDataScalarType (int type);
/// <summary>
/// <para>Set the data type of pixels in the file.   If you want the output scalar type to have a different value, set it after this method is called.</para>
/// </summary>
  void SetDataScalarType(int type);


  // virtual void SetDataScalarTypeToFloat ();this SetDataScalarType VTK_FLOAT 
/// <summary>
/// <para>Set the data type of pixels in the file.   If you want the output scalar type to have a different value, set it after this method is called.</para>
/// </summary>
  void SetDataScalarTypeToFloat();


  // virtual void SetDataScalarTypeToDouble ();this SetDataScalarType VTK_DOUBLE 
/// <summary>
/// <para>Set the data type of pixels in the file.   If you want the output scalar type to have a different value, set it after this method is called.</para>
/// </summary>
  void SetDataScalarTypeToDouble();


  // virtual void SetDataScalarTypeToInt ();this SetDataScalarType VTK_INT 
/// <summary>
/// <para>Set the data type of pixels in the file.   If you want the output scalar type to have a different value, set it after this method is called.</para>
/// </summary>
  void SetDataScalarTypeToInt();


  // virtual void SetDataScalarTypeToShort ();this SetDataScalarType VTK_SHORT 
/// <summary>
/// <para>Set the data type of pixels in the file.   If you want the output scalar type to have a different value, set it after this method is called.</para>
/// </summary>
  void SetDataScalarTypeToShort();


  // virtual void SetDataScalarTypeToUnsignedShort ();this SetDataScalarType VTK_UNSIGNED_SHORT 
/// <summary>
/// <para>Set the data type of pixels in the file.   If you want the output scalar type to have a different value, set it after this method is called.</para>
/// </summary>
  void SetDataScalarTypeToUnsignedShort();


  // virtual void SetDataScalarTypeToUnsignedChar ();this SetDataScalarType VTK_UNSIGNED_CHAR 
/// <summary>
/// <para>Get the file format.  Pixels are this type in the file.</para>
/// </summary>
  void SetDataScalarTypeToUnsignedChar();


  // int GetDataScalarType ();
/// <summary>
/// <para>Get the file format.  Pixels are this type in the file.</para>
/// </summary>
  int GetDataScalarType();


  // void SetNumberOfScalarComponents (int );
/// <summary>
/// <para>Set/Get the number of scalar components</para>
/// </summary>
  void SetNumberOfScalarComponents(int arg0);


  // int GetNumberOfScalarComponents ();
/// <summary>
/// <para>Set/Get the number of scalar components</para>
/// </summary>
  int GetNumberOfScalarComponents();


  // void SetDataExtent (int , int , int , int , int , int );
/// <summary>
/// <para>Get/Set the extent of the data on disk.  </para>
/// </summary>
  void SetDataExtent(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5);


  // void SetDataExtent (int  a[6]);
/// <summary>
/// <para>Get/Set the extent of the data on disk.  </para>
/// </summary>
  void SetDataExtent(array<int>^ a);


  // int  *GetDataExtent ();
/// <summary>
/// <para>Get/Set the extent of the data on disk.  </para>
/// </summary>
  array<int>^ GetDataExtent();


  // void SetFileDimensionality (int );
/// <summary>
/// <para>The number of dimensions stored in a file. This defaults to two.</para>
/// </summary>
  void SetFileDimensionality(int arg0);


  // int GetFileDimensionality ();return this FileDimensionality 
/// <summary>
/// <para>Set/Get the spacing of the data in the file.</para>
/// </summary>
  int GetFileDimensionality();


  // void SetDataSpacing (double , double , double );
/// <summary>
/// <para>Set/Get the spacing of the data in the file.</para>
/// </summary>
  void SetDataSpacing(double arg0, double arg1, double arg2);


  // void SetDataSpacing (double  a[3]);
/// <summary>
/// <para>Set/Get the spacing of the data in the file.</para>
/// </summary>
  void SetDataSpacing(array<double>^ a);


  // double  *GetDataSpacing ();
/// <summary>
/// <para>Set/Get the spacing of the data in the file.</para>
/// </summary>
  array<double>^ GetDataSpacing();


  // void SetDataOrigin (double , double , double );
/// <summary>
/// <para>Set/Get the origin of the data (location of first pixel in the file).</para>
/// </summary>
  void SetDataOrigin(double arg0, double arg1, double arg2);


  // void SetDataOrigin (double  a[3]);
/// <summary>
/// <para>Set/Get the origin of the data (location of first pixel in the file).</para>
/// </summary>
  void SetDataOrigin(array<double>^ a);


  // double  *GetDataOrigin ();
/// <summary>
/// <para>Set/Get the origin of the data (location of first pixel in the file).</para>
/// </summary>
  array<double>^ GetDataOrigin();


  // unsigned long GetHeaderSize ();
/// <summary>
/// <para>Get the size of the header computed by this object.</para>
/// </summary>
  unsigned long GetHeaderSize();


  // unsigned long GetHeaderSize (unsigned long slice);
/// <summary>
/// <para>Get the size of the header computed by this object.</para>
/// </summary>
  unsigned long GetHeaderSize(unsigned long slice);


  // virtual void SetHeaderSize (unsigned long size);
/// <summary>
/// <para>If there is a tail on the file, you want to explicitly set the header size.</para>
/// </summary>
  void SetHeaderSize(unsigned long size);


  // virtual void SetDataByteOrderToBigEndian ();
/// <summary>
/// <para>These methods should be used instead of the SwapBytes methods. They indicate the byte ordering of the file you are trying to read in. These methods will then either swap or not swap the bytes depending on the byte ordering of the machine it is being run on. For example, reading in a BigEndian file on a BigEndian machine will result in no swapping. Trying to read the same file on a LittleEndian machine will result in swapping. As a quick note most UNIX machines are BigEndian while PC's and VAX tend to be LittleEndian. So if the file you are reading in was generated on a VAX or PC, SetDataByteOrderToLittleEndian  otherwise SetDataByteOrderToBigEndian. </para>
/// </summary>
  void SetDataByteOrderToBigEndian();


  // virtual void SetDataByteOrderToLittleEndian ();
/// <summary>
/// <para>These methods should be used instead of the SwapBytes methods. They indicate the byte ordering of the file you are trying to read in. These methods will then either swap or not swap the bytes depending on the byte ordering of the machine it is being run on. For example, reading in a BigEndian file on a BigEndian machine will result in no swapping. Trying to read the same file on a LittleEndian machine will result in swapping. As a quick note most UNIX machines are BigEndian while PC's and VAX tend to be LittleEndian. So if the file you are reading in was generated on a VAX or PC, SetDataByteOrderToLittleEndian  otherwise SetDataByteOrderToBigEndian. </para>
/// </summary>
  void SetDataByteOrderToLittleEndian();


  // virtual int GetDataByteOrder ();
/// <summary>
/// <para>These methods should be used instead of the SwapBytes methods. They indicate the byte ordering of the file you are trying to read in. These methods will then either swap or not swap the bytes depending on the byte ordering of the machine it is being run on. For example, reading in a BigEndian file on a BigEndian machine will result in no swapping. Trying to read the same file on a LittleEndian machine will result in swapping. As a quick note most UNIX machines are BigEndian while PC's and VAX tend to be LittleEndian. So if the file you are reading in was generated on a VAX or PC, SetDataByteOrderToLittleEndian  otherwise SetDataByteOrderToBigEndian. </para>
/// </summary>
  int GetDataByteOrder();


  // virtual void SetDataByteOrder (int );
/// <summary>
/// <para>These methods should be used instead of the SwapBytes methods. They indicate the byte ordering of the file you are trying to read in. These methods will then either swap or not swap the bytes depending on the byte ordering of the machine it is being run on. For example, reading in a BigEndian file on a BigEndian machine will result in no swapping. Trying to read the same file on a LittleEndian machine will result in swapping. As a quick note most UNIX machines are BigEndian while PC's and VAX tend to be LittleEndian. So if the file you are reading in was generated on a VAX or PC, SetDataByteOrderToLittleEndian  otherwise SetDataByteOrderToBigEndian. </para>
/// </summary>
  void SetDataByteOrder(int arg0);


  // virtual const char *GetDataByteOrderAsString ();
/// <summary>
/// <para>These methods should be used instead of the SwapBytes methods. They indicate the byte ordering of the file you are trying to read in. These methods will then either swap or not swap the bytes depending on the byte ordering of the machine it is being run on. For example, reading in a BigEndian file on a BigEndian machine will result in no swapping. Trying to read the same file on a LittleEndian machine will result in swapping. As a quick note most UNIX machines are BigEndian while PC's and VAX tend to be LittleEndian. So if the file you are reading in was generated on a VAX or PC, SetDataByteOrderToLittleEndian  otherwise SetDataByteOrderToBigEndian. </para>
/// </summary>
  System::String^ GetDataByteOrderAsString();


  // void SetFileNameSliceOffset (int );
/// <summary>
/// <para>When reading files which start at an unusual index, this can be added to the slice number when generating the file name (default = 0)</para>
/// </summary>
  void SetFileNameSliceOffset(int arg0);


  // int GetFileNameSliceOffset ();
/// <summary>
/// <para>When reading files which start at an unusual index, this can be added to the slice number when generating the file name (default = 0)</para>
/// </summary>
  int GetFileNameSliceOffset();


  // void SetFileNameSliceSpacing (int );
/// <summary>
/// <para>When reading files which have regular, but non contiguous slices (eg filename.1,filename.3,filename.5) a spacing can be specified to skip missing files (default = 1)</para>
/// </summary>
  void SetFileNameSliceSpacing(int arg0);


  // int GetFileNameSliceSpacing ();
/// <summary>
/// <para>When reading files which have regular, but non contiguous slices (eg filename.1,filename.3,filename.5) a spacing can be specified to skip missing files (default = 1)</para>
/// </summary>
  int GetFileNameSliceSpacing();


  // void SetSwapBytes (int );
/// <summary>
/// <para>Set/Get the byte swapping to explicitly swap the bytes of a file.</para>
/// </summary>
  void SetSwapBytes(int arg0);


  // virtual int GetSwapBytes ();return this SwapBytes 
/// <summary>
/// <para>Set/Get the byte swapping to explicitly swap the bytes of a file.</para>
/// </summary>
  int GetSwapBytes();


  // void SwapBytesOn ();
/// <summary>
/// <para>Set/Get the byte swapping to explicitly swap the bytes of a file.</para>
/// </summary>
  void SwapBytesOn();


  // void SwapBytesOff ();
/// <summary>
/// <para>Set/Get the byte swapping to explicitly swap the bytes of a file.</para>
/// </summary>
  void SwapBytesOff();


  // virtual int OpenFile ();
  int OpenFile();


  // virtual void SeekFile (int i, int j, int k);
  void SeekFile(int i, int j, int k);


  // void FileLowerLeftOn ();
/// <summary>
/// <para>Set/Get whether the data comes from the file starting in the lower left corner or upper left corner.</para>
/// </summary>
  void FileLowerLeftOn();


  // void FileLowerLeftOff ();
/// <summary>
/// <para>Set/Get whether the data comes from the file starting in the lower left corner or upper left corner.</para>
/// </summary>
  void FileLowerLeftOff();


  // int GetFileLowerLeft ();
/// <summary>
/// <para>Set/Get whether the data comes from the file starting in the lower left corner or upper left corner.</para>
/// </summary>
  int GetFileLowerLeft();


  // void SetFileLowerLeft (int );
/// <summary>
/// <para>Set/Get whether the data comes from the file starting in the lower left corner or upper left corner.</para>
/// </summary>
  void SetFileLowerLeft(int arg0);


  // virtual void ComputeInternalFileName (int slice);
/// <summary>
/// <para>Set/Get the internal file name</para>
/// </summary>
  void ComputeInternalFileName(int slice);


  // char *GetInternalFileName ();
/// <summary>
/// <para>Set/Get the internal file name</para>
/// </summary>
  System::String^ GetInternalFileName();


  // virtual int CanReadFile (const char *);return 
/// <summary>
/// <para>Get the file extensions for this format. Returns a string with a space separated list of extensions in  the format .extension</para>
/// </summary>
  int CanReadFile(System::String^ arg0);


  // virtual const char *GetFileExtensions ();return 
/// <summary>
/// <para>Return a descriptive name for the file format that might be useful in a GUI.</para>
/// </summary>
  System::String^ GetFileExtensions();


  // virtual const char *GetDescriptiveName ();return 
/// <summary>
/// <para>Return a descriptive name for the file format that might be useful in a GUI.</para>
/// </summary>
  System::String^ GetDescriptiveName();


// Did not wrap:  vtkImageReader2 ();


// Did not wrap:  ~vtkImageReader2 ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  virtual void ExecuteInformation ();


// Did not wrap:  virtual void ExecuteData (vtkDataObject *data);


// Did not wrap:  virtual void ComputeDataIncrements ();


// Did not wrap:  vtkImageReader2 (const vtkImageReader2 &);


// Did not wrap:  void vtkImageReader2 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageReader2(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageReader2(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageReader2();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageReader2();


};

} // end vtkIO
