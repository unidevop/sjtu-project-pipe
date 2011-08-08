#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkPLOT3DReader : public vtkStructuredGridSource
{

public:
// Did not wrap:  static vtkPLOT3DReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPLOT3DReader *NewInstance ();
  vtkPLOT3DReader^ NewInstance();


  // vtkPLOT3DReader *SafeDownCast (vtkObject* o);
  static vtkPLOT3DReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetFileName (const char *name);this SetXYZFileName name 
/// <summary>
/// <para>Set/Get the PLOT3D geometry filename.</para>
/// </summary>
  void SetFileName(System::String^ name);


  // const char *GetFileName ();return this GetXYZFileName 
/// <summary>
/// <para>Set/Get the PLOT3D geometry filename.</para>
/// </summary>
  System::String^ GetFileName();


  // virtual void SetXYZFileName (const char *);
/// <summary>
/// <para>Set/Get the PLOT3D geometry filename.</para>
/// </summary>
  void SetXYZFileName(System::String^ arg0);


  // char *GetXYZFileName ();
/// <summary>
/// <para>Set/Get the PLOT3D geometry filename.</para>
/// </summary>
  System::String^ GetXYZFileName();


  // void SetQFileName (char *);
/// <summary>
/// <para>Set/Get the PLOT3D solution filename.</para>
/// </summary>
  void SetQFileName(System::String^ arg0);


  // char *GetQFileName ();
/// <summary>
/// <para>Set/Get the PLOT3D solution filename.</para>
/// </summary>
  System::String^ GetQFileName();


  // int GetNumberOfOutputs ();
/// <summary>
/// <para>This returns the number of outputs this reader will produce. This number is equal to the number of grids in the current  file. This method has to be called before getting any output if the number of outputs will be greater than 1 (the first output is always the same). Note that every time this method is invoked, the header file is opened and part of the header  is read.</para>
/// </summary>
  int GetNumberOfOutputs();


  // int GetNumberOfGrids ();return this GetNumberOfOutputs 
/// <summary>
/// <para>Replace an output.</para>
/// </summary>
  int GetNumberOfGrids();


  // void SetOutput (int idx, vtkStructuredGrid *output);
/// <summary>
/// <para>Replace an output.</para>
/// </summary>
  void SetOutput(int idx, vtkStructuredGrid^ output);


  // void SetBinaryFile (int );
/// <summary>
/// <para>Is the file to be read written in binary format (as opposed to ascii).</para>
/// </summary>
  void SetBinaryFile(int arg0);


  // int GetBinaryFile ();
/// <summary>
/// <para>Is the file to be read written in binary format (as opposed to ascii).</para>
/// </summary>
  int GetBinaryFile();


  // void BinaryFileOn ();
/// <summary>
/// <para>Is the file to be read written in binary format (as opposed to ascii).</para>
/// </summary>
  void BinaryFileOn();


  // void BinaryFileOff ();
/// <summary>
/// <para>Is the file to be read written in binary format (as opposed to ascii).</para>
/// </summary>
  void BinaryFileOff();


  // void SetMultiGrid (int );
/// <summary>
/// <para>Does the file to be read contain information about number of grids. In some PLOT3D files, the first value contains the number  of grids (even if there is only 1). If reading such a file, set this to true.</para>
/// </summary>
  void SetMultiGrid(int arg0);


  // int GetMultiGrid ();
/// <summary>
/// <para>Does the file to be read contain information about number of grids. In some PLOT3D files, the first value contains the number  of grids (even if there is only 1). If reading such a file, set this to true.</para>
/// </summary>
  int GetMultiGrid();


  // void MultiGridOn ();
/// <summary>
/// <para>Does the file to be read contain information about number of grids. In some PLOT3D files, the first value contains the number  of grids (even if there is only 1). If reading such a file, set this to true.</para>
/// </summary>
  void MultiGridOn();


  // void MultiGridOff ();
/// <summary>
/// <para>Does the file to be read contain information about number of grids. In some PLOT3D files, the first value contains the number  of grids (even if there is only 1). If reading such a file, set this to true.</para>
/// </summary>
  void MultiGridOff();


  // void SetHasByteCount (int );
/// <summary>
/// <para>Were the arrays written with leading and trailing byte counts ? Usually, files written by a fortran program will contain these byte counts whereas the ones written by C/C++ won't.</para>
/// </summary>
  void SetHasByteCount(int arg0);


  // int GetHasByteCount ();
/// <summary>
/// <para>Were the arrays written with leading and trailing byte counts ? Usually, files written by a fortran program will contain these byte counts whereas the ones written by C/C++ won't.</para>
/// </summary>
  int GetHasByteCount();


  // void HasByteCountOn ();
/// <summary>
/// <para>Were the arrays written with leading and trailing byte counts ? Usually, files written by a fortran program will contain these byte counts whereas the ones written by C/C++ won't.</para>
/// </summary>
  void HasByteCountOn();


  // void HasByteCountOff ();
/// <summary>
/// <para>Were the arrays written with leading and trailing byte counts ? Usually, files written by a fortran program will contain these byte counts whereas the ones written by C/C++ won't.</para>
/// </summary>
  void HasByteCountOff();


  // void SetIBlanking (int );
/// <summary>
/// <para>Is there iblanking (point visibility) information in the file. If there is iblanking arrays, these will be read and assigned to the PointVisibility array of the output.</para>
/// </summary>
  void SetIBlanking(int arg0);


  // int GetIBlanking ();
/// <summary>
/// <para>Is there iblanking (point visibility) information in the file. If there is iblanking arrays, these will be read and assigned to the PointVisibility array of the output.</para>
/// </summary>
  int GetIBlanking();


  // void IBlankingOn ();
/// <summary>
/// <para>Is there iblanking (point visibility) information in the file. If there is iblanking arrays, these will be read and assigned to the PointVisibility array of the output.</para>
/// </summary>
  void IBlankingOn();


  // void IBlankingOff ();
/// <summary>
/// <para>Is there iblanking (point visibility) information in the file. If there is iblanking arrays, these will be read and assigned to the PointVisibility array of the output.</para>
/// </summary>
  void IBlankingOff();


  // void SetTwoDimensionalGeometry (int );
/// <summary>
/// <para>If only two-dimensional data was written to the file, turn this on.</para>
/// </summary>
  void SetTwoDimensionalGeometry(int arg0);


  // int GetTwoDimensionalGeometry ();
/// <summary>
/// <para>If only two-dimensional data was written to the file, turn this on.</para>
/// </summary>
  int GetTwoDimensionalGeometry();


  // void TwoDimensionalGeometryOn ();
/// <summary>
/// <para>If only two-dimensional data was written to the file, turn this on.</para>
/// </summary>
  void TwoDimensionalGeometryOn();


  // void TwoDimensionalGeometryOff ();
/// <summary>
/// <para>If only two-dimensional data was written to the file, turn this on.</para>
/// </summary>
  void TwoDimensionalGeometryOff();


  // void SetForceRead (int );
/// <summary>
/// <para>Try to read a binary file even if the file length seems to be inconsistent with the header information. Use this with caution, if the file length is not the same as calculated from the header. either the file is corrupt or the settings are wrong. </para>
/// </summary>
  void SetForceRead(int arg0);


  // int GetForceRead ();
/// <summary>
/// <para>Try to read a binary file even if the file length seems to be inconsistent with the header information. Use this with caution, if the file length is not the same as calculated from the header. either the file is corrupt or the settings are wrong. </para>
/// </summary>
  int GetForceRead();


  // void ForceReadOn ();
/// <summary>
/// <para>Try to read a binary file even if the file length seems to be inconsistent with the header information. Use this with caution, if the file length is not the same as calculated from the header. either the file is corrupt or the settings are wrong. </para>
/// </summary>
  void ForceReadOn();


  // void ForceReadOff ();
/// <summary>
/// <para>Try to read a binary file even if the file length seems to be inconsistent with the header information. Use this with caution, if the file length is not the same as calculated from the header. either the file is corrupt or the settings are wrong. </para>
/// </summary>
  void ForceReadOff();


  // void SetDoNotReduceNumberOfOutputs (int );
/// <summary>
/// <para>If this is on, the reader will never reduce the number of outputs   after reading a file with n grids and producing n outputs. If the file read afterwards contains fewer grids, the extra outputs will be empty. This option can be used by application which rely on the initial number of outputs not shrinking.</para>
/// </summary>
  void SetDoNotReduceNumberOfOutputs(int arg0);


  // int GetDoNotReduceNumberOfOutputs ();
/// <summary>
/// <para>If this is on, the reader will never reduce the number of outputs   after reading a file with n grids and producing n outputs. If the file read afterwards contains fewer grids, the extra outputs will be empty. This option can be used by application which rely on the initial number of outputs not shrinking.</para>
/// </summary>
  int GetDoNotReduceNumberOfOutputs();


  // void DoNotReduceNumberOfOutputsOn ();
/// <summary>
/// <para>If this is on, the reader will never reduce the number of outputs   after reading a file with n grids and producing n outputs. If the file read afterwards contains fewer grids, the extra outputs will be empty. This option can be used by application which rely on the initial number of outputs not shrinking.</para>
/// </summary>
  void DoNotReduceNumberOfOutputsOn();


  // void DoNotReduceNumberOfOutputsOff ();
/// <summary>
/// <para>If this is on, the reader will never reduce the number of outputs   after reading a file with n grids and producing n outputs. If the file read afterwards contains fewer grids, the extra outputs will be empty. This option can be used by application which rely on the initial number of outputs not shrinking.</para>
/// </summary>
  void DoNotReduceNumberOfOutputsOff();


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


  // void SetR (double );
/// <summary>
/// <para>Set/Get the gas constant. Default is 1.0.</para>
/// </summary>
  void SetR(double arg0);


  // double GetR ();
/// <summary>
/// <para>Set/Get the gas constant. Default is 1.0.</para>
/// </summary>
  double GetR();


  // void SetGamma (double );
/// <summary>
/// <para>Set/Get the ratio of specific heats. Default is 1.4.</para>
/// </summary>
  void SetGamma(double arg0);


  // double GetGamma ();
/// <summary>
/// <para>Set/Get the ratio of specific heats. Default is 1.4.</para>
/// </summary>
  double GetGamma();


  // void SetUvinf (double );
/// <summary>
/// <para>Set/Get the x-component of the free-stream velocity. Default is 1.0.</para>
/// </summary>
  void SetUvinf(double arg0);


  // double GetUvinf ();
/// <summary>
/// <para>Set/Get the x-component of the free-stream velocity. Default is 1.0.</para>
/// </summary>
  double GetUvinf();


  // void SetVvinf (double );
/// <summary>
/// <para>Set/Get the y-component of the free-stream velocity. Default is 1.0.</para>
/// </summary>
  void SetVvinf(double arg0);


  // double GetVvinf ();
/// <summary>
/// <para>Set/Get the y-component of the free-stream velocity. Default is 1.0.</para>
/// </summary>
  double GetVvinf();


  // void SetWvinf (double );
/// <summary>
/// <para>Set/Get the z-component of the free-stream velocity. Default is 1.0.</para>
/// </summary>
  void SetWvinf(double arg0);


  // double GetWvinf ();
/// <summary>
/// <para>Set/Get the z-component of the free-stream velocity. Default is 1.0.</para>
/// </summary>
  double GetWvinf();


  // void SetScalarFunctionNumber (int num);
/// <summary>
/// <para>Specify the scalar function to extract. If ==(-1), then no scalar  function is extracted.</para>
/// </summary>
  void SetScalarFunctionNumber(int num);


  // int GetScalarFunctionNumber ();
/// <summary>
/// <para>Specify the scalar function to extract. If ==(-1), then no scalar  function is extracted.</para>
/// </summary>
  int GetScalarFunctionNumber();


  // void SetVectorFunctionNumber (int num);
/// <summary>
/// <para>Specify the vector function to extract. If ==(-1), then no vector function is extracted.</para>
/// </summary>
  void SetVectorFunctionNumber(int num);


  // int GetVectorFunctionNumber ();
/// <summary>
/// <para>Specify the vector function to extract. If ==(-1), then no vector function is extracted.</para>
/// </summary>
  int GetVectorFunctionNumber();


  // void AddFunction (int functionNumber);
/// <summary>
/// <para>Specify additional functions to read. These are placed into the point data as data arrays. Later on they can be used by labeling them as scalars, etc.</para>
/// </summary>
  void AddFunction(int functionNumber);


  // void RemoveFunction (int );
/// <summary>
/// <para>Specify additional functions to read. These are placed into the point data as data arrays. Later on they can be used by labeling them as scalars, etc.</para>
/// </summary>
  void RemoveFunction(int arg0);


  // void RemoveAllFunctions ();
/// <summary>
/// <para>Specify additional functions to read. These are placed into the point data as data arrays. Later on they can be used by labeling them as scalars, etc.</para>
/// </summary>
  void RemoveAllFunctions();


  // virtual int CanReadBinaryFile (const char *fname);
/// <summary>
/// <para>Return 1 if the reader can read the given file name. Only meaningful for binary files.</para>
/// </summary>
  int CanReadBinaryFile(System::String^ fname);


  // int GenerateDefaultConfiguration ();
/// <summary>
/// </summary>
  int GenerateDefaultConfiguration();


// Did not wrap:  vtkPLOT3DReader ();


// Did not wrap:  ~vtkPLOT3DReader ();


// Did not wrap:  void ExecuteInformation ();


// Did not wrap:  void Execute ();


// Did not wrap:  int CheckFile (FILE &fp, const char *fname);


// Did not wrap:  int CheckGeometryFile (FILE &xyzFp);


// Did not wrap:  int CheckSolutionFile (FILE &qFp);


// Did not wrap:  void SkipByteCount (FILE *fp);


// Did not wrap:  int ReadIntBlock (FILE *fp, int n, int *block);


// Did not wrap:  int ReadFloatBlock (FILE *fp, int n, float *block);


// Did not wrap:  int GetNumberOfOutputsInternal (FILE *xyzFp, int verify);


// Did not wrap:  int ReadGeometryHeader (FILE *fp);


// Did not wrap:  int ReadQHeader (FILE *fp);


// Did not wrap:  void CalculateFileSize (FILE *fp);


// Did not wrap:  long EstimateSize (int ni, int nj, int nk);


// Did not wrap:  void AssignAttribute (int fNumber, vtkStructuredGrid *output, int attributeType);


// Did not wrap:  void MapFunction (int fNumber, vtkStructuredGrid *output);


// Did not wrap:  void ComputeTemperature (vtkStructuredGrid *output);


// Did not wrap:  void ComputePressure (vtkStructuredGrid *output);


// Did not wrap:  void ComputeEnthalpy (vtkStructuredGrid *output);


// Did not wrap:  void ComputeKineticEnergy (vtkStructuredGrid *output);


// Did not wrap:  void ComputeVelocityMagnitude (vtkStructuredGrid *output);


// Did not wrap:  void ComputeEntropy (vtkStructuredGrid *output);


// Did not wrap:  void ComputeSwirl (vtkStructuredGrid *output);


// Did not wrap:  void ComputeVelocity (vtkStructuredGrid *output);


// Did not wrap:  void ComputeVorticity (vtkStructuredGrid *output);


// Did not wrap:  void ComputePressureGradient (vtkStructuredGrid *output);


// Did not wrap:  void ClearGeometryCache ();


// Did not wrap:  int VerifySettings (char *buf, int bufSize);


// Did not wrap:  void ReadIntBlockV (char *buf, int n, int *block);


// Did not wrap:  void SkipByteCountV (char *buf);


// Did not wrap:  vtkPLOT3DReader (const vtkPLOT3DReader &);


// Did not wrap:  void vtkPLOT3DReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPLOT3DReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPLOT3DReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPLOT3DReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPLOT3DReader();


};

} // end vtkIO
