#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkLegendBoxActor;

public ref class vtkXYPlotActor : public vtkActor2D
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXYPlotActor *NewInstance ();
  vtkXYPlotActor^ NewInstance();


  // vtkXYPlotActor *SafeDownCast (vtkObject* o);
  static vtkXYPlotActor^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkXYPlotActor *New ();


  // void AddInput (vtkDataSet *in, const char *arrayName, int component);
/// <summary>
/// <para>Add a dataset to the list of data to append. The array name specifies which point array to plot.  If the array name is NULL, then the default scalars are used.  The array can have multiple components, but only the first component is ploted.</para>
/// </summary>
  void AddInput(vtkDataSet^ in, System::String^ arrayName, int component);


  // void AddInput (vtkDataSet *in);this AddInput in NULL 
/// <summary>
/// <para>Remove a dataset from the list of data to append.</para>
/// </summary>
  void AddInput(vtkDataSet^ in);


  // void RemoveInput (vtkDataSet *in, const char *arrayName, int component);
/// <summary>
/// <para>Remove a dataset from the list of data to append.</para>
/// </summary>
  void RemoveInput(vtkDataSet^ in, System::String^ arrayName, int component);


  // void RemoveInput (vtkDataSet *in);this RemoveInput in NULL 
/// <summary>
/// <para>This removes all of the data set inputs,  but does not change the data object inputs.</para>
/// </summary>
  void RemoveInput(vtkDataSet^ in);


  // void RemoveAllInputs ();
/// <summary>
/// <para>This removes all of the data set inputs,  but does not change the data object inputs.</para>
/// </summary>
  void RemoveAllInputs();


  // vtkDataSetCollection *GetInputList ();return this InputList 
/// <summary>
/// <para>If plotting points by value, which component to use to determine the value. This sets a value per each input dataset (i.e., the ith dataset).</para>
/// </summary>
  vtkDataSetCollection^ GetInputList();


  // void SetPointComponent (int i, int comp);
/// <summary>
/// <para>If plotting points by value, which component to use to determine the value. This sets a value per each input dataset (i.e., the ith dataset).</para>
/// </summary>
  void SetPointComponent(int i, int comp);


  // int GetPointComponent (int i);
/// <summary>
/// <para>If plotting points by value, which component to use to determine the value. This sets a value per each input dataset (i.e., the ith dataset).</para>
/// </summary>
  int GetPointComponent(int i);


  // void SetXValues (int );
/// <summary>
/// <para>Specify how the independent (x) variable is computed from the points. The independent variable can be the scalar/point index (i.e., point id), the accumulated arc length along the points, the normalized arc length, or by component value. If plotting datasets (e.g., points), the value that is used is specified by the PointComponent ivar.  (Note: these methods also control how field data is plotted. Field data is usually plotted by value or index, if plotting length 1-dimensional length measures are used.)</para>
/// </summary>
  void SetXValues(int arg0);


  // int GetXValuesMinValue ();
/// <summary>
/// <para>Specify how the independent (x) variable is computed from the points. The independent variable can be the scalar/point index (i.e., point id), the accumulated arc length along the points, the normalized arc length, or by component value. If plotting datasets (e.g., points), the value that is used is specified by the PointComponent ivar.  (Note: these methods also control how field data is plotted. Field data is usually plotted by value or index, if plotting length 1-dimensional length measures are used.)</para>
/// </summary>
  int GetXValuesMinValue();


  // int GetXValuesMaxValue ();
/// <summary>
/// <para>Specify how the independent (x) variable is computed from the points. The independent variable can be the scalar/point index (i.e., point id), the accumulated arc length along the points, the normalized arc length, or by component value. If plotting datasets (e.g., points), the value that is used is specified by the PointComponent ivar.  (Note: these methods also control how field data is plotted. Field data is usually plotted by value or index, if plotting length 1-dimensional length measures are used.)</para>
/// </summary>
  int GetXValuesMaxValue();


  // int GetXValues ();
/// <summary>
/// <para>Specify how the independent (x) variable is computed from the points. The independent variable can be the scalar/point index (i.e., point id), the accumulated arc length along the points, the normalized arc length, or by component value. If plotting datasets (e.g., points), the value that is used is specified by the PointComponent ivar.  (Note: these methods also control how field data is plotted. Field data is usually plotted by value or index, if plotting length 1-dimensional length measures are used.)</para>
/// </summary>
  int GetXValues();


  // void SetXValuesToIndex ();this SetXValues VTK_XYPLOT_INDEX 
/// <summary>
/// <para>Specify how the independent (x) variable is computed from the points. The independent variable can be the scalar/point index (i.e., point id), the accumulated arc length along the points, the normalized arc length, or by component value. If plotting datasets (e.g., points), the value that is used is specified by the PointComponent ivar.  (Note: these methods also control how field data is plotted. Field data is usually plotted by value or index, if plotting length 1-dimensional length measures are used.)</para>
/// </summary>
  void SetXValuesToIndex();


  // void SetXValuesToArcLength ();this SetXValues VTK_XYPLOT_ARC_LENGTH 
/// <summary>
/// <para>Specify how the independent (x) variable is computed from the points. The independent variable can be the scalar/point index (i.e., point id), the accumulated arc length along the points, the normalized arc length, or by component value. If plotting datasets (e.g., points), the value that is used is specified by the PointComponent ivar.  (Note: these methods also control how field data is plotted. Field data is usually plotted by value or index, if plotting length 1-dimensional length measures are used.)</para>
/// </summary>
  void SetXValuesToArcLength();


  // void SetXValuesToNormalizedArcLength ();this SetXValues VTK_XYPLOT_NORMALIZED_ARC_LENGTH 
/// <summary>
/// <para>Specify how the independent (x) variable is computed from the points. The independent variable can be the scalar/point index (i.e., point id), the accumulated arc length along the points, the normalized arc length, or by component value. If plotting datasets (e.g., points), the value that is used is specified by the PointComponent ivar.  (Note: these methods also control how field data is plotted. Field data is usually plotted by value or index, if plotting length 1-dimensional length measures are used.)</para>
/// </summary>
  void SetXValuesToNormalizedArcLength();


  // void SetXValuesToValue ();this SetXValues VTK_XYPLOT_VALUE 
/// <summary>
/// <para>Specify how the independent (x) variable is computed from the points. The independent variable can be the scalar/point index (i.e., point id), the accumulated arc length along the points, the normalized arc length, or by component value. If plotting datasets (e.g., points), the value that is used is specified by the PointComponent ivar.  (Note: these methods also control how field data is plotted. Field data is usually plotted by value or index, if plotting length 1-dimensional length measures are used.)</para>
/// </summary>
  void SetXValuesToValue();


  // const char *GetXValuesAsString ();
/// <summary>
/// <para>Specify how the independent (x) variable is computed from the points. The independent variable can be the scalar/point index (i.e., point id), the accumulated arc length along the points, the normalized arc length, or by component value. If plotting datasets (e.g., points), the value that is used is specified by the PointComponent ivar.  (Note: these methods also control how field data is plotted. Field data is usually plotted by value or index, if plotting length 1-dimensional length measures are used.)</para>
/// </summary>
  System::String^ GetXValuesAsString();


  // void AddDataObjectInput (vtkDataObject *in);
/// <summary>
/// <para>Add a dataset to the list of data to append.</para>
/// </summary>
  void AddDataObjectInput(vtkDataObject^ in);


  // void RemoveDataObjectInput (vtkDataObject *in);
/// <summary>
/// <para>Remove a dataset from the list of data to append.</para>
/// </summary>
  void RemoveDataObjectInput(vtkDataObject^ in);


  // vtkDataObjectCollection *GetDataObjectInputList ();return this DataObjectInputList 
/// <summary>
/// <para>Indicate whether to plot rows or columns. If plotting rows, then the dependent variables is taken from a specified row, versus rows (y). </para>
/// </summary>
  vtkDataObjectCollection^ GetDataObjectInputList();


  // void SetDataObjectPlotMode (int );
/// <summary>
/// <para>Indicate whether to plot rows or columns. If plotting rows, then the dependent variables is taken from a specified row, versus rows (y). </para>
/// </summary>
  void SetDataObjectPlotMode(int arg0);


  // int GetDataObjectPlotModeMinValue ();
/// <summary>
/// <para>Indicate whether to plot rows or columns. If plotting rows, then the dependent variables is taken from a specified row, versus rows (y). </para>
/// </summary>
  int GetDataObjectPlotModeMinValue();


  // int GetDataObjectPlotModeMaxValue ();
/// <summary>
/// <para>Indicate whether to plot rows or columns. If plotting rows, then the dependent variables is taken from a specified row, versus rows (y). </para>
/// </summary>
  int GetDataObjectPlotModeMaxValue();


  // int GetDataObjectPlotMode ();
/// <summary>
/// <para>Indicate whether to plot rows or columns. If plotting rows, then the dependent variables is taken from a specified row, versus rows (y). </para>
/// </summary>
  int GetDataObjectPlotMode();


  // void SetDataObjectPlotModeToRows ();this SetDataObjectPlotMode VTK_XYPLOT_ROW 
/// <summary>
/// <para>Indicate whether to plot rows or columns. If plotting rows, then the dependent variables is taken from a specified row, versus rows (y). </para>
/// </summary>
  void SetDataObjectPlotModeToRows();


  // void SetDataObjectPlotModeToColumns ();this SetDataObjectPlotMode VTK_XYPLOT_COLUMN 
/// <summary>
/// <para>Indicate whether to plot rows or columns. If plotting rows, then the dependent variables is taken from a specified row, versus rows (y). </para>
/// </summary>
  void SetDataObjectPlotModeToColumns();


  // const char *GetDataObjectPlotModeAsString ();
/// <summary>
/// <para>Indicate whether to plot rows or columns. If plotting rows, then the dependent variables is taken from a specified row, versus rows (y). </para>
/// </summary>
  System::String^ GetDataObjectPlotModeAsString();


  // void SetDataObjectXComponent (int i, int comp);
/// <summary>
/// <para>Specify which component of the input data object to use as the independent variable for the ith input data object. (This ivar is ignored if plotting the index.) Note that the value is interpreted differently depending on DataObjectPlotMode. If the mode is Rows, then the value of DataObjectXComponent is the row number; otherwise it's the column number.</para>
/// </summary>
  void SetDataObjectXComponent(int i, int comp);


  // int GetDataObjectXComponent (int i);
/// <summary>
/// <para>Specify which component of the input data object to use as the independent variable for the ith input data object. (This ivar is ignored if plotting the index.) Note that the value is interpreted differently depending on DataObjectPlotMode. If the mode is Rows, then the value of DataObjectXComponent is the row number; otherwise it's the column number.</para>
/// </summary>
  int GetDataObjectXComponent(int i);


  // void SetDataObjectYComponent (int i, int comp);
/// <summary>
/// <para>Specify which component of the input data object to use as the dependent variable for the ith input data object. (This ivar is ignored if plotting the index.) Note that the value is interpreted differently depending on DataObjectPlotMode. If the mode is Rows, then the value of DataObjectYComponent is the row number; otherwise it's the column number.</para>
/// </summary>
  void SetDataObjectYComponent(int i, int comp);


  // int GetDataObjectYComponent (int i);
/// <summary>
/// <para>Specify which component of the input data object to use as the dependent variable for the ith input data object. (This ivar is ignored if plotting the index.) Note that the value is interpreted differently depending on DataObjectPlotMode. If the mode is Rows, then the value of DataObjectYComponent is the row number; otherwise it's the column number.</para>
/// </summary>
  int GetDataObjectYComponent(int i);


  // void SetPlotColor (int i, double r, double g, double b);
  void SetPlotColor(int i, double r, double g, double b);


  // void SetPlotColor (int i, const double color[3]);this SetPlotColor i color color color 
  void SetPlotColor(int i, array<double>^ color);


  // double *GetPlotColor (int i);
  array<double>^ GetPlotColor(int i);


  // void SetPlotSymbol (int i, vtkPolyData *input);
  void SetPlotSymbol(int i, vtkPolyData^ input);


  // vtkPolyData *GetPlotSymbol (int i);
  vtkPolyData^ GetPlotSymbol(int i);


  // void SetPlotLabel (int i, const char *label);
  void SetPlotLabel(int i, System::String^ label);


  // const char *GetPlotLabel (int i);
  System::String^ GetPlotLabel(int i);


  // int GetPlotCurvePoints ();
  int GetPlotCurvePoints();


  // void SetPlotCurvePoints (int );
  void SetPlotCurvePoints(int arg0);


  // void PlotCurvePointsOn ();
  void PlotCurvePointsOn();


  // void PlotCurvePointsOff ();
  void PlotCurvePointsOff();


  // int GetPlotCurveLines ();
  int GetPlotCurveLines();


  // void SetPlotCurveLines (int );
  void SetPlotCurveLines(int arg0);


  // void PlotCurveLinesOn ();
  void PlotCurveLinesOn();


  // void PlotCurveLinesOff ();
  void PlotCurveLinesOff();


  // void SetPlotLines (int i, int );
  void SetPlotLines(int i, int arg1);


  // int GetPlotLines (int i);
  int GetPlotLines(int i);


  // void SetPlotPoints (int i, int );
  void SetPlotPoints(int i, int arg1);


  // int GetPlotPoints (int i);
  int GetPlotPoints(int i);


  // void SetExchangeAxes (int );
/// <summary>
/// <para>Enable/Disable exchange of the x-y axes (i.e., what was x becomes y, and vice-versa). Exchanging axes affects the labeling as well.</para>
/// </summary>
  void SetExchangeAxes(int arg0);


  // int GetExchangeAxes ();
/// <summary>
/// <para>Enable/Disable exchange of the x-y axes (i.e., what was x becomes y, and vice-versa). Exchanging axes affects the labeling as well.</para>
/// </summary>
  int GetExchangeAxes();


  // void ExchangeAxesOn ();
/// <summary>
/// <para>Enable/Disable exchange of the x-y axes (i.e., what was x becomes y, and vice-versa). Exchanging axes affects the labeling as well.</para>
/// </summary>
  void ExchangeAxesOn();


  // void ExchangeAxesOff ();
/// <summary>
/// <para>Enable/Disable exchange of the x-y axes (i.e., what was x becomes y, and vice-versa). Exchanging axes affects the labeling as well.</para>
/// </summary>
  void ExchangeAxesOff();


  // void SetReverseXAxis (int );
/// <summary>
/// <para>Normally the x-axis is plotted from minimum to maximum. Setting this instance variable causes the x-axis to be plotted from maximum to minimum. Note that boolean always applies to the x-axis even if ExchangeAxes is set.</para>
/// </summary>
  void SetReverseXAxis(int arg0);


  // int GetReverseXAxis ();
/// <summary>
/// <para>Normally the x-axis is plotted from minimum to maximum. Setting this instance variable causes the x-axis to be plotted from maximum to minimum. Note that boolean always applies to the x-axis even if ExchangeAxes is set.</para>
/// </summary>
  int GetReverseXAxis();


  // void ReverseXAxisOn ();
/// <summary>
/// <para>Normally the x-axis is plotted from minimum to maximum. Setting this instance variable causes the x-axis to be plotted from maximum to minimum. Note that boolean always applies to the x-axis even if ExchangeAxes is set.</para>
/// </summary>
  void ReverseXAxisOn();


  // void ReverseXAxisOff ();
/// <summary>
/// <para>Normally the x-axis is plotted from minimum to maximum. Setting this instance variable causes the x-axis to be plotted from maximum to minimum. Note that boolean always applies to the x-axis even if ExchangeAxes is set.</para>
/// </summary>
  void ReverseXAxisOff();


  // void SetReverseYAxis (int );
/// <summary>
/// <para>Normally the y-axis is plotted from minimum to maximum. Setting this instance variable causes the y-axis to be plotted from maximum to minimum. Note that boolean always applies to the y-axis even if ExchangeAxes is set.</para>
/// </summary>
  void SetReverseYAxis(int arg0);


  // int GetReverseYAxis ();
/// <summary>
/// <para>Normally the y-axis is plotted from minimum to maximum. Setting this instance variable causes the y-axis to be plotted from maximum to minimum. Note that boolean always applies to the y-axis even if ExchangeAxes is set.</para>
/// </summary>
  int GetReverseYAxis();


  // void ReverseYAxisOn ();
/// <summary>
/// <para>Normally the y-axis is plotted from minimum to maximum. Setting this instance variable causes the y-axis to be plotted from maximum to minimum. Note that boolean always applies to the y-axis even if ExchangeAxes is set.</para>
/// </summary>
  void ReverseYAxisOn();


  // void ReverseYAxisOff ();
/// <summary>
/// <para>Normally the y-axis is plotted from minimum to maximum. Setting this instance variable causes the y-axis to be plotted from maximum to minimum. Note that boolean always applies to the y-axis even if ExchangeAxes is set.</para>
/// </summary>
  void ReverseYAxisOff();


  // vtkLegendBoxActor *GetLegendActor ();
/// <summary>
/// <para>Retrieve handles to the legend box and glyph source. This is useful if you would like to change the default behavior of the legend box or glyph source. For example, the default glyph can be changed from a line to a vertex plus line, etc.)</para>
/// </summary>
  vtkLegendBoxActor^ GetLegendActor();


  // vtkGlyphSource2D *GetGlyphSource ();
/// <summary>
/// <para>Retrieve handles to the legend box and glyph source. This is useful if you would like to change the default behavior of the legend box or glyph source. For example, the default glyph can be changed from a line to a vertex plus line, etc.)</para>
/// </summary>
  vtkGlyphSource2D^ GetGlyphSource();


  // void SetTitle (char *);
/// <summary>
/// <para>Set/Get the title of the x-y plot, and the title along the  x and y axes.</para>
/// </summary>
  void SetTitle(System::String^ arg0);


  // char *GetTitle ();
/// <summary>
/// <para>Set/Get the title of the x-y plot, and the title along the  x and y axes.</para>
/// </summary>
  System::String^ GetTitle();


  // void SetXTitle (char *);
/// <summary>
/// <para>Set/Get the title of the x-y plot, and the title along the  x and y axes.</para>
/// </summary>
  void SetXTitle(System::String^ arg0);


  // char *GetXTitle ();
/// <summary>
/// <para>Set/Get the title of the x-y plot, and the title along the  x and y axes.</para>
/// </summary>
  System::String^ GetXTitle();


  // void SetYTitle (char *);
/// <summary>
/// <para>Set/Get the title of the x-y plot, and the title along the  x and y axes.</para>
/// </summary>
  void SetYTitle(System::String^ arg0);


  // char *GetYTitle ();
/// <summary>
/// <para>Set/Get the title of the x-y plot, and the title along the  x and y axes.</para>
/// </summary>
  System::String^ GetYTitle();


  // vtkAxisActor2D *GetXAxisActor2D ();return this XAxis 
/// <summary>
/// <para>Retrieve handles to the X and Y axis (so that you can set their text properties for example)</para>
/// </summary>
  vtkAxisActor2D^ GetXAxisActor2D();


  // vtkAxisActor2D *GetYAxisActor2D ();return this YAxis 
/// <summary>
/// <para>Set the plot range (range of independent and dependent variables) to plot. Data outside of the range will be clipped. If the plot range of either the x or y variables is set to (v1,v2), where v1 == v2, then the range will be computed automatically. Note that the x-range values should be consistent with the way the independent variable is created (via INDEX, DISTANCE, or ARC_LENGTH).</para>
/// </summary>
  vtkAxisActor2D^ GetYAxisActor2D();


  // void SetXRange (double , double );
/// <summary>
/// <para>Set the plot range (range of independent and dependent variables) to plot. Data outside of the range will be clipped. If the plot range of either the x or y variables is set to (v1,v2), where v1 == v2, then the range will be computed automatically. Note that the x-range values should be consistent with the way the independent variable is created (via INDEX, DISTANCE, or ARC_LENGTH).</para>
/// </summary>
  void SetXRange(double arg0, double arg1);


  // void SetXRange (double  a[2]);
/// <summary>
/// <para>Set the plot range (range of independent and dependent variables) to plot. Data outside of the range will be clipped. If the plot range of either the x or y variables is set to (v1,v2), where v1 == v2, then the range will be computed automatically. Note that the x-range values should be consistent with the way the independent variable is created (via INDEX, DISTANCE, or ARC_LENGTH).</para>
/// </summary>
  void SetXRange(array<double>^ a);


  // double  *GetXRange ();
/// <summary>
/// <para>Set the plot range (range of independent and dependent variables) to plot. Data outside of the range will be clipped. If the plot range of either the x or y variables is set to (v1,v2), where v1 == v2, then the range will be computed automatically. Note that the x-range values should be consistent with the way the independent variable is created (via INDEX, DISTANCE, or ARC_LENGTH).</para>
/// </summary>
  array<double>^ GetXRange();


  // void SetYRange (double , double );
/// <summary>
/// <para>Set the plot range (range of independent and dependent variables) to plot. Data outside of the range will be clipped. If the plot range of either the x or y variables is set to (v1,v2), where v1 == v2, then the range will be computed automatically. Note that the x-range values should be consistent with the way the independent variable is created (via INDEX, DISTANCE, or ARC_LENGTH).</para>
/// </summary>
  void SetYRange(double arg0, double arg1);


  // void SetYRange (double  a[2]);
/// <summary>
/// <para>Set the plot range (range of independent and dependent variables) to plot. Data outside of the range will be clipped. If the plot range of either the x or y variables is set to (v1,v2), where v1 == v2, then the range will be computed automatically. Note that the x-range values should be consistent with the way the independent variable is created (via INDEX, DISTANCE, or ARC_LENGTH).</para>
/// </summary>
  void SetYRange(array<double>^ a);


  // double  *GetYRange ();
/// <summary>
/// <para>Set the plot range (range of independent and dependent variables) to plot. Data outside of the range will be clipped. If the plot range of either the x or y variables is set to (v1,v2), where v1 == v2, then the range will be computed automatically. Note that the x-range values should be consistent with the way the independent variable is created (via INDEX, DISTANCE, or ARC_LENGTH).</para>
/// </summary>
  array<double>^ GetYRange();


  // void SetPlotRange (double xmin, double ymin, double xmax, double ymax);this SetXRange xmin xmax this SetYRange ymin ymax 
/// <summary>
/// <para>Set/Get the number of annotation labels to show along the x and y axes. This values is a suggestion: the number of labels may vary depending on the particulars of the data. The convenience method  SetNumberOfLables() sets the number of x and y labels to the same value.</para>
/// </summary>
  void SetPlotRange(double xmin, double ymin, double xmax, double ymax);


  // void SetNumberOfXLabels (int );
/// <summary>
/// <para>Set/Get the number of annotation labels to show along the x and y axes. This values is a suggestion: the number of labels may vary depending on the particulars of the data. The convenience method  SetNumberOfLables() sets the number of x and y labels to the same value.</para>
/// </summary>
  void SetNumberOfXLabels(int arg0);


  // int GetNumberOfXLabelsMinValue ();
/// <summary>
/// <para>Set/Get the number of annotation labels to show along the x and y axes. This values is a suggestion: the number of labels may vary depending on the particulars of the data. The convenience method  SetNumberOfLables() sets the number of x and y labels to the same value.</para>
/// </summary>
  int GetNumberOfXLabelsMinValue();


  // int GetNumberOfXLabelsMaxValue ();
/// <summary>
/// <para>Set/Get the number of annotation labels to show along the x and y axes. This values is a suggestion: the number of labels may vary depending on the particulars of the data. The convenience method  SetNumberOfLables() sets the number of x and y labels to the same value.</para>
/// </summary>
  int GetNumberOfXLabelsMaxValue();


  // int GetNumberOfXLabels ();
/// <summary>
/// <para>Set/Get the number of annotation labels to show along the x and y axes. This values is a suggestion: the number of labels may vary depending on the particulars of the data. The convenience method  SetNumberOfLables() sets the number of x and y labels to the same value.</para>
/// </summary>
  int GetNumberOfXLabels();


  // void SetNumberOfYLabels (int );
/// <summary>
/// <para>Set/Get the number of annotation labels to show along the x and y axes. This values is a suggestion: the number of labels may vary depending on the particulars of the data. The convenience method  SetNumberOfLables() sets the number of x and y labels to the same value.</para>
/// </summary>
  void SetNumberOfYLabels(int arg0);


  // int GetNumberOfYLabelsMinValue ();
/// <summary>
/// <para>Set/Get the number of annotation labels to show along the x and y axes. This values is a suggestion: the number of labels may vary depending on the particulars of the data. The convenience method  SetNumberOfLables() sets the number of x and y labels to the same value.</para>
/// </summary>
  int GetNumberOfYLabelsMinValue();


  // int GetNumberOfYLabelsMaxValue ();
/// <summary>
/// <para>Set/Get the number of annotation labels to show along the x and y axes. This values is a suggestion: the number of labels may vary depending on the particulars of the data. The convenience method  SetNumberOfLables() sets the number of x and y labels to the same value.</para>
/// </summary>
  int GetNumberOfYLabelsMaxValue();


  // int GetNumberOfYLabels ();
/// <summary>
/// <para>Set/Get the number of annotation labels to show along the x and y axes. This values is a suggestion: the number of labels may vary depending on the particulars of the data. The convenience method  SetNumberOfLables() sets the number of x and y labels to the same value.</para>
/// </summary>
  int GetNumberOfYLabels();


  // void SetNumberOfLabels (int num);this SetNumberOfXLabels num this SetNumberOfYLabels num 
/// <summary>
/// <para>Enable/Disable the creation of a legend. If on, the legend labels will be created automatically unless the per plot legend symbol has been set.</para>
/// </summary>
  void SetNumberOfLabels(int num);


  // void SetLegend (int );
/// <summary>
/// <para>Enable/Disable the creation of a legend. If on, the legend labels will be created automatically unless the per plot legend symbol has been set.</para>
/// </summary>
  void SetLegend(int arg0);


  // int GetLegend ();
/// <summary>
/// <para>Enable/Disable the creation of a legend. If on, the legend labels will be created automatically unless the per plot legend symbol has been set.</para>
/// </summary>
  int GetLegend();


  // void LegendOn ();
/// <summary>
/// <para>Enable/Disable the creation of a legend. If on, the legend labels will be created automatically unless the per plot legend symbol has been set.</para>
/// </summary>
  void LegendOn();


  // void LegendOff ();
/// <summary>
/// <para>Enable/Disable the creation of a legend. If on, the legend labels will be created automatically unless the per plot legend symbol has been set.</para>
/// </summary>
  void LegendOff();


  // void SetLegendPosition (double , double );
/// <summary>
/// <para>Use these methods to control the position of the legend. The variables LegendPosition and LegendPosition2 define the lower-left and upper-right position of the legend. The coordinates are expressed as normalized values with respect to the rectangle defined by PositionCoordinate and Position2Coordinate. Note that LegendPosition2 is relative to LegendPosition.</para>
/// </summary>
  void SetLegendPosition(double arg0, double arg1);


  // void SetLegendPosition (double  a[2]);
/// <summary>
/// <para>Use these methods to control the position of the legend. The variables LegendPosition and LegendPosition2 define the lower-left and upper-right position of the legend. The coordinates are expressed as normalized values with respect to the rectangle defined by PositionCoordinate and Position2Coordinate. Note that LegendPosition2 is relative to LegendPosition.</para>
/// </summary>
  void SetLegendPosition(array<double>^ a);


  // double  *GetLegendPosition ();
/// <summary>
/// <para>Use these methods to control the position of the legend. The variables LegendPosition and LegendPosition2 define the lower-left and upper-right position of the legend. The coordinates are expressed as normalized values with respect to the rectangle defined by PositionCoordinate and Position2Coordinate. Note that LegendPosition2 is relative to LegendPosition.</para>
/// </summary>
  array<double>^ GetLegendPosition();


  // void SetLegendPosition2 (double , double );
/// <summary>
/// <para>Use these methods to control the position of the legend. The variables LegendPosition and LegendPosition2 define the lower-left and upper-right position of the legend. The coordinates are expressed as normalized values with respect to the rectangle defined by PositionCoordinate and Position2Coordinate. Note that LegendPosition2 is relative to LegendPosition.</para>
/// </summary>
  void SetLegendPosition2(double arg0, double arg1);


  // void SetLegendPosition2 (double  a[2]);
/// <summary>
/// <para>Use these methods to control the position of the legend. The variables LegendPosition and LegendPosition2 define the lower-left and upper-right position of the legend. The coordinates are expressed as normalized values with respect to the rectangle defined by PositionCoordinate and Position2Coordinate. Note that LegendPosition2 is relative to LegendPosition.</para>
/// </summary>
  void SetLegendPosition2(array<double>^ a);


  // double  *GetLegendPosition2 ();
/// <summary>
/// <para>Use these methods to control the position of the legend. The variables LegendPosition and LegendPosition2 define the lower-left and upper-right position of the legend. The coordinates are expressed as normalized values with respect to the rectangle defined by PositionCoordinate and Position2Coordinate. Note that LegendPosition2 is relative to LegendPosition.</para>
/// </summary>
  array<double>^ GetLegendPosition2();


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


  // virtual void SetAxisTitleTextProperty (vtkTextProperty *p);
/// <summary>
/// <para>Set/Get the title text property of all axes. Note that each axis can be controlled individually through the GetX/YAxisActor2D() methods.</para>
/// </summary>
  void SetAxisTitleTextProperty(vtkTextProperty^ p);


  // vtkTextProperty *GetAxisTitleTextProperty ();
/// <summary>
/// <para>Set/Get the title text property of all axes. Note that each axis can be controlled individually through the GetX/YAxisActor2D() methods.</para>
/// </summary>
  vtkTextProperty^ GetAxisTitleTextProperty();


  // virtual void SetAxisLabelTextProperty (vtkTextProperty *p);
/// <summary>
/// <para>Set/Get the labels text property of all axes. Note that each axis can be controlled individually through the GetX/YAxisActor2D() methods.</para>
/// </summary>
  void SetAxisLabelTextProperty(vtkTextProperty^ p);


  // vtkTextProperty *GetAxisLabelTextProperty ();
/// <summary>
/// <para>Set/Get the labels text property of all axes. Note that each axis can be controlled individually through the GetX/YAxisActor2D() methods.</para>
/// </summary>
  vtkTextProperty^ GetAxisLabelTextProperty();


  // void SetLogx (int );
/// <summary>
/// <para>Enable/Disable plotting of Log of x-values.</para>
/// </summary>
  void SetLogx(int arg0);


  // int GetLogx ();
/// <summary>
/// <para>Enable/Disable plotting of Log of x-values.</para>
/// </summary>
  int GetLogx();


  // void LogxOn ();
/// <summary>
/// <para>Enable/Disable plotting of Log of x-values.</para>
/// </summary>
  void LogxOn();


  // void LogxOff ();
/// <summary>
/// <para>Enable/Disable plotting of Log of x-values.</para>
/// </summary>
  void LogxOff();


  // virtual void SetLabelFormat (const char *_arg);
/// <summary>
/// <para>Set/Get the format with which to print the labels on the scalar bar.</para>
/// </summary>
  void SetLabelFormat(System::String^ _arg);


  // char *GetLabelFormat ();
/// <summary>
/// <para>Set/Get the format with which to print the labels on the scalar bar.</para>
/// </summary>
  System::String^ GetLabelFormat();


  // void SetBorder (int );
/// <summary>
/// <para>Set/Get the spacing between the plot window and the plot. The value is specified in pixels.</para>
/// </summary>
  void SetBorder(int arg0);


  // int GetBorderMinValue ();
/// <summary>
/// <para>Set/Get the spacing between the plot window and the plot. The value is specified in pixels.</para>
/// </summary>
  int GetBorderMinValue();


  // int GetBorderMaxValue ();
/// <summary>
/// <para>Set/Get the spacing between the plot window and the plot. The value is specified in pixels.</para>
/// </summary>
  int GetBorderMaxValue();


  // int GetBorder ();
/// <summary>
/// <para>Set/Get the spacing between the plot window and the plot. The value is specified in pixels.</para>
/// </summary>
  int GetBorder();


  // int GetPlotPoints ();
/// <summary>
/// <para>Set/Get whether the points are rendered.  The point size can be set in the property object. This is a global flag which affects the plot only  if per curve symbols are not defined.</para>
/// </summary>
  int GetPlotPoints();


  // void SetPlotPoints (int );
/// <summary>
/// <para>Set/Get whether the points are rendered.  The point size can be set in the property object. This is a global flag which affects the plot only  if per curve symbols are not defined.</para>
/// </summary>
  void SetPlotPoints(int arg0);


  // void PlotPointsOn ();
/// <summary>
/// <para>Set/Get whether the points are rendered.  The point size can be set in the property object. This is a global flag which affects the plot only  if per curve symbols are not defined.</para>
/// </summary>
  void PlotPointsOn();


  // void PlotPointsOff ();
/// <summary>
/// <para>Set/Get whether the points are rendered.  The point size can be set in the property object. This is a global flag which affects the plot only  if per curve symbols are not defined.</para>
/// </summary>
  void PlotPointsOff();


  // int GetPlotLines ();
/// <summary>
/// <para>Set/Get whether the lines are rendered.  The line width can be set in the property object. </para>
/// </summary>
  int GetPlotLines();


  // void SetPlotLines (int );
/// <summary>
/// <para>Set/Get whether the lines are rendered.  The line width can be set in the property object. </para>
/// </summary>
  void SetPlotLines(int arg0);


  // void PlotLinesOn ();
/// <summary>
/// <para>Set/Get whether the lines are rendered.  The line width can be set in the property object. </para>
/// </summary>
  void PlotLinesOn();


  // void PlotLinesOff ();
/// <summary>
/// <para>Set/Get whether the lines are rendered.  The line width can be set in the property object. </para>
/// </summary>
  void PlotLinesOff();


  // void SetGlyphSize (double );
/// <summary>
/// <para>Set/Get the factor that controls how big glyphs are in the plot. The number is expressed as a fraction of the length of the diagonal of the plot bounding box.</para>
/// </summary>
  void SetGlyphSize(double arg0);


  // double GetGlyphSizeMinValue ();
/// <summary>
/// <para>Set/Get the factor that controls how big glyphs are in the plot. The number is expressed as a fraction of the length of the diagonal of the plot bounding box.</para>
/// </summary>
  double GetGlyphSizeMinValue();


  // double GetGlyphSizeMaxValue ();
/// <summary>
/// <para>Set/Get the factor that controls how big glyphs are in the plot. The number is expressed as a fraction of the length of the diagonal of the plot bounding box.</para>
/// </summary>
  double GetGlyphSizeMaxValue();


  // double GetGlyphSize ();
/// <summary>
/// <para>Set/Get the factor that controls how big glyphs are in the plot. The number is expressed as a fraction of the length of the diagonal of the plot bounding box.</para>
/// </summary>
  double GetGlyphSize();


  // void ViewportToPlotCoordinate (vtkViewport *viewport, double &u, double &v);
/// <summary>
/// <para>Given a position within the viewport used by the plot, return the the plot coordinates (XAxis value, YAxis value)</para>
/// </summary>
  void ViewportToPlotCoordinate(vtkViewport^ viewport, double% u, double% v);


  // void ViewportToPlotCoordinate (vtkViewport *viewport);
/// <summary>
/// <para>An alternate form of ViewportToPlotCoordinate() above. This method inputs the viewport coordinate pair (defined by the ivar  ViewportCoordinate)and then stores them in the ivar PlotCoordinate. </para>
/// </summary>
  void ViewportToPlotCoordinate(vtkViewport^ viewport);


  // void SetPlotCoordinate (double , double );
/// <summary>
/// <para>An alternate form of ViewportToPlotCoordinate() above. This method inputs the viewport coordinate pair (defined by the ivar  ViewportCoordinate)and then stores them in the ivar PlotCoordinate. </para>
/// </summary>
  void SetPlotCoordinate(double arg0, double arg1);


  // void SetPlotCoordinate (double  a[2]);
/// <summary>
/// <para>An alternate form of ViewportToPlotCoordinate() above. This method inputs the viewport coordinate pair (defined by the ivar  ViewportCoordinate)and then stores them in the ivar PlotCoordinate. </para>
/// </summary>
  void SetPlotCoordinate(array<double>^ a);


  // double  *GetPlotCoordinate ();
/// <summary>
/// <para>An alternate form of ViewportToPlotCoordinate() above. This method inputs the viewport coordinate pair (defined by the ivar  ViewportCoordinate)and then stores them in the ivar PlotCoordinate. </para>
/// </summary>
  array<double>^ GetPlotCoordinate();


  // void PlotToViewportCoordinate (vtkViewport *viewport, double &u, double &v);
/// <summary>
/// <para>Given a plot coordinate, return the viewpoint position</para>
/// </summary>
  void PlotToViewportCoordinate(vtkViewport^ viewport, double% u, double% v);


  // void PlotToViewportCoordinate (vtkViewport *viewport);
/// <summary>
/// <para>An alternate form of PlotToViewportCoordinate() above. This method inputs the plot coordinate pair (defined in the ivar PlotCoordinate) and then stores them in the ivar ViewportCoordinate. (This method  can be wrapped.)</para>
/// </summary>
  void PlotToViewportCoordinate(vtkViewport^ viewport);


  // void SetViewportCoordinate (double , double );
/// <summary>
/// <para>An alternate form of PlotToViewportCoordinate() above. This method inputs the plot coordinate pair (defined in the ivar PlotCoordinate) and then stores them in the ivar ViewportCoordinate. (This method  can be wrapped.)</para>
/// </summary>
  void SetViewportCoordinate(double arg0, double arg1);


  // void SetViewportCoordinate (double  a[2]);
/// <summary>
/// <para>An alternate form of PlotToViewportCoordinate() above. This method inputs the plot coordinate pair (defined in the ivar PlotCoordinate) and then stores them in the ivar ViewportCoordinate. (This method  can be wrapped.)</para>
/// </summary>
  void SetViewportCoordinate(array<double>^ a);


  // double  *GetViewportCoordinate ();
/// <summary>
/// <para>An alternate form of PlotToViewportCoordinate() above. This method inputs the plot coordinate pair (defined in the ivar PlotCoordinate) and then stores them in the ivar ViewportCoordinate. (This method  can be wrapped.)</para>
/// </summary>
  array<double>^ GetViewportCoordinate();


  // int IsInPlot (vtkViewport *viewport, double u, double v);
/// <summary>
/// <para>Is the specified viewport position within the plot area (as opposed to the region used by the plot plus the labels)?</para>
/// </summary>
  int IsInPlot(vtkViewport^ viewport, double u, double v);


  // unsigned long GetMTime ();
/// <summary>
/// <para>Take into account the modified time of internal helper classes.</para>
/// </summary>
  unsigned long GetMTime();


// Did not wrap:  void PrintAsCSV (ostream &os);


// Did not wrap:  vtkXYPlotActor ();


// Did not wrap:  ~vtkXYPlotActor ();


// Did not wrap:  void InitializeEntries ();


// Did not wrap:  void ComputeXRange (double range[2], double *lengths);


// Did not wrap:  void ComputeYRange (double range[2]);


// Did not wrap:  void ComputeDORange (double xrange[2], double yrange[2], double *lengths);


// Did not wrap:  virtual void CreatePlotData (int *pos, int *pos2, double xRange[2], double yRange[2], double *norms, int numDS, int numDO);


// Did not wrap:  void PlaceAxes (vtkViewport *viewport, int *size, int pos[2], int pos2[2]);


// Did not wrap:  void GenerateClipPlanes (int *pos, int *pos2);


// Did not wrap:  double ComputeGlyphScale (int i, int *pos, int *pos2);


// Did not wrap:  void ClipPlotData (int *pos, int *pos2, vtkPolyData *pd);


// Did not wrap:  double *TransformPoint (int pos[2], int pos2[2], double x[3], double xNew[3]);


// Did not wrap:  vtkXYPlotActor (const vtkXYPlotActor &);


// Did not wrap:  void vtkXYPlotActor 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXYPlotActor(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXYPlotActor(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXYPlotActor();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXYPlotActor();


};

} // end vtkHybrid
