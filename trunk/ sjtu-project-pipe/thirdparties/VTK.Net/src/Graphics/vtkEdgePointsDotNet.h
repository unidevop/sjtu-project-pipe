#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkEdgePoints : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkEdgePoints *NewInstance ();
  vtkEdgePoints^ NewInstance();


  // vtkEdgePoints *SafeDownCast (vtkObject* o);
  static vtkEdgePoints^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkEdgePoints *New ();


  // void SetValue (double );
/// <summary>
/// <para>Set/get the contour value.</para>
/// </summary>
  void SetValue(double arg0);


  // double GetValue ();
/// <summary>
/// <para>Set/get the contour value.</para>
/// </summary>
  double GetValue();


// Did not wrap:  vtkEdgePoints ();


// Did not wrap:  ~vtkEdgePoints ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkEdgePoints (const vtkEdgePoints &);


// Did not wrap:  void vtkEdgePoints 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkEdgePoints(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkEdgePoints(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkEdgePoints();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkEdgePoints();


};

} // end vtkGraphics
