#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkPointDataToCellData : public vtkDataSetAlgorithm
{

public:
// Did not wrap:  static vtkPointDataToCellData *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPointDataToCellData *NewInstance ();
  vtkPointDataToCellData^ NewInstance();


  // vtkPointDataToCellData *SafeDownCast (vtkObject* o);
  static vtkPointDataToCellData^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetPassPointData (int );
/// <summary>
/// <para>Control whether the input point data is to be passed to the output. If on, then the input point data is passed through to the output; otherwise, only generated point data is placed into the output.</para>
/// </summary>
  void SetPassPointData(int arg0);


  // int GetPassPointData ();
/// <summary>
/// <para>Control whether the input point data is to be passed to the output. If on, then the input point data is passed through to the output; otherwise, only generated point data is placed into the output.</para>
/// </summary>
  int GetPassPointData();


  // void PassPointDataOn ();
/// <summary>
/// <para>Control whether the input point data is to be passed to the output. If on, then the input point data is passed through to the output; otherwise, only generated point data is placed into the output.</para>
/// </summary>
  void PassPointDataOn();


  // void PassPointDataOff ();
/// <summary>
/// <para>Control whether the input point data is to be passed to the output. If on, then the input point data is passed through to the output; otherwise, only generated point data is placed into the output.</para>
/// </summary>
  void PassPointDataOff();


// Did not wrap:  vtkPointDataToCellData ();


// Did not wrap:  ~vtkPointDataToCellData ();


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  vtkPointDataToCellData (const vtkPointDataToCellData &);


// Did not wrap:  void vtkPointDataToCellData 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPointDataToCellData(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPointDataToCellData(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPointDataToCellData();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPointDataToCellData();


};

} // end vtkGraphics
