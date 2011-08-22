#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkShrinkFilter : public vtkUnstructuredGridAlgorithm
{

public:
// Did not wrap:  static vtkShrinkFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkShrinkFilter *NewInstance ();
  vtkShrinkFilter^ NewInstance();


  // vtkShrinkFilter *SafeDownCast (vtkObject* o);
  static vtkShrinkFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetShrinkFactor (double );
/// <summary>
/// <para>Get/Set the fraction of shrink for each cell.</para>
/// </summary>
  void SetShrinkFactor(double arg0);


  // double GetShrinkFactorMinValue ();
/// <summary>
/// <para>Get/Set the fraction of shrink for each cell.</para>
/// </summary>
  double GetShrinkFactorMinValue();


  // double GetShrinkFactorMaxValue ();
/// <summary>
/// <para>Get/Set the fraction of shrink for each cell.</para>
/// </summary>
  double GetShrinkFactorMaxValue();


  // double GetShrinkFactor ();
/// <summary>
/// <para>Get/Set the fraction of shrink for each cell.</para>
/// </summary>
  double GetShrinkFactor();


// Did not wrap:  vtkShrinkFilter ();


// Did not wrap:  ~vtkShrinkFilter ();


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkShrinkFilter (const vtkShrinkFilter &);


// Did not wrap:  void vtkShrinkFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkShrinkFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkShrinkFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkShrinkFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkShrinkFilter();


};

} // end vtkGraphics
