#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkSuperquadricSource : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkSuperquadricSource *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSuperquadricSource *NewInstance ();
  vtkSuperquadricSource^ NewInstance();


  // vtkSuperquadricSource *SafeDownCast (vtkObject* o);
  static vtkSuperquadricSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetCenter (double , double , double );
/// <summary>
/// <para>Set the center of the superquadric. Default is 0,0,0.</para>
/// </summary>
  void SetCenter(double arg0, double arg1, double arg2);


  // void SetCenter (double  a[3]);
/// <summary>
/// <para>Set the center of the superquadric. Default is 0,0,0.</para>
/// </summary>
  void SetCenter(array<double>^ a);


  // double  *GetCenter ();
/// <summary>
/// <para>Set the center of the superquadric. Default is 0,0,0.</para>
/// </summary>
  array<double>^ GetCenter();


  // void SetScale (double , double , double );
/// <summary>
/// <para>Set the scale factors of the superquadric. Default is 1,1,1.</para>
/// </summary>
  void SetScale(double arg0, double arg1, double arg2);


  // void SetScale (double  a[3]);
/// <summary>
/// <para>Set the scale factors of the superquadric. Default is 1,1,1.</para>
/// </summary>
  void SetScale(array<double>^ a);


  // double  *GetScale ();
/// <summary>
/// <para>Set the scale factors of the superquadric. Default is 1,1,1.</para>
/// </summary>
  array<double>^ GetScale();


  // int GetThetaResolution ();
/// <summary>
/// <para>Set the number of points in the longitude direction.</para>
/// </summary>
  int GetThetaResolution();


  // void SetThetaResolution (int i);
/// <summary>
/// <para>Set the number of points in the longitude direction.</para>
/// </summary>
  void SetThetaResolution(int i);


  // int GetPhiResolution ();
/// <summary>
/// <para>Set the number of points in the latitude direction.</para>
/// </summary>
  int GetPhiResolution();


  // void SetPhiResolution (int i);
/// <summary>
/// <para>Set the number of points in the latitude direction.</para>
/// </summary>
  void SetPhiResolution(int i);


  // double GetThickness ();
/// <summary>
/// <para>Set/Get Superquadric ring thickness (toroids only). Changing thickness maintains the outside diameter of the toroid.</para>
/// </summary>
  double GetThickness();


  // void SetThickness (double );
/// <summary>
/// <para>Set/Get Superquadric ring thickness (toroids only). Changing thickness maintains the outside diameter of the toroid.</para>
/// </summary>
  void SetThickness(double arg0);


  // double GetThicknessMinValue ();
/// <summary>
/// <para>Set/Get Superquadric ring thickness (toroids only). Changing thickness maintains the outside diameter of the toroid.</para>
/// </summary>
  double GetThicknessMinValue();


  // double GetThicknessMaxValue ();
/// <summary>
/// <para>Set/Get Superquadric ring thickness (toroids only). Changing thickness maintains the outside diameter of the toroid.</para>
/// </summary>
  double GetThicknessMaxValue();


  // double GetPhiRoundness ();
/// <summary>
/// <para>Set/Get Superquadric north/south roundness.  Values range from 0 (rectangular) to 1 (circular) to higher orders.</para>
/// </summary>
  double GetPhiRoundness();


  // void SetPhiRoundness (double e);
/// <summary>
/// <para>Set/Get Superquadric north/south roundness.  Values range from 0 (rectangular) to 1 (circular) to higher orders.</para>
/// </summary>
  void SetPhiRoundness(double e);


  // double GetThetaRoundness ();
/// <summary>
/// <para>Set/Get Superquadric east/west roundness. Values range from 0 (rectangular) to 1 (circular) to higher orders.</para>
/// </summary>
  double GetThetaRoundness();


  // void SetThetaRoundness (double e);
/// <summary>
/// <para>Set/Get Superquadric east/west roundness. Values range from 0 (rectangular) to 1 (circular) to higher orders.</para>
/// </summary>
  void SetThetaRoundness(double e);


  // void SetSize (double );
/// <summary>
/// <para>Set/Get Superquadric isotropic size.</para>
/// </summary>
  void SetSize(double arg0);


  // double GetSize ();
/// <summary>
/// <para>Set/Get Superquadric isotropic size.</para>
/// </summary>
  double GetSize();


  // void ToroidalOn ();
/// <summary>
/// <para>Set/Get whether or not the superquadric is toroidal (1) or ellipsoidal (0).</para>
/// </summary>
  void ToroidalOn();


  // void ToroidalOff ();
/// <summary>
/// <para>Set/Get whether or not the superquadric is toroidal (1) or ellipsoidal (0).</para>
/// </summary>
  void ToroidalOff();


  // int GetToroidal ();
/// <summary>
/// <para>Set/Get whether or not the superquadric is toroidal (1) or ellipsoidal (0).</para>
/// </summary>
  int GetToroidal();


  // void SetToroidal (int );
/// <summary>
/// <para>Set/Get whether or not the superquadric is toroidal (1) or ellipsoidal (0).</para>
/// </summary>
  void SetToroidal(int arg0);


// Did not wrap:  vtkSuperquadricSource (int res);


// Did not wrap:  ~vtkSuperquadricSource ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkSuperquadricSource (const vtkSuperquadricSource &);


// Did not wrap:  void vtkSuperquadricSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSuperquadricSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSuperquadricSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSuperquadricSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSuperquadricSource();


};

} // end vtkGraphics
