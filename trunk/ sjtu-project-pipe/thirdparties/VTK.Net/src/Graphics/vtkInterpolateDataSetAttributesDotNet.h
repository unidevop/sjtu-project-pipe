#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkInterpolateDataSetAttributes : public vtkDataSetAlgorithm
{

public:
// Did not wrap:  static vtkInterpolateDataSetAttributes *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkInterpolateDataSetAttributes *NewInstance ();
  vtkInterpolateDataSetAttributes^ NewInstance();


  // vtkInterpolateDataSetAttributes *SafeDownCast (vtkObject* o);
  static vtkInterpolateDataSetAttributes^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkDataSetCollection *GetInputList ();
/// <summary>
/// <para>Return the list of inputs to this filter.</para>
/// </summary>
  vtkDataSetCollection^ GetInputList();


  // void SetT (double );
/// <summary>
/// <para>Specify interpolation parameter t.</para>
/// </summary>
  void SetT(double arg0);


  // double GetTMinValue ();
/// <summary>
/// <para>Specify interpolation parameter t.</para>
/// </summary>
  double GetTMinValue();


  // double GetTMaxValue ();
/// <summary>
/// <para>Specify interpolation parameter t.</para>
/// </summary>
  double GetTMaxValue();


  // double GetT ();
/// <summary>
/// <para>Specify interpolation parameter t.</para>
/// </summary>
  double GetT();


// Did not wrap:  vtkInterpolateDataSetAttributes ();


// Did not wrap:  ~vtkInterpolateDataSetAttributes ();


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *);


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkInterpolateDataSetAttributes (const vtkInterpolateDataSetAttributes &);


// Did not wrap:  void vtkInterpolateDataSetAttributes 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkInterpolateDataSetAttributes(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkInterpolateDataSetAttributes(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkInterpolateDataSetAttributes();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkInterpolateDataSetAttributes();


};

} // end vtkGraphics
