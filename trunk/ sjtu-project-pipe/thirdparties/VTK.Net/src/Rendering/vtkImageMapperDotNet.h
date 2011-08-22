#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageMapper : public vtkMapper2D
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageMapper *NewInstance ();
  vtkImageMapper^ NewInstance();


  // vtkImageMapper *SafeDownCast (vtkObject* o);
  static vtkImageMapper^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkImageMapper *New ();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // unsigned long GetMTime ();
/// <summary>
/// <para>Override Modifiedtime as we have added a lookuptable</para>
/// </summary>
  unsigned long GetMTime();


  // void SetColorWindow (double );
/// <summary>
/// <para>Set/Get the window value for window/level</para>
/// </summary>
  void SetColorWindow(double arg0);


  // double GetColorWindow ();
/// <summary>
/// <para>Set/Get the window value for window/level</para>
/// </summary>
  double GetColorWindow();


  // void SetColorLevel (double );
/// <summary>
/// <para>Set/Get the level value for window/level</para>
/// </summary>
  void SetColorLevel(double arg0);


  // double GetColorLevel ();
/// <summary>
/// <para>Set/Get the level value for window/level</para>
/// </summary>
  double GetColorLevel();


  // void SetZSlice (int );
/// <summary>
/// <para>Set/Get the current slice number. The axis Z in ZSlice does not necessarily have any relation to the z axis of the data on disk. It is simply the axis orthogonal to the x,y, display plane. GetWholeZMax and Min are convenience methods for obtaining the number of slices that can be displayed. Again the number of slices is in reference to the display z axis, which is not necessarily the z axis on disk. (due to reformatting etc)</para>
/// </summary>
  void SetZSlice(int arg0);


  // int GetZSlice ();
/// <summary>
/// <para>Set/Get the current slice number. The axis Z in ZSlice does not necessarily have any relation to the z axis of the data on disk. It is simply the axis orthogonal to the x,y, display plane. GetWholeZMax and Min are convenience methods for obtaining the number of slices that can be displayed. Again the number of slices is in reference to the display z axis, which is not necessarily the z axis on disk. (due to reformatting etc)</para>
/// </summary>
  int GetZSlice();


  // int GetWholeZMin ();
/// <summary>
/// <para>Set/Get the current slice number. The axis Z in ZSlice does not necessarily have any relation to the z axis of the data on disk. It is simply the axis orthogonal to the x,y, display plane. GetWholeZMax and Min are convenience methods for obtaining the number of slices that can be displayed. Again the number of slices is in reference to the display z axis, which is not necessarily the z axis on disk. (due to reformatting etc)</para>
/// </summary>
  int GetWholeZMin();


  // int GetWholeZMax ();
/// <summary>
/// <para>Set/Get the current slice number. The axis Z in ZSlice does not necessarily have any relation to the z axis of the data on disk. It is simply the axis orthogonal to the x,y, display plane. GetWholeZMax and Min are convenience methods for obtaining the number of slices that can be displayed. Again the number of slices is in reference to the display z axis, which is not necessarily the z axis on disk. (due to reformatting etc)</para>
/// </summary>
  int GetWholeZMax();


  // void RenderStart (vtkViewport *viewport, vtkActor2D *actor);
/// <summary>
/// <para>Draw the image to the screen.</para>
/// </summary>
  void RenderStart(vtkViewport^ viewport, vtkActor2D^ actor);


  // virtual void RenderData (vtkViewport *, vtkImageData *, vtkActor2D *) = 0;
/// <summary>
/// <para>Function called by Render to actually draw the image to to the screen</para>
/// </summary>
  void RenderData(vtkViewport^ arg0, vtkImageData^ arg1, vtkActor2D^ arg2);


  // double GetColorShift ();
/// <summary>
/// <para>Methods used internally for performing the Window/Level mapping.</para>
/// </summary>
  double GetColorShift();


  // double GetColorScale ();
/// <summary>
/// <para>Methods used internally for performing the Window/Level mapping.</para>
/// </summary>
  double GetColorScale();


  // virtual void SetInput (vtkImageData *input);
/// <summary>
/// <para>Set the Input of a filter. </para>
/// </summary>
  void SetInput(vtkImageData^ input);


  // vtkImageData *GetInput ();
/// <summary>
/// <para>Set the Input of a filter. </para>
/// </summary>
  vtkImageData^ GetInput();


  // void SetRenderToRectangle (int );
/// <summary>
/// <para>If RenderToRectangle is set (by default not), then the imagemapper will render the image into the rectangle supplied by the Actor2D's PositionCoordinate and Position2Coordinate</para>
/// </summary>
  void SetRenderToRectangle(int arg0);


  // int GetRenderToRectangle ();
/// <summary>
/// <para>If RenderToRectangle is set (by default not), then the imagemapper will render the image into the rectangle supplied by the Actor2D's PositionCoordinate and Position2Coordinate</para>
/// </summary>
  int GetRenderToRectangle();


  // void RenderToRectangleOn ();
/// <summary>
/// <para>If RenderToRectangle is set (by default not), then the imagemapper will render the image into the rectangle supplied by the Actor2D's PositionCoordinate and Position2Coordinate</para>
/// </summary>
  void RenderToRectangleOn();


  // void RenderToRectangleOff ();
/// <summary>
/// <para>If RenderToRectangle is set (by default not), then the imagemapper will render the image into the rectangle supplied by the Actor2D's PositionCoordinate and Position2Coordinate</para>
/// </summary>
  void RenderToRectangleOff();


  // void SetUseCustomExtents (int );
/// <summary>
/// <para>Usually, the entire image is displayed, if UseCustomExtents is set (by default not), then the region supplied in the CustomDisplayExtents is used in preference. Note that the Custom extents are x,y only and the zslice is still applied</para>
/// </summary>
  void SetUseCustomExtents(int arg0);


  // int GetUseCustomExtents ();
/// <summary>
/// <para>Usually, the entire image is displayed, if UseCustomExtents is set (by default not), then the region supplied in the CustomDisplayExtents is used in preference. Note that the Custom extents are x,y only and the zslice is still applied</para>
/// </summary>
  int GetUseCustomExtents();


  // void UseCustomExtentsOn ();
/// <summary>
/// <para>Usually, the entire image is displayed, if UseCustomExtents is set (by default not), then the region supplied in the CustomDisplayExtents is used in preference. Note that the Custom extents are x,y only and the zslice is still applied</para>
/// </summary>
  void UseCustomExtentsOn();


  // void UseCustomExtentsOff ();
/// <summary>
/// <para>Usually, the entire image is displayed, if UseCustomExtents is set (by default not), then the region supplied in the CustomDisplayExtents is used in preference. Note that the Custom extents are x,y only and the zslice is still applied</para>
/// </summary>
  void UseCustomExtentsOff();


  // void SetCustomDisplayExtents (int  [4]);
/// <summary>
/// <para>The image extents which should be displayed with UseCustomExtents Note that the Custom extents are x,y only and the zslice is still applied</para>
/// </summary>
  void SetCustomDisplayExtents(array<int>^ arg0);


  // int  *GetCustomDisplayExtents ();
/// <summary>
/// <para>The image extents which should be displayed with UseCustomExtents Note that the Custom extents are x,y only and the zslice is still applied</para>
/// </summary>
  array<int>^ GetCustomDisplayExtents();


// Did not wrap:  vtkImageMapper ();


// Did not wrap:  ~vtkImageMapper ();


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkImageMapper (const vtkImageMapper &);


// Did not wrap:  void vtkImageMapper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageMapper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageMapper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageMapper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageMapper();


};

} // end vtkRendering
