#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkArcPlotter : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkArcPlotter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkArcPlotter *NewInstance ();
  vtkArcPlotter^ NewInstance();


  // vtkArcPlotter *SafeDownCast (vtkObject* o);
  static vtkArcPlotter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetCamera (vtkCamera *);
/// <summary>
/// <para>Specify a camera used to orient the plot along the arc. If no camera is specified, then the orientation of the plot is arbitrary.</para>
/// </summary>
  void SetCamera(vtkCamera^ arg0);


  // vtkCamera *GetCamera ();
/// <summary>
/// <para>Specify a camera used to orient the plot along the arc. If no camera is specified, then the orientation of the plot is arbitrary.</para>
/// </summary>
  vtkCamera^ GetCamera();


  // void SetPlotMode (int );
/// <summary>
/// <para>Specify which data to plot: scalars, vectors, normals, texture coords, tensors, or field data. If the data has more than one component, use the method SetPlotComponent to control which component to plot.</para>
/// </summary>
  void SetPlotMode(int arg0);


  // int GetPlotMode ();
/// <summary>
/// <para>Specify which data to plot: scalars, vectors, normals, texture coords, tensors, or field data. If the data has more than one component, use the method SetPlotComponent to control which component to plot.</para>
/// </summary>
  int GetPlotMode();


  // void SetPlotModeToPlotScalars ();this SetPlotMode VTK_PLOT_SCALARS 
/// <summary>
/// <para>Specify which data to plot: scalars, vectors, normals, texture coords, tensors, or field data. If the data has more than one component, use the method SetPlotComponent to control which component to plot.</para>
/// </summary>
  void SetPlotModeToPlotScalars();


  // void SetPlotModeToPlotVectors ();this SetPlotMode VTK_PLOT_VECTORS 
/// <summary>
/// <para>Specify which data to plot: scalars, vectors, normals, texture coords, tensors, or field data. If the data has more than one component, use the method SetPlotComponent to control which component to plot.</para>
/// </summary>
  void SetPlotModeToPlotVectors();


  // void SetPlotModeToPlotNormals ();this SetPlotMode VTK_PLOT_NORMALS 
/// <summary>
/// <para>Specify which data to plot: scalars, vectors, normals, texture coords, tensors, or field data. If the data has more than one component, use the method SetPlotComponent to control which component to plot.</para>
/// </summary>
  void SetPlotModeToPlotNormals();


  // void SetPlotModeToPlotTCoords ();this SetPlotMode VTK_PLOT_TCOORDS 
/// <summary>
/// <para>Specify which data to plot: scalars, vectors, normals, texture coords, tensors, or field data. If the data has more than one component, use the method SetPlotComponent to control which component to plot.</para>
/// </summary>
  void SetPlotModeToPlotTCoords();


  // void SetPlotModeToPlotTensors ();this SetPlotMode VTK_PLOT_TENSORS 
/// <summary>
/// <para>Specify which data to plot: scalars, vectors, normals, texture coords, tensors, or field data. If the data has more than one component, use the method SetPlotComponent to control which component to plot.</para>
/// </summary>
  void SetPlotModeToPlotTensors();


  // void SetPlotModeToPlotFieldData ();this SetPlotMode VTK_PLOT_FIELD_DATA 
/// <summary>
/// <para>Specify which data to plot: scalars, vectors, normals, texture coords, tensors, or field data. If the data has more than one component, use the method SetPlotComponent to control which component to plot.</para>
/// </summary>
  void SetPlotModeToPlotFieldData();


  // void SetPlotComponent (int );
/// <summary>
/// <para>Set/Get the component number to plot if the data has more than one  component. If the value of the plot component is == (-1), then all the components will be plotted.</para>
/// </summary>
  void SetPlotComponent(int arg0);


  // int GetPlotComponent ();
/// <summary>
/// <para>Set/Get the component number to plot if the data has more than one  component. If the value of the plot component is == (-1), then all the components will be plotted.</para>
/// </summary>
  int GetPlotComponent();


  // void SetRadius (double );
/// <summary>
/// <para>Set the radius of the &quot;median&quot; value of the first plotted component.</para>
/// </summary>
  void SetRadius(double arg0);


  // double GetRadiusMinValue ();
/// <summary>
/// <para>Set the radius of the &quot;median&quot; value of the first plotted component.</para>
/// </summary>
  double GetRadiusMinValue();


  // double GetRadiusMaxValue ();
/// <summary>
/// <para>Set the radius of the &quot;median&quot; value of the first plotted component.</para>
/// </summary>
  double GetRadiusMaxValue();


  // double GetRadius ();
/// <summary>
/// <para>Set the radius of the &quot;median&quot; value of the first plotted component.</para>
/// </summary>
  double GetRadius();


  // void SetHeight (double );
/// <summary>
/// <para>Set the height of the plot. (The radius combined with the height define the location of the plot relative to the generating polyline.)</para>
/// </summary>
  void SetHeight(double arg0);


  // double GetHeightMinValue ();
/// <summary>
/// <para>Set the height of the plot. (The radius combined with the height define the location of the plot relative to the generating polyline.)</para>
/// </summary>
  double GetHeightMinValue();


  // double GetHeightMaxValue ();
/// <summary>
/// <para>Set the height of the plot. (The radius combined with the height define the location of the plot relative to the generating polyline.)</para>
/// </summary>
  double GetHeightMaxValue();


  // double GetHeight ();
/// <summary>
/// <para>Set the height of the plot. (The radius combined with the height define the location of the plot relative to the generating polyline.)</para>
/// </summary>
  double GetHeight();


  // void SetOffset (double );
/// <summary>
/// <para>Specify an offset that translates each subsequent plot (if there is more than one component plotted) from the defining arc (i.e., polyline).</para>
/// </summary>
  void SetOffset(double arg0);


  // double GetOffsetMinValue ();
/// <summary>
/// <para>Specify an offset that translates each subsequent plot (if there is more than one component plotted) from the defining arc (i.e., polyline).</para>
/// </summary>
  double GetOffsetMinValue();


  // double GetOffsetMaxValue ();
/// <summary>
/// <para>Specify an offset that translates each subsequent plot (if there is more than one component plotted) from the defining arc (i.e., polyline).</para>
/// </summary>
  double GetOffsetMaxValue();


  // double GetOffset ();
/// <summary>
/// <para>Specify an offset that translates each subsequent plot (if there is more than one component plotted) from the defining arc (i.e., polyline).</para>
/// </summary>
  double GetOffset();


  // void SetUseDefaultNormal (int );
/// <summary>
/// <para>Set a boolean to control whether to use default normals. By default, normals are automatically computed from the generating polyline and camera.</para>
/// </summary>
  void SetUseDefaultNormal(int arg0);


  // int GetUseDefaultNormal ();
/// <summary>
/// <para>Set a boolean to control whether to use default normals. By default, normals are automatically computed from the generating polyline and camera.</para>
/// </summary>
  int GetUseDefaultNormal();


  // void UseDefaultNormalOn ();
/// <summary>
/// <para>Set a boolean to control whether to use default normals. By default, normals are automatically computed from the generating polyline and camera.</para>
/// </summary>
  void UseDefaultNormalOn();


  // void UseDefaultNormalOff ();
/// <summary>
/// <para>Set a boolean to control whether to use default normals. By default, normals are automatically computed from the generating polyline and camera.</para>
/// </summary>
  void UseDefaultNormalOff();


  // void SetDefaultNormal (float , float , float );
/// <summary>
/// <para>Set the default normal to use if you do not wish automatic normal calculation. The arc plot will be generated using this normal.</para>
/// </summary>
  void SetDefaultNormal(float arg0, float arg1, float arg2);


  // void SetDefaultNormal (float  a[3]);
/// <summary>
/// <para>Set the default normal to use if you do not wish automatic normal calculation. The arc plot will be generated using this normal.</para>
/// </summary>
  void SetDefaultNormal(array<float>^ a);


  // float  *GetDefaultNormal ();
/// <summary>
/// <para>Set the default normal to use if you do not wish automatic normal calculation. The arc plot will be generated using this normal.</para>
/// </summary>
  array<float>^ GetDefaultNormal();


  // void SetFieldDataArray (int );
/// <summary>
/// <para>Set/Get the field data array to plot. This instance variable is only applicable if field data is plotted.</para>
/// </summary>
  void SetFieldDataArray(int arg0);


  // int GetFieldDataArrayMinValue ();
/// <summary>
/// <para>Set/Get the field data array to plot. This instance variable is only applicable if field data is plotted.</para>
/// </summary>
  int GetFieldDataArrayMinValue();


  // int GetFieldDataArrayMaxValue ();
/// <summary>
/// <para>Set/Get the field data array to plot. This instance variable is only applicable if field data is plotted.</para>
/// </summary>
  int GetFieldDataArrayMaxValue();


  // int GetFieldDataArray ();
/// <summary>
/// <para>Set/Get the field data array to plot. This instance variable is only applicable if field data is plotted.</para>
/// </summary>
  int GetFieldDataArray();


  // unsigned long GetMTime ();
/// <summary>
/// <para>New GetMTime because of camera dependency.</para>
/// </summary>
  unsigned long GetMTime();


// Did not wrap:  vtkArcPlotter ();


// Did not wrap:  ~vtkArcPlotter ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int OffsetPoint (vtkIdType ptId, vtkPoints *inPts, double n[3], vtkPoints *newPts, double offset, double *range, double val);


// Did not wrap:  int ProcessComponents (vtkIdType numPts, vtkPointData *pd);


// Did not wrap:  vtkArcPlotter (const vtkArcPlotter &);


// Did not wrap:  void vtkArcPlotter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkArcPlotter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkArcPlotter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkArcPlotter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkArcPlotter();


};

} // end vtkHybrid
