#pragma once

// managed includes
#include "vtkPointSetSourceDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataObject;
ref class vtkPointSet;
ref class vtkPolyData;
ref class vtkStructuredGrid;
ref class vtkUnstructuredGrid;

public ref class vtkPointSetToPointSetFilter : public vtkPointSetSource
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPointSetToPointSetFilter *NewInstance ();
  vtkPointSetToPointSetFilter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetInput (vtkPointSet *input);
/// <summary>
/// <para>Specify the input data or filter.</para>
/// </summary>
  void SetInput(vtkPointSet^ input);


  // vtkPointSet *GetInput ();
/// <summary>
/// <para>Get the input data or filter.</para>
/// </summary>
  vtkPointSet^ GetInput();


  // vtkPointSet *GetOutput ();
/// <summary>
/// <para>Get the output of this filter. If output is NULL, then input hasn't been set, which is necessary for abstract filter objects.</para>
/// </summary>
  vtkPointSet^ GetOutput();


  // vtkPointSet *GetOutput (int idx);return vtkPointSet this vtkPointSetSource GetOutput idx 
/// <summary>
/// <para>Get the output of this filter. If output is NULL, then input hasn't been set, which is necessary for abstract filter objects.</para>
/// </summary>
  vtkPointSet^ GetOutput(int idx);


  // vtkPolyData *GetPolyDataOutput ();
/// <summary>
/// <para>Get the output as vtkPolyData. Performs run-time checking.</para>
/// </summary>
  vtkPolyData^ GetPolyDataOutput();


  // vtkStructuredGrid *GetStructuredGridOutput ();
/// <summary>
/// <para>Get the output as vtkStructuredGrid. Performs run-time checking.</para>
/// </summary>
  vtkStructuredGrid^ GetStructuredGridOutput();


  // vtkUnstructuredGrid *GetUnstructuredGridOutput ();
/// <summary>
/// <para>Get the output as vtkUnstructuredGrid. Performs run-time checking.</para>
/// </summary>
  vtkUnstructuredGrid^ GetUnstructuredGridOutput();


  // virtual void ComputeInputUpdateExtents (vtkDataObject *output);
/// <summary>
/// <para>By default copy the output update extent to the input</para>
/// </summary>
  void ComputeInputUpdateExtents(vtkDataObject^ output);


// Did not wrap:  vtkPointSetToPointSetFilter ();


// Did not wrap:  ~vtkPointSetToPointSetFilter ();


// Did not wrap:  vtkPointSetToPointSetFilter (const vtkPointSetToPointSetFilter &);


// Did not wrap:  void vtkPointSetToPointSetFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPointSetToPointSetFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPointSetToPointSetFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPointSetToPointSetFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPointSetToPointSetFilter();


};

} // end vtkFiltering
