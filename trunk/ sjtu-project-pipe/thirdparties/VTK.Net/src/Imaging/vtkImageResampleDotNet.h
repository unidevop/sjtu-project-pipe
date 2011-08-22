#pragma once

// managed includes
#include "vtkImageResliceDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageResample : public vtkImageReslice
{

public:
// Did not wrap:  static vtkImageResample *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageResample *NewInstance ();
  vtkImageResample^ NewInstance();


  // vtkImageResample *SafeDownCast (vtkObject* o);
  static vtkImageResample^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetAxisOutputSpacing (int axis, double spacing);
/// <summary>
/// <para>Set desired spacing.   Zero is a reserved value indicating spacing has not been set.</para>
/// </summary>
  void SetAxisOutputSpacing(int axis, double spacing);


  // void SetAxisMagnificationFactor (int axis, double factor);
/// <summary>
/// <para>Set/Get Magnification factors. Zero is a reserved value indicating values have not been computed.</para>
/// </summary>
  void SetAxisMagnificationFactor(int axis, double factor);


  // double GetAxisMagnificationFactor (int axis, vtkInformation *inInfo);
/// <summary>
/// <para>Set/Get Magnification factors. Zero is a reserved value indicating values have not been computed.</para>
/// </summary>
  double GetAxisMagnificationFactor(int axis, vtkInformation^ inInfo);


  // void SetDimensionality (int );
/// <summary>
/// <para>Dimensionality is the number of axes which are considered during execution. To process images dimensionality would be set to 2. This has the same effect as setting the magnification of the third axis to 1.0</para>
/// </summary>
  void SetDimensionality(int arg0);


  // int GetDimensionality ();
/// <summary>
/// <para>Dimensionality is the number of axes which are considered during execution. To process images dimensionality would be set to 2. This has the same effect as setting the magnification of the third axis to 1.0</para>
/// </summary>
  int GetDimensionality();


// Did not wrap:  vtkImageResample ();


// Did not wrap:  ~vtkImageResample ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkImageResample (const vtkImageResample &);


// Did not wrap:  void vtkImageResample 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageResample(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageResample(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageResample();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageResample();


};

} // end vtkImaging
