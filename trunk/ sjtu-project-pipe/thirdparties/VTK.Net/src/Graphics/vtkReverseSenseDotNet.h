#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkReverseSense : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkReverseSense *NewInstance ();
  vtkReverseSense^ NewInstance();


  // vtkReverseSense *SafeDownCast (vtkObject* o);
  static vtkReverseSense^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkReverseSense *New ();


  // void SetReverseCells (int );
/// <summary>
/// <para>Flag controls whether to reverse cell ordering.</para>
/// </summary>
  void SetReverseCells(int arg0);


  // int GetReverseCells ();
/// <summary>
/// <para>Flag controls whether to reverse cell ordering.</para>
/// </summary>
  int GetReverseCells();


  // void ReverseCellsOn ();
/// <summary>
/// <para>Flag controls whether to reverse cell ordering.</para>
/// </summary>
  void ReverseCellsOn();


  // void ReverseCellsOff ();
/// <summary>
/// <para>Flag controls whether to reverse cell ordering.</para>
/// </summary>
  void ReverseCellsOff();


  // void SetReverseNormals (int );
/// <summary>
/// <para>Flag controls whether to reverse normal orientation.</para>
/// </summary>
  void SetReverseNormals(int arg0);


  // int GetReverseNormals ();
/// <summary>
/// <para>Flag controls whether to reverse normal orientation.</para>
/// </summary>
  int GetReverseNormals();


  // void ReverseNormalsOn ();
/// <summary>
/// <para>Flag controls whether to reverse normal orientation.</para>
/// </summary>
  void ReverseNormalsOn();


  // void ReverseNormalsOff ();
/// <summary>
/// <para>Flag controls whether to reverse normal orientation.</para>
/// </summary>
  void ReverseNormalsOff();


// Did not wrap:  vtkReverseSense ();


// Did not wrap:  ~vtkReverseSense ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkReverseSense (const vtkReverseSense &);


// Did not wrap:  void vtkReverseSense 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkReverseSense(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkReverseSense(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkReverseSense();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkReverseSense();


};

} // end vtkGraphics
