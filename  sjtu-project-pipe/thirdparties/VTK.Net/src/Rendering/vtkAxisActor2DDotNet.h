#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkTextMapper;
ref class vtkTextProperty;

public ref class vtkAxisActor2D : public vtkActor2D
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkAxisActor2D *NewInstance ();
  vtkAxisActor2D^ NewInstance();


  // vtkAxisActor2D *SafeDownCast (vtkObject* o);
  static vtkAxisActor2D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkAxisActor2D *New ();


  // virtual vtkCoordinate *GetPoint1Coordinate ();return this GetPositionCoordinate 
/// <summary>
/// <para>Specify the position of the first point defining the axis. Note: backward compatibility only, use vtkActor2D's Position instead.</para>
/// </summary>
  vtkCoordinate^ GetPoint1Coordinate();


  // virtual void SetPoint1 (double x[2]);this SetPosition x 
/// <summary>
/// <para>Specify the position of the first point defining the axis. Note: backward compatibility only, use vtkActor2D's Position instead.</para>
/// </summary>
  void SetPoint1(array<double>^ x);


  // virtual void SetPoint1 (double x, double y);this SetPosition x y 
/// <summary>
/// <para>Specify the position of the first point defining the axis. Note: backward compatibility only, use vtkActor2D's Position instead.</para>
/// </summary>
  void SetPoint1(double x, double y);


// Did not wrap:  virtual double *GetPoint1 ();return this GetPosition 


  // virtual vtkCoordinate *GetPoint2Coordinate ();return this GetPosition2Coordinate 
/// <summary>
/// <para>Specify the position of the second point defining the axis. Note that the order from Point1 to Point2 controls which side the tick marks are drawn on (ticks are drawn on the right, if visible). Note: backward compatibility only, use vtkActor2D's Position2 instead.</para>
/// </summary>
  vtkCoordinate^ GetPoint2Coordinate();


  // virtual void SetPoint2 (double x[2]);this SetPosition2 x 
/// <summary>
/// <para>Specify the position of the second point defining the axis. Note that the order from Point1 to Point2 controls which side the tick marks are drawn on (ticks are drawn on the right, if visible). Note: backward compatibility only, use vtkActor2D's Position2 instead.</para>
/// </summary>
  void SetPoint2(array<double>^ x);


  // virtual void SetPoint2 (double x, double y);this SetPosition2 x y 
/// <summary>
/// <para>Specify the position of the second point defining the axis. Note that the order from Point1 to Point2 controls which side the tick marks are drawn on (ticks are drawn on the right, if visible). Note: backward compatibility only, use vtkActor2D's Position2 instead.</para>
/// </summary>
  void SetPoint2(double x, double y);


// Did not wrap:  virtual double *GetPoint2 ();return this GetPosition2 


  // void SetRange (double , double );
/// <summary>
/// <para>Specify the (min,max) axis range. This will be used in the generation of labels, if labels are visible.</para>
/// </summary>
  void SetRange(double arg0, double arg1);


  // void SetRange (double  a[2]);
/// <summary>
/// <para>Specify the (min,max) axis range. This will be used in the generation of labels, if labels are visible.</para>
/// </summary>
  void SetRange(array<double>^ a);


  // double  *GetRange ();
/// <summary>
/// <para>Specify the (min,max) axis range. This will be used in the generation of labels, if labels are visible.</para>
/// </summary>
  array<double>^ GetRange();


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


  // void SetAdjustLabels (int );
/// <summary>
/// <para>Set/Get the flag that controls whether the labels and ticks are adjusted for &quot;nice&quot; numerical values to make it easier to read  the labels. The adjustment is based in the Range instance variable. Call GetAdjustedRange and GetAdjustedNumberOfLabels to get the adjusted range and number of labels.</para>
/// </summary>
  void SetAdjustLabels(int arg0);


  // int GetAdjustLabels ();
/// <summary>
/// <para>Set/Get the flag that controls whether the labels and ticks are adjusted for &quot;nice&quot; numerical values to make it easier to read  the labels. The adjustment is based in the Range instance variable. Call GetAdjustedRange and GetAdjustedNumberOfLabels to get the adjusted range and number of labels.</para>
/// </summary>
  int GetAdjustLabels();


  // void AdjustLabelsOn ();
/// <summary>
/// <para>Set/Get the flag that controls whether the labels and ticks are adjusted for &quot;nice&quot; numerical values to make it easier to read  the labels. The adjustment is based in the Range instance variable. Call GetAdjustedRange and GetAdjustedNumberOfLabels to get the adjusted range and number of labels.</para>
/// </summary>
  void AdjustLabelsOn();


  // void AdjustLabelsOff ();
/// <summary>
/// <para>Set/Get the flag that controls whether the labels and ticks are adjusted for &quot;nice&quot; numerical values to make it easier to read  the labels. The adjustment is based in the Range instance variable. Call GetAdjustedRange and GetAdjustedNumberOfLabels to get the adjusted range and number of labels.</para>
/// </summary>
  void AdjustLabelsOff();


// Did not wrap:  virtual double *GetAdjustedRange ();this UpdateAdjustedRange return this AdjustedRange 


  // virtual void GetAdjustedRange (double &_arg1, double &_arg2);this UpdateAdjustedRange _arg1 this AdjustedRange _arg2 this AdjustedRange 
/// <summary>
/// <para>Set/Get the flag that controls whether the labels and ticks are adjusted for &quot;nice&quot; numerical values to make it easier to read  the labels. The adjustment is based in the Range instance variable. Call GetAdjustedRange and GetAdjustedNumberOfLabels to get the adjusted range and number of labels.</para>
/// </summary>
  void GetAdjustedRange(double% _arg1, double% _arg2);


  // virtual void GetAdjustedRange (double _arg[2]);this GetAdjustedRange _arg _arg 
/// <summary>
/// <para>Set/Get the flag that controls whether the labels and ticks are adjusted for &quot;nice&quot; numerical values to make it easier to read  the labels. The adjustment is based in the Range instance variable. Call GetAdjustedRange and GetAdjustedNumberOfLabels to get the adjusted range and number of labels.</para>
/// </summary>
  void GetAdjustedRange(array<double>^ _arg);


  // virtual int GetAdjustedNumberOfLabels ();this UpdateAdjustedRange return this AdjustedNumberOfLabels 
/// <summary>
/// <para>Set/Get the title of the scalar bar actor,</para>
/// </summary>
  int GetAdjustedNumberOfLabels();


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


  // void SetTickLength (int );
/// <summary>
/// <para>Set/Get the length of the tick marks (expressed in pixels or display coordinates). </para>
/// </summary>
  void SetTickLength(int arg0);


  // int GetTickLengthMinValue ();
/// <summary>
/// <para>Set/Get the length of the tick marks (expressed in pixels or display coordinates). </para>
/// </summary>
  int GetTickLengthMinValue();


  // int GetTickLengthMaxValue ();
/// <summary>
/// <para>Set/Get the length of the tick marks (expressed in pixels or display coordinates). </para>
/// </summary>
  int GetTickLengthMaxValue();


  // int GetTickLength ();
/// <summary>
/// <para>Set/Get the length of the tick marks (expressed in pixels or display coordinates). </para>
/// </summary>
  int GetTickLength();


  // void SetTickOffset (int );
/// <summary>
/// <para>Set/Get the offset of the labels (expressed in pixels or display coordinates). The offset is the distance of labels from tick marks or other objects.</para>
/// </summary>
  void SetTickOffset(int arg0);


  // int GetTickOffsetMinValue ();
/// <summary>
/// <para>Set/Get the offset of the labels (expressed in pixels or display coordinates). The offset is the distance of labels from tick marks or other objects.</para>
/// </summary>
  int GetTickOffsetMinValue();


  // int GetTickOffsetMaxValue ();
/// <summary>
/// <para>Set/Get the offset of the labels (expressed in pixels or display coordinates). The offset is the distance of labels from tick marks or other objects.</para>
/// </summary>
  int GetTickOffsetMaxValue();


  // int GetTickOffset ();
/// <summary>
/// <para>Set/Get the offset of the labels (expressed in pixels or display coordinates). The offset is the distance of labels from tick marks or other objects.</para>
/// </summary>
  int GetTickOffset();


  // void SetAxisVisibility (int );
/// <summary>
/// <para>Set/Get visibility of the axis line.</para>
/// </summary>
  void SetAxisVisibility(int arg0);


  // int GetAxisVisibility ();
/// <summary>
/// <para>Set/Get visibility of the axis line.</para>
/// </summary>
  int GetAxisVisibility();


  // void AxisVisibilityOn ();
/// <summary>
/// <para>Set/Get visibility of the axis line.</para>
/// </summary>
  void AxisVisibilityOn();


  // void AxisVisibilityOff ();
/// <summary>
/// <para>Set/Get visibility of the axis line.</para>
/// </summary>
  void AxisVisibilityOff();


  // void SetTickVisibility (int );
/// <summary>
/// <para>Set/Get visibility of the axis tick marks.</para>
/// </summary>
  void SetTickVisibility(int arg0);


  // int GetTickVisibility ();
/// <summary>
/// <para>Set/Get visibility of the axis tick marks.</para>
/// </summary>
  int GetTickVisibility();


  // void TickVisibilityOn ();
/// <summary>
/// <para>Set/Get visibility of the axis tick marks.</para>
/// </summary>
  void TickVisibilityOn();


  // void TickVisibilityOff ();
/// <summary>
/// <para>Set/Get visibility of the axis tick marks.</para>
/// </summary>
  void TickVisibilityOff();


  // void SetLabelVisibility (int );
/// <summary>
/// <para>Set/Get visibility of the axis labels.</para>
/// </summary>
  void SetLabelVisibility(int arg0);


  // int GetLabelVisibility ();
/// <summary>
/// <para>Set/Get visibility of the axis labels.</para>
/// </summary>
  int GetLabelVisibility();


  // void LabelVisibilityOn ();
/// <summary>
/// <para>Set/Get visibility of the axis labels.</para>
/// </summary>
  void LabelVisibilityOn();


  // void LabelVisibilityOff ();
/// <summary>
/// <para>Set/Get visibility of the axis labels.</para>
/// </summary>
  void LabelVisibilityOff();


  // void SetTitleVisibility (int );
/// <summary>
/// <para>Set/Get visibility of the axis title.</para>
/// </summary>
  void SetTitleVisibility(int arg0);


  // int GetTitleVisibility ();
/// <summary>
/// <para>Set/Get visibility of the axis title.</para>
/// </summary>
  int GetTitleVisibility();


  // void TitleVisibilityOn ();
/// <summary>
/// <para>Set/Get visibility of the axis title.</para>
/// </summary>
  void TitleVisibilityOn();


  // void TitleVisibilityOff ();
/// <summary>
/// <para>Set/Get visibility of the axis title.</para>
/// </summary>
  void TitleVisibilityOff();


  // void SetFontFactor (double );
/// <summary>
/// <para>Set/Get the factor that controls the overall size of the fonts used to label and title the axes. This ivar used in conjunction with the LabelFactor can be used to control font sizes.</para>
/// </summary>
  void SetFontFactor(double arg0);


  // double GetFontFactorMinValue ();
/// <summary>
/// <para>Set/Get the factor that controls the overall size of the fonts used to label and title the axes. This ivar used in conjunction with the LabelFactor can be used to control font sizes.</para>
/// </summary>
  double GetFontFactorMinValue();


  // double GetFontFactorMaxValue ();
/// <summary>
/// <para>Set/Get the factor that controls the overall size of the fonts used to label and title the axes. This ivar used in conjunction with the LabelFactor can be used to control font sizes.</para>
/// </summary>
  double GetFontFactorMaxValue();


  // double GetFontFactor ();
/// <summary>
/// <para>Set/Get the factor that controls the overall size of the fonts used to label and title the axes. This ivar used in conjunction with the LabelFactor can be used to control font sizes.</para>
/// </summary>
  double GetFontFactor();


  // void SetLabelFactor (double );
/// <summary>
/// <para>Set/Get the factor that controls the relative size of the axis labels to the axis title.</para>
/// </summary>
  void SetLabelFactor(double arg0);


  // double GetLabelFactorMinValue ();
/// <summary>
/// <para>Set/Get the factor that controls the relative size of the axis labels to the axis title.</para>
/// </summary>
  double GetLabelFactorMinValue();


  // double GetLabelFactorMaxValue ();
/// <summary>
/// <para>Set/Get the factor that controls the relative size of the axis labels to the axis title.</para>
/// </summary>
  double GetLabelFactorMaxValue();


  // double GetLabelFactor ();
/// <summary>
/// <para>Set/Get the factor that controls the relative size of the axis labels to the axis title.</para>
/// </summary>
  double GetLabelFactor();


  // int RenderOverlay (vtkViewport *viewport);
/// <summary>
/// <para>Draw the axis. </para>
/// </summary>
  int RenderOverlay(vtkViewport^ viewport);


  // int RenderOpaqueGeometry (vtkViewport *viewport);
/// <summary>
/// <para>Draw the axis. </para>
/// </summary>
  int RenderOpaqueGeometry(vtkViewport^ viewport);


  // int RenderTranslucentGeometry (vtkViewport *);return 
/// <summary>
/// <para>Release any graphics resources that are being consumed by this actor. The parameter window could be used to determine which graphic resources to release.</para>
/// </summary>
  int RenderTranslucentGeometry(vtkViewport^ arg0);


  // void ReleaseGraphicsResources (vtkWindow *);
/// <summary>
/// <para>Release any graphics resources that are being consumed by this actor. The parameter window could be used to determine which graphic resources to release.</para>
/// </summary>
  void ReleaseGraphicsResources(vtkWindow^ arg0);


  // static void ComputeRange (double inRange[2], double outRange[2], int inNumTicks, int &outNumTicks, double &interval);
/// <summary>
/// <para>This method computes the range of the axis given an input range.  It also computes the number of tick marks given a suggested number. (The number of tick marks includes end ticks as well.) The number of tick marks computed (in conjunction with the output range) will yield &quot;nice&quot; tick values. For example, if the input range is (0.25,96.7) and the number of ticks requested is 10, the output range will be (0,100) with the number of computed ticks to 11 to yield tick values of (0,10,20,...,100).</para>
/// </summary>
  static void ComputeRange(array<double>^ inRange, array<double>^ outRange, int inNumTicks, int% outNumTicks, double% interval);


  // static int SetFontSize (vtkViewport *viewport, vtkTextMapper *textMapper, int *targetSize, double factor, int *stringSize);
/// <summary>
/// <para>General method to computes font size from a representative size on the  viewport (given by size[2]). The method returns the font size (in points) and the string height/width (in pixels). It also sets the font size of the instance of vtkTextMapper provided. The factor is used when you're trying to create text of different size-factor (it is usually = 1 but you can adjust the font size by making factor larger or smaller).</para>
/// </summary>
  static int SetFontSize(vtkViewport^ viewport, vtkTextMapper^ textMapper, array<int>^ targetSize, double factor, array<int>^ stringSize);


// Did not wrap:  static int SetMultipleFontSize (vtkViewport *viewport, vtkTextMapper *textMappers, int nbOfMappers, int *targetSize, double factor, int *stringSize);


  // void ShallowCopy (vtkProp *prop);
/// <summary>
/// <para>Shallow copy of an axis actor. Overloads the virtual vtkProp method.</para>
/// </summary>
  void ShallowCopy(vtkProp^ prop);


// Did not wrap:  vtkAxisActor2D ();


// Did not wrap:  ~vtkAxisActor2D ();


// Did not wrap:  virtual void BuildAxis (vtkViewport *viewport);


// Did not wrap:  static double ComputeStringOffset (double width, double height, double theta);


// Did not wrap:  static void SetOffsetPosition (double xTick[3], double theta, int stringHeight, int stringWidth, int offset, vtkActor2D *actor);


// Did not wrap:  virtual void UpdateAdjustedRange ();


// Did not wrap:  vtkAxisActor2D (const vtkAxisActor2D &);


// Did not wrap:  void vtkAxisActor2D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkAxisActor2D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkAxisActor2D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkAxisActor2D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkAxisActor2D();


};

} // end vtkRendering
