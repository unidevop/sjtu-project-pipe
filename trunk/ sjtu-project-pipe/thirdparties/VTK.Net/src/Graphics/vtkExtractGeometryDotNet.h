#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkExtractGeometry : public vtkUnstructuredGridAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkExtractGeometry *NewInstance ();
  vtkExtractGeometry^ NewInstance();


  // vtkExtractGeometry *SafeDownCast (vtkObject* o);
  static vtkExtractGeometry^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkExtractGeometry *New ();


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


  // void SetExtractOnlyBoundaryCells (int );
/// <summary>
/// <para>Boolean controls whether to extract cells that are partially inside. By default, ExtractBoundaryCells is off.</para>
/// </summary>
  void SetExtractOnlyBoundaryCells(int arg0);


  // int GetExtractOnlyBoundaryCells ();
/// <summary>
/// <para>Boolean controls whether to extract cells that are partially inside. By default, ExtractBoundaryCells is off.</para>
/// </summary>
  int GetExtractOnlyBoundaryCells();


  // void ExtractOnlyBoundaryCellsOn ();
/// <summary>
/// <para>Boolean controls whether to extract cells that are partially inside. By default, ExtractBoundaryCells is off.</para>
/// </summary>
  void ExtractOnlyBoundaryCellsOn();


  // void ExtractOnlyBoundaryCellsOff ();
/// <summary>
/// <para>Boolean controls whether to extract cells that are partially inside. By default, ExtractBoundaryCells is off.</para>
/// </summary>
  void ExtractOnlyBoundaryCellsOff();


// Did not wrap:  vtkExtractGeometry (vtkImplicitFunction *fNULL);


// Did not wrap:  ~vtkExtractGeometry ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkExtractGeometry (const vtkExtractGeometry &);


// Did not wrap:  void vtkExtractGeometry 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkExtractGeometry(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkExtractGeometry(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkExtractGeometry();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkExtractGeometry();


};

} // end vtkGraphics
