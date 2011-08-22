#pragma once

// managed includes
#include "vtkMapperDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkActor;
ref class vtkPolyDataMapper;
ref class vtkRenderer;

public ref class vtkDataSetMapper : public vtkMapper
{

public:
// Did not wrap:  static vtkDataSetMapper *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDataSetMapper *NewInstance ();
  vtkDataSetMapper^ NewInstance();


  // vtkDataSetMapper *SafeDownCast (vtkObject* o);
  static vtkDataSetMapper^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Render (vtkRenderer *ren, vtkActor *act);
  void Render(vtkRenderer^ ren, vtkActor^ act);


  // vtkPolyDataMapper *GetPolyDataMapper ();
/// <summary>
/// <para>Get the internal poly data mapper used to map data set to graphics system.</para>
/// </summary>
  vtkPolyDataMapper^ GetPolyDataMapper();


  // void ReleaseGraphicsResources (vtkWindow *);
/// <summary>
/// <para>Release any graphics resources that are being consumed by this mapper. The parameter window could be used to determine which graphic resources to release.</para>
/// </summary>
  void ReleaseGraphicsResources(vtkWindow^ arg0);


  // unsigned long GetMTime ();
/// <summary>
/// <para>Get the mtime also considering the lookup table.</para>
/// </summary>
  unsigned long GetMTime();


  // void SetInput (vtkDataSet *input);
/// <summary>
/// <para>Set the Input of this mapper.</para>
/// </summary>
  void SetInput(vtkDataSet^ input);


  // vtkDataSet *GetInput ();
/// <summary>
/// <para>Set the Input of this mapper.</para>
/// </summary>
  vtkDataSet^ GetInput();


// Did not wrap:  vtkDataSetMapper ();


// Did not wrap:  ~vtkDataSetMapper ();


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkDataSetMapper (const vtkDataSetMapper &);


// Did not wrap:  void vtkDataSetMapper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDataSetMapper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDataSetMapper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDataSetMapper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDataSetMapper();


};

} // end vtkRendering
