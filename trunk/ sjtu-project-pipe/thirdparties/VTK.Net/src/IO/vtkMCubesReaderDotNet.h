#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkMCubesReader : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMCubesReader *NewInstance ();
  vtkMCubesReader^ NewInstance();


  // vtkMCubesReader *SafeDownCast (vtkObject* o);
  static vtkMCubesReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkMCubesReader *New ();


  // void SetFileName (char *);
/// <summary>
/// <para>Specify file name of marching cubes file.</para>
/// </summary>
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
/// <summary>
/// <para>Specify file name of marching cubes file.</para>
/// </summary>
  System::String^ GetFileName();


  // void SetLimitsFileName (char *);
/// <summary>
/// <para>Set / get the file name of the marching cubes limits file.</para>
/// </summary>
  void SetLimitsFileName(System::String^ arg0);


  // char *GetLimitsFileName ();
/// <summary>
/// <para>Set / get the file name of the marching cubes limits file.</para>
/// </summary>
  System::String^ GetLimitsFileName();


  // void SetHeaderSize (int );
/// <summary>
/// <para>Specify a header size if one exists. The header is skipped and not used at this time.</para>
/// </summary>
  void SetHeaderSize(int arg0);


  // int GetHeaderSizeMinValue ();
/// <summary>
/// <para>Specify a header size if one exists. The header is skipped and not used at this time.</para>
/// </summary>
  int GetHeaderSizeMinValue();


  // int GetHeaderSizeMaxValue ();
/// <summary>
/// <para>Specify a header size if one exists. The header is skipped and not used at this time.</para>
/// </summary>
  int GetHeaderSizeMaxValue();


  // int GetHeaderSize ();
/// <summary>
/// <para>Specify a header size if one exists. The header is skipped and not used at this time.</para>
/// </summary>
  int GetHeaderSize();


  // void SetFlipNormals (int );
/// <summary>
/// <para>Specify whether to flip normals in opposite direction. Flipping ONLY changes the direction of the normal vector. Contrast this with flipping in vtkPolyDataNormals which flips both the normal and the cell point order.</para>
/// </summary>
  void SetFlipNormals(int arg0);


  // int GetFlipNormals ();
/// <summary>
/// <para>Specify whether to flip normals in opposite direction. Flipping ONLY changes the direction of the normal vector. Contrast this with flipping in vtkPolyDataNormals which flips both the normal and the cell point order.</para>
/// </summary>
  int GetFlipNormals();


  // void FlipNormalsOn ();
/// <summary>
/// <para>Specify whether to flip normals in opposite direction. Flipping ONLY changes the direction of the normal vector. Contrast this with flipping in vtkPolyDataNormals which flips both the normal and the cell point order.</para>
/// </summary>
  void FlipNormalsOn();


  // void FlipNormalsOff ();
/// <summary>
/// <para>Specify whether to flip normals in opposite direction. Flipping ONLY changes the direction of the normal vector. Contrast this with flipping in vtkPolyDataNormals which flips both the normal and the cell point order.</para>
/// </summary>
  void FlipNormalsOff();


  // void SetNormals (int );
/// <summary>
/// <para>Specify whether to read normals.</para>
/// </summary>
  void SetNormals(int arg0);


  // int GetNormals ();
/// <summary>
/// <para>Specify whether to read normals.</para>
/// </summary>
  int GetNormals();


  // void NormalsOn ();
/// <summary>
/// <para>Specify whether to read normals.</para>
/// </summary>
  void NormalsOn();


  // void NormalsOff ();
/// <summary>
/// <para>Specify whether to read normals.</para>
/// </summary>
  void NormalsOff();


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


  // void SetLocator (vtkPointLocator *locator);
/// <summary>
/// <para>Set / get a spatial locator for merging points. By default,  an instance of vtkMergePoints is used.</para>
/// </summary>
  void SetLocator(vtkPointLocator^ locator);


  // vtkPointLocator *GetLocator ();
/// <summary>
/// <para>Set / get a spatial locator for merging points. By default,  an instance of vtkMergePoints is used.</para>
/// </summary>
  vtkPointLocator^ GetLocator();


  // void CreateDefaultLocator ();
/// <summary>
/// <para>Create default locator. Used to create one when none is specified.</para>
/// </summary>
  void CreateDefaultLocator();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Return the mtime also considering the locator.</para>
/// </summary>
  unsigned long GetMTime();


// Did not wrap:  vtkMCubesReader ();


// Did not wrap:  ~vtkMCubesReader ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkMCubesReader (const vtkMCubesReader &);


// Did not wrap:  void vtkMCubesReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMCubesReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMCubesReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMCubesReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMCubesReader();


};

} // end vtkIO
