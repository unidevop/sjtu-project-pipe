#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkGraphLayoutFilter : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkGraphLayoutFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkGraphLayoutFilter *NewInstance ();
  vtkGraphLayoutFilter^ NewInstance();


  // vtkGraphLayoutFilter *SafeDownCast (vtkObject* o);
  static vtkGraphLayoutFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetGraphBounds (double , double , double , double , double , double );
/// <summary>
/// <para>Set / get the region in space in which to place the final graph. The GraphBounds only affects the results if AutomaticBoundsComputation is off.</para>
/// </summary>
  void SetGraphBounds(double arg0, double arg1, double arg2, double arg3, double arg4, double arg5);


  // void SetGraphBounds (double  a[6]);
/// <summary>
/// <para>Set / get the region in space in which to place the final graph. The GraphBounds only affects the results if AutomaticBoundsComputation is off.</para>
/// </summary>
  void SetGraphBounds(array<double>^ a);


  // double  *GetGraphBounds ();
/// <summary>
/// <para>Set / get the region in space in which to place the final graph. The GraphBounds only affects the results if AutomaticBoundsComputation is off.</para>
/// </summary>
  array<double>^ GetGraphBounds();


  // void SetAutomaticBoundsComputation (int );
/// <summary>
/// <para>Turn on/off automatic graph bounds calculation. If this boolean is off, then the manually specified GraphBounds is used. If on, then the input's bounds us used as the graph bounds.</para>
/// </summary>
  void SetAutomaticBoundsComputation(int arg0);


  // int GetAutomaticBoundsComputation ();
/// <summary>
/// <para>Turn on/off automatic graph bounds calculation. If this boolean is off, then the manually specified GraphBounds is used. If on, then the input's bounds us used as the graph bounds.</para>
/// </summary>
  int GetAutomaticBoundsComputation();


  // void AutomaticBoundsComputationOn ();
/// <summary>
/// <para>Turn on/off automatic graph bounds calculation. If this boolean is off, then the manually specified GraphBounds is used. If on, then the input's bounds us used as the graph bounds.</para>
/// </summary>
  void AutomaticBoundsComputationOn();


  // void AutomaticBoundsComputationOff ();
/// <summary>
/// <para>Turn on/off automatic graph bounds calculation. If this boolean is off, then the manually specified GraphBounds is used. If on, then the input's bounds us used as the graph bounds.</para>
/// </summary>
  void AutomaticBoundsComputationOff();


  // void SetMaxNumberOfIterations (int );
/// <summary>
/// <para>Set/Get the maximum number of iterations to be used. The higher this number, the more iterations through the algorithm is possible, and thus, the more the graph gets modified.</para>
/// </summary>
  void SetMaxNumberOfIterations(int arg0);


  // int GetMaxNumberOfIterationsMinValue ();
/// <summary>
/// <para>Set/Get the maximum number of iterations to be used. The higher this number, the more iterations through the algorithm is possible, and thus, the more the graph gets modified.</para>
/// </summary>
  int GetMaxNumberOfIterationsMinValue();


  // int GetMaxNumberOfIterationsMaxValue ();
/// <summary>
/// <para>Set/Get the maximum number of iterations to be used. The higher this number, the more iterations through the algorithm is possible, and thus, the more the graph gets modified.</para>
/// </summary>
  int GetMaxNumberOfIterationsMaxValue();


  // int GetMaxNumberOfIterations ();
/// <summary>
/// <para>Set/Get the maximum number of iterations to be used. The higher this number, the more iterations through the algorithm is possible, and thus, the more the graph gets modified.</para>
/// </summary>
  int GetMaxNumberOfIterations();


  // void SetCoolDownRate (double );
/// <summary>
/// <para>Set/Get the Cool-down rate. The higher this number is, the longer it will take to &quot;cool-down&quot;, and thus, the more the graph will be modified.</para>
/// </summary>
  void SetCoolDownRate(double arg0);


  // double GetCoolDownRateMinValue ();
/// <summary>
/// <para>Set/Get the Cool-down rate. The higher this number is, the longer it will take to &quot;cool-down&quot;, and thus, the more the graph will be modified.</para>
/// </summary>
  double GetCoolDownRateMinValue();


  // double GetCoolDownRateMaxValue ();
/// <summary>
/// <para>Set/Get the Cool-down rate. The higher this number is, the longer it will take to &quot;cool-down&quot;, and thus, the more the graph will be modified.</para>
/// </summary>
  double GetCoolDownRateMaxValue();


  // double GetCoolDownRate ();
/// <summary>
/// <para>Set/Get the Cool-down rate. The higher this number is, the longer it will take to &quot;cool-down&quot;, and thus, the more the graph will be modified.</para>
/// </summary>
  double GetCoolDownRate();


  // void SetThreeDimensionalLayout (int );
  void SetThreeDimensionalLayout(int arg0);


  // int GetThreeDimensionalLayout ();
  int GetThreeDimensionalLayout();


  // void ThreeDimensionalLayoutOn ();
  void ThreeDimensionalLayoutOn();


  // void ThreeDimensionalLayoutOff ();
  void ThreeDimensionalLayoutOff();


// Did not wrap:  vtkGraphLayoutFilter ();


// Did not wrap:  ~vtkGraphLayoutFilter ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkGraphLayoutFilter (const vtkGraphLayoutFilter &);


// Did not wrap:  void vtkGraphLayoutFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGraphLayoutFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGraphLayoutFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGraphLayoutFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGraphLayoutFilter();


};

} // end vtkGraphics
