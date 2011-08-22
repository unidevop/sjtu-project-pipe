#pragma once

// managed includes
#include "vtkImageIterateFilterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageSkeleton2D : public vtkImageIterateFilter
{

public:
// Did not wrap:  static vtkImageSkeleton2D *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageSkeleton2D *NewInstance ();
  vtkImageSkeleton2D^ NewInstance();


  // vtkImageSkeleton2D *SafeDownCast (vtkObject* o);
  static vtkImageSkeleton2D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetPrune (int );
/// <summary>
/// <para>When prune is on, only closed loops are left unchanged.</para>
/// </summary>
  void SetPrune(int arg0);


  // int GetPrune ();
/// <summary>
/// <para>When prune is on, only closed loops are left unchanged.</para>
/// </summary>
  int GetPrune();


  // void PruneOn ();
/// <summary>
/// <para>When prune is on, only closed loops are left unchanged.</para>
/// </summary>
  void PruneOn();


  // void PruneOff ();
/// <summary>
/// <para>When prune is on, only closed loops are left unchanged.</para>
/// </summary>
  void PruneOff();


  // void SetNumberOfIterations (int num);
/// <summary>
/// <para>Sets the number of cycles in the erosion.</para>
/// </summary>
  void SetNumberOfIterations(int num);


// Did not wrap:  vtkImageSkeleton2D ();


// Did not wrap:  ~vtkImageSkeleton2D ();


// Did not wrap:  virtual int IterativeRequestUpdateExtent (vtkInformation *in, vtkInformation *out);


// Did not wrap:  void ThreadedExecute (vtkImageData *inData, vtkImageData *outData, int outExt[6], int id);


// Did not wrap:  vtkImageSkeleton2D (const vtkImageSkeleton2D &);


// Did not wrap:  void vtkImageSkeleton2D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageSkeleton2D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageSkeleton2D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageSkeleton2D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageSkeleton2D();


};

} // end vtkImaging
