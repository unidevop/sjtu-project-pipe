#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkProgrammableFilter : public vtkDataSetAlgorithm
{

public:
// Did not wrap:  static vtkProgrammableFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkProgrammableFilter *NewInstance ();
  vtkProgrammableFilter^ NewInstance();


  // vtkProgrammableFilter *SafeDownCast (vtkObject* o);
  static vtkProgrammableFilter^ SafeDownCast(vtkObject^ o);


// Did not wrap:  void SetExecuteMethod (void (*func)(void *) , void *arg);


// Did not wrap:  void SetExecuteMethodArgDelete (void (*func)(void *) );


  // vtkPolyData *GetPolyDataInput ();
/// <summary>
/// <para>Get the input as a concrete type. This method is typically used by the writer of the filter function to get the input as a particular type (i.e., it essentially does type casting). It is the users responsibility to know the correct type of the input data.</para>
/// </summary>
  vtkPolyData^ GetPolyDataInput();


  // vtkStructuredPoints *GetStructuredPointsInput ();
/// <summary>
/// <para>Get the input as a concrete type.</para>
/// </summary>
  vtkStructuredPoints^ GetStructuredPointsInput();


  // vtkStructuredGrid *GetStructuredGridInput ();
/// <summary>
/// <para>Get the input as a concrete type.</para>
/// </summary>
  vtkStructuredGrid^ GetStructuredGridInput();


  // vtkUnstructuredGrid *GetUnstructuredGridInput ();
/// <summary>
/// <para>Get the input as a concrete type.</para>
/// </summary>
  vtkUnstructuredGrid^ GetUnstructuredGridInput();


  // vtkRectilinearGrid *GetRectilinearGridInput ();
/// <summary>
/// <para>Get the input as a concrete type.</para>
/// </summary>
  vtkRectilinearGrid^ GetRectilinearGridInput();


// Did not wrap:  vtkProgrammableFilter ();


// Did not wrap:  ~vtkProgrammableFilter ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkProgrammableFilter (const vtkProgrammableFilter &);


// Did not wrap:  void vtkProgrammableFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkProgrammableFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkProgrammableFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkProgrammableFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkProgrammableFilter();


};

} // end vtkGraphics
