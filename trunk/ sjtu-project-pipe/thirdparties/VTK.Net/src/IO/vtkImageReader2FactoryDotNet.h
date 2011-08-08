#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkImageReader2;
ref class vtkImageReader2Collection;

public ref class vtkImageReader2Factory : public vtkObject
{

public:
// Did not wrap:  static vtkImageReader2Factory *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageReader2Factory *NewInstance ();
  vtkImageReader2Factory^ NewInstance();


  // vtkImageReader2Factory *SafeDownCast (vtkObject* o);
  static vtkImageReader2Factory^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // static void RegisterReader (vtkImageReader2 *r);
  static void RegisterReader(vtkImageReader2^ r);


  // static vtkImageReader2 *CreateImageReader2 (const char *path);
  static vtkImageReader2^ CreateImageReader2(System::String^ path);


  // static void GetRegisteredReaders (vtkImageReader2Collection *);
/// <summary>
/// <para>The caller must allocate the vtkImageReader2Collection and pass in the pointer to this method.</para>
/// </summary>
  static void GetRegisteredReaders(vtkImageReader2Collection^ arg0);


// Did not wrap:  vtkImageReader2Factory ();


// Did not wrap:  ~vtkImageReader2Factory ();


// Did not wrap:  static void InitializeReaders ();


// Did not wrap:  vtkImageReader2Factory (const vtkImageReader2Factory &);


// Did not wrap:  void vtkImageReader2Factory 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageReader2Factory(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageReader2Factory(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageReader2Factory();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageReader2Factory();


};

} // end vtkIO
