#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkStripper : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkStripper *NewInstance ();
  vtkStripper^ NewInstance();


  // vtkStripper *SafeDownCast (vtkObject* o);
  static vtkStripper^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkStripper *New ();


  // void SetMaximumLength (int );
/// <summary>
/// <para>Specify the maximum number of triangles in a triangle strip, and/or the maximum number of lines in a poly-line.</para>
/// </summary>
  void SetMaximumLength(int arg0);


  // int GetMaximumLengthMinValue ();
/// <summary>
/// <para>Specify the maximum number of triangles in a triangle strip, and/or the maximum number of lines in a poly-line.</para>
/// </summary>
  int GetMaximumLengthMinValue();


  // int GetMaximumLengthMaxValue ();
/// <summary>
/// <para>Specify the maximum number of triangles in a triangle strip, and/or the maximum number of lines in a poly-line.</para>
/// </summary>
  int GetMaximumLengthMaxValue();


  // int GetMaximumLength ();
/// <summary>
/// <para>Specify the maximum number of triangles in a triangle strip, and/or the maximum number of lines in a poly-line.</para>
/// </summary>
  int GetMaximumLength();


  // void PassCellDataAsFieldDataOn ();
/// <summary>
/// <para>Enable/Disable passing of the CellData in the input to the output as FieldData. Note the field data is tranformed.</para>
/// </summary>
  void PassCellDataAsFieldDataOn();


  // void PassCellDataAsFieldDataOff ();
/// <summary>
/// <para>Enable/Disable passing of the CellData in the input to the output as FieldData. Note the field data is tranformed.</para>
/// </summary>
  void PassCellDataAsFieldDataOff();


  // void SetPassCellDataAsFieldData (int );
/// <summary>
/// <para>Enable/Disable passing of the CellData in the input to the output as FieldData. Note the field data is tranformed.</para>
/// </summary>
  void SetPassCellDataAsFieldData(int arg0);


  // int GetPassCellDataAsFieldData ();
/// <summary>
/// <para>Enable/Disable passing of the CellData in the input to the output as FieldData. Note the field data is tranformed.</para>
/// </summary>
  int GetPassCellDataAsFieldData();


// Did not wrap:  vtkStripper ();


// Did not wrap:  ~vtkStripper ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkStripper (const vtkStripper &);


// Did not wrap:  void vtkStripper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkStripper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkStripper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkStripper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkStripper();


};

} // end vtkGraphics
