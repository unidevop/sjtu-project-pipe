#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkLinearExtrusionFilter : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkLinearExtrusionFilter *NewInstance ();
  vtkLinearExtrusionFilter^ NewInstance();


  // vtkLinearExtrusionFilter *SafeDownCast (vtkObject* o);
  static vtkLinearExtrusionFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkLinearExtrusionFilter *New ();


  // void SetExtrusionType (int );
/// <summary>
/// <para>Set/Get the type of extrusion.</para>
/// </summary>
  void SetExtrusionType(int arg0);


  // int GetExtrusionTypeMinValue ();
/// <summary>
/// <para>Set/Get the type of extrusion.</para>
/// </summary>
  int GetExtrusionTypeMinValue();


  // int GetExtrusionTypeMaxValue ();
/// <summary>
/// <para>Set/Get the type of extrusion.</para>
/// </summary>
  int GetExtrusionTypeMaxValue();


  // int GetExtrusionType ();
/// <summary>
/// <para>Set/Get the type of extrusion.</para>
/// </summary>
  int GetExtrusionType();


  // void SetExtrusionTypeToVectorExtrusion ();this SetExtrusionType VTK_VECTOR_EXTRUSION 
/// <summary>
/// <para>Set/Get the type of extrusion.</para>
/// </summary>
  void SetExtrusionTypeToVectorExtrusion();


  // void SetExtrusionTypeToNormalExtrusion ();this SetExtrusionType VTK_NORMAL_EXTRUSION 
/// <summary>
/// <para>Set/Get the type of extrusion.</para>
/// </summary>
  void SetExtrusionTypeToNormalExtrusion();


  // void SetExtrusionTypeToPointExtrusion ();this SetExtrusionType VTK_POINT_EXTRUSION 
/// <summary>
/// <para>Set/Get the type of extrusion.</para>
/// </summary>
  void SetExtrusionTypeToPointExtrusion();


  // void SetCapping (int );
/// <summary>
/// <para>Turn on/off the capping of the skirt.</para>
/// </summary>
  void SetCapping(int arg0);


  // int GetCapping ();
/// <summary>
/// <para>Turn on/off the capping of the skirt.</para>
/// </summary>
  int GetCapping();


  // void CappingOn ();
/// <summary>
/// <para>Turn on/off the capping of the skirt.</para>
/// </summary>
  void CappingOn();


  // void CappingOff ();
/// <summary>
/// <para>Turn on/off the capping of the skirt.</para>
/// </summary>
  void CappingOff();


  // void SetScaleFactor (double );
/// <summary>
/// <para>Set/Get extrusion scale factor,</para>
/// </summary>
  void SetScaleFactor(double arg0);


  // double GetScaleFactor ();
/// <summary>
/// <para>Set/Get extrusion scale factor,</para>
/// </summary>
  double GetScaleFactor();


  // void SetVector (double , double , double );
/// <summary>
/// <para>Set/Get extrusion vector. Only needs to be set if VectorExtrusion is turned on.</para>
/// </summary>
  void SetVector(double arg0, double arg1, double arg2);


  // void SetVector (double  a[3]);
/// <summary>
/// <para>Set/Get extrusion vector. Only needs to be set if VectorExtrusion is turned on.</para>
/// </summary>
  void SetVector(array<double>^ a);


  // double  *GetVector ();
/// <summary>
/// <para>Set/Get extrusion vector. Only needs to be set if VectorExtrusion is turned on.</para>
/// </summary>
  array<double>^ GetVector();


  // void SetExtrusionPoint (double , double , double );
/// <summary>
/// <para>Set/Get extrusion point. Only needs to be set if PointExtrusion is turned on. This is the point towards which extrusion occurs.</para>
/// </summary>
  void SetExtrusionPoint(double arg0, double arg1, double arg2);


  // void SetExtrusionPoint (double  a[3]);
/// <summary>
/// <para>Set/Get extrusion point. Only needs to be set if PointExtrusion is turned on. This is the point towards which extrusion occurs.</para>
/// </summary>
  void SetExtrusionPoint(array<double>^ a);


  // double  *GetExtrusionPoint ();
/// <summary>
/// <para>Set/Get extrusion point. Only needs to be set if PointExtrusion is turned on. This is the point towards which extrusion occurs.</para>
/// </summary>
  array<double>^ GetExtrusionPoint();


// Did not wrap:  vtkLinearExtrusionFilter ();


// Did not wrap:  ~vtkLinearExtrusionFilter ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkLinearExtrusionFilter (const vtkLinearExtrusionFilter &);


// Did not wrap:  void vtkLinearExtrusionFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkLinearExtrusionFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkLinearExtrusionFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkLinearExtrusionFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkLinearExtrusionFilter();


};

} // end vtkGraphics
