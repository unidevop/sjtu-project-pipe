#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkHedgeHog : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkHedgeHog *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkHedgeHog *NewInstance ();
  vtkHedgeHog^ NewInstance();


  // vtkHedgeHog *SafeDownCast (vtkObject* o);
  static vtkHedgeHog^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetScaleFactor (double );
/// <summary>
/// <para>Set scale factor to control size of oriented lines.</para>
/// </summary>
  void SetScaleFactor(double arg0);


  // double GetScaleFactor ();
/// <summary>
/// <para>Set scale factor to control size of oriented lines.</para>
/// </summary>
  double GetScaleFactor();


  // void SetVectorMode (int );
/// <summary>
/// <para>Specify whether to use vector or normal to perform vector operations.</para>
/// </summary>
  void SetVectorMode(int arg0);


  // int GetVectorMode ();
/// <summary>
/// <para>Specify whether to use vector or normal to perform vector operations.</para>
/// </summary>
  int GetVectorMode();


  // void SetVectorModeToUseVector ();this SetVectorMode VTK_USE_VECTOR 
/// <summary>
/// <para>Specify whether to use vector or normal to perform vector operations.</para>
/// </summary>
  void SetVectorModeToUseVector();


  // void SetVectorModeToUseNormal ();this SetVectorMode VTK_USE_NORMAL 
/// <summary>
/// <para>Specify whether to use vector or normal to perform vector operations.</para>
/// </summary>
  void SetVectorModeToUseNormal();


  // const char *GetVectorModeAsString ();
/// <summary>
/// <para>Specify whether to use vector or normal to perform vector operations.</para>
/// </summary>
  System::String^ GetVectorModeAsString();


// Did not wrap:  vtkHedgeHog ();


// Did not wrap:  ~vtkHedgeHog ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkHedgeHog (const vtkHedgeHog &);


// Did not wrap:  void vtkHedgeHog 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkHedgeHog(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkHedgeHog(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkHedgeHog();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkHedgeHog();


};

} // end vtkGraphics
