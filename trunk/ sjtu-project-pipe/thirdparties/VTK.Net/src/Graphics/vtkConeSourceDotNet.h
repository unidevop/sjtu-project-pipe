#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkConeSource : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkConeSource *NewInstance ();
  vtkConeSource^ NewInstance();


  // vtkConeSource *SafeDownCast (vtkObject* o);
  static vtkConeSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkConeSource *New ();


  // void SetHeight (double );
/// <summary>
/// <para>Set the height of the cone. This is the height along the cone in its specified direction.</para>
/// </summary>
  void SetHeight(double arg0);


  // double GetHeightMinValue ();
/// <summary>
/// <para>Set the height of the cone. This is the height along the cone in its specified direction.</para>
/// </summary>
  double GetHeightMinValue();


  // double GetHeightMaxValue ();
/// <summary>
/// <para>Set the height of the cone. This is the height along the cone in its specified direction.</para>
/// </summary>
  double GetHeightMaxValue();


  // double GetHeight ();
/// <summary>
/// <para>Set the height of the cone. This is the height along the cone in its specified direction.</para>
/// </summary>
  double GetHeight();


  // void SetRadius (double );
/// <summary>
/// <para>Set the base radius of the cone.</para>
/// </summary>
  void SetRadius(double arg0);


  // double GetRadiusMinValue ();
/// <summary>
/// <para>Set the base radius of the cone.</para>
/// </summary>
  double GetRadiusMinValue();


  // double GetRadiusMaxValue ();
/// <summary>
/// <para>Set the base radius of the cone.</para>
/// </summary>
  double GetRadiusMaxValue();


  // double GetRadius ();
/// <summary>
/// <para>Set the base radius of the cone.</para>
/// </summary>
  double GetRadius();


  // void SetResolution (int );
/// <summary>
/// <para>Set the number of facets used to represent the cone.</para>
/// </summary>
  void SetResolution(int arg0);


  // int GetResolutionMinValue ();
/// <summary>
/// <para>Set the number of facets used to represent the cone.</para>
/// </summary>
  int GetResolutionMinValue();


  // int GetResolutionMaxValue ();
/// <summary>
/// <para>Set the number of facets used to represent the cone.</para>
/// </summary>
  int GetResolutionMaxValue();


  // int GetResolution ();
/// <summary>
/// <para>Set the number of facets used to represent the cone.</para>
/// </summary>
  int GetResolution();


  // void SetCenter (double , double , double );
/// <summary>
/// <para>Set the center of the cone. The default is 0,0,0.</para>
/// </summary>
  void SetCenter(double arg0, double arg1, double arg2);


  // void SetCenter (double  a[3]);
/// <summary>
/// <para>Set the center of the cone. The default is 0,0,0.</para>
/// </summary>
  void SetCenter(array<double>^ a);


  // double  *GetCenter ();
/// <summary>
/// <para>Set the center of the cone. The default is 0,0,0.</para>
/// </summary>
  array<double>^ GetCenter();


  // void SetDirection (double , double , double );
/// <summary>
/// <para>Set the orientation vector of the cone. The vector does not have to be normalized. The cone will point in the Direction specified. The default is (1,0,0).</para>
/// </summary>
  void SetDirection(double arg0, double arg1, double arg2);


  // void SetDirection (double  a[3]);
/// <summary>
/// <para>Set the orientation vector of the cone. The vector does not have to be normalized. The cone will point in the Direction specified. The default is (1,0,0).</para>
/// </summary>
  void SetDirection(array<double>^ a);


  // double  *GetDirection ();
/// <summary>
/// <para>Set the orientation vector of the cone. The vector does not have to be normalized. The cone will point in the Direction specified. The default is (1,0,0).</para>
/// </summary>
  array<double>^ GetDirection();


  // void SetAngle (double angle);
/// <summary>
/// <para>Set the angle of the cone. As a side effect, the angle plus height sets  the base radius of the cone.</para>
/// </summary>
  void SetAngle(double angle);


  // double GetAngle ();
/// <summary>
/// <para>Set the angle of the cone. As a side effect, the angle plus height sets  the base radius of the cone.</para>
/// </summary>
  double GetAngle();


  // void SetCapping (int );
/// <summary>
/// <para>Turn on/off whether to cap the base of the cone with a polygon.</para>
/// </summary>
  void SetCapping(int arg0);


  // int GetCapping ();
/// <summary>
/// <para>Turn on/off whether to cap the base of the cone with a polygon.</para>
/// </summary>
  int GetCapping();


  // void CappingOn ();
/// <summary>
/// <para>Turn on/off whether to cap the base of the cone with a polygon.</para>
/// </summary>
  void CappingOn();


  // void CappingOff ();
/// <summary>
/// <para>Turn on/off whether to cap the base of the cone with a polygon.</para>
/// </summary>
  void CappingOff();


// Did not wrap:  vtkConeSource (int res);


// Did not wrap:  ~vtkConeSource ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkConeSource (const vtkConeSource &);


// Did not wrap:  void vtkConeSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkConeSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkConeSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkConeSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkConeSource();


};

} // end vtkGraphics
