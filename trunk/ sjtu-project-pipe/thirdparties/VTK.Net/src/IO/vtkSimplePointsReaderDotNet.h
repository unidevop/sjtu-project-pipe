#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkSimplePointsReader : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkSimplePointsReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSimplePointsReader *NewInstance ();
  vtkSimplePointsReader^ NewInstance();


  // vtkSimplePointsReader *SafeDownCast (vtkObject* o);
  static vtkSimplePointsReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetFileName (char *);
/// <summary>
/// <para>Set/Get the name of the file from which to read points.</para>
/// </summary>
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
/// <summary>
/// <para>Set/Get the name of the file from which to read points.</para>
/// </summary>
  System::String^ GetFileName();


// Did not wrap:  vtkSimplePointsReader ();


// Did not wrap:  ~vtkSimplePointsReader ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkSimplePointsReader (const vtkSimplePointsReader &);


// Did not wrap:  void vtkSimplePointsReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSimplePointsReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSimplePointsReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSimplePointsReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSimplePointsReader();


};

} // end vtkIO
