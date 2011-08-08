#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkTextProperty : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTextProperty *NewInstance ();
  vtkTextProperty^ NewInstance();


  // vtkTextProperty *SafeDownCast (vtkObject* o);
  static vtkTextProperty^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkTextProperty *New ();


  // void SetColor (double , double , double );
/// <summary>
/// <para>Set the color of the text.</para>
/// </summary>
  void SetColor(double arg0, double arg1, double arg2);


  // void SetColor (double  a[3]);
/// <summary>
/// <para>Set the color of the text.</para>
/// </summary>
  void SetColor(array<double>^ a);


  // double  *GetColor ();
/// <summary>
/// <para>Set the color of the text.</para>
/// </summary>
  array<double>^ GetColor();


  // void SetOpacity (double );
/// <summary>
/// <para>Set/Get the text's opacity. 1.0 is totally opaque and 0.0 is completely transparent.</para>
/// </summary>
  void SetOpacity(double arg0);


  // double GetOpacity ();
/// <summary>
/// <para>Set/Get the text's opacity. 1.0 is totally opaque and 0.0 is completely transparent.</para>
/// </summary>
  double GetOpacity();


  // void SetFontFamily (int );
/// <summary>
/// <para>Set/Get the font family. Three font types are allowed: Arial (VTK_ARIAL), Courier (VTK_COURIER), and Times (VTK_TIMES).</para>
/// </summary>
  void SetFontFamily(int arg0);


  // int GetFontFamilyMinValue ();
/// <summary>
/// <para>Set/Get the font family. Three font types are allowed: Arial (VTK_ARIAL), Courier (VTK_COURIER), and Times (VTK_TIMES).</para>
/// </summary>
  int GetFontFamilyMinValue();


  // int GetFontFamilyMaxValue ();
/// <summary>
/// <para>Set/Get the font family. Three font types are allowed: Arial (VTK_ARIAL), Courier (VTK_COURIER), and Times (VTK_TIMES).</para>
/// </summary>
  int GetFontFamilyMaxValue();


  // int GetFontFamily ();
/// <summary>
/// <para>Set/Get the font family. Three font types are allowed: Arial (VTK_ARIAL), Courier (VTK_COURIER), and Times (VTK_TIMES).</para>
/// </summary>
  int GetFontFamily();


  // void SetFontFamilyToArial ();this SetFontFamily VTK_ARIAL 
/// <summary>
/// <para>Set/Get the font family. Three font types are allowed: Arial (VTK_ARIAL), Courier (VTK_COURIER), and Times (VTK_TIMES).</para>
/// </summary>
  void SetFontFamilyToArial();


  // void SetFontFamilyToCourier ();this SetFontFamily VTK_COURIER 
/// <summary>
/// <para>Set/Get the font family. Three font types are allowed: Arial (VTK_ARIAL), Courier (VTK_COURIER), and Times (VTK_TIMES).</para>
/// </summary>
  void SetFontFamilyToCourier();


  // void SetFontFamilyToTimes ();this SetFontFamily VTK_TIMES 
/// <summary>
/// <para>Set/Get the font family. Three font types are allowed: Arial (VTK_ARIAL), Courier (VTK_COURIER), and Times (VTK_TIMES).</para>
/// </summary>
  void SetFontFamilyToTimes();


  // char *GetFontFamilyAsString ();
/// <summary>
/// <para>Set/Get the font family. Three font types are allowed: Arial (VTK_ARIAL), Courier (VTK_COURIER), and Times (VTK_TIMES).</para>
/// </summary>
  System::String^ GetFontFamilyAsString();


  // static char *GetFontFamilyAsString (int f);
/// <summary>
/// <para>Set/Get the font family. Three font types are allowed: Arial (VTK_ARIAL), Courier (VTK_COURIER), and Times (VTK_TIMES).</para>
/// </summary>
  static System::String^ GetFontFamilyAsString(int f);


  // void SetFontSize (int );
/// <summary>
/// <para>Set/Get the font size (in points).</para>
/// </summary>
  void SetFontSize(int arg0);


  // int GetFontSizeMinValue ();
/// <summary>
/// <para>Set/Get the font size (in points).</para>
/// </summary>
  int GetFontSizeMinValue();


  // int GetFontSizeMaxValue ();
/// <summary>
/// <para>Set/Get the font size (in points).</para>
/// </summary>
  int GetFontSizeMaxValue();


  // int GetFontSize ();
/// <summary>
/// <para>Set/Get the font size (in points).</para>
/// </summary>
  int GetFontSize();


  // void SetBold (int );
/// <summary>
/// <para>Enable/disable text bolding.</para>
/// </summary>
  void SetBold(int arg0);


  // int GetBold ();
/// <summary>
/// <para>Enable/disable text bolding.</para>
/// </summary>
  int GetBold();


  // void BoldOn ();
/// <summary>
/// <para>Enable/disable text bolding.</para>
/// </summary>
  void BoldOn();


  // void BoldOff ();
/// <summary>
/// <para>Enable/disable text bolding.</para>
/// </summary>
  void BoldOff();


  // void SetItalic (int );
/// <summary>
/// <para>Enable/disable text italic.</para>
/// </summary>
  void SetItalic(int arg0);


  // int GetItalic ();
/// <summary>
/// <para>Enable/disable text italic.</para>
/// </summary>
  int GetItalic();


  // void ItalicOn ();
/// <summary>
/// <para>Enable/disable text italic.</para>
/// </summary>
  void ItalicOn();


  // void ItalicOff ();
/// <summary>
/// <para>Enable/disable text italic.</para>
/// </summary>
  void ItalicOff();


  // void SetShadow (int );
/// <summary>
/// <para>Enable/disable text shadow.</para>
/// </summary>
  void SetShadow(int arg0);


  // int GetShadow ();
/// <summary>
/// <para>Enable/disable text shadow.</para>
/// </summary>
  int GetShadow();


  // void ShadowOn ();
/// <summary>
/// <para>Enable/disable text shadow.</para>
/// </summary>
  void ShadowOn();


  // void ShadowOff ();
/// <summary>
/// <para>Enable/disable text shadow.</para>
/// </summary>
  void ShadowOff();


  // void SetShadowOffset (int , int );
/// <summary>
/// <para>Set/Get the shadow offset, i.e. the distance from the text to its shadow, in the same unit as FontSize.</para>
/// </summary>
  void SetShadowOffset(int arg0, int arg1);


  // void SetShadowOffset (int  a[2]);
/// <summary>
/// <para>Set/Get the shadow offset, i.e. the distance from the text to its shadow, in the same unit as FontSize.</para>
/// </summary>
  void SetShadowOffset(array<int>^ a);


  // int  *GetShadowOffset ();
/// <summary>
/// <para>Set/Get the shadow offset, i.e. the distance from the text to its shadow, in the same unit as FontSize.</para>
/// </summary>
  array<int>^ GetShadowOffset();


  // void GetShadowColor (double color[3]);
/// <summary>
/// <para>Get the shadow color. It is computed from the Color ivar</para>
/// </summary>
  void GetShadowColor(array<double>^ color);


  // void SetJustification (int );
/// <summary>
/// <para>Set/Get the horizontal justification to left (default), centered, or right.</para>
/// </summary>
  void SetJustification(int arg0);


  // int GetJustificationMinValue ();
/// <summary>
/// <para>Set/Get the horizontal justification to left (default), centered, or right.</para>
/// </summary>
  int GetJustificationMinValue();


  // int GetJustificationMaxValue ();
/// <summary>
/// <para>Set/Get the horizontal justification to left (default), centered, or right.</para>
/// </summary>
  int GetJustificationMaxValue();


  // int GetJustification ();
/// <summary>
/// <para>Set/Get the horizontal justification to left (default), centered, or right.</para>
/// </summary>
  int GetJustification();


  // void SetJustificationToLeft ();this SetJustification VTK_TEXT_LEFT 
/// <summary>
/// <para>Set/Get the horizontal justification to left (default), centered, or right.</para>
/// </summary>
  void SetJustificationToLeft();


  // void SetJustificationToCentered ();this SetJustification VTK_TEXT_CENTERED 
/// <summary>
/// <para>Set/Get the horizontal justification to left (default), centered, or right.</para>
/// </summary>
  void SetJustificationToCentered();


  // void SetJustificationToRight ();this SetJustification VTK_TEXT_RIGHT 
/// <summary>
/// <para>Set/Get the horizontal justification to left (default), centered, or right.</para>
/// </summary>
  void SetJustificationToRight();


  // char *GetJustificationAsString ();
/// <summary>
/// <para>Set/Get the horizontal justification to left (default), centered, or right.</para>
/// </summary>
  System::String^ GetJustificationAsString();


  // void SetVerticalJustification (int );
/// <summary>
/// <para>Set/Get the vertical justification to bottom (default), middle, or top.</para>
/// </summary>
  void SetVerticalJustification(int arg0);


  // int GetVerticalJustificationMinValue ();
/// <summary>
/// <para>Set/Get the vertical justification to bottom (default), middle, or top.</para>
/// </summary>
  int GetVerticalJustificationMinValue();


  // int GetVerticalJustificationMaxValue ();
/// <summary>
/// <para>Set/Get the vertical justification to bottom (default), middle, or top.</para>
/// </summary>
  int GetVerticalJustificationMaxValue();


  // int GetVerticalJustification ();
/// <summary>
/// <para>Set/Get the vertical justification to bottom (default), middle, or top.</para>
/// </summary>
  int GetVerticalJustification();


  // void SetVerticalJustificationToBottom ();this SetVerticalJustification VTK_TEXT_BOTTOM 
/// <summary>
/// <para>Set/Get the vertical justification to bottom (default), middle, or top.</para>
/// </summary>
  void SetVerticalJustificationToBottom();


  // void SetVerticalJustificationToCentered ();this SetVerticalJustification VTK_TEXT_CENTERED 
/// <summary>
/// <para>Set/Get the vertical justification to bottom (default), middle, or top.</para>
/// </summary>
  void SetVerticalJustificationToCentered();


  // void SetVerticalJustificationToTop ();this SetVerticalJustification VTK_TEXT_TOP 
/// <summary>
/// <para>Set/Get the vertical justification to bottom (default), middle, or top.</para>
/// </summary>
  void SetVerticalJustificationToTop();


  // char *GetVerticalJustificationAsString ();
/// <summary>
/// <para>Set/Get the vertical justification to bottom (default), middle, or top.</para>
/// </summary>
  System::String^ GetVerticalJustificationAsString();


  // void SetOrientation (double );
/// <summary>
/// <para>Set/Get the text's orientation (in degrees).</para>
/// </summary>
  void SetOrientation(double arg0);


  // double GetOrientation ();
/// <summary>
/// <para>Set/Get the text's orientation (in degrees).</para>
/// </summary>
  double GetOrientation();


  // void SetLineSpacing (double );
/// <summary>
/// <para>Set/Get the (extra) spacing between lines,  expressed as a text height multiplication factor.</para>
/// </summary>
  void SetLineSpacing(double arg0);


  // double GetLineSpacing ();
/// <summary>
/// <para>Set/Get the (extra) spacing between lines,  expressed as a text height multiplication factor.</para>
/// </summary>
  double GetLineSpacing();


  // void SetLineOffset (double );
/// <summary>
/// <para>Set/Get the vertical offset (measured in pixels).</para>
/// </summary>
  void SetLineOffset(double arg0);


  // double GetLineOffset ();
/// <summary>
/// <para>Set/Get the vertical offset (measured in pixels).</para>
/// </summary>
  double GetLineOffset();


  // void ShallowCopy (vtkTextProperty *tprop);
/// <summary>
/// <para>Shallow copy of a text property.</para>
/// </summary>
  void ShallowCopy(vtkTextProperty^ tprop);


// Did not wrap:  vtkTextProperty ();


// Did not wrap:  ~vtkTextProperty ();


// Did not wrap:  vtkTextProperty (const vtkTextProperty &);


// Did not wrap:  void vtkTextProperty 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTextProperty(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTextProperty(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTextProperty();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTextProperty();


};

} // end vtkRendering
