#pragma once

// managed includes
#include "vtkWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkDataObjectWriter : public vtkWriter
{

public:
// Did not wrap:  static vtkDataObjectWriter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDataObjectWriter *NewInstance ();
  vtkDataObjectWriter^ NewInstance();


  // vtkDataObjectWriter *SafeDownCast (vtkObject* o);
  static vtkDataObjectWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetFileName (const char *filename);this Writer SetFileName filename 
/// <summary>
/// <para>Methods delegated to vtkDataWriter, see vtkDataWriter.</para>
/// </summary>
  void SetFileName(System::String^ filename);


  // char *GetFileName ();return this Writer GetFileName 
/// <summary>
/// <para>Methods delegated to vtkDataWriter, see vtkDataWriter.</para>
/// </summary>
  System::String^ GetFileName();


  // void SetHeader (const char *header);this Writer SetHeader header 
/// <summary>
/// <para>Methods delegated to vtkDataWriter, see vtkDataWriter.</para>
/// </summary>
  void SetHeader(System::String^ header);


  // char *GetHeader ();return this Writer GetHeader 
/// <summary>
/// <para>Methods delegated to vtkDataWriter, see vtkDataWriter.</para>
/// </summary>
  System::String^ GetHeader();


  // void SetFileType (int type);this Writer SetFileType type 
/// <summary>
/// <para>Methods delegated to vtkDataWriter, see vtkDataWriter.</para>
/// </summary>
  void SetFileType(int type);


  // int GetFileType ();return this Writer GetFileType 
/// <summary>
/// <para>Methods delegated to vtkDataWriter, see vtkDataWriter.</para>
/// </summary>
  int GetFileType();


  // void SetFileTypeToASCII ();this Writer SetFileType VTK_ASCII 
/// <summary>
/// <para>Methods delegated to vtkDataWriter, see vtkDataWriter.</para>
/// </summary>
  void SetFileTypeToASCII();


  // void SetFileTypeToBinary ();this Writer SetFileType VTK_BINARY 
/// <summary>
/// <para>Methods delegated to vtkDataWriter, see vtkDataWriter.</para>
/// </summary>
  void SetFileTypeToBinary();


  // void SetFieldDataName (const char *fieldname);this Writer SetFieldDataName fieldname 
/// <summary>
/// <para>Methods delegated to vtkDataWriter, see vtkDataWriter.</para>
/// </summary>
  void SetFieldDataName(System::String^ fieldname);


  // char *GetFieldDataName ();return this Writer GetFieldDataName 
/// <summary>
/// <para>Methods delegated to vtkDataWriter, see vtkDataWriter.</para>
/// </summary>
  System::String^ GetFieldDataName();


// Did not wrap:  vtkDataObjectWriter ();


// Did not wrap:  ~vtkDataObjectWriter ();


// Did not wrap:  void WriteData ();


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkDataObjectWriter (const vtkDataObjectWriter &);


// Did not wrap:  void vtkDataObjectWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDataObjectWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDataObjectWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDataObjectWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDataObjectWriter();


};

} // end vtkIO
