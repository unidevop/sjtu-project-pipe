#pragma once

// managed includes
#include "vtkDataSetSourceDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataObject;
ref class vtkDataSet;
ref class vtkPolyData;
ref class vtkRectilinearGrid;
ref class vtkStructuredGrid;
ref class vtkStructuredPoints;
ref class vtkUnstructuredGrid;

public ref class vtkDataSetToDataSetFilter : public vtkDataSetSource
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDataSetToDataSetFilter *NewInstance ();
  vtkDataSetToDataSetFilter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetInput (vtkDataSet *input);
/// <summary>
/// <para>Specify the input data or filter.</para>
/// </summary>
  void SetInput(vtkDataSet^ input);


  // vtkDataSet *GetOutput ();
/// <summary>
/// <para>Get the output of this filter. If output is NULL then input hasn't been set which is necessary for abstract objects.</para>
/// </summary>
  vtkDataSet^ GetOutput();


  // vtkDataSet *GetOutput (int idx);
/// <summary>
/// <para>Get the output of this filter. If output is NULL then input hasn't been set which is necessary for abstract objects.</para>
/// </summary>
  vtkDataSet^ GetOutput(int idx);


  // virtual vtkPolyData *GetPolyDataOutput ();
/// <summary>
/// <para>Get the output as vtkPolyData.</para>
/// </summary>
  vtkPolyData^ GetPolyDataOutput();


  // virtual vtkStructuredPoints *GetStructuredPointsOutput ();
/// <summary>
/// <para>Get the output as vtkStructuredPoints.</para>
/// </summary>
  vtkStructuredPoints^ GetStructuredPointsOutput();


  // virtual vtkStructuredGrid *GetStructuredGridOutput ();
/// <summary>
/// <para>Get the output as vtkStructuredGrid.</para>
/// </summary>
  vtkStructuredGrid^ GetStructuredGridOutput();


  // virtual vtkUnstructuredGrid *GetUnstructuredGridOutput ();
/// <summary>
/// <para>Get the output as vtkUnstructuredGrid.</para>
/// </summary>
  vtkUnstructuredGrid^ GetUnstructuredGridOutput();


  // virtual vtkRectilinearGrid *GetRectilinearGridOutput ();
/// <summary>
/// <para>Get the output as vtkRectilinearGrid. </para>
/// </summary>
  vtkRectilinearGrid^ GetRectilinearGridOutput();


  // vtkDataSet *GetInput ();
/// <summary>
/// <para>Get the input data or filter.</para>
/// </summary>
  vtkDataSet^ GetInput();


  // virtual void ComputeInputUpdateExtents (vtkDataObject *output);
/// <summary>
/// <para>By default copy the output update extent to the input</para>
/// </summary>
  void ComputeInputUpdateExtents(vtkDataObject^ output);


// Did not wrap:  virtual int ProcessRequest (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkDataSetToDataSetFilter ();


// Did not wrap:  ~vtkDataSetToDataSetFilter ();


// Did not wrap:  void ExecuteInformation ();


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  virtual int RequestDataObject (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  vtkDataSetToDataSetFilter (const vtkDataSetToDataSetFilter &);


// Did not wrap:  void vtkDataSetToDataSetFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDataSetToDataSetFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDataSetToDataSetFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDataSetToDataSetFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDataSetToDataSetFilter();


};

} // end vtkFiltering
