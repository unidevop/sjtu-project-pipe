#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkRenderer;

public ref class vtkSelectVisiblePoints : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSelectVisiblePoints *NewInstance ();
  vtkSelectVisiblePoints^ NewInstance();


  // vtkSelectVisiblePoints *SafeDownCast (vtkObject* o);
  static vtkSelectVisiblePoints^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkSelectVisiblePoints *New ();


  // void SetRenderer (vtkRenderer *ren);if this Renderer ren this Renderer ren this Modified 
/// <summary>
/// <para>Specify the renderer in which the visibility computation is to be performed.</para>
/// </summary>
  void SetRenderer(vtkRenderer^ ren);


  // vtkRenderer *GetRenderer ();return this Renderer 
/// <summary>
/// <para>Set/Get the flag which enables selection in a rectangular display region.</para>
/// </summary>
  vtkRenderer^ GetRenderer();


  // void SetSelectionWindow (int );
/// <summary>
/// <para>Set/Get the flag which enables selection in a rectangular display region.</para>
/// </summary>
  void SetSelectionWindow(int arg0);


  // int GetSelectionWindow ();
/// <summary>
/// <para>Set/Get the flag which enables selection in a rectangular display region.</para>
/// </summary>
  int GetSelectionWindow();


  // void SelectionWindowOn ();
/// <summary>
/// <para>Set/Get the flag which enables selection in a rectangular display region.</para>
/// </summary>
  void SelectionWindowOn();


  // void SelectionWindowOff ();
/// <summary>
/// <para>Set/Get the flag which enables selection in a rectangular display region.</para>
/// </summary>
  void SelectionWindowOff();


  // void SetSelection (int , int , int , int );
/// <summary>
/// <para>Specify the selection window in display coordinates. You must specify a rectangular region using (xmin,xmax,ymin,ymax).</para>
/// </summary>
  void SetSelection(int arg0, int arg1, int arg2, int arg3);


  // void SetSelection (int  a[4]);
/// <summary>
/// <para>Specify the selection window in display coordinates. You must specify a rectangular region using (xmin,xmax,ymin,ymax).</para>
/// </summary>
  void SetSelection(array<int>^ a);


  // int  *GetSelection ();
/// <summary>
/// <para>Specify the selection window in display coordinates. You must specify a rectangular region using (xmin,xmax,ymin,ymax).</para>
/// </summary>
  array<int>^ GetSelection();


  // void SetSelectInvisible (int );
/// <summary>
/// <para>Set/Get the flag which enables inverse selection; i.e., invisible points are selected.</para>
/// </summary>
  void SetSelectInvisible(int arg0);


  // int GetSelectInvisible ();
/// <summary>
/// <para>Set/Get the flag which enables inverse selection; i.e., invisible points are selected.</para>
/// </summary>
  int GetSelectInvisible();


  // void SelectInvisibleOn ();
/// <summary>
/// <para>Set/Get the flag which enables inverse selection; i.e., invisible points are selected.</para>
/// </summary>
  void SelectInvisibleOn();


  // void SelectInvisibleOff ();
/// <summary>
/// <para>Set/Get the flag which enables inverse selection; i.e., invisible points are selected.</para>
/// </summary>
  void SelectInvisibleOff();


  // void SetTolerance (double );
/// <summary>
/// <para>Set/Get a tolerance to use to determine whether a point is visible. A tolerance is usually required because the conversion from world space to display space during rendering introduces numerical round-off.</para>
/// </summary>
  void SetTolerance(double arg0);


  // double GetToleranceMinValue ();
/// <summary>
/// <para>Set/Get a tolerance to use to determine whether a point is visible. A tolerance is usually required because the conversion from world space to display space during rendering introduces numerical round-off.</para>
/// </summary>
  double GetToleranceMinValue();


  // double GetToleranceMaxValue ();
/// <summary>
/// <para>Set/Get a tolerance to use to determine whether a point is visible. A tolerance is usually required because the conversion from world space to display space during rendering introduces numerical round-off.</para>
/// </summary>
  double GetToleranceMaxValue();


  // double GetTolerance ();
/// <summary>
/// <para>Set/Get a tolerance to use to determine whether a point is visible. A tolerance is usually required because the conversion from world space to display space during rendering introduces numerical round-off.</para>
/// </summary>
  double GetTolerance();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Return MTime also considering the renderer.</para>
/// </summary>
  unsigned long GetMTime();


// Did not wrap:  vtkSelectVisiblePoints ();


// Did not wrap:  ~vtkSelectVisiblePoints ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkSelectVisiblePoints (const vtkSelectVisiblePoints &);


// Did not wrap:  void vtkSelectVisiblePoints 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSelectVisiblePoints(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSelectVisiblePoints(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSelectVisiblePoints();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSelectVisiblePoints();


};

} // end vtkRendering
