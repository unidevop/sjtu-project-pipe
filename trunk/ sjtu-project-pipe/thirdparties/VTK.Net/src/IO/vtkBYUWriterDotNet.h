#pragma once

// managed includes
#include "vtkPolyDataWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkBYUWriter : public vtkPolyDataWriter
{

public:
// Did not wrap:  static vtkBYUWriter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkBYUWriter *NewInstance ();
  vtkBYUWriter^ NewInstance();


  // vtkBYUWriter *SafeDownCast (vtkObject* o);
  static vtkBYUWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetGeometryFileName (char *);
/// <summary>
/// <para>Specify the name of the geometry file to write.</para>
/// </summary>
  void SetGeometryFileName(System::String^ arg0);


  // char *GetGeometryFileName ();
/// <summary>
/// <para>Specify the name of the geometry file to write.</para>
/// </summary>
  System::String^ GetGeometryFileName();


  // void SetDisplacementFileName (char *);
/// <summary>
/// <para>Specify the name of the displacement file to write.</para>
/// </summary>
  void SetDisplacementFileName(System::String^ arg0);


  // char *GetDisplacementFileName ();
/// <summary>
/// <para>Specify the name of the displacement file to write.</para>
/// </summary>
  System::String^ GetDisplacementFileName();


  // void SetScalarFileName (char *);
/// <summary>
/// <para>Specify the name of the scalar file to write.</para>
/// </summary>
  void SetScalarFileName(System::String^ arg0);


  // char *GetScalarFileName ();
/// <summary>
/// <para>Specify the name of the scalar file to write.</para>
/// </summary>
  System::String^ GetScalarFileName();


  // void SetTextureFileName (char *);
/// <summary>
/// <para>Specify the name of the texture file to write.</para>
/// </summary>
  void SetTextureFileName(System::String^ arg0);


  // char *GetTextureFileName ();
/// <summary>
/// <para>Specify the name of the texture file to write.</para>
/// </summary>
  System::String^ GetTextureFileName();


  // void SetWriteDisplacement (int );
/// <summary>
/// <para>Turn on/off writing the displacement file.</para>
/// </summary>
  void SetWriteDisplacement(int arg0);


  // int GetWriteDisplacement ();
/// <summary>
/// <para>Turn on/off writing the displacement file.</para>
/// </summary>
  int GetWriteDisplacement();


  // void WriteDisplacementOn ();
/// <summary>
/// <para>Turn on/off writing the displacement file.</para>
/// </summary>
  void WriteDisplacementOn();


  // void WriteDisplacementOff ();
/// <summary>
/// <para>Turn on/off writing the displacement file.</para>
/// </summary>
  void WriteDisplacementOff();


  // void SetWriteScalar (int );
/// <summary>
/// <para>Turn on/off writing the scalar file.</para>
/// </summary>
  void SetWriteScalar(int arg0);


  // int GetWriteScalar ();
/// <summary>
/// <para>Turn on/off writing the scalar file.</para>
/// </summary>
  int GetWriteScalar();


  // void WriteScalarOn ();
/// <summary>
/// <para>Turn on/off writing the scalar file.</para>
/// </summary>
  void WriteScalarOn();


  // void WriteScalarOff ();
/// <summary>
/// <para>Turn on/off writing the scalar file.</para>
/// </summary>
  void WriteScalarOff();


  // void SetWriteTexture (int );
/// <summary>
/// <para>Turn on/off writing the texture file.</para>
/// </summary>
  void SetWriteTexture(int arg0);


  // int GetWriteTexture ();
/// <summary>
/// <para>Turn on/off writing the texture file.</para>
/// </summary>
  int GetWriteTexture();


  // void WriteTextureOn ();
/// <summary>
/// <para>Turn on/off writing the texture file.</para>
/// </summary>
  void WriteTextureOn();


  // void WriteTextureOff ();
/// <summary>
/// <para>Turn on/off writing the texture file.</para>
/// </summary>
  void WriteTextureOff();


// Did not wrap:  vtkBYUWriter ();


// Did not wrap:  ~vtkBYUWriter ();


// Did not wrap:  void WriteData ();


// Did not wrap:  void WriteGeometryFile (FILE *fp, int numPts);


// Did not wrap:  void WriteDisplacementFile (int numPts);


// Did not wrap:  void WriteScalarFile (int numPts);


// Did not wrap:  void WriteTextureFile (int numPts);


// Did not wrap:  vtkBYUWriter (const vtkBYUWriter &);


// Did not wrap:  void vtkBYUWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkBYUWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkBYUWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkBYUWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkBYUWriter();


};

} // end vtkIO
