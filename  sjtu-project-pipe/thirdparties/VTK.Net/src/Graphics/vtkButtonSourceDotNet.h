#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkButtonSource : public vtkPolyDataAlgorithm
{

public:
  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkButtonSource *NewInstance ();
  vtkButtonSource^ NewInstance();


  // void SetCenter (double , double , double );
/// <summary>
/// <para>Specify a point defining the origin (center) of the button.</para>
/// </summary>
  void SetCenter(double arg0, double arg1, double arg2);


  // void SetCenter (double  a[3]);
/// <summary>
/// <para>Specify a point defining the origin (center) of the button.</para>
/// </summary>
  void SetCenter(array<double>^ a);


  // double  *GetCenter ();
/// <summary>
/// <para>Specify a point defining the origin (center) of the button.</para>
/// </summary>
  array<double>^ GetCenter();


  // void SetTextureStyle (int );
/// <summary>
/// <para>Set/Get the style of the texture region: whether to size it according to the x-y dimensions of the texture, or whether to make the texture region proportional to the width/height of the button.</para>
/// </summary>
  void SetTextureStyle(int arg0);


  // int GetTextureStyleMinValue ();
/// <summary>
/// <para>Set/Get the style of the texture region: whether to size it according to the x-y dimensions of the texture, or whether to make the texture region proportional to the width/height of the button.</para>
/// </summary>
  int GetTextureStyleMinValue();


  // int GetTextureStyleMaxValue ();
/// <summary>
/// <para>Set/Get the style of the texture region: whether to size it according to the x-y dimensions of the texture, or whether to make the texture region proportional to the width/height of the button.</para>
/// </summary>
  int GetTextureStyleMaxValue();


  // int GetTextureStyle ();
/// <summary>
/// <para>Set/Get the style of the texture region: whether to size it according to the x-y dimensions of the texture, or whether to make the texture region proportional to the width/height of the button.</para>
/// </summary>
  int GetTextureStyle();


  // void SetTextureStyleToFitImage ();this SetTextureStyle VTK_TEXTURE_STYLE_FIT_IMAGE 
/// <summary>
/// <para>Set/Get the style of the texture region: whether to size it according to the x-y dimensions of the texture, or whether to make the texture region proportional to the width/height of the button.</para>
/// </summary>
  void SetTextureStyleToFitImage();


  // void SetTextureStyleToProportional ();this SetTextureStyle VTK_TEXTURE_STYLE_PROPORTIONAL 
/// <summary>
/// <para>Set/get the texture dimension. This needs to be set if the texture style is set to fit the image.</para>
/// </summary>
  void SetTextureStyleToProportional();


  // void SetTextureDimensions (int , int );
/// <summary>
/// <para>Set/get the texture dimension. This needs to be set if the texture style is set to fit the image.</para>
/// </summary>
  void SetTextureDimensions(int arg0, int arg1);


  // void SetTextureDimensions (int  a[2]);
/// <summary>
/// <para>Set/get the texture dimension. This needs to be set if the texture style is set to fit the image.</para>
/// </summary>
  void SetTextureDimensions(array<int>^ a);


  // int  *GetTextureDimensions ();
/// <summary>
/// <para>Set/get the texture dimension. This needs to be set if the texture style is set to fit the image.</para>
/// </summary>
  array<int>^ GetTextureDimensions();


  // void SetShoulderTextureCoordinate (double , double );
/// <summary>
/// <para>Set/Get the default texture coordinate to set the shoulder region to.</para>
/// </summary>
  void SetShoulderTextureCoordinate(double arg0, double arg1);


  // void SetShoulderTextureCoordinate (double  a[2]);
/// <summary>
/// <para>Set/Get the default texture coordinate to set the shoulder region to.</para>
/// </summary>
  void SetShoulderTextureCoordinate(array<double>^ a);


  // double  *GetShoulderTextureCoordinate ();
/// <summary>
/// <para>Set/Get the default texture coordinate to set the shoulder region to.</para>
/// </summary>
  array<double>^ GetShoulderTextureCoordinate();


  // void SetTwoSided (int );
/// <summary>
/// <para>Indicate whether the button is single or double sided. A double sided button can be viewed from two sides...it looks sort of like a &quot;pill.&quot; A single-sided button is meant to viewed from a single side; it looks  like a &quot;clam-shell.&quot;</para>
/// </summary>
  void SetTwoSided(int arg0);


  // int GetTwoSided ();
/// <summary>
/// <para>Indicate whether the button is single or double sided. A double sided button can be viewed from two sides...it looks sort of like a &quot;pill.&quot; A single-sided button is meant to viewed from a single side; it looks  like a &quot;clam-shell.&quot;</para>
/// </summary>
  int GetTwoSided();


  // void TwoSidedOn ();
/// <summary>
/// <para>Indicate whether the button is single or double sided. A double sided button can be viewed from two sides...it looks sort of like a &quot;pill.&quot; A single-sided button is meant to viewed from a single side; it looks  like a &quot;clam-shell.&quot;</para>
/// </summary>
  void TwoSidedOn();


  // void TwoSidedOff ();
/// <summary>
/// <para>Indicate whether the button is single or double sided. A double sided button can be viewed from two sides...it looks sort of like a &quot;pill.&quot; A single-sided button is meant to viewed from a single side; it looks  like a &quot;clam-shell.&quot;</para>
/// </summary>
  void TwoSidedOff();


// Did not wrap:  vtkButtonSource ();


// Did not wrap:  ~vtkButtonSource ();


// Did not wrap:  vtkButtonSource (const vtkButtonSource &);


// Did not wrap:  void vtkButtonSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkButtonSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkButtonSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkButtonSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkButtonSource();


};

} // end vtkGraphics
