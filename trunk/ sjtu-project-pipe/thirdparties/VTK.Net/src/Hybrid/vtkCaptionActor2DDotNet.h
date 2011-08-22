#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkCaptionActor2D : public vtkActor2D
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCaptionActor2D *NewInstance ();
  vtkCaptionActor2D^ NewInstance();


  // vtkCaptionActor2D *SafeDownCast (vtkObject* o);
  static vtkCaptionActor2D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkCaptionActor2D *New ();


  // void SetCaption (char *);
/// <summary>
/// <para>Define the text to be placed in the caption. The text can be multiple lines (separated by &quot;\n&quot;).</para>
/// </summary>
  void SetCaption(System::String^ arg0);


  // char *GetCaption ();
/// <summary>
/// <para>Define the text to be placed in the caption. The text can be multiple lines (separated by &quot;\n&quot;).</para>
/// </summary>
  System::String^ GetCaption();


  // vtkCoordinate *GetAttachmentPointCoordinate ();
/// <summary>
/// <para>Set/Get the attachment point for the caption. By default, the attachment point is defined in world coordinates, but this can be changed using vtkCoordinate methods.</para>
/// </summary>
  vtkCoordinate^ GetAttachmentPointCoordinate();


  // void SetAttachmentPoint (double, double, double);
/// <summary>
/// <para>Set/Get the attachment point for the caption. By default, the attachment point is defined in world coordinates, but this can be changed using vtkCoordinate methods.</para>
/// </summary>
  void SetAttachmentPoint(double arg0, double arg1, double arg2);


  // void SetAttachmentPoint (double a[3]);
/// <summary>
/// <para>Set/Get the attachment point for the caption. By default, the attachment point is defined in world coordinates, but this can be changed using vtkCoordinate methods.</para>
/// </summary>
  void SetAttachmentPoint(array<double>^ a);


  // double *GetAttachmentPoint ();
/// <summary>
/// <para>Set/Get the attachment point for the caption. By default, the attachment point is defined in world coordinates, but this can be changed using vtkCoordinate methods.</para>
/// </summary>
  array<double>^ GetAttachmentPoint();


  // void SetBorder (int );
/// <summary>
/// <para>Enable/disable the placement of a border around the text.</para>
/// </summary>
  void SetBorder(int arg0);


  // int GetBorder ();
/// <summary>
/// <para>Enable/disable the placement of a border around the text.</para>
/// </summary>
  int GetBorder();


  // void BorderOn ();
/// <summary>
/// <para>Enable/disable the placement of a border around the text.</para>
/// </summary>
  void BorderOn();


  // void BorderOff ();
/// <summary>
/// <para>Enable/disable the placement of a border around the text.</para>
/// </summary>
  void BorderOff();


  // void SetLeader (int );
/// <summary>
/// <para>Enable/disable drawing a &quot;line&quot; from the caption to the  attachment point.</para>
/// </summary>
  void SetLeader(int arg0);


  // int GetLeader ();
/// <summary>
/// <para>Enable/disable drawing a &quot;line&quot; from the caption to the  attachment point.</para>
/// </summary>
  int GetLeader();


  // void LeaderOn ();
/// <summary>
/// <para>Enable/disable drawing a &quot;line&quot; from the caption to the  attachment point.</para>
/// </summary>
  void LeaderOn();


  // void LeaderOff ();
/// <summary>
/// <para>Enable/disable drawing a &quot;line&quot; from the caption to the  attachment point.</para>
/// </summary>
  void LeaderOff();


  // void SetThreeDimensionalLeader (int );
/// <summary>
/// <para>Indicate whether the leader is 2D (no hidden line) or 3D (z-buffered).</para>
/// </summary>
  void SetThreeDimensionalLeader(int arg0);


  // int GetThreeDimensionalLeader ();
/// <summary>
/// <para>Indicate whether the leader is 2D (no hidden line) or 3D (z-buffered).</para>
/// </summary>
  int GetThreeDimensionalLeader();


  // void ThreeDimensionalLeaderOn ();
/// <summary>
/// <para>Indicate whether the leader is 2D (no hidden line) or 3D (z-buffered).</para>
/// </summary>
  void ThreeDimensionalLeaderOn();


  // void ThreeDimensionalLeaderOff ();
/// <summary>
/// <para>Indicate whether the leader is 2D (no hidden line) or 3D (z-buffered).</para>
/// </summary>
  void ThreeDimensionalLeaderOff();


  // virtual void SetLeaderGlyph (vtkPolyData *);
/// <summary>
/// <para>Specify a glyph to be used as the leader &quot;head&quot;. This could be something like an arrow or sphere. If not specified, no glyph is drawn. Note that the glyph is assumed to be aligned along the x-axis and is rotated about the origin.</para>
/// </summary>
  void SetLeaderGlyph(vtkPolyData^ arg0);


  // vtkPolyData *GetLeaderGlyph ();
/// <summary>
/// <para>Specify a glyph to be used as the leader &quot;head&quot;. This could be something like an arrow or sphere. If not specified, no glyph is drawn. Note that the glyph is assumed to be aligned along the x-axis and is rotated about the origin.</para>
/// </summary>
  vtkPolyData^ GetLeaderGlyph();


  // void SetLeaderGlyphSize (double );
/// <summary>
/// <para>Specify the relative size of the leader head. This is expressed as a fraction of the size (diagonal length) of the renderer. The leader head is automatically scaled so that window resize, zooming or other  camera motion results in proportional changes in size to the leader glyph.</para>
/// </summary>
  void SetLeaderGlyphSize(double arg0);


  // double GetLeaderGlyphSizeMinValue ();
/// <summary>
/// <para>Specify the relative size of the leader head. This is expressed as a fraction of the size (diagonal length) of the renderer. The leader head is automatically scaled so that window resize, zooming or other  camera motion results in proportional changes in size to the leader glyph.</para>
/// </summary>
  double GetLeaderGlyphSizeMinValue();


  // double GetLeaderGlyphSizeMaxValue ();
/// <summary>
/// <para>Specify the relative size of the leader head. This is expressed as a fraction of the size (diagonal length) of the renderer. The leader head is automatically scaled so that window resize, zooming or other  camera motion results in proportional changes in size to the leader glyph.</para>
/// </summary>
  double GetLeaderGlyphSizeMaxValue();


  // double GetLeaderGlyphSize ();
/// <summary>
/// <para>Specify the relative size of the leader head. This is expressed as a fraction of the size (diagonal length) of the renderer. The leader head is automatically scaled so that window resize, zooming or other  camera motion results in proportional changes in size to the leader glyph.</para>
/// </summary>
  double GetLeaderGlyphSize();


  // void SetMaximumLeaderGlyphSize (int );
/// <summary>
/// <para>Specify the maximum size of the leader head (if any) in pixels. This  is used in conjunction with LeaderGlyphSize to cap the maximum size of the LeaderGlyph.</para>
/// </summary>
  void SetMaximumLeaderGlyphSize(int arg0);


  // int GetMaximumLeaderGlyphSizeMinValue ();
/// <summary>
/// <para>Specify the maximum size of the leader head (if any) in pixels. This  is used in conjunction with LeaderGlyphSize to cap the maximum size of the LeaderGlyph.</para>
/// </summary>
  int GetMaximumLeaderGlyphSizeMinValue();


  // int GetMaximumLeaderGlyphSizeMaxValue ();
/// <summary>
/// <para>Specify the maximum size of the leader head (if any) in pixels. This  is used in conjunction with LeaderGlyphSize to cap the maximum size of the LeaderGlyph.</para>
/// </summary>
  int GetMaximumLeaderGlyphSizeMaxValue();


  // int GetMaximumLeaderGlyphSize ();
/// <summary>
/// <para>Specify the maximum size of the leader head (if any) in pixels. This  is used in conjunction with LeaderGlyphSize to cap the maximum size of the LeaderGlyph.</para>
/// </summary>
  int GetMaximumLeaderGlyphSize();


  // void SetPadding (int );
/// <summary>
/// <para>Set/Get the padding between the caption and the border. The value is specified in pixels.</para>
/// </summary>
  void SetPadding(int arg0);


  // int GetPaddingMinValue ();
/// <summary>
/// <para>Set/Get the padding between the caption and the border. The value is specified in pixels.</para>
/// </summary>
  int GetPaddingMinValue();


  // int GetPaddingMaxValue ();
/// <summary>
/// <para>Set/Get the padding between the caption and the border. The value is specified in pixels.</para>
/// </summary>
  int GetPaddingMaxValue();


  // int GetPadding ();
/// <summary>
/// <para>Set/Get the padding between the caption and the border. The value is specified in pixels.</para>
/// </summary>
  int GetPadding();


  // vtkTextActor *GetTextActor ();
/// <summary>
/// <para>Get the text actor used by the caption. This is useful if you want to control justification and other characteristics of the text actor.</para>
/// </summary>
  vtkTextActor^ GetTextActor();


  // virtual void SetCaptionTextProperty (vtkTextProperty *p);
/// <summary>
/// <para>Set/Get the text property.</para>
/// </summary>
  void SetCaptionTextProperty(vtkTextProperty^ p);


  // vtkTextProperty *GetCaptionTextProperty ();
/// <summary>
/// <para>Set/Get the text property.</para>
/// </summary>
  vtkTextProperty^ GetCaptionTextProperty();


  // void ShallowCopy (vtkProp *prop);
/// <summary>
/// <para>Shallow copy of this scaled text actor. Overloads the virtual vtkProp method.</para>
/// </summary>
  void ShallowCopy(vtkProp^ prop);


// Did not wrap:  vtkCaptionActor2D ();


// Did not wrap:  ~vtkCaptionActor2D ();


// Did not wrap:  vtkCaptionActor2D (const vtkCaptionActor2D &);


// Did not wrap:  void vtkCaptionActor2D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCaptionActor2D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCaptionActor2D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCaptionActor2D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCaptionActor2D();


};

} // end vtkHybrid
