#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkTexturedSphereSource : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTexturedSphereSource *NewInstance ();
  vtkTexturedSphereSource^ NewInstance();


  // vtkTexturedSphereSource *SafeDownCast (vtkObject* o);
  static vtkTexturedSphereSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkTexturedSphereSource *New ();


  // void SetRadius (double );
/// <summary>
/// <para>Set radius of sphere.</para>
/// </summary>
  void SetRadius(double arg0);


  // double GetRadiusMinValue ();
/// <summary>
/// <para>Set radius of sphere.</para>
/// </summary>
  double GetRadiusMinValue();


  // double GetRadiusMaxValue ();
/// <summary>
/// <para>Set radius of sphere.</para>
/// </summary>
  double GetRadiusMaxValue();


  // double GetRadius ();
/// <summary>
/// <para>Set radius of sphere.</para>
/// </summary>
  double GetRadius();


  // void SetThetaResolution (int );
/// <summary>
/// <para>Set the number of points in the longitude direction.</para>
/// </summary>
  void SetThetaResolution(int arg0);


  // int GetThetaResolutionMinValue ();
/// <summary>
/// <para>Set the number of points in the longitude direction.</para>
/// </summary>
  int GetThetaResolutionMinValue();


  // int GetThetaResolutionMaxValue ();
/// <summary>
/// <para>Set the number of points in the longitude direction.</para>
/// </summary>
  int GetThetaResolutionMaxValue();


  // int GetThetaResolution ();
/// <summary>
/// <para>Set the number of points in the longitude direction.</para>
/// </summary>
  int GetThetaResolution();


  // void SetPhiResolution (int );
/// <summary>
/// <para>Set the number of points in the latitude direction.</para>
/// </summary>
  void SetPhiResolution(int arg0);


  // int GetPhiResolutionMinValue ();
/// <summary>
/// <para>Set the number of points in the latitude direction.</para>
/// </summary>
  int GetPhiResolutionMinValue();


  // int GetPhiResolutionMaxValue ();
/// <summary>
/// <para>Set the number of points in the latitude direction.</para>
/// </summary>
  int GetPhiResolutionMaxValue();


  // int GetPhiResolution ();
/// <summary>
/// <para>Set the number of points in the latitude direction.</para>
/// </summary>
  int GetPhiResolution();


  // void SetTheta (double );
/// <summary>
/// <para>Set the maximum longitude angle.</para>
/// </summary>
  void SetTheta(double arg0);


  // double GetThetaMinValue ();
/// <summary>
/// <para>Set the maximum longitude angle.</para>
/// </summary>
  double GetThetaMinValue();


  // double GetThetaMaxValue ();
/// <summary>
/// <para>Set the maximum longitude angle.</para>
/// </summary>
  double GetThetaMaxValue();


  // double GetTheta ();
/// <summary>
/// <para>Set the maximum longitude angle.</para>
/// </summary>
  double GetTheta();


  // void SetPhi (double );
/// <summary>
/// <para>Set the maximum latitude angle (0 is at north pole).</para>
/// </summary>
  void SetPhi(double arg0);


  // double GetPhiMinValue ();
/// <summary>
/// <para>Set the maximum latitude angle (0 is at north pole).</para>
/// </summary>
  double GetPhiMinValue();


  // double GetPhiMaxValue ();
/// <summary>
/// <para>Set the maximum latitude angle (0 is at north pole).</para>
/// </summary>
  double GetPhiMaxValue();


  // double GetPhi ();
/// <summary>
/// <para>Set the maximum latitude angle (0 is at north pole).</para>
/// </summary>
  double GetPhi();


// Did not wrap:  vtkTexturedSphereSource (int res);


// Did not wrap:  ~vtkTexturedSphereSource ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkTexturedSphereSource (const vtkTexturedSphereSource &);


// Did not wrap:  void vtkTexturedSphereSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTexturedSphereSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTexturedSphereSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTexturedSphereSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTexturedSphereSource();


};

} // end vtkGraphics
