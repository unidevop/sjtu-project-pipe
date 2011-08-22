#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkWarpTo : public vtkPointSetAlgorithm
{

public:
// Did not wrap:  static vtkWarpTo *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkWarpTo *NewInstance ();
  vtkWarpTo^ NewInstance();


  // vtkWarpTo *SafeDownCast (vtkObject* o);
  static vtkWarpTo^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetScaleFactor (double );
/// <summary>
/// <para>Set/Get the value to scale displacement.</para>
/// </summary>
  void SetScaleFactor(double arg0);


  // double GetScaleFactor ();
/// <summary>
/// <para>Set/Get the value to scale displacement.</para>
/// </summary>
  double GetScaleFactor();


  // double  *GetPosition ();
/// <summary>
/// <para>Set/Get the position to warp towards.</para>
/// </summary>
  array<double>^ GetPosition();


  // void SetPosition (double , double , double );
/// <summary>
/// <para>Set/Get the position to warp towards.</para>
/// </summary>
  void SetPosition(double arg0, double arg1, double arg2);


  // void SetPosition (double  a[3]);
/// <summary>
/// <para>Set/Get the position to warp towards.</para>
/// </summary>
  void SetPosition(array<double>^ a);


  // void SetAbsolute (int );
/// <summary>
/// <para>Set/Get the Absolute ivar. Turning Absolute on causes scale factor of the new position to be one unit away from Position.</para>
/// </summary>
  void SetAbsolute(int arg0);


  // int GetAbsolute ();
/// <summary>
/// <para>Set/Get the Absolute ivar. Turning Absolute on causes scale factor of the new position to be one unit away from Position.</para>
/// </summary>
  int GetAbsolute();


  // void AbsoluteOn ();
/// <summary>
/// <para>Set/Get the Absolute ivar. Turning Absolute on causes scale factor of the new position to be one unit away from Position.</para>
/// </summary>
  void AbsoluteOn();


  // void AbsoluteOff ();
/// <summary>
/// <para>Set/Get the Absolute ivar. Turning Absolute on causes scale factor of the new position to be one unit away from Position.</para>
/// </summary>
  void AbsoluteOff();


// Did not wrap:  vtkWarpTo ();


// Did not wrap:  ~vtkWarpTo ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkWarpTo (const vtkWarpTo &);


// Did not wrap:  void vtkWarpTo 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkWarpTo(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkWarpTo(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkWarpTo();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkWarpTo();


};

} // end vtkGraphics
