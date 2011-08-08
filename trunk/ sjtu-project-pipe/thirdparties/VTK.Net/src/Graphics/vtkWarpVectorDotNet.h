#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkWarpVector : public vtkPointSetAlgorithm
{

public:
// Did not wrap:  static vtkWarpVector *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkWarpVector *NewInstance ();
  vtkWarpVector^ NewInstance();


  // vtkWarpVector *SafeDownCast (vtkObject* o);
  static vtkWarpVector^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetScaleFactor (double );
/// <summary>
/// <para>Specify value to scale displacement.</para>
/// </summary>
  void SetScaleFactor(double arg0);


  // double GetScaleFactor ();
/// <summary>
/// <para>Specify value to scale displacement.</para>
/// </summary>
  double GetScaleFactor();


// Did not wrap:  vtkWarpVector ();


// Did not wrap:  ~vtkWarpVector ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkWarpVector (const vtkWarpVector &);


// Did not wrap:  void vtkWarpVector 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkWarpVector(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkWarpVector(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkWarpVector();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkWarpVector();


};

} // end vtkGraphics
