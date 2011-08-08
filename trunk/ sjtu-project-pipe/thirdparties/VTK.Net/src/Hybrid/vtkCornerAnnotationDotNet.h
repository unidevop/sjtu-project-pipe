#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkCornerAnnotation : public vtkActor2D
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCornerAnnotation *NewInstance ();
  vtkCornerAnnotation^ NewInstance();


  // vtkCornerAnnotation *SafeDownCast (vtkObject* o);
  static vtkCornerAnnotation^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkCornerAnnotation *New ();


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


  // void SetMaximumLineHeight (double );
/// <summary>
/// <para>Set/Get the maximum height of a line of text as a  percentage of the vertical area allocated to this scaled text actor. Defaults to 1.0</para>
/// </summary>
  void SetMaximumLineHeight(double arg0);


  // double GetMaximumLineHeight ();
/// <summary>
/// <para>Set/Get the maximum height of a line of text as a  percentage of the vertical area allocated to this scaled text actor. Defaults to 1.0</para>
/// </summary>
  double GetMaximumLineHeight();


  // void SetMinimumFontSize (int );
/// <summary>
/// <para>Set/Get the minimum/maximum size font that will be shown. If the font drops below the minimum size it will not be rendered.</para>
/// </summary>
  void SetMinimumFontSize(int arg0);


  // int GetMinimumFontSize ();
/// <summary>
/// <para>Set/Get the minimum/maximum size font that will be shown. If the font drops below the minimum size it will not be rendered.</para>
/// </summary>
  int GetMinimumFontSize();


  // void SetMaximumFontSize (int );
/// <summary>
/// <para>Set/Get the minimum/maximum size font that will be shown. If the font drops below the minimum size it will not be rendered.</para>
/// </summary>
  void SetMaximumFontSize(int arg0);


  // int GetMaximumFontSize ();
/// <summary>
/// <para>Set/Get the minimum/maximum size font that will be shown. If the font drops below the minimum size it will not be rendered.</para>
/// </summary>
  int GetMaximumFontSize();


  // void SetLinearFontScaleFactor (double );
/// <summary>
/// <para>Set/Get font scaling factors The font size, f, is calculated as the largest possible value such that the annotations for the given viewport do not overlap.  This font size is scaled non-linearly with the viewport size, to maintain an acceptable readable size at larger viewport sizes,  without being too big. f' = linearScale * pow(f,nonlinearScale)</para>
/// </summary>
  void SetLinearFontScaleFactor(double arg0);


  // double GetLinearFontScaleFactor ();
/// <summary>
/// <para>Set/Get font scaling factors The font size, f, is calculated as the largest possible value such that the annotations for the given viewport do not overlap.  This font size is scaled non-linearly with the viewport size, to maintain an acceptable readable size at larger viewport sizes,  without being too big. f' = linearScale * pow(f,nonlinearScale)</para>
/// </summary>
  double GetLinearFontScaleFactor();


  // void SetNonlinearFontScaleFactor (double );
/// <summary>
/// <para>Set/Get font scaling factors The font size, f, is calculated as the largest possible value such that the annotations for the given viewport do not overlap.  This font size is scaled non-linearly with the viewport size, to maintain an acceptable readable size at larger viewport sizes,  without being too big. f' = linearScale * pow(f,nonlinearScale)</para>
/// </summary>
  void SetNonlinearFontScaleFactor(double arg0);


  // double GetNonlinearFontScaleFactor ();
/// <summary>
/// <para>Set/Get font scaling factors The font size, f, is calculated as the largest possible value such that the annotations for the given viewport do not overlap.  This font size is scaled non-linearly with the viewport size, to maintain an acceptable readable size at larger viewport sizes,  without being too big. f' = linearScale * pow(f,nonlinearScale)</para>
/// </summary>
  double GetNonlinearFontScaleFactor();


  // virtual void ReleaseGraphicsResources (vtkWindow *);
/// <summary>
/// <para>Release any graphics resources that are being consumed by this actor. The parameter window could be used to determine which graphic resources to release.</para>
/// </summary>
  void ReleaseGraphicsResources(vtkWindow^ arg0);


  // void SetText (int i, const char *text);
/// <summary>
/// <para>Set/Get the text to be displayed for each corner</para>
/// </summary>
  void SetText(int i, System::String^ text);


  // char *GetText (int i);
/// <summary>
/// <para>Set/Get the text to be displayed for each corner</para>
/// </summary>
  System::String^ GetText(int i);


  // void ClearAllTexts ();
/// <summary>
/// <para>Set/Get the text to be displayed for each corner</para>
/// </summary>
  void ClearAllTexts();


  // void CopyAllTextsFrom (vtkCornerAnnotation *ca);
/// <summary>
/// <para>Set/Get the text to be displayed for each corner</para>
/// </summary>
  void CopyAllTextsFrom(vtkCornerAnnotation^ ca);


  // void SetImageActor (vtkImageActor *);
/// <summary>
/// <para>Set an image actor to look at for slice information</para>
/// </summary>
  void SetImageActor(vtkImageActor^ arg0);


  // vtkImageActor *GetImageActor ();
/// <summary>
/// <para>Set an image actor to look at for slice information</para>
/// </summary>
  vtkImageActor^ GetImageActor();


  // void SetWindowLevel (vtkImageMapToWindowLevelColors *);
/// <summary>
/// <para>Set an instance of vtkImageMapToWindowLevelColors to use for looking at window level changes</para>
/// </summary>
  void SetWindowLevel(vtkImageMapToWindowLevelColors^ arg0);


  // vtkImageMapToWindowLevelColors *GetWindowLevel ();
/// <summary>
/// <para>Set an instance of vtkImageMapToWindowLevelColors to use for looking at window level changes</para>
/// </summary>
  vtkImageMapToWindowLevelColors^ GetWindowLevel();


  // void SetLevelShift (double );
/// <summary>
/// <para>Set the value to shift the level by.</para>
/// </summary>
  void SetLevelShift(double arg0);


  // double GetLevelShift ();
/// <summary>
/// <para>Set the value to shift the level by.</para>
/// </summary>
  double GetLevelShift();


  // void SetLevelScale (double );
/// <summary>
/// <para>Set the value to scale the level by.</para>
/// </summary>
  void SetLevelScale(double arg0);


  // double GetLevelScale ();
/// <summary>
/// <para>Set the value to scale the level by.</para>
/// </summary>
  double GetLevelScale();


  // virtual void SetTextProperty (vtkTextProperty *p);
/// <summary>
/// <para>Set/Get the text property of all corners.</para>
/// </summary>
  void SetTextProperty(vtkTextProperty^ p);


  // vtkTextProperty *GetTextProperty ();
/// <summary>
/// <para>Set/Get the text property of all corners.</para>
/// </summary>
  vtkTextProperty^ GetTextProperty();


  // void ShowSliceAndImageOn ();
/// <summary>
/// <para>Even if there is an image actor, should &lt;slice&gt; and &lt;image&gt; be displayed?</para>
/// </summary>
  void ShowSliceAndImageOn();


  // void ShowSliceAndImageOff ();
/// <summary>
/// <para>Even if there is an image actor, should &lt;slice&gt; and &lt;image&gt; be displayed?</para>
/// </summary>
  void ShowSliceAndImageOff();


  // void SetShowSliceAndImage (int );
/// <summary>
/// <para>Even if there is an image actor, should &lt;slice&gt; and &lt;image&gt; be displayed?</para>
/// </summary>
  void SetShowSliceAndImage(int arg0);


  // int GetShowSliceAndImage ();
/// <summary>
/// <para>Even if there is an image actor, should &lt;slice&gt; and &lt;image&gt; be displayed?</para>
/// </summary>
  int GetShowSliceAndImage();


// Did not wrap:  vtkCornerAnnotation ();


// Did not wrap:  ~vtkCornerAnnotation ();


// Did not wrap:  virtual void TextReplace (vtkImageActor *ia, vtkImageMapToWindowLevelColors *wl);


// Did not wrap:  virtual void SetTextActorsPosition (int vsize[2]);


// Did not wrap:  virtual void SetTextActorsJustification ();


// Did not wrap:  vtkCornerAnnotation (const vtkCornerAnnotation &);


// Did not wrap:  void vtkCornerAnnotation 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCornerAnnotation(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCornerAnnotation(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCornerAnnotation();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCornerAnnotation();


};

} // end vtkHybrid
