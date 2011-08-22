#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkSpatialRepresentationFilter : public vtkPolyDataSource
{

public:
// Did not wrap:  static vtkSpatialRepresentationFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSpatialRepresentationFilter *NewInstance ();
  vtkSpatialRepresentationFilter^ NewInstance();


  // vtkSpatialRepresentationFilter *SafeDownCast (vtkObject* o);
  static vtkSpatialRepresentationFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetSpatialRepresentation (vtkLocator *);
/// <summary>
/// <para>Set/Get the locator that will be used to generate the representation.</para>
/// </summary>
  void SetSpatialRepresentation(vtkLocator^ arg0);


  // vtkLocator *GetSpatialRepresentation ();
/// <summary>
/// <para>Set/Get the locator that will be used to generate the representation.</para>
/// </summary>
  vtkLocator^ GetSpatialRepresentation();


  // int GetLevel ();
/// <summary>
/// <para>Get the maximum number of outputs actually available.</para>
/// </summary>
  int GetLevel();


  // vtkPolyData *GetOutput (int level);
/// <summary>
/// <para>A special form of the GetOutput() method that returns multiple outputs.</para>
/// </summary>
  vtkPolyData^ GetOutput(int level);


  // vtkPolyData *GetOutput ();
/// <summary>
/// <para>Output of terminal nodes/leaves.</para>
/// </summary>
  vtkPolyData^ GetOutput();


  // void ResetOutput ();
/// <summary>
/// <para>Reset requested output levels</para>
/// </summary>
  void ResetOutput();


  // virtual void SetInput (vtkDataSet *input);
/// <summary>
/// <para>Set / get the input data or filter.</para>
/// </summary>
  void SetInput(vtkDataSet^ input);


  // vtkDataSet *GetInput ();
/// <summary>
/// <para>Set / get the input data or filter.</para>
/// </summary>
  vtkDataSet^ GetInput();


// Did not wrap:  vtkSpatialRepresentationFilter ();


// Did not wrap:  ~vtkSpatialRepresentationFilter ();


// Did not wrap:  void Execute ();


// Did not wrap:  void GenerateOutput ();


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *);


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkSpatialRepresentationFilter (const vtkSpatialRepresentationFilter &);


// Did not wrap:  void vtkSpatialRepresentationFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSpatialRepresentationFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSpatialRepresentationFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSpatialRepresentationFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSpatialRepresentationFilter();


};

} // end vtkGraphics
