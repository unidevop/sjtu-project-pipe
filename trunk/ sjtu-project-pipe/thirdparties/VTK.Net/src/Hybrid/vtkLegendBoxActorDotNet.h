#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkLegendBoxActor : public vtkActor2D
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkLegendBoxActor *NewInstance ();
  vtkLegendBoxActor^ NewInstance();


  // vtkLegendBoxActor *SafeDownCast (vtkObject* o);
  static vtkLegendBoxActor^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkLegendBoxActor *New ();


  // void SetNumberOfEntries (int num);
/// <summary>
/// <para>Specify the number of entries in the legend box.</para>
/// </summary>
  void SetNumberOfEntries(int num);


  // int GetNumberOfEntries ();return this NumberOfEntries 
/// <summary>
/// <para>Add an entry to the legend box. You must supply a vtkPolyData to be used as a symbol (it can be NULL) and a text string (which also can be NULL). The vtkPolyData is assumed to be defined in the x-y plane, and the text is assumed to be a single line in height. Note that when this method is invoked previous entries are deleted. Also supply a text string and optionally a color. (If a color is not specified, then the entry color is the same as this actor's color.) (Note: use the set methods when you use SetNumberOfEntries().)</para>
/// </summary>
  int GetNumberOfEntries();


  // void SetEntry (int i, vtkPolyData *symbol, const char *string, double color[3]);
/// <summary>
/// <para>Add an entry to the legend box. You must supply a vtkPolyData to be used as a symbol (it can be NULL) and a text string (which also can be NULL). The vtkPolyData is assumed to be defined in the x-y plane, and the text is assumed to be a single line in height. Note that when this method is invoked previous entries are deleted. Also supply a text string and optionally a color. (If a color is not specified, then the entry color is the same as this actor's color.) (Note: use the set methods when you use SetNumberOfEntries().)</para>
/// </summary>
  void SetEntry(int i, vtkPolyData^ symbol, System::String^ string, array<double>^ color);


  // void SetEntrySymbol (int i, vtkPolyData *symbol);
/// <summary>
/// <para>Add an entry to the legend box. You must supply a vtkPolyData to be used as a symbol (it can be NULL) and a text string (which also can be NULL). The vtkPolyData is assumed to be defined in the x-y plane, and the text is assumed to be a single line in height. Note that when this method is invoked previous entries are deleted. Also supply a text string and optionally a color. (If a color is not specified, then the entry color is the same as this actor's color.) (Note: use the set methods when you use SetNumberOfEntries().)</para>
/// </summary>
  void SetEntrySymbol(int i, vtkPolyData^ symbol);


  // void SetEntryString (int i, const char *string);
/// <summary>
/// <para>Add an entry to the legend box. You must supply a vtkPolyData to be used as a symbol (it can be NULL) and a text string (which also can be NULL). The vtkPolyData is assumed to be defined in the x-y plane, and the text is assumed to be a single line in height. Note that when this method is invoked previous entries are deleted. Also supply a text string and optionally a color. (If a color is not specified, then the entry color is the same as this actor's color.) (Note: use the set methods when you use SetNumberOfEntries().)</para>
/// </summary>
  void SetEntryString(int i, System::String^ string);


  // void SetEntryColor (int i, double color[3]);
/// <summary>
/// <para>Add an entry to the legend box. You must supply a vtkPolyData to be used as a symbol (it can be NULL) and a text string (which also can be NULL). The vtkPolyData is assumed to be defined in the x-y plane, and the text is assumed to be a single line in height. Note that when this method is invoked previous entries are deleted. Also supply a text string and optionally a color. (If a color is not specified, then the entry color is the same as this actor's color.) (Note: use the set methods when you use SetNumberOfEntries().)</para>
/// </summary>
  void SetEntryColor(int i, array<double>^ color);


  // void SetEntryColor (int i, double r, double g, double b);
/// <summary>
/// <para>Add an entry to the legend box. You must supply a vtkPolyData to be used as a symbol (it can be NULL) and a text string (which also can be NULL). The vtkPolyData is assumed to be defined in the x-y plane, and the text is assumed to be a single line in height. Note that when this method is invoked previous entries are deleted. Also supply a text string and optionally a color. (If a color is not specified, then the entry color is the same as this actor's color.) (Note: use the set methods when you use SetNumberOfEntries().)</para>
/// </summary>
  void SetEntryColor(int i, double r, double g, double b);


  // vtkPolyData *GetEntrySymbol (int i);
/// <summary>
/// <para>Add an entry to the legend box. You must supply a vtkPolyData to be used as a symbol (it can be NULL) and a text string (which also can be NULL). The vtkPolyData is assumed to be defined in the x-y plane, and the text is assumed to be a single line in height. Note that when this method is invoked previous entries are deleted. Also supply a text string and optionally a color. (If a color is not specified, then the entry color is the same as this actor's color.) (Note: use the set methods when you use SetNumberOfEntries().)</para>
/// </summary>
  vtkPolyData^ GetEntrySymbol(int i);


  // const char *GetEntryString (int i);
/// <summary>
/// <para>Add an entry to the legend box. You must supply a vtkPolyData to be used as a symbol (it can be NULL) and a text string (which also can be NULL). The vtkPolyData is assumed to be defined in the x-y plane, and the text is assumed to be a single line in height. Note that when this method is invoked previous entries are deleted. Also supply a text string and optionally a color. (If a color is not specified, then the entry color is the same as this actor's color.) (Note: use the set methods when you use SetNumberOfEntries().)</para>
/// </summary>
  System::String^ GetEntryString(int i);


  // double *GetEntryColor (int i);
/// <summary>
/// <para>Add an entry to the legend box. You must supply a vtkPolyData to be used as a symbol (it can be NULL) and a text string (which also can be NULL). The vtkPolyData is assumed to be defined in the x-y plane, and the text is assumed to be a single line in height. Note that when this method is invoked previous entries are deleted. Also supply a text string and optionally a color. (If a color is not specified, then the entry color is the same as this actor's color.) (Note: use the set methods when you use SetNumberOfEntries().)</para>
/// </summary>
  array<double>^ GetEntryColor(int i);


  // virtual void SetEntryTextProperty (vtkTextProperty *p);
/// <summary>
/// <para>Set/Get the text property.</para>
/// </summary>
  void SetEntryTextProperty(vtkTextProperty^ p);


  // vtkTextProperty *GetEntryTextProperty ();
/// <summary>
/// <para>Set/Get the text property.</para>
/// </summary>
  vtkTextProperty^ GetEntryTextProperty();


  // void SetBorder (int );
/// <summary>
/// <para>Set/Get the flag that controls whether a border will be drawn around the legend box.</para>
/// </summary>
  void SetBorder(int arg0);


  // int GetBorder ();
/// <summary>
/// <para>Set/Get the flag that controls whether a border will be drawn around the legend box.</para>
/// </summary>
  int GetBorder();


  // void BorderOn ();
/// <summary>
/// <para>Set/Get the flag that controls whether a border will be drawn around the legend box.</para>
/// </summary>
  void BorderOn();


  // void BorderOff ();
/// <summary>
/// <para>Set/Get the flag that controls whether a border will be drawn around the legend box.</para>
/// </summary>
  void BorderOff();


  // void SetLockBorder (int );
/// <summary>
/// <para>Set/Get the flag that controls whether the border and legend placement is locked into the rectangle defined by (Position,Position2). If off, then the legend box will adjust its size so that the border fits nicely around the text and symbols. (The ivar is off by default.) Note: the legend box is guaranteed to lie within the original border definition.</para>
/// </summary>
  void SetLockBorder(int arg0);


  // int GetLockBorder ();
/// <summary>
/// <para>Set/Get the flag that controls whether the border and legend placement is locked into the rectangle defined by (Position,Position2). If off, then the legend box will adjust its size so that the border fits nicely around the text and symbols. (The ivar is off by default.) Note: the legend box is guaranteed to lie within the original border definition.</para>
/// </summary>
  int GetLockBorder();


  // void LockBorderOn ();
/// <summary>
/// <para>Set/Get the flag that controls whether the border and legend placement is locked into the rectangle defined by (Position,Position2). If off, then the legend box will adjust its size so that the border fits nicely around the text and symbols. (The ivar is off by default.) Note: the legend box is guaranteed to lie within the original border definition.</para>
/// </summary>
  void LockBorderOn();


  // void LockBorderOff ();
/// <summary>
/// <para>Set/Get the flag that controls whether the border and legend placement is locked into the rectangle defined by (Position,Position2). If off, then the legend box will adjust its size so that the border fits nicely around the text and symbols. (The ivar is off by default.) Note: the legend box is guaranteed to lie within the original border definition.</para>
/// </summary>
  void LockBorderOff();


  // void SetBox (int );
/// <summary>
/// <para>Set/Get the flag that controls whether a box will be drawn/filled corresponding to the legend box.</para>
/// </summary>
  void SetBox(int arg0);


  // int GetBox ();
/// <summary>
/// <para>Set/Get the flag that controls whether a box will be drawn/filled corresponding to the legend box.</para>
/// </summary>
  int GetBox();


  // void BoxOn ();
/// <summary>
/// <para>Set/Get the flag that controls whether a box will be drawn/filled corresponding to the legend box.</para>
/// </summary>
  void BoxOn();


  // void BoxOff ();
/// <summary>
/// <para>Set/Get the flag that controls whether a box will be drawn/filled corresponding to the legend box.</para>
/// </summary>
  void BoxOff();


  // vtkProperty2D *GetBoxProperty ();return this BoxActor GetProperty 
/// <summary>
/// <para>Get the box vtkProperty2D.</para>
/// </summary>
  vtkProperty2D^ GetBoxProperty();


  // void SetPadding (int );
/// <summary>
/// <para>Set/Get the padding between the legend entries and the border. The value is specified in pixels.</para>
/// </summary>
  void SetPadding(int arg0);


  // int GetPaddingMinValue ();
/// <summary>
/// <para>Set/Get the padding between the legend entries and the border. The value is specified in pixels.</para>
/// </summary>
  int GetPaddingMinValue();


  // int GetPaddingMaxValue ();
/// <summary>
/// <para>Set/Get the padding between the legend entries and the border. The value is specified in pixels.</para>
/// </summary>
  int GetPaddingMaxValue();


  // int GetPadding ();
/// <summary>
/// <para>Set/Get the padding between the legend entries and the border. The value is specified in pixels.</para>
/// </summary>
  int GetPadding();


  // void SetScalarVisibility (int );
/// <summary>
/// <para>Turn on/off flag to control whether the symbol's scalar data is used to color the symbol. If off, the color of the  vtkLegendBoxActor is used.</para>
/// </summary>
  void SetScalarVisibility(int arg0);


  // int GetScalarVisibility ();
/// <summary>
/// <para>Turn on/off flag to control whether the symbol's scalar data is used to color the symbol. If off, the color of the  vtkLegendBoxActor is used.</para>
/// </summary>
  int GetScalarVisibility();


  // void ScalarVisibilityOn ();
/// <summary>
/// <para>Turn on/off flag to control whether the symbol's scalar data is used to color the symbol. If off, the color of the  vtkLegendBoxActor is used.</para>
/// </summary>
  void ScalarVisibilityOn();


  // void ScalarVisibilityOff ();
/// <summary>
/// <para>Turn on/off flag to control whether the symbol's scalar data is used to color the symbol. If off, the color of the  vtkLegendBoxActor is used.</para>
/// </summary>
  void ScalarVisibilityOff();


  // void ShallowCopy (vtkProp *prop);
/// <summary>
/// <para>Shallow copy of this scaled text actor. Overloads the virtual vtkProp method.</para>
/// </summary>
  void ShallowCopy(vtkProp^ prop);


// Did not wrap:  vtkLegendBoxActor ();


// Did not wrap:  ~vtkLegendBoxActor ();


// Did not wrap:  void InitializeEntries ();


// Did not wrap:  vtkLegendBoxActor (const vtkLegendBoxActor &);


// Did not wrap:  void vtkLegendBoxActor 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkLegendBoxActor(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkLegendBoxActor(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkLegendBoxActor();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkLegendBoxActor();


};

} // end vtkHybrid
