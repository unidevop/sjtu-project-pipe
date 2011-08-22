#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkArrowSource : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkArrowSource *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkArrowSource *NewInstance ();
  vtkArrowSource^ NewInstance();


  // vtkArrowSource *SafeDownCast (vtkObject* o);
  static vtkArrowSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetTipLength (double );
/// <summary>
/// <para>Set the length, and radius of the tip.  They default to 0.35 and 0.1</para>
/// </summary>
  void SetTipLength(double arg0);


  // double GetTipLengthMinValue ();
/// <summary>
/// <para>Set the length, and radius of the tip.  They default to 0.35 and 0.1</para>
/// </summary>
  double GetTipLengthMinValue();


  // double GetTipLengthMaxValue ();
/// <summary>
/// <para>Set the length, and radius of the tip.  They default to 0.35 and 0.1</para>
/// </summary>
  double GetTipLengthMaxValue();


  // double GetTipLength ();
/// <summary>
/// <para>Set the length, and radius of the tip.  They default to 0.35 and 0.1</para>
/// </summary>
  double GetTipLength();


  // void SetTipRadius (double );
/// <summary>
/// <para>Set the length, and radius of the tip.  They default to 0.35 and 0.1</para>
/// </summary>
  void SetTipRadius(double arg0);


  // double GetTipRadiusMinValue ();
/// <summary>
/// <para>Set the length, and radius of the tip.  They default to 0.35 and 0.1</para>
/// </summary>
  double GetTipRadiusMinValue();


  // double GetTipRadiusMaxValue ();
/// <summary>
/// <para>Set the length, and radius of the tip.  They default to 0.35 and 0.1</para>
/// </summary>
  double GetTipRadiusMaxValue();


  // double GetTipRadius ();
/// <summary>
/// <para>Set the length, and radius of the tip.  They default to 0.35 and 0.1</para>
/// </summary>
  double GetTipRadius();


  // void SetTipResolution (int );
/// <summary>
/// <para>Set the resolution of the tip.  The tip behaves the same as a cone. Resoultion 1 gives a single triangle, 2 gives two crossed triangles.</para>
/// </summary>
  void SetTipResolution(int arg0);


  // int GetTipResolutionMinValue ();
/// <summary>
/// <para>Set the resolution of the tip.  The tip behaves the same as a cone. Resoultion 1 gives a single triangle, 2 gives two crossed triangles.</para>
/// </summary>
  int GetTipResolutionMinValue();


  // int GetTipResolutionMaxValue ();
/// <summary>
/// <para>Set the resolution of the tip.  The tip behaves the same as a cone. Resoultion 1 gives a single triangle, 2 gives two crossed triangles.</para>
/// </summary>
  int GetTipResolutionMaxValue();


  // int GetTipResolution ();
/// <summary>
/// <para>Set the resolution of the tip.  The tip behaves the same as a cone. Resoultion 1 gives a single triangle, 2 gives two crossed triangles.</para>
/// </summary>
  int GetTipResolution();


  // void SetShaftRadius (double );
/// <summary>
/// <para>Set the radius of the shaft.  Defaults to 0.03.</para>
/// </summary>
  void SetShaftRadius(double arg0);


  // double GetShaftRadiusMinValue ();
/// <summary>
/// <para>Set the radius of the shaft.  Defaults to 0.03.</para>
/// </summary>
  double GetShaftRadiusMinValue();


  // double GetShaftRadiusMaxValue ();
/// <summary>
/// <para>Set the radius of the shaft.  Defaults to 0.03.</para>
/// </summary>
  double GetShaftRadiusMaxValue();


  // double GetShaftRadius ();
/// <summary>
/// <para>Set the radius of the shaft.  Defaults to 0.03.</para>
/// </summary>
  double GetShaftRadius();


  // void SetShaftResolution (int );
/// <summary>
/// <para>Set the resolution of the shaft.  2 gives a rectangle. I would like to extend the cone to produce a line, but this is not an option now.</para>
/// </summary>
  void SetShaftResolution(int arg0);


  // int GetShaftResolutionMinValue ();
/// <summary>
/// <para>Set the resolution of the shaft.  2 gives a rectangle. I would like to extend the cone to produce a line, but this is not an option now.</para>
/// </summary>
  int GetShaftResolutionMinValue();


  // int GetShaftResolutionMaxValue ();
/// <summary>
/// <para>Set the resolution of the shaft.  2 gives a rectangle. I would like to extend the cone to produce a line, but this is not an option now.</para>
/// </summary>
  int GetShaftResolutionMaxValue();


  // int GetShaftResolution ();
/// <summary>
/// <para>Set the resolution of the shaft.  2 gives a rectangle. I would like to extend the cone to produce a line, but this is not an option now.</para>
/// </summary>
  int GetShaftResolution();


// Did not wrap:  vtkArrowSource ();


// Did not wrap:  ~vtkArrowSource ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkArrowSource (const vtkArrowSource &);


// Did not wrap:  void vtkArrowSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkArrowSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkArrowSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkArrowSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkArrowSource();


};

} // end vtkGraphics
