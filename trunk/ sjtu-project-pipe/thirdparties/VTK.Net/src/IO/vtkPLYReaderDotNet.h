#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkPLYReader : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPLYReader *NewInstance ();
  vtkPLYReader^ NewInstance();


  // vtkPLYReader *SafeDownCast (vtkObject* o);
  static vtkPLYReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkPLYReader *New ();


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


// Did not wrap:  vtkPLYReader ();


// Did not wrap:  ~vtkPLYReader ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkPLYReader (const vtkPLYReader &);


// Did not wrap:  void vtkPLYReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPLYReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPLYReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPLYReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPLYReader();


};

} // end vtkIO
