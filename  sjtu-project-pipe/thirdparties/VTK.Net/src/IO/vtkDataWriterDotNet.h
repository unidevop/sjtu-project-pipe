#pragma once

// managed includes
#include "vtkWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkDataWriter : public vtkWriter
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDataWriter *NewInstance ();
  vtkDataWriter^ NewInstance();


  // vtkDataWriter *SafeDownCast (vtkObject* o);
  static vtkDataWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkDataWriter *New ();


  // void SetFileName (char *);
/// <summary>
/// <para>Specify file name of vtk polygon data file to write.</para>
/// </summary>
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
/// <summary>
/// <para>Specify file name of vtk polygon data file to write.</para>
/// </summary>
  System::String^ GetFileName();


  // void SetWriteToOutputString (int );
/// <summary>
/// <para>Enable writing to an OutputString instead of the default, a file.</para>
/// </summary>
  void SetWriteToOutputString(int arg0);


  // int GetWriteToOutputString ();
/// <summary>
/// <para>Enable writing to an OutputString instead of the default, a file.</para>
/// </summary>
  int GetWriteToOutputString();


  // void WriteToOutputStringOn ();
/// <summary>
/// <para>Enable writing to an OutputString instead of the default, a file.</para>
/// </summary>
  void WriteToOutputStringOn();


  // void WriteToOutputStringOff ();
/// <summary>
/// <para>Enable writing to an OutputString instead of the default, a file.</para>
/// </summary>
  void WriteToOutputStringOff();


  // int GetOutputStringLength ();
/// <summary>
/// <para>When WriteToOutputString in on, then a string is allocated, written to, and can be retrieved with these methods.  The string is deleted during the next call to write ...</para>
/// </summary>
  int GetOutputStringLength();


  // char *GetOutputString ();
/// <summary>
/// <para>When WriteToOutputString in on, then a string is allocated, written to, and can be retrieved with these methods.  The string is deleted during the next call to write ...</para>
/// </summary>
  System::String^ GetOutputString();


// Did not wrap:  unsigned char *GetBinaryOutputString ();return unsigned char this OutputString 


  // char *RegisterAndGetOutputString ();
/// <summary>
/// <para>This convenience method returns the string, sets the IVAR to NULL, so that the user is responsible for deleting the string. I am not sure what the name should be, so it may change in the future.</para>
/// </summary>
  System::String^ RegisterAndGetOutputString();


  // void SetHeader (char *);
/// <summary>
/// <para>Specify the header for the vtk data file.</para>
/// </summary>
  void SetHeader(System::String^ arg0);


  // char *GetHeader ();
/// <summary>
/// <para>Specify the header for the vtk data file.</para>
/// </summary>
  System::String^ GetHeader();


  // void SetFileType (int );
/// <summary>
/// <para>Specify file type (ASCII or BINARY) for vtk data file.</para>
/// </summary>
  void SetFileType(int arg0);


  // int GetFileTypeMinValue ();
/// <summary>
/// <para>Specify file type (ASCII or BINARY) for vtk data file.</para>
/// </summary>
  int GetFileTypeMinValue();


  // int GetFileTypeMaxValue ();
/// <summary>
/// <para>Specify file type (ASCII or BINARY) for vtk data file.</para>
/// </summary>
  int GetFileTypeMaxValue();


  // int GetFileType ();
/// <summary>
/// <para>Specify file type (ASCII or BINARY) for vtk data file.</para>
/// </summary>
  int GetFileType();


  // void SetFileTypeToASCII ();this SetFileType VTK_ASCII 
/// <summary>
/// <para>Specify file type (ASCII or BINARY) for vtk data file.</para>
/// </summary>
  void SetFileTypeToASCII();


  // void SetFileTypeToBinary ();this SetFileType VTK_BINARY 
/// <summary>
/// <para>Specify file type (ASCII or BINARY) for vtk data file.</para>
/// </summary>
  void SetFileTypeToBinary();


  // void SetScalarsName (char *);
/// <summary>
/// <para>Give a name to the scalar data. If not specified, uses default name &quot;scalars&quot;.</para>
/// </summary>
  void SetScalarsName(System::String^ arg0);


  // char *GetScalarsName ();
/// <summary>
/// <para>Give a name to the scalar data. If not specified, uses default name &quot;scalars&quot;.</para>
/// </summary>
  System::String^ GetScalarsName();


  // void SetVectorsName (char *);
/// <summary>
/// <para>Give a name to the vector data. If not specified, uses default name &quot;vectors&quot;.</para>
/// </summary>
  void SetVectorsName(System::String^ arg0);


  // char *GetVectorsName ();
/// <summary>
/// <para>Give a name to the vector data. If not specified, uses default name &quot;vectors&quot;.</para>
/// </summary>
  System::String^ GetVectorsName();


  // void SetTensorsName (char *);
/// <summary>
/// <para>Give a name to the tensors data. If not specified, uses default name &quot;tensors&quot;.</para>
/// </summary>
  void SetTensorsName(System::String^ arg0);


  // char *GetTensorsName ();
/// <summary>
/// <para>Give a name to the tensors data. If not specified, uses default name &quot;tensors&quot;.</para>
/// </summary>
  System::String^ GetTensorsName();


  // void SetNormalsName (char *);
/// <summary>
/// <para>Give a name to the normals data. If not specified, uses default name &quot;normals&quot;.</para>
/// </summary>
  void SetNormalsName(System::String^ arg0);


  // char *GetNormalsName ();
/// <summary>
/// <para>Give a name to the normals data. If not specified, uses default name &quot;normals&quot;.</para>
/// </summary>
  System::String^ GetNormalsName();


  // void SetTCoordsName (char *);
/// <summary>
/// <para>Give a name to the texture coordinates data. If not specified, uses  default name &quot;textureCoords&quot;.</para>
/// </summary>
  void SetTCoordsName(System::String^ arg0);


  // char *GetTCoordsName ();
/// <summary>
/// <para>Give a name to the texture coordinates data. If not specified, uses  default name &quot;textureCoords&quot;.</para>
/// </summary>
  System::String^ GetTCoordsName();


  // void SetLookupTableName (char *);
/// <summary>
/// <para>Give a name to the lookup table. If not specified, uses default name &quot;lookupTable&quot;.</para>
/// </summary>
  void SetLookupTableName(System::String^ arg0);


  // char *GetLookupTableName ();
/// <summary>
/// <para>Give a name to the lookup table. If not specified, uses default name &quot;lookupTable&quot;.</para>
/// </summary>
  System::String^ GetLookupTableName();


  // void SetFieldDataName (char *);
/// <summary>
/// <para>Give a name to the field data. If not specified, uses default  name &quot;field&quot;.</para>
/// </summary>
  void SetFieldDataName(System::String^ arg0);


  // char *GetFieldDataName ();
/// <summary>
/// <para>Give a name to the field data. If not specified, uses default  name &quot;field&quot;.</para>
/// </summary>
  System::String^ GetFieldDataName();


// Did not wrap:  virtual ostream *OpenVTKFile ();


// Did not wrap:  int WriteHeader (ostream *fp);


// Did not wrap:  int WritePoints (ostream *fp, vtkPoints *p);


// Did not wrap:  int WriteCoordinates (ostream *fp, vtkDataArray *coords, int axes);


// Did not wrap:  int WriteCells (ostream *fp, vtkCellArray *cells, const char *label);


// Did not wrap:  int WriteCellData (ostream *fp, vtkDataSet *ds);


// Did not wrap:  int WritePointData (ostream *fp, vtkDataSet *ds);


// Did not wrap:  int WriteFieldData (ostream *fp, vtkFieldData *f);


// Did not wrap:  int WriteDataSetData (ostream *fp, vtkDataSet *ds);


// Did not wrap:  void CloseVTKFile (ostream *fp);


// Did not wrap:  vtkDataWriter ();


// Did not wrap:  ~vtkDataWriter ();


// Did not wrap:  void WriteData ();


// Did not wrap:  int WriteArray (ostream *fp, int dataType, vtkDataArray *data, const char *format, int num, int numComp);


// Did not wrap:  int WriteScalarData (ostream *fp, vtkDataArray *s, int num);


// Did not wrap:  int WriteVectorData (ostream *fp, vtkDataArray *v, int num);


// Did not wrap:  int WriteNormalData (ostream *fp, vtkDataArray *n, int num);


// Did not wrap:  int WriteTCoordData (ostream *fp, vtkDataArray *tc, int num);


// Did not wrap:  int WriteTensorData (ostream *fp, vtkDataArray *t, int num);


// Did not wrap:  vtkDataWriter (const vtkDataWriter &);


// Did not wrap:  void vtkDataWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDataWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDataWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDataWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDataWriter();


};

} // end vtkIO
