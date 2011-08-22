#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageCursor3D : public vtkImageInPlaceFilter
{

public:
// Did not wrap:  static vtkImageCursor3D *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageCursor3D *NewInstance ();
  vtkImageCursor3D^ NewInstance();


  // vtkImageCursor3D *SafeDownCast (vtkObject* o);
  static vtkImageCursor3D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetCursorPosition (double , double , double );
/// <summary>
/// <para>Sets/Gets the center point of the 3d cursor.</para>
/// </summary>
  void SetCursorPosition(double arg0, double arg1, double arg2);


  // void SetCursorPosition (double  a[3]);
/// <summary>
/// <para>Sets/Gets the center point of the 3d cursor.</para>
/// </summary>
  void SetCursorPosition(array<double>^ a);


  // double  *GetCursorPosition ();
/// <summary>
/// <para>Sets/Gets the center point of the 3d cursor.</para>
/// </summary>
  array<double>^ GetCursorPosition();


  // void SetCursorValue (double );
/// <summary>
/// <para>Sets/Gets what pixel value to draw the cursor in.</para>
/// </summary>
  void SetCursorValue(double arg0);


  // double GetCursorValue ();
/// <summary>
/// <para>Sets/Gets what pixel value to draw the cursor in.</para>
/// </summary>
  double GetCursorValue();


  // void SetCursorRadius (int );
/// <summary>
/// <para>Sets/Gets the radius of the cursor. The radius determines how far the axis lines project out from the cursors center.</para>
/// </summary>
  void SetCursorRadius(int arg0);


  // int GetCursorRadius ();
/// <summary>
/// <para>Sets/Gets the radius of the cursor. The radius determines how far the axis lines project out from the cursors center.</para>
/// </summary>
  int GetCursorRadius();


// Did not wrap:  vtkImageCursor3D ();


// Did not wrap:  ~vtkImageCursor3D ();


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  vtkImageCursor3D (const vtkImageCursor3D &);


// Did not wrap:  void vtkImageCursor3D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageCursor3D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageCursor3D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageCursor3D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageCursor3D();


};

} // end vtkImaging
