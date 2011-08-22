#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkRenderLargeImage : public vtkAlgorithm
{

public:
// Did not wrap:  static vtkRenderLargeImage *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRenderLargeImage *NewInstance ();
  vtkRenderLargeImage^ NewInstance();


  // vtkRenderLargeImage *SafeDownCast (vtkObject* o);
  static vtkRenderLargeImage^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetMagnification (int );
/// <summary>
/// <para>The magnification of the current render window</para>
/// </summary>
  void SetMagnification(int arg0);


  // int GetMagnification ();
/// <summary>
/// <para>The magnification of the current render window</para>
/// </summary>
  int GetMagnification();


  // virtual void SetInput (vtkRenderer *);
/// <summary>
/// <para>Indicates what renderer to get the pixel data from.</para>
/// </summary>
  void SetInput(vtkRenderer^ arg0);


  // vtkRenderer *GetInput ();
/// <summary>
/// <para>Returns which renderer is being used as the source for the pixel data.</para>
/// </summary>
  vtkRenderer^ GetInput();


  // vtkImageData *GetOutput ();
/// <summary>
/// <para>Get the output data object for a port on this algorithm.</para>
/// </summary>
  vtkImageData^ GetOutput();


// Did not wrap:  virtual int ProcessRequest (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkRenderLargeImage ();


// Did not wrap:  ~vtkRenderLargeImage ();


// Did not wrap:  void RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillOutputPortInformation (int port, vtkInformation *info);


// Did not wrap:  void Rescale2DActors ();


// Did not wrap:  void Shift2DActors (int x, int y);


// Did not wrap:  void Restore2DActors ();


// Did not wrap:  vtkRenderLargeImage (const vtkRenderLargeImage &);


// Did not wrap:  void vtkRenderLargeImage 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRenderLargeImage(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRenderLargeImage(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRenderLargeImage();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRenderLargeImage();


};

} // end vtkHybrid
