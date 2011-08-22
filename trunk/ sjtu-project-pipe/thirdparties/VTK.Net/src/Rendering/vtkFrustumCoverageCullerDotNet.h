#pragma once

// managed includes
#include "vtkCullerDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkFrustumCoverageCuller : public vtkCuller
{

public:
// Did not wrap:  static vtkFrustumCoverageCuller *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkFrustumCoverageCuller *NewInstance ();
  vtkFrustumCoverageCuller^ NewInstance();


  // vtkFrustumCoverageCuller *SafeDownCast (vtkObject* o);
  static vtkFrustumCoverageCuller^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetMinimumCoverage (double );
/// <summary>
/// <para>Set/Get the minimum coverage - props with less coverage than this are given no time to render (they are culled)</para>
/// </summary>
  void SetMinimumCoverage(double arg0);


  // double GetMinimumCoverage ();
/// <summary>
/// <para>Set/Get the minimum coverage - props with less coverage than this are given no time to render (they are culled)</para>
/// </summary>
  double GetMinimumCoverage();


  // void SetMaximumCoverage (double );
/// <summary>
/// <para>Set/Get the maximum coverage - props with more coverage than this are given an allocated render time of 1.0 (the maximum)</para>
/// </summary>
  void SetMaximumCoverage(double arg0);


  // double GetMaximumCoverage ();
/// <summary>
/// <para>Set/Get the maximum coverage - props with more coverage than this are given an allocated render time of 1.0 (the maximum)</para>
/// </summary>
  double GetMaximumCoverage();


  // void SetSortingStyle (int );
/// <summary>
/// <para>Set the sorting style - none, front-to-back or back-to-front The default is none</para>
/// </summary>
  void SetSortingStyle(int arg0);


  // int GetSortingStyleMinValue ();
/// <summary>
/// <para>Set the sorting style - none, front-to-back or back-to-front The default is none</para>
/// </summary>
  int GetSortingStyleMinValue();


  // int GetSortingStyleMaxValue ();
/// <summary>
/// <para>Set the sorting style - none, front-to-back or back-to-front The default is none</para>
/// </summary>
  int GetSortingStyleMaxValue();


  // int GetSortingStyle ();
/// <summary>
/// <para>Set the sorting style - none, front-to-back or back-to-front The default is none</para>
/// </summary>
  int GetSortingStyle();


  // void SetSortingStyleToNone ();this SetSortingStyle VTK_CULLER_SORT_NONE 
/// <summary>
/// <para>Set the sorting style - none, front-to-back or back-to-front The default is none</para>
/// </summary>
  void SetSortingStyleToNone();


  // void SetSortingStyleToBackToFront ();this SetSortingStyle VTK_CULLER_SORT_BACK_TO_FRONT 
/// <summary>
/// <para>Set the sorting style - none, front-to-back or back-to-front The default is none</para>
/// </summary>
  void SetSortingStyleToBackToFront();


  // void SetSortingStyleToFrontToBack ();this SetSortingStyle VTK_CULLER_SORT_FRONT_TO_BACK 
/// <summary>
/// <para>Set the sorting style - none, front-to-back or back-to-front The default is none</para>
/// </summary>
  void SetSortingStyleToFrontToBack();


  // const char *GetSortingStyleAsString (void );
/// <summary>
/// <para>Set the sorting style - none, front-to-back or back-to-front The default is none</para>
/// </summary>
  System::String^ GetSortingStyleAsString();


// Did not wrap:  vtkFrustumCoverageCuller ();


// Did not wrap:  ~vtkFrustumCoverageCuller ();


// Did not wrap:  vtkFrustumCoverageCuller (const vtkFrustumCoverageCuller &);


// Did not wrap:  void vtkFrustumCoverageCuller 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkFrustumCoverageCuller(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkFrustumCoverageCuller(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkFrustumCoverageCuller();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkFrustumCoverageCuller();


};

} // end vtkRendering
