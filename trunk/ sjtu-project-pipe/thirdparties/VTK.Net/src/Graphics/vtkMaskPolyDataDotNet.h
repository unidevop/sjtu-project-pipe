#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkMaskPolyData : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkMaskPolyData *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMaskPolyData *NewInstance ();
  vtkMaskPolyData^ NewInstance();


  // vtkMaskPolyData *SafeDownCast (vtkObject* o);
  static vtkMaskPolyData^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetOnRatio (int );
/// <summary>
/// <para>Turn on every nth entity (cell).</para>
/// </summary>
  void SetOnRatio(int arg0);


  // int GetOnRatioMinValue ();
/// <summary>
/// <para>Turn on every nth entity (cell).</para>
/// </summary>
  int GetOnRatioMinValue();


  // int GetOnRatioMaxValue ();
/// <summary>
/// <para>Turn on every nth entity (cell).</para>
/// </summary>
  int GetOnRatioMaxValue();


  // int GetOnRatio ();
/// <summary>
/// <para>Turn on every nth entity (cell).</para>
/// </summary>
  int GetOnRatio();


  // void SetOffset (vtkIdType );
/// <summary>
/// <para>Start with this entity (cell).</para>
/// </summary>
  void SetOffset(int arg0);


  // vtkIdType GetOffsetMinValue ();
/// <summary>
/// <para>Start with this entity (cell).</para>
/// </summary>
  int GetOffsetMinValue();


  // vtkIdType GetOffsetMaxValue ();
/// <summary>
/// <para>Start with this entity (cell).</para>
/// </summary>
  int GetOffsetMaxValue();


  // vtkIdType GetOffset ();
/// <summary>
/// <para>Start with this entity (cell).</para>
/// </summary>
  int GetOffset();


// Did not wrap:  vtkMaskPolyData ();


// Did not wrap:  ~vtkMaskPolyData ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkMaskPolyData (const vtkMaskPolyData &);


// Did not wrap:  void vtkMaskPolyData 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMaskPolyData(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMaskPolyData(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMaskPolyData();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMaskPolyData();


};

} // end vtkGraphics
