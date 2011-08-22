#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkRenderer;

public ref class vtkRendererSource : public vtkAlgorithm
{

public:
// Did not wrap:  static vtkRendererSource *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRendererSource *NewInstance ();
  vtkRendererSource^ NewInstance();


  // vtkRendererSource *SafeDownCast (vtkObject* o);
  static vtkRendererSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // unsigned long GetMTime ();
/// <summary>
/// <para>Return the MTime also considering the Renderer.</para>
/// </summary>
  unsigned long GetMTime();


  // void SetInput (vtkRenderer *);
/// <summary>
/// <para>Indicates what renderer to get the pixel data from.</para>
/// </summary>
  void SetInput(vtkRenderer^ arg0);


  // vtkRenderer *GetInput ();
/// <summary>
/// <para>Returns which renderer is being used as the source for the pixel data.</para>
/// </summary>
  vtkRenderer^ GetInput();


  // void SetWholeWindow (int );
/// <summary>
/// <para>Use the entire RenderWindow as a data source or just the Renderer. The default is zero, just the Renderer.</para>
/// </summary>
  void SetWholeWindow(int arg0);


  // int GetWholeWindow ();
/// <summary>
/// <para>Use the entire RenderWindow as a data source or just the Renderer. The default is zero, just the Renderer.</para>
/// </summary>
  int GetWholeWindow();


  // void WholeWindowOn ();
/// <summary>
/// <para>Use the entire RenderWindow as a data source or just the Renderer. The default is zero, just the Renderer.</para>
/// </summary>
  void WholeWindowOn();


  // void WholeWindowOff ();
/// <summary>
/// <para>Use the entire RenderWindow as a data source or just the Renderer. The default is zero, just the Renderer.</para>
/// </summary>
  void WholeWindowOff();


  // void SetRenderFlag (int );
/// <summary>
/// <para>If this flag is on, the Executing causes a render first.</para>
/// </summary>
  void SetRenderFlag(int arg0);


  // int GetRenderFlag ();
/// <summary>
/// <para>If this flag is on, the Executing causes a render first.</para>
/// </summary>
  int GetRenderFlag();


  // void RenderFlagOn ();
/// <summary>
/// <para>If this flag is on, the Executing causes a render first.</para>
/// </summary>
  void RenderFlagOn();


  // void RenderFlagOff ();
/// <summary>
/// <para>If this flag is on, the Executing causes a render first.</para>
/// </summary>
  void RenderFlagOff();


  // void SetDepthValues (int );
/// <summary>
/// <para>A boolean value to control whether to grab z-buffer  (i.e., depth values) along with the image data. The z-buffer data is placed into a field data attributes named &quot;ZBuffer&quot; .</para>
/// </summary>
  void SetDepthValues(int arg0);


  // int GetDepthValues ();
/// <summary>
/// <para>A boolean value to control whether to grab z-buffer  (i.e., depth values) along with the image data. The z-buffer data is placed into a field data attributes named &quot;ZBuffer&quot; .</para>
/// </summary>
  int GetDepthValues();


  // void DepthValuesOn ();
/// <summary>
/// <para>A boolean value to control whether to grab z-buffer  (i.e., depth values) along with the image data. The z-buffer data is placed into a field data attributes named &quot;ZBuffer&quot; .</para>
/// </summary>
  void DepthValuesOn();


  // void DepthValuesOff ();
/// <summary>
/// <para>A boolean value to control whether to grab z-buffer  (i.e., depth values) along with the image data. The z-buffer data is placed into a field data attributes named &quot;ZBuffer&quot; .</para>
/// </summary>
  void DepthValuesOff();


  // void SetDepthValuesInScalars (int );
/// <summary>
/// <para>A boolean value to control whether to grab z-buffer  (i.e., depth values) along with the image data. The z-buffer data is placed in the scalars as a fourth Z component (shift and scaled to map the full 0..255 range).</para>
/// </summary>
  void SetDepthValuesInScalars(int arg0);


  // int GetDepthValuesInScalars ();
/// <summary>
/// <para>A boolean value to control whether to grab z-buffer  (i.e., depth values) along with the image data. The z-buffer data is placed in the scalars as a fourth Z component (shift and scaled to map the full 0..255 range).</para>
/// </summary>
  int GetDepthValuesInScalars();


  // void DepthValuesInScalarsOn ();
/// <summary>
/// <para>A boolean value to control whether to grab z-buffer  (i.e., depth values) along with the image data. The z-buffer data is placed in the scalars as a fourth Z component (shift and scaled to map the full 0..255 range).</para>
/// </summary>
  void DepthValuesInScalarsOn();


  // void DepthValuesInScalarsOff ();
/// <summary>
/// <para>A boolean value to control whether to grab z-buffer  (i.e., depth values) along with the image data. The z-buffer data is placed in the scalars as a fourth Z component (shift and scaled to map the full 0..255 range).</para>
/// </summary>
  void DepthValuesInScalarsOff();


  // vtkImageData *GetOutput ();
/// <summary>
/// <para>Get the output data object for a port on this algorithm.</para>
/// </summary>
  vtkImageData^ GetOutput();


// Did not wrap:  virtual int ProcessRequest (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkRendererSource ();


// Did not wrap:  ~vtkRendererSource ();


// Did not wrap:  void RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  virtual void RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillOutputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkRendererSource (const vtkRendererSource &);


// Did not wrap:  void vtkRendererSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRendererSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRendererSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRendererSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRendererSource();


};

} // end vtkRendering
