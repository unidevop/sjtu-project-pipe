#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkSTLReader : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSTLReader *NewInstance ();
  vtkSTLReader^ NewInstance();


  // vtkSTLReader *SafeDownCast (vtkObject* o);
  static vtkSTLReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkSTLReader *New ();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Overload standard modified time function. If locator is modified, then this object is modified as well.</para>
/// </summary>
  unsigned long GetMTime();


  // void SetFileName (char *);
/// <summary>
/// <para>Specify file name of stereo lithography file.</para>
/// </summary>
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
/// <summary>
/// <para>Specify file name of stereo lithography file.</para>
/// </summary>
  System::String^ GetFileName();


  // void SetMerging (int );
/// <summary>
/// <para>Turn on/off merging of points/triangles.</para>
/// </summary>
  void SetMerging(int arg0);


  // int GetMerging ();
/// <summary>
/// <para>Turn on/off merging of points/triangles.</para>
/// </summary>
  int GetMerging();


  // void MergingOn ();
/// <summary>
/// <para>Turn on/off merging of points/triangles.</para>
/// </summary>
  void MergingOn();


  // void MergingOff ();
/// <summary>
/// <para>Turn on/off merging of points/triangles.</para>
/// </summary>
  void MergingOff();


  // void SetScalarTags (int );
/// <summary>
/// <para>Turn on/off tagging of solids with scalars.</para>
/// </summary>
  void SetScalarTags(int arg0);


  // int GetScalarTags ();
/// <summary>
/// <para>Turn on/off tagging of solids with scalars.</para>
/// </summary>
  int GetScalarTags();


  // void ScalarTagsOn ();
/// <summary>
/// <para>Turn on/off tagging of solids with scalars.</para>
/// </summary>
  void ScalarTagsOn();


  // void ScalarTagsOff ();
/// <summary>
/// <para>Turn on/off tagging of solids with scalars.</para>
/// </summary>
  void ScalarTagsOff();


  // void SetLocator (vtkPointLocator *locator);
/// <summary>
/// <para>Specify a spatial locator for merging points. By default an instance of vtkMergePoints is used.</para>
/// </summary>
  void SetLocator(vtkPointLocator^ locator);


  // vtkPointLocator *GetLocator ();
/// <summary>
/// <para>Specify a spatial locator for merging points. By default an instance of vtkMergePoints is used.</para>
/// </summary>
  vtkPointLocator^ GetLocator();


  // void CreateDefaultLocator ();
/// <summary>
/// <para>Create default locator. Used to create one when none is specified.</para>
/// </summary>
  void CreateDefaultLocator();


// Did not wrap:  vtkSTLReader ();


// Did not wrap:  ~vtkSTLReader ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int ReadBinarySTL (FILE *fp, vtkPoints *, vtkCellArray *);


// Did not wrap:  int ReadASCIISTL (FILE *fp, vtkPoints *, vtkCellArray *, vtkFloatArray *scalars);


// Did not wrap:  int GetSTLFileType (FILE *fp);


// Did not wrap:  vtkSTLReader (const vtkSTLReader &);


// Did not wrap:  void vtkSTLReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSTLReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSTLReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSTLReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSTLReader();


};

} // end vtkIO
