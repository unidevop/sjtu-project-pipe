#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkCellCenters : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCellCenters *NewInstance ();
  vtkCellCenters^ NewInstance();


  // vtkCellCenters *SafeDownCast (vtkObject* o);
  static vtkCellCenters^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkCellCenters *New ();


  // void SetVertexCells (int );
/// <summary>
/// <para>Enable/disable the generation of vertex cells.</para>
/// </summary>
  void SetVertexCells(int arg0);


  // int GetVertexCells ();
/// <summary>
/// <para>Enable/disable the generation of vertex cells.</para>
/// </summary>
  int GetVertexCells();


  // void VertexCellsOn ();
/// <summary>
/// <para>Enable/disable the generation of vertex cells.</para>
/// </summary>
  void VertexCellsOn();


  // void VertexCellsOff ();
/// <summary>
/// <para>Enable/disable the generation of vertex cells.</para>
/// </summary>
  void VertexCellsOff();


// Did not wrap:  vtkCellCenters ();


// Did not wrap:  ~vtkCellCenters ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkCellCenters (const vtkCellCenters &);


// Did not wrap:  void vtkCellCenters 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCellCenters(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCellCenters(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCellCenters();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCellCenters();


};

} // end vtkGraphics
