#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkGenericProbeFilter : public vtkDataSetToDataSetFilter
{

public:
// Did not wrap:  static vtkGenericProbeFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkGenericProbeFilter *NewInstance ();
  vtkGenericProbeFilter^ NewInstance();


  // vtkGenericProbeFilter *SafeDownCast (vtkObject* o);
  static vtkGenericProbeFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetSource (vtkGenericDataSet *source);
/// <summary>
/// <para>Specify the point locations used to probe input. A generic dataset type is assumed.</para>
/// </summary>
  void SetSource(vtkGenericDataSet^ source);


  // vtkGenericDataSet *GetSource ();
/// <summary>
/// <para>Specify the point locations used to probe input. A generic dataset type is assumed.</para>
/// </summary>
  vtkGenericDataSet^ GetSource();


  // vtkIdTypeArray *GetValidPoints ();
/// <summary>
/// <para>Get the list of point ids in the output that contain attribute data interpolated from the source.</para>
/// </summary>
  vtkIdTypeArray^ GetValidPoints();


// Did not wrap:  vtkGenericProbeFilter ();


// Did not wrap:  ~vtkGenericProbeFilter ();


// Did not wrap:  virtual void Execute ();


// Did not wrap:  vtkGenericProbeFilter (const vtkGenericProbeFilter &);


// Did not wrap:  void vtkGenericProbeFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGenericProbeFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGenericProbeFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGenericProbeFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGenericProbeFilter();


};

} // end vtkGenericFiltering
