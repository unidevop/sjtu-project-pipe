#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkGridTransform : public vtkWarpTransform
{

public:
// Did not wrap:  static vtkGridTransform *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkGridTransform *NewInstance ();
  vtkGridTransform^ NewInstance();


  // vtkGridTransform *SafeDownCast (vtkObject* o);
  static vtkGridTransform^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetDisplacementGrid (vtkImageData *);
/// <summary>
/// <para>Set/Get the grid transform (the grid transform must have three  components for displacement in x, y, and z respectively). The vtkGridTransform class will never modify the data.</para>
/// </summary>
  void SetDisplacementGrid(vtkImageData^ arg0);


  // vtkImageData *GetDisplacementGrid ();
/// <summary>
/// <para>Set/Get the grid transform (the grid transform must have three  components for displacement in x, y, and z respectively). The vtkGridTransform class will never modify the data.</para>
/// </summary>
  vtkImageData^ GetDisplacementGrid();


  // void SetDisplacementScale (double );
/// <summary>
/// <para>Set scale factor to be applied to the displacements. This is used primarily for grids which contain integer data types.  Default: 1</para>
/// </summary>
  void SetDisplacementScale(double arg0);


  // double GetDisplacementScale ();
/// <summary>
/// <para>Set scale factor to be applied to the displacements. This is used primarily for grids which contain integer data types.  Default: 1</para>
/// </summary>
  double GetDisplacementScale();


  // void SetDisplacementShift (double );
/// <summary>
/// <para>Set a shift to be applied to the displacements.  The shift is applied after the scale, i.e. x = scale*y + shift. Default: 0</para>
/// </summary>
  void SetDisplacementShift(double arg0);


  // double GetDisplacementShift ();
/// <summary>
/// <para>Set a shift to be applied to the displacements.  The shift is applied after the scale, i.e. x = scale*y + shift. Default: 0</para>
/// </summary>
  double GetDisplacementShift();


  // void SetInterpolationMode (int mode);
/// <summary>
/// <para>Set interpolation mode for sampling the grid.  Higher-order interpolation allows you to use a sparser grid. Default: Linear.</para>
/// </summary>
  void SetInterpolationMode(int mode);


  // int GetInterpolationMode ();
/// <summary>
/// <para>Set interpolation mode for sampling the grid.  Higher-order interpolation allows you to use a sparser grid. Default: Linear.</para>
/// </summary>
  int GetInterpolationMode();


  // void SetInterpolationModeToNearestNeighbor ();this SetInterpolationMode VTK_GRID_NEAREST 
/// <summary>
/// <para>Set interpolation mode for sampling the grid.  Higher-order interpolation allows you to use a sparser grid. Default: Linear.</para>
/// </summary>
  void SetInterpolationModeToNearestNeighbor();


  // void SetInterpolationModeToLinear ();this SetInterpolationMode VTK_GRID_LINEAR 
/// <summary>
/// <para>Set interpolation mode for sampling the grid.  Higher-order interpolation allows you to use a sparser grid. Default: Linear.</para>
/// </summary>
  void SetInterpolationModeToLinear();


  // void SetInterpolationModeToCubic ();this SetInterpolationMode VTK_GRID_CUBIC 
/// <summary>
/// <para>Set interpolation mode for sampling the grid.  Higher-order interpolation allows you to use a sparser grid. Default: Linear.</para>
/// </summary>
  void SetInterpolationModeToCubic();


  // const char *GetInterpolationModeAsString ();
/// <summary>
/// <para>Set interpolation mode for sampling the grid.  Higher-order interpolation allows you to use a sparser grid. Default: Linear.</para>
/// </summary>
  System::String^ GetInterpolationModeAsString();


  // vtkAbstractTransform *MakeTransform ();
/// <summary>
/// <para>Make another transform of the same type.</para>
/// </summary>
  vtkAbstractTransform^ MakeTransform();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Get the MTime.</para>
/// </summary>
  unsigned long GetMTime();


// Did not wrap:  vtkGridTransform ();


// Did not wrap:  ~vtkGridTransform ();


// Did not wrap:  void InternalUpdate ();


// Did not wrap:  void InternalDeepCopy (vtkAbstractTransform *transform);


// Did not wrap:  void ForwardTransformPoint (const float in[3], float out[3]);


// Did not wrap:  void ForwardTransformPoint (const double in[3], double out[3]);


// Did not wrap:  void ForwardTransformDerivative (const float in[3], float out[3], float derivative[3][3]);


// Did not wrap:  void ForwardTransformDerivative (const double in[3], double out[3], double derivative[3][3]);


// Did not wrap:  void InverseTransformPoint (const float in[3], float out[3]);


// Did not wrap:  void InverseTransformPoint (const double in[3], double out[3]);


// Did not wrap:  void InverseTransformDerivative (const float in[3], float out[3], float derivative[3][3]);


// Did not wrap:  void InverseTransformDerivative (const double in[3], double out[3], double derivative[3][3]);


// Did not wrap:  vtkGridTransform (const vtkGridTransform &);


// Did not wrap:  void vtkGridTransform 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGridTransform(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGridTransform(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGridTransform();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGridTransform();


};

} // end vtkHybrid
