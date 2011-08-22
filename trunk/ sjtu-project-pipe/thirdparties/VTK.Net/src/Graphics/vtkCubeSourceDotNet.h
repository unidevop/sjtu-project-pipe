#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkCubeSource : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkCubeSource *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCubeSource *NewInstance ();
  vtkCubeSource^ NewInstance();


  // vtkCubeSource *SafeDownCast (vtkObject* o);
  static vtkCubeSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetXLength (double );
/// <summary>
/// <para>Set the length of the cube in the x-direction.</para>
/// </summary>
  void SetXLength(double arg0);


  // double GetXLengthMinValue ();
/// <summary>
/// <para>Set the length of the cube in the x-direction.</para>
/// </summary>
  double GetXLengthMinValue();


  // double GetXLengthMaxValue ();
/// <summary>
/// <para>Set the length of the cube in the x-direction.</para>
/// </summary>
  double GetXLengthMaxValue();


  // double GetXLength ();
/// <summary>
/// <para>Set the length of the cube in the x-direction.</para>
/// </summary>
  double GetXLength();


  // void SetYLength (double );
/// <summary>
/// <para>Set the length of the cube in the y-direction.</para>
/// </summary>
  void SetYLength(double arg0);


  // double GetYLengthMinValue ();
/// <summary>
/// <para>Set the length of the cube in the y-direction.</para>
/// </summary>
  double GetYLengthMinValue();


  // double GetYLengthMaxValue ();
/// <summary>
/// <para>Set the length of the cube in the y-direction.</para>
/// </summary>
  double GetYLengthMaxValue();


  // double GetYLength ();
/// <summary>
/// <para>Set the length of the cube in the y-direction.</para>
/// </summary>
  double GetYLength();


  // void SetZLength (double );
/// <summary>
/// <para>Set the length of the cube in the z-direction.</para>
/// </summary>
  void SetZLength(double arg0);


  // double GetZLengthMinValue ();
/// <summary>
/// <para>Set the length of the cube in the z-direction.</para>
/// </summary>
  double GetZLengthMinValue();


  // double GetZLengthMaxValue ();
/// <summary>
/// <para>Set the length of the cube in the z-direction.</para>
/// </summary>
  double GetZLengthMaxValue();


  // double GetZLength ();
/// <summary>
/// <para>Set the length of the cube in the z-direction.</para>
/// </summary>
  double GetZLength();


  // void SetCenter (double , double , double );
/// <summary>
/// <para>Set the center of the cube.</para>
/// </summary>
  void SetCenter(double arg0, double arg1, double arg2);


  // void SetCenter (double  a[3]);
/// <summary>
/// <para>Set the center of the cube.</para>
/// </summary>
  void SetCenter(array<double>^ a);


  // double  *GetCenter ();
/// <summary>
/// <para>Set the center of the cube.</para>
/// </summary>
  array<double>^ GetCenter();


  // void SetBounds (double xMin, double xMax, double yMin, double yMax, double zMin, double zMax);
/// <summary>
/// <para>Convenience method allows creation of cube by specifying bounding box.</para>
/// </summary>
  void SetBounds(double xMin, double xMax, double yMin, double yMax, double zMin, double zMax);


  // void SetBounds (double bounds[6]);
/// <summary>
/// <para>Convenience method allows creation of cube by specifying bounding box.</para>
/// </summary>
  void SetBounds(array<double>^ bounds);


// Did not wrap:  vtkCubeSource (double xL, double yL, double zL);


// Did not wrap:  ~vtkCubeSource ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkCubeSource (const vtkCubeSource &);


// Did not wrap:  void vtkCubeSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCubeSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCubeSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCubeSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCubeSource();


};

} // end vtkGraphics
