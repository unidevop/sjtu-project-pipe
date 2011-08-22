#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkTextureMapToPlane : public vtkDataSetAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTextureMapToPlane *NewInstance ();
  vtkTextureMapToPlane^ NewInstance();


  // vtkTextureMapToPlane *SafeDownCast (vtkObject* o);
  static vtkTextureMapToPlane^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkTextureMapToPlane *New ();


  // void SetOrigin (double , double , double );
/// <summary>
/// <para>Specify a point defining the origin of the plane. Used in conjunction with the Point1 and Point2 ivars to specify a map plane.</para>
/// </summary>
  void SetOrigin(double arg0, double arg1, double arg2);


  // void SetOrigin (double  a[3]);
/// <summary>
/// <para>Specify a point defining the origin of the plane. Used in conjunction with the Point1 and Point2 ivars to specify a map plane.</para>
/// </summary>
  void SetOrigin(array<double>^ a);


  // double  *GetOrigin ();
/// <summary>
/// <para>Specify a point defining the origin of the plane. Used in conjunction with the Point1 and Point2 ivars to specify a map plane.</para>
/// </summary>
  array<double>^ GetOrigin();


  // void SetPoint1 (double , double , double );
/// <summary>
/// <para>Specify a point defining the first axis of the plane.</para>
/// </summary>
  void SetPoint1(double arg0, double arg1, double arg2);


  // void SetPoint1 (double  a[3]);
/// <summary>
/// <para>Specify a point defining the first axis of the plane.</para>
/// </summary>
  void SetPoint1(array<double>^ a);


  // double  *GetPoint1 ();
/// <summary>
/// <para>Specify a point defining the first axis of the plane.</para>
/// </summary>
  array<double>^ GetPoint1();


  // void SetPoint2 (double , double , double );
/// <summary>
/// <para>Specify a point defining the second axis of the plane.</para>
/// </summary>
  void SetPoint2(double arg0, double arg1, double arg2);


  // void SetPoint2 (double  a[3]);
/// <summary>
/// <para>Specify a point defining the second axis of the plane.</para>
/// </summary>
  void SetPoint2(array<double>^ a);


  // double  *GetPoint2 ();
/// <summary>
/// <para>Specify a point defining the second axis of the plane.</para>
/// </summary>
  array<double>^ GetPoint2();


  // void SetNormal (double , double , double );
/// <summary>
/// <para>Specify plane normal. An alternative way to specify a map plane. Using this method, the object will scale the resulting texture coordinate between the SRange and TRange specified.</para>
/// </summary>
  void SetNormal(double arg0, double arg1, double arg2);


  // void SetNormal (double  a[3]);
/// <summary>
/// <para>Specify plane normal. An alternative way to specify a map plane. Using this method, the object will scale the resulting texture coordinate between the SRange and TRange specified.</para>
/// </summary>
  void SetNormal(array<double>^ a);


  // double  *GetNormal ();
/// <summary>
/// <para>Specify plane normal. An alternative way to specify a map plane. Using this method, the object will scale the resulting texture coordinate between the SRange and TRange specified.</para>
/// </summary>
  array<double>^ GetNormal();


  // void SetSRange (double , double );
/// <summary>
/// <para>Specify s-coordinate range for texture s-t coordinate pair.</para>
/// </summary>
  void SetSRange(double arg0, double arg1);


  // void SetSRange (double  a[2]);
/// <summary>
/// <para>Specify s-coordinate range for texture s-t coordinate pair.</para>
/// </summary>
  void SetSRange(array<double>^ a);


  // double  *GetSRange ();
/// <summary>
/// <para>Specify s-coordinate range for texture s-t coordinate pair.</para>
/// </summary>
  array<double>^ GetSRange();


  // void SetTRange (double , double );
/// <summary>
/// <para>Specify t-coordinate range for texture s-t coordinate pair.</para>
/// </summary>
  void SetTRange(double arg0, double arg1);


  // void SetTRange (double  a[2]);
/// <summary>
/// <para>Specify t-coordinate range for texture s-t coordinate pair.</para>
/// </summary>
  void SetTRange(array<double>^ a);


  // double  *GetTRange ();
/// <summary>
/// <para>Specify t-coordinate range for texture s-t coordinate pair.</para>
/// </summary>
  array<double>^ GetTRange();


  // void SetAutomaticPlaneGeneration (int );
/// <summary>
/// <para>Turn on/off automatic plane generation.</para>
/// </summary>
  void SetAutomaticPlaneGeneration(int arg0);


  // int GetAutomaticPlaneGeneration ();
/// <summary>
/// <para>Turn on/off automatic plane generation.</para>
/// </summary>
  int GetAutomaticPlaneGeneration();


  // void AutomaticPlaneGenerationOn ();
/// <summary>
/// <para>Turn on/off automatic plane generation.</para>
/// </summary>
  void AutomaticPlaneGenerationOn();


  // void AutomaticPlaneGenerationOff ();
/// <summary>
/// <para>Turn on/off automatic plane generation.</para>
/// </summary>
  void AutomaticPlaneGenerationOff();


// Did not wrap:  vtkTextureMapToPlane ();


// Did not wrap:  ~vtkTextureMapToPlane ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void ComputeNormal (vtkDataSet *output);


// Did not wrap:  vtkTextureMapToPlane (const vtkTextureMapToPlane &);


// Did not wrap:  void vtkTextureMapToPlane 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTextureMapToPlane(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTextureMapToPlane(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTextureMapToPlane();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTextureMapToPlane();


};

} // end vtkGraphics
