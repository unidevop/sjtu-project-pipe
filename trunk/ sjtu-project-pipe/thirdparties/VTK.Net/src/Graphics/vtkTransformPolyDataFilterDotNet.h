#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkTransformPolyDataFilter : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkTransformPolyDataFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTransformPolyDataFilter *NewInstance ();
  vtkTransformPolyDataFilter^ NewInstance();


  // vtkTransformPolyDataFilter *SafeDownCast (vtkObject* o);
  static vtkTransformPolyDataFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // unsigned long GetMTime ();
/// <summary>
/// <para>Return the MTime also considering the transform.</para>
/// </summary>
  unsigned long GetMTime();


  // virtual void SetTransform (vtkAbstractTransform *);
/// <summary>
/// <para>Specify the transform object used to transform points.</para>
/// </summary>
  void SetTransform(vtkAbstractTransform^ arg0);


  // vtkAbstractTransform *GetTransform ();
/// <summary>
/// <para>Specify the transform object used to transform points.</para>
/// </summary>
  vtkAbstractTransform^ GetTransform();


// Did not wrap:  vtkTransformPolyDataFilter ();


// Did not wrap:  ~vtkTransformPolyDataFilter ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkTransformPolyDataFilter (const vtkTransformPolyDataFilter &);


// Did not wrap:  void vtkTransformPolyDataFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTransformPolyDataFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTransformPolyDataFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTransformPolyDataFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTransformPolyDataFilter();


};

} // end vtkGraphics
