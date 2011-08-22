#pragma once

// managed includes
#include "vtkUnstructuredGridSourceDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkInformation;
ref class vtkUnstructuredGrid;

public ref class vtkUnstructuredGridToUnstructuredGridFilter : public vtkUnstructuredGridSource
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkUnstructuredGridToUnstructuredGridFilter *NewInstance ();
  vtkUnstructuredGridToUnstructuredGridFilter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetInput (vtkUnstructuredGrid *input);
/// <summary>
/// <para>Set / get the input Grid or filter.</para>
/// </summary>
  void SetInput(vtkUnstructuredGrid^ input);


  // vtkUnstructuredGrid *GetInput ();
/// <summary>
/// <para>Set / get the input Grid or filter.</para>
/// </summary>
  vtkUnstructuredGrid^ GetInput();


  // virtual int FillInputPortInformation (int , vtkInformation *);
  int FillInputPortInformation(int arg0, vtkInformation^ arg1);


// Did not wrap:  vtkUnstructuredGridToUnstructuredGridFilter ();


// Did not wrap:  ~vtkUnstructuredGridToUnstructuredGridFilter ();


// Did not wrap:  vtkUnstructuredGridToUnstructuredGridFilter (const vtkUnstructuredGridToUnstructuredGridFilter &);


// Did not wrap:  void vtkUnstructuredGridToUnstructuredGridFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkUnstructuredGridToUnstructuredGridFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkUnstructuredGridToUnstructuredGridFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkUnstructuredGridToUnstructuredGridFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkUnstructuredGridToUnstructuredGridFilter();


};

} // end vtkFiltering
