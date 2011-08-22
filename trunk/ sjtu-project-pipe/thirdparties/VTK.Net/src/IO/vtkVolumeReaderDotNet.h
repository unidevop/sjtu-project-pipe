#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkVolumeReader : public vtkImageAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkVolumeReader *NewInstance ();
  vtkVolumeReader^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetFilePrefix (char *);
/// <summary>
/// <para>Specify file prefix for the image file(s).</para>
/// </summary>
  void SetFilePrefix(System::String^ arg0);


  // char *GetFilePrefix ();
/// <summary>
/// <para>Specify file prefix for the image file(s).</para>
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


  // void SetImageRange (int , int );
/// <summary>
/// <para>Set the range of files to read.</para>
/// </summary>
  void SetImageRange(int arg0, int arg1);


  // void SetImageRange (int  a[2]);
/// <summary>
/// <para>Set the range of files to read.</para>
/// </summary>
  void SetImageRange(array<int>^ a);


  // int  *GetImageRange ();
/// <summary>
/// <para>Set the range of files to read.</para>
/// </summary>
  array<int>^ GetImageRange();


  // void SetDataSpacing (double , double , double );
/// <summary>
/// <para>Specify the spacing for the data.</para>
/// </summary>
  void SetDataSpacing(double arg0, double arg1, double arg2);


  // void SetDataSpacing (double  a[3]);
/// <summary>
/// <para>Specify the spacing for the data.</para>
/// </summary>
  void SetDataSpacing(array<double>^ a);


  // double  *GetDataSpacing ();
/// <summary>
/// <para>Specify the spacing for the data.</para>
/// </summary>
  array<double>^ GetDataSpacing();


  // void SetDataOrigin (double , double , double );
/// <summary>
/// <para>Specify the origin for the data.</para>
/// </summary>
  void SetDataOrigin(double arg0, double arg1, double arg2);


  // void SetDataOrigin (double  a[3]);
/// <summary>
/// <para>Specify the origin for the data.</para>
/// </summary>
  void SetDataOrigin(array<double>^ a);


  // double  *GetDataOrigin ();
/// <summary>
/// <para>Specify the origin for the data.</para>
/// </summary>
  array<double>^ GetDataOrigin();


  // virtual vtkImageData *GetImage (int ImageNumber) = 0;
/// <summary>
/// <para>Other objects make use of this method.</para>
/// </summary>
  vtkImageData^ GetImage(int ImageNumber);


// Did not wrap:  vtkVolumeReader ();


// Did not wrap:  ~vtkVolumeReader ();


// Did not wrap:  vtkVolumeReader (const vtkVolumeReader &);


// Did not wrap:  void vtkVolumeReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkVolumeReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkVolumeReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkVolumeReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkVolumeReader();


};

} // end vtkIO
