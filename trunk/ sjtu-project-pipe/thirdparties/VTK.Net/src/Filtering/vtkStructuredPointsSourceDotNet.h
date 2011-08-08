#pragma once

// managed includes
#include "vtkSourceDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkStructuredPoints;

public ref class vtkStructuredPointsSource : public vtkSource
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkStructuredPointsSource *NewInstance ();
  vtkStructuredPointsSource^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetOutput (vtkStructuredPoints *output);
/// <summary>
/// <para>Set/Get the output of this source.</para>
/// </summary>
  void SetOutput(vtkStructuredPoints^ output);


  // vtkStructuredPoints *GetOutput ();
/// <summary>
/// <para>Set/Get the output of this source.</para>
/// </summary>
  vtkStructuredPoints^ GetOutput();


  // vtkStructuredPoints *GetOutput (int idx);
/// <summary>
/// <para>Set/Get the output of this source.</para>
/// </summary>
  vtkStructuredPoints^ GetOutput(int idx);


// Did not wrap:  vtkStructuredPointsSource ();


// Did not wrap:  ~vtkStructuredPointsSource ();


// Did not wrap:  void ExecuteInformation ();


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkStructuredPointsSource (const vtkStructuredPointsSource &);


// Did not wrap:  void vtkStructuredPointsSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkStructuredPointsSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkStructuredPointsSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkStructuredPointsSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkStructuredPointsSource();


};

} // end vtkFiltering
