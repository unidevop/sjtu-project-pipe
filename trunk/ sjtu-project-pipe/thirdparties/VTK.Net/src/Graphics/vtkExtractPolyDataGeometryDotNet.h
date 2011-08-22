#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkExtractPolyDataGeometry : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkExtractPolyDataGeometry *NewInstance ();
  vtkExtractPolyDataGeometry^ NewInstance();


  // vtkExtractPolyDataGeometry *SafeDownCast (vtkObject* o);
  static vtkExtractPolyDataGeometry^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkExtractPolyDataGeometry *New ();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Return the MTime taking into account changes to the implicit function</para>
/// </summary>
  unsigned long GetMTime();


  // virtual void SetImplicitFunction (vtkImplicitFunction *);
/// <summary>
/// <para>Specify the implicit function for inside/outside checks.</para>
/// </summary>
  void SetImplicitFunction(vtkImplicitFunction^ arg0);


  // vtkImplicitFunction *GetImplicitFunction ();
/// <summary>
/// <para>Specify the implicit function for inside/outside checks.</para>
/// </summary>
  vtkImplicitFunction^ GetImplicitFunction();


  // void SetExtractInside (int );
/// <summary>
/// <para>Boolean controls whether to extract cells that are inside of implicit  function (ExtractInside == 1) or outside of implicit function  (ExtractInside == 0).</para>
/// </summary>
  void SetExtractInside(int arg0);


  // int GetExtractInside ();
/// <summary>
/// <para>Boolean controls whether to extract cells that are inside of implicit  function (ExtractInside == 1) or outside of implicit function  (ExtractInside == 0).</para>
/// </summary>
  int GetExtractInside();


  // void ExtractInsideOn ();
/// <summary>
/// <para>Boolean controls whether to extract cells that are inside of implicit  function (ExtractInside == 1) or outside of implicit function  (ExtractInside == 0).</para>
/// </summary>
  void ExtractInsideOn();


  // void ExtractInsideOff ();
/// <summary>
/// <para>Boolean controls whether to extract cells that are inside of implicit  function (ExtractInside == 1) or outside of implicit function  (ExtractInside == 0).</para>
/// </summary>
  void ExtractInsideOff();


  // void SetExtractBoundaryCells (int );
/// <summary>
/// <para>Boolean controls whether to extract cells that are partially inside. By default, ExtractBoundaryCells is off.</para>
/// </summary>
  void SetExtractBoundaryCells(int arg0);


  // int GetExtractBoundaryCells ();
/// <summary>
/// <para>Boolean controls whether to extract cells that are partially inside. By default, ExtractBoundaryCells is off.</para>
/// </summary>
  int GetExtractBoundaryCells();


  // void ExtractBoundaryCellsOn ();
/// <summary>
/// <para>Boolean controls whether to extract cells that are partially inside. By default, ExtractBoundaryCells is off.</para>
/// </summary>
  void ExtractBoundaryCellsOn();


  // void ExtractBoundaryCellsOff ();
/// <summary>
/// <para>Boolean controls whether to extract cells that are partially inside. By default, ExtractBoundaryCells is off.</para>
/// </summary>
  void ExtractBoundaryCellsOff();


// Did not wrap:  vtkExtractPolyDataGeometry (vtkImplicitFunction *fNULL);


// Did not wrap:  ~vtkExtractPolyDataGeometry ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkExtractPolyDataGeometry (const vtkExtractPolyDataGeometry &);


// Did not wrap:  void vtkExtractPolyDataGeometry 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkExtractPolyDataGeometry(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkExtractPolyDataGeometry(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkExtractPolyDataGeometry();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkExtractPolyDataGeometry();


};

} // end vtkGraphics
