#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkRotationalExtrusionFilter : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRotationalExtrusionFilter *NewInstance ();
  vtkRotationalExtrusionFilter^ NewInstance();


  // vtkRotationalExtrusionFilter *SafeDownCast (vtkObject* o);
  static vtkRotationalExtrusionFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkRotationalExtrusionFilter *New ();


  // void SetResolution (int );
/// <summary>
/// <para>Set/Get resolution of sweep operation. Resolution controls the number of intermediate node points.</para>
/// </summary>
  void SetResolution(int arg0);


  // int GetResolutionMinValue ();
/// <summary>
/// <para>Set/Get resolution of sweep operation. Resolution controls the number of intermediate node points.</para>
/// </summary>
  int GetResolutionMinValue();


  // int GetResolutionMaxValue ();
/// <summary>
/// <para>Set/Get resolution of sweep operation. Resolution controls the number of intermediate node points.</para>
/// </summary>
  int GetResolutionMaxValue();


  // int GetResolution ();
/// <summary>
/// <para>Set/Get resolution of sweep operation. Resolution controls the number of intermediate node points.</para>
/// </summary>
  int GetResolution();


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


  // void SetAngle (double );
/// <summary>
/// <para>Set/Get angle of rotation.</para>
/// </summary>
  void SetAngle(double arg0);


  // double GetAngle ();
/// <summary>
/// <para>Set/Get angle of rotation.</para>
/// </summary>
  double GetAngle();


  // void SetTranslation (double );
/// <summary>
/// <para>Set/Get total amount of translation along the z-axis.</para>
/// </summary>
  void SetTranslation(double arg0);


  // double GetTranslation ();
/// <summary>
/// <para>Set/Get total amount of translation along the z-axis.</para>
/// </summary>
  double GetTranslation();


  // void SetDeltaRadius (double );
/// <summary>
/// <para>Set/Get change in radius during sweep process.</para>
/// </summary>
  void SetDeltaRadius(double arg0);


  // double GetDeltaRadius ();
/// <summary>
/// <para>Set/Get change in radius during sweep process.</para>
/// </summary>
  double GetDeltaRadius();


// Did not wrap:  vtkRotationalExtrusionFilter ();


// Did not wrap:  ~vtkRotationalExtrusionFilter ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkRotationalExtrusionFilter (const vtkRotationalExtrusionFilter &);


// Did not wrap:  void vtkRotationalExtrusionFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRotationalExtrusionFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRotationalExtrusionFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRotationalExtrusionFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRotationalExtrusionFilter();


};

} // end vtkGraphics
