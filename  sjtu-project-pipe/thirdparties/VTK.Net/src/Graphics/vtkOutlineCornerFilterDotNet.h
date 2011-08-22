#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkOutlineCornerFilter : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOutlineCornerFilter *NewInstance ();
  vtkOutlineCornerFilter^ NewInstance();


  // vtkOutlineCornerFilter *SafeDownCast (vtkObject* o);
  static vtkOutlineCornerFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkOutlineCornerFilter *New ();


  // void SetCornerFactor (double );
/// <summary>
/// <para>Set/Get the factor that controls the relative size of the corners to the length of the corresponding bounds</para>
/// </summary>
  void SetCornerFactor(double arg0);


  // double GetCornerFactorMinValue ();
/// <summary>
/// <para>Set/Get the factor that controls the relative size of the corners to the length of the corresponding bounds</para>
/// </summary>
  double GetCornerFactorMinValue();


  // double GetCornerFactorMaxValue ();
/// <summary>
/// <para>Set/Get the factor that controls the relative size of the corners to the length of the corresponding bounds</para>
/// </summary>
  double GetCornerFactorMaxValue();


  // double GetCornerFactor ();
/// <summary>
/// <para>Set/Get the factor that controls the relative size of the corners to the length of the corresponding bounds</para>
/// </summary>
  double GetCornerFactor();


// Did not wrap:  vtkOutlineCornerFilter ();


// Did not wrap:  ~vtkOutlineCornerFilter ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkOutlineCornerFilter (const vtkOutlineCornerFilter &);


// Did not wrap:  void vtkOutlineCornerFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOutlineCornerFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOutlineCornerFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOutlineCornerFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOutlineCornerFilter();


};

} // end vtkGraphics
