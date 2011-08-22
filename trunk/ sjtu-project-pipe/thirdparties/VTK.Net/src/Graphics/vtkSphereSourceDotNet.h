#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkSphereSource : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSphereSource *NewInstance ();
  vtkSphereSource^ NewInstance();


  // vtkSphereSource *SafeDownCast (vtkObject* o);
  static vtkSphereSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkSphereSource *New ();


  // void SetRadius (double );
/// <summary>
/// <para>Set radius of sphere. Default is .5.</para>
/// </summary>
  void SetRadius(double arg0);


  // double GetRadiusMinValue ();
/// <summary>
/// <para>Set radius of sphere. Default is .5.</para>
/// </summary>
  double GetRadiusMinValue();


  // double GetRadiusMaxValue ();
/// <summary>
/// <para>Set radius of sphere. Default is .5.</para>
/// </summary>
  double GetRadiusMaxValue();


  // double GetRadius ();
/// <summary>
/// <para>Set radius of sphere. Default is .5.</para>
/// </summary>
  double GetRadius();


  // void SetCenter (double , double , double );
/// <summary>
/// <para>Set the center of the sphere. Default is 0,0,0.</para>
/// </summary>
  void SetCenter(double arg0, double arg1, double arg2);


  // void SetCenter (double  a[3]);
/// <summary>
/// <para>Set the center of the sphere. Default is 0,0,0.</para>
/// </summary>
  void SetCenter(array<double>^ a);


  // double  *GetCenter ();
/// <summary>
/// <para>Set the center of the sphere. Default is 0,0,0.</para>
/// </summary>
  array<double>^ GetCenter();


  // void SetThetaResolution (int );
/// <summary>
/// <para>Set the number of points in the longitude direction (ranging from StartTheta to EndTheta).</para>
/// </summary>
  void SetThetaResolution(int arg0);


  // int GetThetaResolutionMinValue ();
/// <summary>
/// <para>Set the number of points in the longitude direction (ranging from StartTheta to EndTheta).</para>
/// </summary>
  int GetThetaResolutionMinValue();


  // int GetThetaResolutionMaxValue ();
/// <summary>
/// <para>Set the number of points in the longitude direction (ranging from StartTheta to EndTheta).</para>
/// </summary>
  int GetThetaResolutionMaxValue();


  // int GetThetaResolution ();
/// <summary>
/// <para>Set the number of points in the longitude direction (ranging from StartTheta to EndTheta).</para>
/// </summary>
  int GetThetaResolution();


  // void SetPhiResolution (int );
/// <summary>
/// <para>Set the number of points in the latitude direction (ranging from StartPhi to EndPhi).</para>
/// </summary>
  void SetPhiResolution(int arg0);


  // int GetPhiResolutionMinValue ();
/// <summary>
/// <para>Set the number of points in the latitude direction (ranging from StartPhi to EndPhi).</para>
/// </summary>
  int GetPhiResolutionMinValue();


  // int GetPhiResolutionMaxValue ();
/// <summary>
/// <para>Set the number of points in the latitude direction (ranging from StartPhi to EndPhi).</para>
/// </summary>
  int GetPhiResolutionMaxValue();


  // int GetPhiResolution ();
/// <summary>
/// <para>Set the number of points in the latitude direction (ranging from StartPhi to EndPhi).</para>
/// </summary>
  int GetPhiResolution();


  // void SetStartTheta (double );
/// <summary>
/// <para>Set the starting longitude angle. By default StartTheta=0 degrees.</para>
/// </summary>
  void SetStartTheta(double arg0);


  // double GetStartThetaMinValue ();
/// <summary>
/// <para>Set the starting longitude angle. By default StartTheta=0 degrees.</para>
/// </summary>
  double GetStartThetaMinValue();


  // double GetStartThetaMaxValue ();
/// <summary>
/// <para>Set the starting longitude angle. By default StartTheta=0 degrees.</para>
/// </summary>
  double GetStartThetaMaxValue();


  // double GetStartTheta ();
/// <summary>
/// <para>Set the starting longitude angle. By default StartTheta=0 degrees.</para>
/// </summary>
  double GetStartTheta();


  // void SetEndTheta (double );
/// <summary>
/// <para>Set the ending longitude angle. By default EndTheta=360 degrees.</para>
/// </summary>
  void SetEndTheta(double arg0);


  // double GetEndThetaMinValue ();
/// <summary>
/// <para>Set the ending longitude angle. By default EndTheta=360 degrees.</para>
/// </summary>
  double GetEndThetaMinValue();


  // double GetEndThetaMaxValue ();
/// <summary>
/// <para>Set the ending longitude angle. By default EndTheta=360 degrees.</para>
/// </summary>
  double GetEndThetaMaxValue();


  // double GetEndTheta ();
/// <summary>
/// <para>Set the ending longitude angle. By default EndTheta=360 degrees.</para>
/// </summary>
  double GetEndTheta();


  // void SetStartPhi (double );
/// <summary>
/// <para>Set the starting latitude angle (0 is at north pole). By default StartPhi=0 degrees.</para>
/// </summary>
  void SetStartPhi(double arg0);


  // double GetStartPhiMinValue ();
/// <summary>
/// <para>Set the starting latitude angle (0 is at north pole). By default StartPhi=0 degrees.</para>
/// </summary>
  double GetStartPhiMinValue();


  // double GetStartPhiMaxValue ();
/// <summary>
/// <para>Set the starting latitude angle (0 is at north pole). By default StartPhi=0 degrees.</para>
/// </summary>
  double GetStartPhiMaxValue();


  // double GetStartPhi ();
/// <summary>
/// <para>Set the starting latitude angle (0 is at north pole). By default StartPhi=0 degrees.</para>
/// </summary>
  double GetStartPhi();


  // void SetEndPhi (double );
/// <summary>
/// <para>Set the ending latitude angle. By default EndPhi=180 degrees.</para>
/// </summary>
  void SetEndPhi(double arg0);


  // double GetEndPhiMinValue ();
/// <summary>
/// <para>Set the ending latitude angle. By default EndPhi=180 degrees.</para>
/// </summary>
  double GetEndPhiMinValue();


  // double GetEndPhiMaxValue ();
/// <summary>
/// <para>Set the ending latitude angle. By default EndPhi=180 degrees.</para>
/// </summary>
  double GetEndPhiMaxValue();


  // double GetEndPhi ();
/// <summary>
/// <para>Set the ending latitude angle. By default EndPhi=180 degrees.</para>
/// </summary>
  double GetEndPhi();


  // void SetLatLongTessellation (int );
/// <summary>
/// <para>Cause the sphere to be tessellated with edges along the latitude and longitude lines. If off, triangles are generated at non-polar regions, which results in edges that are not parallel to latitude and longitude lines. If on, quadrilaterals are generated everywhere except at the poles. This can be useful for generating a wireframe sphere with natural latitude and longitude lines.</para>
/// </summary>
  void SetLatLongTessellation(int arg0);


  // int GetLatLongTessellation ();
/// <summary>
/// <para>Cause the sphere to be tessellated with edges along the latitude and longitude lines. If off, triangles are generated at non-polar regions, which results in edges that are not parallel to latitude and longitude lines. If on, quadrilaterals are generated everywhere except at the poles. This can be useful for generating a wireframe sphere with natural latitude and longitude lines.</para>
/// </summary>
  int GetLatLongTessellation();


  // void LatLongTessellationOn ();
/// <summary>
/// <para>Cause the sphere to be tessellated with edges along the latitude and longitude lines. If off, triangles are generated at non-polar regions, which results in edges that are not parallel to latitude and longitude lines. If on, quadrilaterals are generated everywhere except at the poles. This can be useful for generating a wireframe sphere with natural latitude and longitude lines.</para>
/// </summary>
  void LatLongTessellationOn();


  // void LatLongTessellationOff ();
/// <summary>
/// <para>Cause the sphere to be tessellated with edges along the latitude and longitude lines. If off, triangles are generated at non-polar regions, which results in edges that are not parallel to latitude and longitude lines. If on, quadrilaterals are generated everywhere except at the poles. This can be useful for generating a wireframe sphere with natural latitude and longitude lines.</para>
/// </summary>
  void LatLongTessellationOff();


// Did not wrap:  vtkSphereSource (int res);


// Did not wrap:  ~vtkSphereSource ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkSphereSource (const vtkSphereSource &);


// Did not wrap:  void vtkSphereSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSphereSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSphereSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSphereSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSphereSource();


};

} // end vtkGraphics
