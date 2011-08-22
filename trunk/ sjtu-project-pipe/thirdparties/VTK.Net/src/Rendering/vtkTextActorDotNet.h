#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkTextMapper;
ref class vtkTextProperty;

public ref class vtkTextActor : public vtkActor2D
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTextActor *NewInstance ();
  vtkTextActor^ NewInstance();


  // vtkTextActor *SafeDownCast (vtkObject* o);
  static vtkTextActor^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkTextActor *New ();


  // void ShallowCopy (vtkProp *prop);
/// <summary>
/// <para>Shallow copy of this text actor. Overloads the virtual vtkProp method.</para>
/// </summary>
  void ShallowCopy(vtkProp^ prop);


  // void SetMapper (vtkTextMapper *mapper);
/// <summary>
/// <para>Override the vtkTextMapper that defines the text to be drawn. One will be created by default if none is supplied</para>
/// </summary>
  void SetMapper(vtkTextMapper^ mapper);


  // void SetInput (const char *inputString);
/// <summary>
/// <para>Set the text string to be displayed. &quot;\n&quot; is recognized as a carriage return/linefeed (line separator). Convenience method to the underlying mapper</para>
/// </summary>
  void SetInput(System::String^ inputString);


  // char *GetInput ();
/// <summary>
/// <para>Set the text string to be displayed. &quot;\n&quot; is recognized as a carriage return/linefeed (line separator). Convenience method to the underlying mapper</para>
/// </summary>
  System::String^ GetInput();


  // void SetMinimumSize (int , int );
/// <summary>
/// <para>Set/Get the minimum size in pixels for this actor. Defaults to 10,10. Not valid when ScaledText = false</para>
/// </summary>
  void SetMinimumSize(int arg0, int arg1);


  // void SetMinimumSize (int  a[2]);
/// <summary>
/// <para>Set/Get the minimum size in pixels for this actor. Defaults to 10,10. Not valid when ScaledText = false</para>
/// </summary>
  void SetMinimumSize(array<int>^ a);


  // int  *GetMinimumSize ();
/// <summary>
/// <para>Set/Get the minimum size in pixels for this actor. Defaults to 10,10. Not valid when ScaledText = false</para>
/// </summary>
  array<int>^ GetMinimumSize();


  // void SetMaximumLineHeight (float );
/// <summary>
/// <para>Set/Get the maximum height of a line of text as a percentage of the vertical area allocated to this scaled text actor. Defaults to 1.0. Not valid when ScaledText = false</para>
/// </summary>
  void SetMaximumLineHeight(float arg0);


  // float GetMaximumLineHeight ();
/// <summary>
/// <para>Set/Get the maximum height of a line of text as a percentage of the vertical area allocated to this scaled text actor. Defaults to 1.0. Not valid when ScaledText = false</para>
/// </summary>
  float GetMaximumLineHeight();


  // void SetScaledText (int );
/// <summary>
/// <para>Turn on or off the ScaledText option. When text is scaled, the bounding rectangle is used to fit the text When ScaledText is off, the text is rendered at a fixed font size</para>
/// </summary>
  void SetScaledText(int arg0);


  // int GetScaledText ();
/// <summary>
/// <para>Turn on or off the ScaledText option. When text is scaled, the bounding rectangle is used to fit the text When ScaledText is off, the text is rendered at a fixed font size</para>
/// </summary>
  int GetScaledText();


  // void ScaledTextOn ();
/// <summary>
/// <para>Turn on or off the ScaledText option. When text is scaled, the bounding rectangle is used to fit the text When ScaledText is off, the text is rendered at a fixed font size</para>
/// </summary>
  void ScaledTextOn();


  // void ScaledTextOff ();
/// <summary>
/// <para>Turn on or off the ScaledText option. When text is scaled, the bounding rectangle is used to fit the text When ScaledText is off, the text is rendered at a fixed font size</para>
/// </summary>
  void ScaledTextOff();


  // void SetAlignmentPoint (int );
/// <summary>
/// <para>Set/Get the Alignment point for unscaled (fixed fontsize) text if zero (default), the text aligns itself to the bottom left corner (which is defined by the PositionCoordinate) otherwise the text aligns itself to corner/midpoint or centre @verbatim      6   7   8    Otherwise the text aligns itself to corner/midpoint      3   4   5    or centre of the box defined by the position 1 &amp; 2      0   1   2    coordinates according to the diagram on the left. @endverbatim</para>
/// </summary>
  void SetAlignmentPoint(int arg0);


  // int GetAlignmentPointMinValue ();
/// <summary>
/// <para>Set/Get the Alignment point for unscaled (fixed fontsize) text if zero (default), the text aligns itself to the bottom left corner (which is defined by the PositionCoordinate) otherwise the text aligns itself to corner/midpoint or centre @verbatim      6   7   8    Otherwise the text aligns itself to corner/midpoint      3   4   5    or centre of the box defined by the position 1 &amp; 2      0   1   2    coordinates according to the diagram on the left. @endverbatim</para>
/// </summary>
  int GetAlignmentPointMinValue();


  // int GetAlignmentPointMaxValue ();
/// <summary>
/// <para>Set/Get the Alignment point for unscaled (fixed fontsize) text if zero (default), the text aligns itself to the bottom left corner (which is defined by the PositionCoordinate) otherwise the text aligns itself to corner/midpoint or centre @verbatim      6   7   8    Otherwise the text aligns itself to corner/midpoint      3   4   5    or centre of the box defined by the position 1 &amp; 2      0   1   2    coordinates according to the diagram on the left. @endverbatim</para>
/// </summary>
  int GetAlignmentPointMaxValue();


  // int GetAlignmentPoint ();
/// <summary>
/// <para>Set/Get the Alignment point for unscaled (fixed fontsize) text if zero (default), the text aligns itself to the bottom left corner (which is defined by the PositionCoordinate) otherwise the text aligns itself to corner/midpoint or centre @verbatim      6   7   8    Otherwise the text aligns itself to corner/midpoint      3   4   5    or centre of the box defined by the position 1 &amp; 2      0   1   2    coordinates according to the diagram on the left. @endverbatim</para>
/// </summary>
  int GetAlignmentPoint();


  // vtkCoordinate *GetActualPositionCoordinate (void );return this AdjustedPositionCoordinate 
/// <summary>
/// <para>Set/Get the text property.</para>
/// </summary>
  vtkCoordinate^ GetActualPositionCoordinate();


  // virtual void SetTextProperty (vtkTextProperty *p);
/// <summary>
/// <para>Set/Get the text property.</para>
/// </summary>
  void SetTextProperty(vtkTextProperty^ p);


  // vtkTextProperty *GetTextProperty ();
/// <summary>
/// <para>Set/Get the text property.</para>
/// </summary>
  vtkTextProperty^ GetTextProperty();


  // virtual void SetNonLinearFontScale (double exponent, int target);
/// <summary>
/// <para>Enable non-linear scaling of font sizes. This is useful in combination with scaled text. With small windows you want to use the entire scaled text area. With larger windows you want to reduce the font size some so that the entire area is not used. These values modify the computed font  size as follows:     newFontSize = pow(FontSize,exponent)*pow(target,1.0 - exponent) typically exponent should be around 0.7 and target should be around 10</para>
/// </summary>
  void SetNonLinearFontScale(double exponent, int target);


// Did not wrap:  void SetMapper (vtkMapper2D *mapper);


// Did not wrap:  vtkTextActor ();


// Did not wrap:  ~vtkTextActor ();


// Did not wrap:  vtkTextActor (const vtkTextActor &);


// Did not wrap:  void vtkTextActor 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTextActor(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTextActor(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTextActor();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTextActor();


};

} // end vtkRendering
