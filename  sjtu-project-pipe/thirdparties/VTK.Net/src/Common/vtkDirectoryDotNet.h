#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkDirectory : public vtkObject
{

public:
  // const char *GetClassName ();
/// <summary>
/// <para>Return the class name as a string.</para>
/// </summary>
  System::String^ GetClassName();


  // int IsA (const char *name);
/// <summary>
/// <para>Return the class name as a string.</para>
/// </summary>
  int IsA(System::String^ name);


  // vtkDirectory *NewInstance ();
/// <summary>
/// <para>Return the class name as a string.</para>
/// </summary>
  vtkDirectory^ NewInstance();


  // vtkDirectory *SafeDownCast (vtkObject* o);
/// <summary>
/// <para>Return the class name as a string.</para>
/// </summary>
  static vtkDirectory^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkDirectory *New ();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int Open (const char *dir);
/// <summary>
/// <para>Open the specified directory and load the names of the files in that directory. 0 is returned if the directory can not be  opened, 1 if it is opened.   </para>
/// </summary>
  int Open(System::String^ dir);


  // int GetNumberOfFiles ();return this NumberOfFiles 
/// <summary>
/// <para>Return the file at the given index, the indexing is 0 based</para>
/// </summary>
  int GetNumberOfFiles();


  // const char *GetFile (int index);
/// <summary>
/// <para>Return the file at the given index, the indexing is 0 based</para>
/// </summary>
  System::String^ GetFile(int index);


  // static const char *GetCurrentWorkingDirectory (char *buf, unsigned int len);
/// <summary>
/// <para>Get the current working directory.</para>
/// </summary>
  static System::String^ GetCurrentWorkingDirectory(System::String^ buf, unsigned int len);


  // static int MakeDirectory (const char *dir);
/// <summary>
/// <para>Create directory. Needs rework to do all the testing and to work on all platforms.</para>
/// </summary>
  static int MakeDirectory(System::String^ dir);


  // static int CreateDirectory (const char *dir);
/// <summary>
/// <para>@deprecated Replaced by vtkDirectory::MakeDirectory() as of VTK 5.0.</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  static int CreateDirectory(System::String^ dir);


// Did not wrap:  void CleanUpFilesAndPath ();


// Did not wrap:  vtkDirectory ();


// Did not wrap:  ~vtkDirectory ();


// Did not wrap:  static int CreateDirectoryInternal (const char *dir);


// Did not wrap:  vtkDirectory (const vtkDirectory &);


// Did not wrap:  void vtkDirectory 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDirectory(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDirectory(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDirectory();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDirectory();


};

} // end vtkCommon
