#pragma once

// managed includes
#include "vtkVolumeReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkVolume16Reader : public vtkVolumeReader
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkVolume16Reader *NewInstance ();
  vtkVolume16Reader^ NewInstance();


  // vtkVolume16Reader *SafeDownCast (vtkObject* o);
  static vtkVolume16Reader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkVolume16Reader *New ();


  // void SetDataDimensions (int , int );
/// <summary>
/// <para>Specify the dimensions for the data.</para>
/// </summary>
  void SetDataDimensions(int arg0, int arg1);


  // void SetDataDimensions (int  a[2]);
/// <summary>
/// <para>Specify the dimensions for the data.</para>
/// </summary>
  void SetDataDimensions(array<int>^ a);


  // int  *GetDataDimensions ();
/// <summary>
/// <para>Specify the dimensions for the data.</para>
/// </summary>
  array<int>^ GetDataDimensions();


  // void SetDataMask (unsigned short );
/// <summary>
/// <para>Specify a mask used to eliminate data in the data file (e.g., connectivity bits).</para>
/// </summary>
  void SetDataMask(unsigned short arg0);


  // short unsigned GetDataMask ();
/// <summary>
/// <para>Specify a mask used to eliminate data in the data file (e.g., connectivity bits).</para>
/// </summary>
  unsigned short GetDataMask();


  // void SetHeaderSize (int );
/// <summary>
/// <para>Specify the number of bytes to seek over at start of image.</para>
/// </summary>
  void SetHeaderSize(int arg0);


  // int GetHeaderSize ();
/// <summary>
/// <para>Specify the number of bytes to seek over at start of image.</para>
/// </summary>
  int GetHeaderSize();


  // void SetDataByteOrderToBigEndian ();
/// <summary>
/// <para>These methods should be used instead of the SwapBytes methods. They indicate the byte ordering of the file you are trying to read in. These methods will then either swap or not swap the bytes depending on the byte ordering of the machine it is being run on. For example, reading in a BigEndian file on a BigEndian machine will result in no swapping. Trying to read the same file on a LittleEndian machine will result in swapping. As a quick note most UNIX machines are BigEndian while PC's and VAX tend to be LittleEndian. So if the file you are reading in was generated on a VAX or PC, SetDataByteOrderToLittleEndian otherwise SetDataByteOrderToBigEndian. </para>
/// </summary>
  void SetDataByteOrderToBigEndian();


  // void SetDataByteOrderToLittleEndian ();
/// <summary>
/// <para>These methods should be used instead of the SwapBytes methods. They indicate the byte ordering of the file you are trying to read in. These methods will then either swap or not swap the bytes depending on the byte ordering of the machine it is being run on. For example, reading in a BigEndian file on a BigEndian machine will result in no swapping. Trying to read the same file on a LittleEndian machine will result in swapping. As a quick note most UNIX machines are BigEndian while PC's and VAX tend to be LittleEndian. So if the file you are reading in was generated on a VAX or PC, SetDataByteOrderToLittleEndian otherwise SetDataByteOrderToBigEndian. </para>
/// </summary>
  void SetDataByteOrderToLittleEndian();


  // int GetDataByteOrder ();
/// <summary>
/// <para>These methods should be used instead of the SwapBytes methods. They indicate the byte ordering of the file you are trying to read in. These methods will then either swap or not swap the bytes depending on the byte ordering of the machine it is being run on. For example, reading in a BigEndian file on a BigEndian machine will result in no swapping. Trying to read the same file on a LittleEndian machine will result in swapping. As a quick note most UNIX machines are BigEndian while PC's and VAX tend to be LittleEndian. So if the file you are reading in was generated on a VAX or PC, SetDataByteOrderToLittleEndian otherwise SetDataByteOrderToBigEndian. </para>
/// </summary>
  int GetDataByteOrder();


  // void SetDataByteOrder (int );
/// <summary>
/// <para>These methods should be used instead of the SwapBytes methods. They indicate the byte ordering of the file you are trying to read in. These methods will then either swap or not swap the bytes depending on the byte ordering of the machine it is being run on. For example, reading in a BigEndian file on a BigEndian machine will result in no swapping. Trying to read the same file on a LittleEndian machine will result in swapping. As a quick note most UNIX machines are BigEndian while PC's and VAX tend to be LittleEndian. So if the file you are reading in was generated on a VAX or PC, SetDataByteOrderToLittleEndian otherwise SetDataByteOrderToBigEndian. </para>
/// </summary>
  void SetDataByteOrder(int arg0);


  // const char *GetDataByteOrderAsString ();
/// <summary>
/// <para>These methods should be used instead of the SwapBytes methods. They indicate the byte ordering of the file you are trying to read in. These methods will then either swap or not swap the bytes depending on the byte ordering of the machine it is being run on. For example, reading in a BigEndian file on a BigEndian machine will result in no swapping. Trying to read the same file on a LittleEndian machine will result in swapping. As a quick note most UNIX machines are BigEndian while PC's and VAX tend to be LittleEndian. So if the file you are reading in was generated on a VAX or PC, SetDataByteOrderToLittleEndian otherwise SetDataByteOrderToBigEndian. </para>
/// </summary>
  System::String^ GetDataByteOrderAsString();


  // void SetSwapBytes (int );
/// <summary>
/// <para>Turn on/off byte swapping.</para>
/// </summary>
  void SetSwapBytes(int arg0);


  // int GetSwapBytes ();
/// <summary>
/// <para>Turn on/off byte swapping.</para>
/// </summary>
  int GetSwapBytes();


  // void SwapBytesOn ();
/// <summary>
/// <para>Turn on/off byte swapping.</para>
/// </summary>
  void SwapBytesOn();


  // void SwapBytesOff ();
/// <summary>
/// <para>Turn on/off byte swapping.</para>
/// </summary>
  void SwapBytesOff();


  // virtual void SetTransform (vtkTransform *);
/// <summary>
/// <para>Set/Get transformation matrix to transform the data from slice space into world space. This matrix must be a permutation matrix. To qualify, the sums of the rows must be + or - 1.</para>
/// </summary>
  void SetTransform(vtkTransform^ arg0);


  // vtkTransform *GetTransform ();
/// <summary>
/// <para>Set/Get transformation matrix to transform the data from slice space into world space. This matrix must be a permutation matrix. To qualify, the sums of the rows must be + or - 1.</para>
/// </summary>
  vtkTransform^ GetTransform();


  // vtkImageData *GetImage (int ImageNumber);
/// <summary>
/// <para>Other objects make use of these methods</para>
/// </summary>
  vtkImageData^ GetImage(int ImageNumber);


// Did not wrap:  vtkVolume16Reader ();


// Did not wrap:  ~vtkVolume16Reader ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void TransformSlice (unsigned short *slice, unsigned short *pixels, int k, int dimensions[3], int bounds[3]);


// Did not wrap:  void ComputeTransformedDimensions (int dimensions[3]);


// Did not wrap:  void ComputeTransformedBounds (int bounds[6]);


// Did not wrap:  void ComputeTransformedSpacing (double Spacing[3]);


// Did not wrap:  void ComputeTransformedOrigin (double origin[3]);


// Did not wrap:  void AdjustSpacingAndOrigin (int dimensions[3], double Spacing[3], double origin[3]);


// Did not wrap:  void ReadImage (int ImageNumber, vtkUnsignedShortArray *);


// Did not wrap:  void ReadVolume (int FirstImage, int LastImage, vtkUnsignedShortArray *);


// Did not wrap:  int Read16BitImage (FILE *fp, unsigned short *pixels, int xsize, int ysize, int skip, int swapBytes);


// Did not wrap:  vtkVolume16Reader (const vtkVolume16Reader &);


// Did not wrap:  void vtkVolume16Reader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkVolume16Reader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkVolume16Reader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkVolume16Reader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkVolume16Reader();


};

} // end vtkIO
