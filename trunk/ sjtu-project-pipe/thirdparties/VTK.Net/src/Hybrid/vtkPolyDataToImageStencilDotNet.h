#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkPolyDataToImageStencil : public vtkImageStencilSource
{

public:
// Did not wrap:  static vtkPolyDataToImageStencil *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPolyDataToImageStencil *NewInstance ();
  vtkPolyDataToImageStencil^ NewInstance();


  // vtkPolyDataToImageStencil *SafeDownCast (vtkObject* o);
  static vtkPolyDataToImageStencil^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetInput (vtkPolyData *input);
/// <summary>
/// <para>Specify the polydata to convert into a stencil.</para>
/// </summary>
  void SetInput(vtkPolyData^ input);


  // vtkPolyData *GetInput ();
/// <summary>
/// <para>Specify the polydata to convert into a stencil.</para>
/// </summary>
  vtkPolyData^ GetInput();


  // void SetTolerance (double );
/// <summary>
/// <para>Set the tolerance for doing spatial searches of the polydata.</para>
/// </summary>
  void SetTolerance(double arg0);


  // double GetTolerance ();
/// <summary>
/// <para>Set the tolerance for doing spatial searches of the polydata.</para>
/// </summary>
  double GetTolerance();


// Did not wrap:  vtkPolyDataToImageStencil ();


// Did not wrap:  ~vtkPolyDataToImageStencil ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *);


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkPolyDataToImageStencil (const vtkPolyDataToImageStencil &);


// Did not wrap:  void vtkPolyDataToImageStencil 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPolyDataToImageStencil(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPolyDataToImageStencil(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPolyDataToImageStencil();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPolyDataToImageStencil();


};

} // end vtkHybrid
