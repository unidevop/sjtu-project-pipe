#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkShrinkPolyData : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkShrinkPolyData *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkShrinkPolyData *NewInstance ();
  vtkShrinkPolyData^ NewInstance();


  // vtkShrinkPolyData *SafeDownCast (vtkObject* o);
  static vtkShrinkPolyData^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetShrinkFactor (double );
/// <summary>
/// <para>Set the fraction of shrink for each cell.</para>
/// </summary>
  void SetShrinkFactor(double arg0);


  // double GetShrinkFactorMinValue ();
/// <summary>
/// <para>Set the fraction of shrink for each cell.</para>
/// </summary>
  double GetShrinkFactorMinValue();


  // double GetShrinkFactorMaxValue ();
/// <summary>
/// <para>Set the fraction of shrink for each cell.</para>
/// </summary>
  double GetShrinkFactorMaxValue();


  // double GetShrinkFactor ();
/// <summary>
/// <para>Get the fraction of shrink for each cell.</para>
/// </summary>
  double GetShrinkFactor();


// Did not wrap:  vtkShrinkPolyData (double sf);


// Did not wrap:  ~vtkShrinkPolyData ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkShrinkPolyData (const vtkShrinkPolyData &);


// Did not wrap:  void vtkShrinkPolyData 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkShrinkPolyData(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkShrinkPolyData(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkShrinkPolyData();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkShrinkPolyData();


};

} // end vtkGraphics
