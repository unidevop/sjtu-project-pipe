#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkTextProperty;

public ref class vtkTextMapper : public vtkMapper2D
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTextMapper *NewInstance ();
  vtkTextMapper^ NewInstance();


  // vtkTextMapper *SafeDownCast (vtkObject* o);
  static vtkTextMapper^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkTextMapper *New ();


  // virtual void GetSize (vtkViewport *, int size[2]);size size 
/// <summary>
/// <para>Return the size[2]/width/height of the rectangle required to draw this mapper (in pixels).</para>
/// </summary>
  void GetSize(vtkViewport^ arg0, array<int>^ size);


  // virtual int GetWidth (vtkViewport *v);
/// <summary>
/// <para>Return the size[2]/width/height of the rectangle required to draw this mapper (in pixels).</para>
/// </summary>
  int GetWidth(vtkViewport^ v);


  // virtual int GetHeight (vtkViewport *v);
/// <summary>
/// <para>Return the size[2]/width/height of the rectangle required to draw this mapper (in pixels).</para>
/// </summary>
  int GetHeight(vtkViewport^ v);


  // virtual void SetInput (const char *inputString);
/// <summary>
/// <para>Set the input text string to the mapper.  The mapper recognizes &quot;\n&quot; as a carriage return/linefeed (line separator).</para>
/// </summary>
  void SetInput(System::String^ inputString);


  // char *GetInput ();
/// <summary>
/// <para>Set the input text string to the mapper.  The mapper recognizes &quot;\n&quot; as a carriage return/linefeed (line separator).</para>
/// </summary>
  System::String^ GetInput();


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


  // int GetNumberOfLines ();
  int GetNumberOfLines();


  // void ShallowCopy (vtkTextMapper *tm);
/// <summary>
/// <para>Shallow copy of an actor.</para>
/// </summary>
  void ShallowCopy(vtkTextMapper^ tm);


  // int GetNumberOfLines (const char *input);
/// <summary>
/// <para>Determine the number of lines in the Input string (delimited by &quot;\n&quot;).</para>
/// </summary>
  int GetNumberOfLines(System::String^ input);


  // virtual int SetConstrainedFontSize (vtkViewport *, int targetWidth, int targetHeight);
/// <summary>
/// <para>Set and return the font size required to make this mapper fit in a given  target rectangle (width * height, in pixels).</para>
/// </summary>
  int SetConstrainedFontSize(vtkViewport^ arg0, int targetWidth, int targetHeight);


// Did not wrap:  static int SetMultipleConstrainedFontSize (vtkViewport *, int targetWidth, int targetHeight, vtkTextMapper *mappers, int nbOfMappers, int *maxResultingSize);


  // virtual int GetSystemFontSize (int size);return size 
/// <summary>
/// <para>Get the available system font size matching a font size.</para>
/// </summary>
  int GetSystemFontSize(int size);


// Did not wrap:  vtkTextMapper ();


// Did not wrap:  ~vtkTextMapper ();


// Did not wrap:  char *NextLine (const char *input, int lineNum);


// Did not wrap:  void GetMultiLineSize (vtkViewport *viewport, int size[2]);


// Did not wrap:  void RenderOverlayMultipleLines (vtkViewport *viewport, vtkActor2D *actor);


// Did not wrap:  vtkTextMapper (const vtkTextMapper &);


// Did not wrap:  void vtkTextMapper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTextMapper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTextMapper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTextMapper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTextMapper();


};

} // end vtkRendering
