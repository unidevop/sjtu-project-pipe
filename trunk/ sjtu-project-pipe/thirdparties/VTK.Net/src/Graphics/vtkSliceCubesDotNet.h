#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkSliceCubes : public vtkObject
{

public:
// Did not wrap:  static vtkSliceCubes *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSliceCubes *NewInstance ();
  vtkSliceCubes^ NewInstance();


  // vtkSliceCubes *SafeDownCast (vtkObject* o);
  static vtkSliceCubes^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Write ();this Update 
  void Write();


  // void Update ();
  void Update();


// Did not wrap:  virtual void SetReader (vtkVolumeReader *);


// Did not wrap:  vtkVolumeReader *GetReader ();


  // void SetFileName (char *);
/// <summary>
/// <para>Specify file name of marching cubes output file.</para>
/// </summary>
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
/// <summary>
/// <para>Specify file name of marching cubes output file.</para>
/// </summary>
  System::String^ GetFileName();


  // void SetValue (double );
/// <summary>
/// <para>Set/get isosurface contour value.</para>
/// </summary>
  void SetValue(double arg0);


  // double GetValue ();
/// <summary>
/// <para>Set/get isosurface contour value.</para>
/// </summary>
  double GetValue();


  // void SetLimitsFileName (char *);
/// <summary>
/// <para>Specify file name of marching cubes limits file. The limits file speeds up subsequent reading of output triangle file.</para>
/// </summary>
  void SetLimitsFileName(System::String^ arg0);


  // char *GetLimitsFileName ();
/// <summary>
/// <para>Specify file name of marching cubes limits file. The limits file speeds up subsequent reading of output triangle file.</para>
/// </summary>
  System::String^ GetLimitsFileName();


// Did not wrap:  vtkSliceCubes ();


// Did not wrap:  ~vtkSliceCubes ();


// Did not wrap:  void Execute ();


// Did not wrap:  vtkSliceCubes (const vtkSliceCubes &);


// Did not wrap:  void vtkSliceCubes 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSliceCubes(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSliceCubes(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSliceCubes();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSliceCubes();


};

} // end vtkGraphics
