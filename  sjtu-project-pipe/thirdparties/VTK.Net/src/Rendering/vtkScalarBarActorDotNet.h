#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkTextProperty;

public ref class vtkScalarBarActor : public vtkActor2D
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkScalarBarActor *NewInstance ();
  vtkScalarBarActor^ NewInstance();


  // vtkScalarBarActor *SafeDownCast (vtkObject* o);
  static vtkScalarBarActor^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkScalarBarActor *New ();


  // int RenderOpaqueGeometry (vtkViewport *viewport);
/// <summary>
/// <para>Draw the scalar bar and annotation text to the screen.</para>
/// </summary>
  int RenderOpaqueGeometry(vtkViewport^ viewport);


  // int RenderTranslucentGeometry (vtkViewport *);return 
/// <summary>
/// <para>Draw the scalar bar and annotation text to the screen.</para>
/// </summary>
  int RenderTranslucentGeometry(vtkViewport^ arg0);


  // int RenderOverlay (vtkViewport *viewport);
/// <summary>
/// <para>Draw the scalar bar and annotation text to the screen.</para>
/// </summary>
  int RenderOverlay(vtkViewport^ viewport);


  // virtual void ReleaseGraphicsResources (vtkWindow *);
/// <summary>
/// <para>Release any graphics resources that are being consumed by this actor. The parameter window could be used to determine which graphic resources to release.</para>
/// </summary>
  void ReleaseGraphicsResources(vtkWindow^ arg0);


  // virtual void SetLookupTable (vtkScalarsToColors *);
/// <summary>
/// <para>Set/Get the vtkLookupTable to use. The lookup table specifies the number of colors to use in the table (if not overridden), as well as the scalar range.</para>
/// </summary>
  void SetLookupTable(vtkScalarsToColors^ arg0);


  // vtkScalarsToColors *GetLookupTable ();
/// <summary>
/// <para>Set/Get the vtkLookupTable to use. The lookup table specifies the number of colors to use in the table (if not overridden), as well as the scalar range.</para>
/// </summary>
  vtkScalarsToColors^ GetLookupTable();


  // void SetMaximumNumberOfColors (int );
/// <summary>
/// <para>Set/Get the maximum number of scalar bar segments to show. This may differ from the number of colors in the lookup table, in which case the colors are samples from the lookup table.</para>
/// </summary>
  void SetMaximumNumberOfColors(int arg0);


  // int GetMaximumNumberOfColorsMinValue ();
/// <summary>
/// <para>Set/Get the maximum number of scalar bar segments to show. This may differ from the number of colors in the lookup table, in which case the colors are samples from the lookup table.</para>
/// </summary>
  int GetMaximumNumberOfColorsMinValue();


  // int GetMaximumNumberOfColorsMaxValue ();
/// <summary>
/// <para>Set/Get the maximum number of scalar bar segments to show. This may differ from the number of colors in the lookup table, in which case the colors are samples from the lookup table.</para>
/// </summary>
  int GetMaximumNumberOfColorsMaxValue();


  // int GetMaximumNumberOfColors ();
/// <summary>
/// <para>Set/Get the maximum number of scalar bar segments to show. This may differ from the number of colors in the lookup table, in which case the colors are samples from the lookup table.</para>
/// </summary>
  int GetMaximumNumberOfColors();


  // void SetNumberOfLabels (int );
/// <summary>
/// <para>Set/Get the number of annotation labels to show.</para>
/// </summary>
  void SetNumberOfLabels(int arg0);


  // int GetNumberOfLabelsMinValue ();
/// <summary>
/// <para>Set/Get the number of annotation labels to show.</para>
/// </summary>
  int GetNumberOfLabelsMinValue();


  // int GetNumberOfLabelsMaxValue ();
/// <summary>
/// <para>Set/Get the number of annotation labels to show.</para>
/// </summary>
  int GetNumberOfLabelsMaxValue();


  // int GetNumberOfLabels ();
/// <summary>
/// <para>Set/Get the number of annotation labels to show.</para>
/// </summary>
  int GetNumberOfLabels();


  // void SetOrientation (int );
/// <summary>
/// <para>Control the orientation of the scalar bar.</para>
/// </summary>
  void SetOrientation(int arg0);


  // int GetOrientationMinValue ();
/// <summary>
/// <para>Control the orientation of the scalar bar.</para>
/// </summary>
  int GetOrientationMinValue();


  // int GetOrientationMaxValue ();
/// <summary>
/// <para>Control the orientation of the scalar bar.</para>
/// </summary>
  int GetOrientationMaxValue();


  // int GetOrientation ();
/// <summary>
/// <para>Control the orientation of the scalar bar.</para>
/// </summary>
  int GetOrientation();


  // void SetOrientationToHorizontal ();this SetOrientation VTK_ORIENT_HORIZONTAL 
/// <summary>
/// <para>Control the orientation of the scalar bar.</para>
/// </summary>
  void SetOrientationToHorizontal();


  // void SetOrientationToVertical ();this SetOrientation VTK_ORIENT_VERTICAL 
/// <summary>
/// <para>Control the orientation of the scalar bar.</para>
/// </summary>
  void SetOrientationToVertical();


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


  // void SetLabelFormat (char *);
/// <summary>
/// <para>Set/Get the format with which to print the labels on the scalar bar.</para>
/// </summary>
  void SetLabelFormat(System::String^ arg0);


  // char *GetLabelFormat ();
/// <summary>
/// <para>Set/Get the format with which to print the labels on the scalar bar.</para>
/// </summary>
  System::String^ GetLabelFormat();


  // void SetTitle (char *);
/// <summary>
/// <para>Set/Get the title of the scalar bar actor,</para>
/// </summary>
  void SetTitle(System::String^ arg0);


  // char *GetTitle ();
/// <summary>
/// <para>Set/Get the title of the scalar bar actor,</para>
/// </summary>
  System::String^ GetTitle();


  // void ShallowCopy (vtkProp *prop);
/// <summary>
/// <para>Shallow copy of a scalar bar actor. Overloads the virtual vtkProp method.</para>
/// </summary>
  void ShallowCopy(vtkProp^ prop);


// Did not wrap:  vtkScalarBarActor ();


// Did not wrap:  ~vtkScalarBarActor ();


// Did not wrap:  virtual void AllocateAndSizeLabels (int *labelSize, int *size, vtkViewport *viewport, double *range);


// Did not wrap:  void SizeTitle (int *titleSize, int *size, vtkViewport *viewport);


// Did not wrap:  vtkScalarBarActor (const vtkScalarBarActor &);


// Did not wrap:  void vtkScalarBarActor 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkScalarBarActor(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkScalarBarActor(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkScalarBarActor();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkScalarBarActor();


};

} // end vtkRendering
