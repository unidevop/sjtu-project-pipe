#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkThresholdPoints : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkThresholdPoints *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkThresholdPoints *NewInstance ();
  vtkThresholdPoints^ NewInstance();


  // vtkThresholdPoints *SafeDownCast (vtkObject* o);
  static vtkThresholdPoints^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void ThresholdByLower (double lower);
/// <summary>
/// <para>Criterion is cells whose scalars are less or equal to lower threshold.</para>
/// </summary>
  void ThresholdByLower(double lower);


  // void ThresholdByUpper (double upper);
/// <summary>
/// <para>Criterion is cells whose scalars are greater or equal to upper threshold.</para>
/// </summary>
  void ThresholdByUpper(double upper);


  // void ThresholdBetween (double lower, double upper);
/// <summary>
/// <para>Criterion is cells whose scalars are between lower and upper thresholds (inclusive of the end values).</para>
/// </summary>
  void ThresholdBetween(double lower, double upper);


  // double GetUpperThreshold ();
/// <summary>
/// <para>Get the upper and lower thresholds.</para>
/// </summary>
  double GetUpperThreshold();


  // double GetLowerThreshold ();
/// <summary>
/// <para>Get the upper and lower thresholds.</para>
/// </summary>
  double GetLowerThreshold();


// Did not wrap:  vtkThresholdPoints ();


// Did not wrap:  ~vtkThresholdPoints ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  int Lower (double s);return s this LowerThreshold 


// Did not wrap:  int Upper (double s);return s this UpperThreshold 


// Did not wrap:  int Between (double s);return s this LowerThreshold s this UpperThreshold 


// Did not wrap:  vtkThresholdPoints (const vtkThresholdPoints &);


// Did not wrap:  void vtkThresholdPoints 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkThresholdPoints(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkThresholdPoints(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkThresholdPoints();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkThresholdPoints();


};

} // end vtkGraphics
