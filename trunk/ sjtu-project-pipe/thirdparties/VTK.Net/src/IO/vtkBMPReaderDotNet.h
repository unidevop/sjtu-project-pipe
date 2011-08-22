#pragma once

// managed includes
#include "vtkImageReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkBMPReader : public vtkImageReader
{

public:
// Did not wrap:  static vtkBMPReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkBMPReader *NewInstance ();
  vtkBMPReader^ NewInstance();


  // vtkBMPReader *SafeDownCast (vtkObject* o);
  static vtkBMPReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int GetDepth ();
/// <summary>
/// <para>Returns the depth of the BMP, either 8 or 24.</para>
/// </summary>
  int GetDepth();


  // virtual int CanReadFile (const char *fname);
/// <summary>
/// </summary>
  int CanReadFile(System::String^ fname);


  // virtual const char *GetFileExtensions ();return 
/// <summary>
/// <para>Return a descriptive name for the file format that might be useful in a GUI.</para>
/// </summary>
  System::String^ GetFileExtensions();


  // virtual const char *GetDescriptiveName ();return 
/// <summary>
/// <para>If this flag is set and the BMP reader encounters an 8bit file, the data will be kept as unsigned chars and a lookuptable will be exported</para>
/// </summary>
  System::String^ GetDescriptiveName();


  // void SetAllow8BitBMP (int );
/// <summary>
/// <para>If this flag is set and the BMP reader encounters an 8bit file, the data will be kept as unsigned chars and a lookuptable will be exported</para>
/// </summary>
  void SetAllow8BitBMP(int arg0);


  // int GetAllow8BitBMP ();
/// <summary>
/// <para>If this flag is set and the BMP reader encounters an 8bit file, the data will be kept as unsigned chars and a lookuptable will be exported</para>
/// </summary>
  int GetAllow8BitBMP();


  // void Allow8BitBMPOn ();
/// <summary>
/// <para>If this flag is set and the BMP reader encounters an 8bit file, the data will be kept as unsigned chars and a lookuptable will be exported</para>
/// </summary>
  void Allow8BitBMPOn();


  // void Allow8BitBMPOff ();
/// <summary>
/// <para>If this flag is set and the BMP reader encounters an 8bit file, the data will be kept as unsigned chars and a lookuptable will be exported</para>
/// </summary>
  void Allow8BitBMPOff();


  // vtkLookupTable *GetLookupTable ();
  vtkLookupTable^ GetLookupTable();


// Did not wrap:  vtkBMPReader ();


// Did not wrap:  ~vtkBMPReader ();


// Did not wrap:  virtual void ComputeDataIncrements ();


// Did not wrap:  virtual void ExecuteInformation ();


// Did not wrap:  virtual void ExecuteData (vtkDataObject *out);


// Did not wrap:  vtkBMPReader (const vtkBMPReader &);


// Did not wrap:  void vtkBMPReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkBMPReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkBMPReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkBMPReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkBMPReader();


};

} // end vtkIO
