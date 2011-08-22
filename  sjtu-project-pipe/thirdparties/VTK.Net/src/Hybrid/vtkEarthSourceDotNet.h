#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkEarthSource : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkEarthSource *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkEarthSource *NewInstance ();
  vtkEarthSource^ NewInstance();


  // vtkEarthSource *SafeDownCast (vtkObject* o);
  static vtkEarthSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetRadius (double );
/// <summary>
/// <para>Set radius of earth.</para>
/// </summary>
  void SetRadius(double arg0);


  // double GetRadiusMinValue ();
/// <summary>
/// <para>Set radius of earth.</para>
/// </summary>
  double GetRadiusMinValue();


  // double GetRadiusMaxValue ();
/// <summary>
/// <para>Set radius of earth.</para>
/// </summary>
  double GetRadiusMaxValue();


  // double GetRadius ();
/// <summary>
/// <para>Set radius of earth.</para>
/// </summary>
  double GetRadius();


  // void SetOnRatio (int );
/// <summary>
/// <para>Turn on every nth entity. This controls how much detail the model will have. The maximum ratio is sixteen. (The smaller OnRatio, the more detail there is.)</para>
/// </summary>
  void SetOnRatio(int arg0);


  // int GetOnRatioMinValue ();
/// <summary>
/// <para>Turn on every nth entity. This controls how much detail the model will have. The maximum ratio is sixteen. (The smaller OnRatio, the more detail there is.)</para>
/// </summary>
  int GetOnRatioMinValue();


  // int GetOnRatioMaxValue ();
/// <summary>
/// <para>Turn on every nth entity. This controls how much detail the model will have. The maximum ratio is sixteen. (The smaller OnRatio, the more detail there is.)</para>
/// </summary>
  int GetOnRatioMaxValue();


  // int GetOnRatio ();
/// <summary>
/// <para>Turn on every nth entity. This controls how much detail the model will have. The maximum ratio is sixteen. (The smaller OnRatio, the more detail there is.)</para>
/// </summary>
  int GetOnRatio();


  // void SetOutline (int );
/// <summary>
/// <para>Turn on/off drawing continents as filled polygons or as wireframe outlines. Warning: some graphics systems will have trouble with the very large, concave  filled polygons. Recommend you use OutlienOn (i.e., disable filled polygons)  for now.</para>
/// </summary>
  void SetOutline(int arg0);


  // int GetOutline ();
/// <summary>
/// <para>Turn on/off drawing continents as filled polygons or as wireframe outlines. Warning: some graphics systems will have trouble with the very large, concave  filled polygons. Recommend you use OutlienOn (i.e., disable filled polygons)  for now.</para>
/// </summary>
  int GetOutline();


  // void OutlineOn ();
/// <summary>
/// <para>Turn on/off drawing continents as filled polygons or as wireframe outlines. Warning: some graphics systems will have trouble with the very large, concave  filled polygons. Recommend you use OutlienOn (i.e., disable filled polygons)  for now.</para>
/// </summary>
  void OutlineOn();


  // void OutlineOff ();
/// <summary>
/// <para>Turn on/off drawing continents as filled polygons or as wireframe outlines. Warning: some graphics systems will have trouble with the very large, concave  filled polygons. Recommend you use OutlienOn (i.e., disable filled polygons)  for now.</para>
/// </summary>
  void OutlineOff();


// Did not wrap:  vtkEarthSource ();


// Did not wrap:  ~vtkEarthSource ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkEarthSource (const vtkEarthSource &);


// Did not wrap:  void vtkEarthSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkEarthSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkEarthSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkEarthSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkEarthSource();


};

} // end vtkHybrid
