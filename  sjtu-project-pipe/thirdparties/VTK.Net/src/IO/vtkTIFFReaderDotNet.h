#pragma once

// managed includes
#include "vtkImageReader2DotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkTIFFReader : public vtkImageReader2
{

public:
// Did not wrap:  static vtkTIFFReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTIFFReader *NewInstance ();
  vtkTIFFReader^ NewInstance();


  // vtkTIFFReader *SafeDownCast (vtkObject* o);
  static vtkTIFFReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual int CanReadFile (const char *fname);
/// <summary>
/// <para>Is the given file name a tiff file file?</para>
/// </summary>
  int CanReadFile(System::String^ fname);


  // virtual const char *GetFileExtensions ();return 
/// <summary>
/// <para>Return a descriptive name for the file format that might be useful in a GUI.</para>
/// </summary>
  System::String^ GetFileExtensions();


  // virtual const char *GetDescriptiveName ();return 
/// <summary>
/// <para>Auxilary methods used by the reader internally.</para>
/// </summary>
  System::String^ GetDescriptiveName();


  // void InitializeColors ();
/// <summary>
/// <para>Auxilary methods used by the reader internally.</para>
/// </summary>
  void InitializeColors();


// Did not wrap:  vtkTIFFReader ();


// Did not wrap:  ~vtkTIFFReader ();


// Did not wrap:  void GetColor (int index, unsigned short *r, unsigned short *g, unsigned short *b);


// Did not wrap:  unsigned int GetFormat ();


// Did not wrap:  virtual void ExecuteInformation ();


// Did not wrap:  virtual void ExecuteData (vtkDataObject *out);


// Did not wrap:  vtkTIFFReader (const vtkTIFFReader &);


// Did not wrap:  void vtkTIFFReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTIFFReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTIFFReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTIFFReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTIFFReader();


};

} // end vtkIO
