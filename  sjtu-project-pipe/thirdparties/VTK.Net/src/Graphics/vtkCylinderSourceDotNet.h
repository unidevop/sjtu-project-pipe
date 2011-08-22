#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkCylinderSource : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkCylinderSource *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCylinderSource *NewInstance ();
  vtkCylinderSource^ NewInstance();


  // vtkCylinderSource *SafeDownCast (vtkObject* o);
  static vtkCylinderSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetHeight (double );
/// <summary>
/// <para>Set the height of the cylinder.</para>
/// </summary>
  void SetHeight(double arg0);


  // double GetHeightMinValue ();
/// <summary>
/// <para>Set the height of the cylinder.</para>
/// </summary>
  double GetHeightMinValue();


  // double GetHeightMaxValue ();
/// <summary>
/// <para>Set the height of the cylinder.</para>
/// </summary>
  double GetHeightMaxValue();


  // double GetHeight ();
/// <summary>
/// <para>Set the height of the cylinder.</para>
/// </summary>
  double GetHeight();


  // void SetRadius (double );
/// <summary>
/// <para>Set the radius of the cylinder.</para>
/// </summary>
  void SetRadius(double arg0);


  // double GetRadiusMinValue ();
/// <summary>
/// <para>Set the radius of the cylinder.</para>
/// </summary>
  double GetRadiusMinValue();


  // double GetRadiusMaxValue ();
/// <summary>
/// <para>Set the radius of the cylinder.</para>
/// </summary>
  double GetRadiusMaxValue();


  // double GetRadius ();
/// <summary>
/// <para>Set the radius of the cylinder.</para>
/// </summary>
  double GetRadius();


  // void SetCenter (double , double , double );
/// <summary>
/// <para>Set/Get cylinder center</para>
/// </summary>
  void SetCenter(double arg0, double arg1, double arg2);


  // void SetCenter (double  a[3]);
/// <summary>
/// <para>Set/Get cylinder center</para>
/// </summary>
  void SetCenter(array<double>^ a);


  // double  *GetCenter ();
/// <summary>
/// <para>Set/Get cylinder center</para>
/// </summary>
  array<double>^ GetCenter();


  // void SetResolution (int );
/// <summary>
/// <para>Set the number of facets used to define cylinder.</para>
/// </summary>
  void SetResolution(int arg0);


  // int GetResolutionMinValue ();
/// <summary>
/// <para>Set the number of facets used to define cylinder.</para>
/// </summary>
  int GetResolutionMinValue();


  // int GetResolutionMaxValue ();
/// <summary>
/// <para>Set the number of facets used to define cylinder.</para>
/// </summary>
  int GetResolutionMaxValue();


  // int GetResolution ();
/// <summary>
/// <para>Set the number of facets used to define cylinder.</para>
/// </summary>
  int GetResolution();


  // void SetCapping (int );
/// <summary>
/// <para>Turn on/off whether to cap cylinder with polygons.</para>
/// </summary>
  void SetCapping(int arg0);


  // int GetCapping ();
/// <summary>
/// <para>Turn on/off whether to cap cylinder with polygons.</para>
/// </summary>
  int GetCapping();


  // void CappingOn ();
/// <summary>
/// <para>Turn on/off whether to cap cylinder with polygons.</para>
/// </summary>
  void CappingOn();


  // void CappingOff ();
/// <summary>
/// <para>Turn on/off whether to cap cylinder with polygons.</para>
/// </summary>
  void CappingOff();


// Did not wrap:  vtkCylinderSource (int res);


// Did not wrap:  ~vtkCylinderSource ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkCylinderSource (const vtkCylinderSource &);


// Did not wrap:  void vtkCylinderSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCylinderSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCylinderSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCylinderSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCylinderSource();


};

} // end vtkGraphics
