#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkSubPixelPositionEdgels : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkSubPixelPositionEdgels *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSubPixelPositionEdgels *NewInstance ();
  vtkSubPixelPositionEdgels^ NewInstance();


  // vtkSubPixelPositionEdgels *SafeDownCast (vtkObject* o);
  static vtkSubPixelPositionEdgels^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetGradMaps (vtkStructuredPoints *gm);
/// <summary>
/// <para>Set/Get the gradient data for doing the position adjustments.</para>
/// </summary>
  void SetGradMaps(vtkStructuredPoints^ gm);


  // vtkStructuredPoints *GetGradMaps ();
/// <summary>
/// <para>Set/Get the gradient data for doing the position adjustments.</para>
/// </summary>
  vtkStructuredPoints^ GetGradMaps();


  // void SetTargetFlag (int );
/// <summary>
/// <para>These methods can make the positioning look for a target scalar value instead of looking for a maximum.</para>
/// </summary>
  void SetTargetFlag(int arg0);


  // int GetTargetFlag ();
/// <summary>
/// <para>These methods can make the positioning look for a target scalar value instead of looking for a maximum.</para>
/// </summary>
  int GetTargetFlag();


  // void TargetFlagOn ();
/// <summary>
/// <para>These methods can make the positioning look for a target scalar value instead of looking for a maximum.</para>
/// </summary>
  void TargetFlagOn();


  // void TargetFlagOff ();
/// <summary>
/// <para>These methods can make the positioning look for a target scalar value instead of looking for a maximum.</para>
/// </summary>
  void TargetFlagOff();


  // void SetTargetValue (double );
/// <summary>
/// <para>These methods can make the positioning look for a target scalar value instead of looking for a maximum.</para>
/// </summary>
  void SetTargetValue(double arg0);


  // double GetTargetValue ();
/// <summary>
/// <para>These methods can make the positioning look for a target scalar value instead of looking for a maximum.</para>
/// </summary>
  double GetTargetValue();


// Did not wrap:  vtkSubPixelPositionEdgels ();


// Did not wrap:  ~vtkSubPixelPositionEdgels ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  void Move (int xdim, int ydim, int zdim, int x, int y, float *img, vtkDataArray *inVecs, double *result, int z, double *aspect, double *resultNormal);


// Did not wrap:  void Move (int xdim, int ydim, int zdim, int x, int y, double *img, vtkDataArray *inVecs, double *result, int z, double *aspect, double *resultNormal);


// Did not wrap:  vtkSubPixelPositionEdgels (const vtkSubPixelPositionEdgels &);


// Did not wrap:  void vtkSubPixelPositionEdgels 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSubPixelPositionEdgels(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSubPixelPositionEdgels(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSubPixelPositionEdgels();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSubPixelPositionEdgels();


};

} // end vtkGraphics
