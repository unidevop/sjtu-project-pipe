#pragma once

// managed includes
#include "vtkMapperDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkActor;
ref class vtkRenderer;

public ref class vtkPolyDataMapper : public vtkMapper
{

public:
// Did not wrap:  static vtkPolyDataMapper *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPolyDataMapper *NewInstance ();
  vtkPolyDataMapper^ NewInstance();


  // vtkPolyDataMapper *SafeDownCast (vtkObject* o);
  static vtkPolyDataMapper^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void RenderPiece (vtkRenderer *ren, vtkActor *act) = 0;
/// <summary>
/// <para>Implemented by sub classes. Actual rendering is done here.</para>
/// </summary>
  void RenderPiece(vtkRenderer^ ren, vtkActor^ act);


  // virtual void Render (vtkRenderer *ren, vtkActor *act);
/// <summary>
/// <para>This calls RenderPiece (in a for loop is streaming is necessary).</para>
/// </summary>
  void Render(vtkRenderer^ ren, vtkActor^ act);


  // void SetInput (vtkPolyData *in);
/// <summary>
/// <para>Specify the input data to map.</para>
/// </summary>
  void SetInput(vtkPolyData^ in);


  // vtkPolyData *GetInput ();
/// <summary>
/// <para>Specify the input data to map.</para>
/// </summary>
  vtkPolyData^ GetInput();


  // void Update ();
/// <summary>
/// <para>Update that sets the update piece first.</para>
/// </summary>
  void Update();


  // void SetPiece (int );
/// <summary>
/// <para>If you want only a part of the data, specify by setting the piece.</para>
/// </summary>
  void SetPiece(int arg0);


  // int GetPiece ();
/// <summary>
/// <para>If you want only a part of the data, specify by setting the piece.</para>
/// </summary>
  int GetPiece();


  // void SetNumberOfPieces (int );
/// <summary>
/// <para>If you want only a part of the data, specify by setting the piece.</para>
/// </summary>
  void SetNumberOfPieces(int arg0);


  // int GetNumberOfPieces ();
/// <summary>
/// <para>If you want only a part of the data, specify by setting the piece.</para>
/// </summary>
  int GetNumberOfPieces();


  // void SetNumberOfSubPieces (int );
/// <summary>
/// <para>If you want only a part of the data, specify by setting the piece.</para>
/// </summary>
  void SetNumberOfSubPieces(int arg0);


  // int GetNumberOfSubPieces ();
/// <summary>
/// <para>If you want only a part of the data, specify by setting the piece.</para>
/// </summary>
  int GetNumberOfSubPieces();


  // void SetGhostLevel (int );
/// <summary>
/// <para>Set the number of ghost cells to return.</para>
/// </summary>
  void SetGhostLevel(int arg0);


  // int GetGhostLevel ();
/// <summary>
/// <para>Set the number of ghost cells to return.</para>
/// </summary>
  int GetGhostLevel();


  // virtual double *GetBounds ();
/// <summary>
/// <para>Return bounding box (array of six doubles) of data expressed as (xmin,xmax, ymin,ymax, zmin,zmax).</para>
/// </summary>
  array<double>^ GetBounds();


  // virtual void GetBounds (double bounds[6]);this Superclass GetBounds bounds 
/// <summary>
/// <para>Return bounding box (array of six doubles) of data expressed as (xmin,xmax, ymin,ymax, zmin,zmax).</para>
/// </summary>
  void GetBounds(array<double>^ bounds);


  // void ShallowCopy (vtkAbstractMapper *m);
/// <summary>
/// <para>Make a shallow copy of this mapper.</para>
/// </summary>
  void ShallowCopy(vtkAbstractMapper^ m);


// Did not wrap:  vtkPolyDataMapper ();


// Did not wrap:  ~vtkPolyDataMapper ();


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkPolyDataMapper (const vtkPolyDataMapper &);


// Did not wrap:  void vtkPolyDataMapper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPolyDataMapper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPolyDataMapper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPolyDataMapper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPolyDataMapper();


};

} // end vtkRendering
