#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkTextProperty;

public ref class vtkParallelCoordinatesActor : public vtkActor2D
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkParallelCoordinatesActor *NewInstance ();
  vtkParallelCoordinatesActor^ NewInstance();


  // vtkParallelCoordinatesActor *SafeDownCast (vtkObject* o);
  static vtkParallelCoordinatesActor^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkParallelCoordinatesActor *New ();


  // void SetIndependentVariables (int );
/// <summary>
/// <para>Specify whether to use the rows or columns as independent variables. If columns, then each row represents a separate point. If rows, then  each column represents a separate point.</para>
/// </summary>
  void SetIndependentVariables(int arg0);


  // int GetIndependentVariablesMinValue ();
/// <summary>
/// <para>Specify whether to use the rows or columns as independent variables. If columns, then each row represents a separate point. If rows, then  each column represents a separate point.</para>
/// </summary>
  int GetIndependentVariablesMinValue();


  // int GetIndependentVariablesMaxValue ();
/// <summary>
/// <para>Specify whether to use the rows or columns as independent variables. If columns, then each row represents a separate point. If rows, then  each column represents a separate point.</para>
/// </summary>
  int GetIndependentVariablesMaxValue();


  // int GetIndependentVariables ();
/// <summary>
/// <para>Specify whether to use the rows or columns as independent variables. If columns, then each row represents a separate point. If rows, then  each column represents a separate point.</para>
/// </summary>
  int GetIndependentVariables();


  // void SetIndependentVariablesToColumns ();this SetIndependentVariables VTK_IV_COLUMN 
/// <summary>
/// <para>Specify whether to use the rows or columns as independent variables. If columns, then each row represents a separate point. If rows, then  each column represents a separate point.</para>
/// </summary>
  void SetIndependentVariablesToColumns();


  // void SetIndependentVariablesToRows ();this SetIndependentVariables VTK_IV_ROW 
/// <summary>
/// <para>Specify whether to use the rows or columns as independent variables. If columns, then each row represents a separate point. If rows, then  each column represents a separate point.</para>
/// </summary>
  void SetIndependentVariablesToRows();


  // void SetTitle (char *);
/// <summary>
/// <para>Set/Get the title of the parallel coordinates plot.</para>
/// </summary>
  void SetTitle(System::String^ arg0);


  // char *GetTitle ();
/// <summary>
/// <para>Set/Get the title of the parallel coordinates plot.</para>
/// </summary>
  System::String^ GetTitle();


  // void SetNumberOfLabels (int );
/// <summary>
/// <para>Set/Get the number of annotation labels to show along each axis. This values is a suggestion: the number of labels may vary depending on the particulars of the data.</para>
/// </summary>
  void SetNumberOfLabels(int arg0);


  // int GetNumberOfLabelsMinValue ();
/// <summary>
/// <para>Set/Get the number of annotation labels to show along each axis. This values is a suggestion: the number of labels may vary depending on the particulars of the data.</para>
/// </summary>
  int GetNumberOfLabelsMinValue();


  // int GetNumberOfLabelsMaxValue ();
/// <summary>
/// <para>Set/Get the number of annotation labels to show along each axis. This values is a suggestion: the number of labels may vary depending on the particulars of the data.</para>
/// </summary>
  int GetNumberOfLabelsMaxValue();


  // int GetNumberOfLabels ();
/// <summary>
/// <para>Set/Get the number of annotation labels to show along each axis. This values is a suggestion: the number of labels may vary depending on the particulars of the data.</para>
/// </summary>
  int GetNumberOfLabels();


  // void SetLabelFormat (char *);
/// <summary>
/// <para>Set/Get the format with which to print the labels on the axes.</para>
/// </summary>
  void SetLabelFormat(System::String^ arg0);


  // char *GetLabelFormat ();
/// <summary>
/// <para>Set/Get the format with which to print the labels on the axes.</para>
/// </summary>
  System::String^ GetLabelFormat();


  // virtual void SetTitleTextProperty (vtkTextProperty *p);
/// <summary>
/// <para>Set/Get the title text property.</para>
/// </summary>
  void SetTitleTextProperty(vtkTextProperty^ p);


  // vtkTextProperty *GetTitleTextProperty ();
/// <summary>
/// <para>Set/Get the title text property.</para>
/// </summary>
  vtkTextProperty^ GetTitleTextProperty();


  // virtual void SetLabelTextProperty (vtkTextProperty *p);
/// <summary>
/// <para>Set/Get the labels text property.</para>
/// </summary>
  void SetLabelTextProperty(vtkTextProperty^ p);


  // vtkTextProperty *GetLabelTextProperty ();
/// <summary>
/// <para>Set/Get the labels text property.</para>
/// </summary>
  vtkTextProperty^ GetLabelTextProperty();


  // int RenderOpaqueGeometry (vtkViewport *);
/// <summary>
/// <para>Draw the parallel coordinates plot.</para>
/// </summary>
  int RenderOpaqueGeometry(vtkViewport^ arg0);


  // int RenderOverlay (vtkViewport *);
/// <summary>
/// <para>Draw the parallel coordinates plot.</para>
/// </summary>
  int RenderOverlay(vtkViewport^ arg0);


  // int RenderTranslucentGeometry (vtkViewport *);return 
/// <summary>
/// <para>Set the input to the parallel coordinates actor.</para>
/// </summary>
  int RenderTranslucentGeometry(vtkViewport^ arg0);


  // virtual void SetInput (vtkDataObject *);
/// <summary>
/// <para>Set the input to the parallel coordinates actor.</para>
/// </summary>
  void SetInput(vtkDataObject^ arg0);


  // vtkDataObject *GetInput ();
/// <summary>
/// <para>Remove a dataset from the list of data to append.</para>
/// </summary>
  vtkDataObject^ GetInput();


  // void ReleaseGraphicsResources (vtkWindow *);
/// <summary>
/// <para>Release any graphics resources that are being consumed by this actor. The parameter window could be used to determine which graphic resources to release.</para>
/// </summary>
  void ReleaseGraphicsResources(vtkWindow^ arg0);


// Did not wrap:  vtkParallelCoordinatesActor ();


// Did not wrap:  ~vtkParallelCoordinatesActor ();


// Did not wrap:  void Initialize ();


// Did not wrap:  int PlaceAxes (vtkViewport *viewport, int *size);


// Did not wrap:  vtkParallelCoordinatesActor (const vtkParallelCoordinatesActor &);


// Did not wrap:  void vtkParallelCoordinatesActor 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkParallelCoordinatesActor(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkParallelCoordinatesActor(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkParallelCoordinatesActor();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkParallelCoordinatesActor();


};

} // end vtkRendering
