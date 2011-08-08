#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkBrownianPoints : public vtkDataSetAlgorithm
{

public:
// Did not wrap:  static vtkBrownianPoints *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkBrownianPoints *NewInstance ();
  vtkBrownianPoints^ NewInstance();


  // vtkBrownianPoints *SafeDownCast (vtkObject* o);
  static vtkBrownianPoints^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetMinimumSpeed (double );
/// <summary>
/// <para>Set the minimum speed value.</para>
/// </summary>
  void SetMinimumSpeed(double arg0);


  // double GetMinimumSpeedMinValue ();
/// <summary>
/// <para>Set the minimum speed value.</para>
/// </summary>
  double GetMinimumSpeedMinValue();


  // double GetMinimumSpeedMaxValue ();
/// <summary>
/// <para>Set the minimum speed value.</para>
/// </summary>
  double GetMinimumSpeedMaxValue();


  // double GetMinimumSpeed ();
/// <summary>
/// <para>Set the minimum speed value.</para>
/// </summary>
  double GetMinimumSpeed();


  // void SetMaximumSpeed (double );
/// <summary>
/// <para>Set the maximum speed value.</para>
/// </summary>
  void SetMaximumSpeed(double arg0);


  // double GetMaximumSpeedMinValue ();
/// <summary>
/// <para>Set the maximum speed value.</para>
/// </summary>
  double GetMaximumSpeedMinValue();


  // double GetMaximumSpeedMaxValue ();
/// <summary>
/// <para>Set the maximum speed value.</para>
/// </summary>
  double GetMaximumSpeedMaxValue();


  // double GetMaximumSpeed ();
/// <summary>
/// <para>Set the maximum speed value.</para>
/// </summary>
  double GetMaximumSpeed();


// Did not wrap:  vtkBrownianPoints ();


// Did not wrap:  ~vtkBrownianPoints ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkBrownianPoints (const vtkBrownianPoints &);


// Did not wrap:  void vtkBrownianPoints 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkBrownianPoints(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkBrownianPoints(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkBrownianPoints();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkBrownianPoints();


};

} // end vtkGraphics
