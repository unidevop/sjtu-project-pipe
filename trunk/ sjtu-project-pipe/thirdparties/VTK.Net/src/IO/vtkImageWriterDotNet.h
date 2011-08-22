#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageWriter : public vtkImageAlgorithm
{

public:
// Did not wrap:  static vtkImageWriter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageWriter *NewInstance ();
  vtkImageWriter^ NewInstance();


  // vtkImageWriter *SafeDownCast (vtkObject* o);
  static vtkImageWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetFileName (char *);
/// <summary>
/// <para>Specify file name for the image file. You should specify either a FileName or a FilePrefix. Use FilePrefix if the data is stored  in multiple files.</para>
/// </summary>
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
/// <summary>
/// <para>Specify file name for the image file. You should specify either a FileName or a FilePrefix. Use FilePrefix if the data is stored  in multiple files.</para>
/// </summary>
  System::String^ GetFileName();


  // void SetFilePrefix (char *);
/// <summary>
/// <para>Specify file prefix for the image file(s).You should specify either a FileName or FilePrefix. Use FilePrefix if the data is stored in multiple files.</para>
/// </summary>
  void SetFilePrefix(System::String^ arg0);


  // char *GetFilePrefix ();
/// <summary>
/// <para>Specify file prefix for the image file(s).You should specify either a FileName or FilePrefix. Use FilePrefix if the data is stored in multiple files.</para>
/// </summary>
  System::String^ GetFilePrefix();


  // void SetFilePattern (char *);
/// <summary>
/// <para>The sprintf format used to build filename from FilePrefix and number.</para>
/// </summary>
  void SetFilePattern(System::String^ arg0);


  // char *GetFilePattern ();
/// <summary>
/// <para>The sprintf format used to build filename from FilePrefix and number.</para>
/// </summary>
  System::String^ GetFilePattern();


  // void SetFileDimensionality (int );
/// <summary>
/// <para>What dimension are the files to be written. Usually this is 2, or 3. If it is 2 and the input is a volume then the volume will be  written as a series of 2d slices.</para>
/// </summary>
  void SetFileDimensionality(int arg0);


  // int GetFileDimensionality ();
/// <summary>
/// <para>What dimension are the files to be written. Usually this is 2, or 3. If it is 2 and the input is a volume then the volume will be  written as a series of 2d slices.</para>
/// </summary>
  int GetFileDimensionality();


  // virtual void Write ();
/// <summary>
/// <para>The main interface which triggers the writer to start.</para>
/// </summary>
  void Write();


  // void DeleteFiles ();
  void DeleteFiles();


// Did not wrap:  vtkImageWriter ();


// Did not wrap:  ~vtkImageWriter ();


// Did not wrap:  virtual void RecursiveWrite (int dim, vtkImageData *region, ofstream *file);


// Did not wrap:  virtual void RecursiveWrite (int dim, vtkImageData *cache, vtkImageData *data, ofstream *file);


// Did not wrap:  virtual void WriteFile (ofstream *file, vtkImageData *data, int extent[6]);


// Did not wrap:  virtual void WriteFileHeader (ofstream *, vtkImageData *);


// Did not wrap:  virtual void WriteFileTrailer (ofstream *, vtkImageData *);


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  vtkImageWriter (const vtkImageWriter &);


// Did not wrap:  void vtkImageWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageWriter();


};

} // end vtkIO
