#pragma once

// managed includes
#include "vtkImageMapToColorsDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageMapToWindowLevelColors : public vtkImageMapToColors
{

public:
// Did not wrap:  static vtkImageMapToWindowLevelColors *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageMapToWindowLevelColors *NewInstance ();
  vtkImageMapToWindowLevelColors^ NewInstance();


  // vtkImageMapToWindowLevelColors *SafeDownCast (vtkObject* o);
  static vtkImageMapToWindowLevelColors^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetWindow (double );
/// <summary>
/// <para>Set / Get the Window to use -&gt; modulation will be performed on the  color based on (S - (L - W/2))/W where S is the scalar value, L is the level and W is the window.</para>
/// </summary>
  void SetWindow(double arg0);


  // double GetWindow ();
/// <summary>
/// <para>Set / Get the Window to use -&gt; modulation will be performed on the  color based on (S - (L - W/2))/W where S is the scalar value, L is the level and W is the window.</para>
/// </summary>
  double GetWindow();


  // void SetLevel (double );
/// <summary>
/// <para>Set / Get the Level to use -&gt; modulation will be performed on the  color based on (S - (L - W/2))/W where S is the scalar value, L is the level and W is the window.</para>
/// </summary>
  void SetLevel(double arg0);


  // double GetLevel ();
/// <summary>
/// <para>Set / Get the Level to use -&gt; modulation will be performed on the  color based on (S - (L - W/2))/W where S is the scalar value, L is the level and W is the window.</para>
/// </summary>
  double GetLevel();


// Did not wrap:  vtkImageMapToWindowLevelColors ();


// Did not wrap:  ~vtkImageMapToWindowLevelColors ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int extent[6], int id);


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  vtkImageMapToWindowLevelColors (const vtkImageMapToWindowLevelColors &);


// Did not wrap:  void vtkImageMapToWindowLevelColors 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageMapToWindowLevelColors(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageMapToWindowLevelColors(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageMapToWindowLevelColors();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageMapToWindowLevelColors();


};

} // end vtkImaging
