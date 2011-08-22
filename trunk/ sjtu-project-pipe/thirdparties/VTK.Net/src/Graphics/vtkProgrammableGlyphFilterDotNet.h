#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkProgrammableGlyphFilter : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkProgrammableGlyphFilter *NewInstance ();
  vtkProgrammableGlyphFilter^ NewInstance();


  // vtkProgrammableGlyphFilter *SafeDownCast (vtkObject* o);
  static vtkProgrammableGlyphFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkProgrammableGlyphFilter *New ();


  // void SetSource (vtkPolyData *source);
/// <summary>
/// <para>Set/Get the source to use for this glyph.  Note: you can change the source during execution of this filter.</para>
/// </summary>
  void SetSource(vtkPolyData^ source);


  // vtkPolyData *GetSource ();
/// <summary>
/// <para>Set/Get the source to use for this glyph.  Note: you can change the source during execution of this filter.</para>
/// </summary>
  vtkPolyData^ GetSource();


// Did not wrap:  void SetGlyphMethod (void (*func)(void *) , void *arg);


// Did not wrap:  void SetGlyphMethodArgDelete (void (*func)(void *) );


  // vtkIdType GetPointId ();
/// <summary>
/// <para>Get the current point id during processing. Value only valid during the Execute() method of this filter. (Meant to be called by the GlyphMethod().)</para>
/// </summary>
  int GetPointId();


  // double  *GetPoint ();
/// <summary>
/// <para>Get the current point coordinates during processing. Value only valid during the Execute() method of this filter. (Meant to be called by the GlyphMethod().)</para>
/// </summary>
  array<double>^ GetPoint();


  // vtkPointData *GetPointData ();
/// <summary>
/// <para>Get the set of point data attributes for the input. A convenience to the programmer to be used in the GlyphMethod(). Only valid during the Execute() method of this filter.</para>
/// </summary>
  vtkPointData^ GetPointData();


  // void SetColorMode (int );
/// <summary>
/// <para>Either color by the input or source scalar data.</para>
/// </summary>
  void SetColorMode(int arg0);


  // int GetColorMode ();
/// <summary>
/// <para>Either color by the input or source scalar data.</para>
/// </summary>
  int GetColorMode();


  // void SetColorModeToColorByInput ();this SetColorMode VTK_COLOR_BY_INPUT 
/// <summary>
/// <para>Either color by the input or source scalar data.</para>
/// </summary>
  void SetColorModeToColorByInput();


  // void SetColorModeToColorBySource ();this SetColorMode VTK_COLOR_BY_SOURCE 
/// <summary>
/// <para>Either color by the input or source scalar data.</para>
/// </summary>
  void SetColorModeToColorBySource();


  // const char *GetColorModeAsString ();
/// <summary>
/// <para>Either color by the input or source scalar data.</para>
/// </summary>
  System::String^ GetColorModeAsString();


// Did not wrap:  vtkProgrammableGlyphFilter ();


// Did not wrap:  ~vtkProgrammableGlyphFilter ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkProgrammableGlyphFilter (const vtkProgrammableGlyphFilter &);


// Did not wrap:  void vtkProgrammableGlyphFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkProgrammableGlyphFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkProgrammableGlyphFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkProgrammableGlyphFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkProgrammableGlyphFilter();


};

} // end vtkGraphics
