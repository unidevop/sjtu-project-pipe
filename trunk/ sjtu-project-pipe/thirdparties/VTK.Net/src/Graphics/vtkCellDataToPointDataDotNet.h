#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkCellDataToPointData : public vtkDataSetAlgorithm
{

public:
// Did not wrap:  static vtkCellDataToPointData *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCellDataToPointData *NewInstance ();
  vtkCellDataToPointData^ NewInstance();


  // vtkCellDataToPointData *SafeDownCast (vtkObject* o);
  static vtkCellDataToPointData^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetPassCellData (int );
/// <summary>
/// <para>Control whether the input cell data is to be passed to the output. If on, then the input cell data is passed through to the output; otherwise, only generated point data is placed into the output.</para>
/// </summary>
  void SetPassCellData(int arg0);


  // int GetPassCellData ();
/// <summary>
/// <para>Control whether the input cell data is to be passed to the output. If on, then the input cell data is passed through to the output; otherwise, only generated point data is placed into the output.</para>
/// </summary>
  int GetPassCellData();


  // void PassCellDataOn ();
/// <summary>
/// <para>Control whether the input cell data is to be passed to the output. If on, then the input cell data is passed through to the output; otherwise, only generated point data is placed into the output.</para>
/// </summary>
  void PassCellDataOn();


  // void PassCellDataOff ();
/// <summary>
/// <para>Control whether the input cell data is to be passed to the output. If on, then the input cell data is passed through to the output; otherwise, only generated point data is placed into the output.</para>
/// </summary>
  void PassCellDataOff();


// Did not wrap:  vtkCellDataToPointData ();


// Did not wrap:  ~vtkCellDataToPointData ();


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  vtkCellDataToPointData (const vtkCellDataToPointData &);


// Did not wrap:  void vtkCellDataToPointData 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCellDataToPointData(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCellDataToPointData(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCellDataToPointData();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCellDataToPointData();


};

} // end vtkGraphics
