#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkFixedPointRayCastImage;

public ref class vtkRayCastImageDisplayHelper : public vtkObject
{

public:
// Did not wrap:  static vtkRayCastImageDisplayHelper *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRayCastImageDisplayHelper *NewInstance ();
  vtkRayCastImageDisplayHelper^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void RenderTexture (vtkVolume *vol, vtkRenderer *ren, int imageMemorySize[2], int imageViewportSize[2], int imageInUseSize[2], int imageOrigin[2], float requestedDepth, unsigned char *image) = 0;
  void RenderTexture(vtkVolume^ vol, vtkRenderer^ ren, array<int>^ imageMemorySize, array<int>^ imageViewportSize, array<int>^ imageInUseSize, array<int>^ imageOrigin, float requestedDepth, array<unsigned char>^ image);


  // virtual void RenderTexture (vtkVolume *vol, vtkRenderer *ren, int imageMemorySize[2], int imageViewportSize[2], int imageInUseSize[2], int imageOrigin[2], float requestedDepth, unsigned short *image) = 0;
  void RenderTexture(vtkVolume^ vol, vtkRenderer^ ren, array<int>^ imageMemorySize, array<int>^ imageViewportSize, array<int>^ imageInUseSize, array<int>^ imageOrigin, float requestedDepth, array<unsigned short>^ image);


  // virtual void RenderTexture (vtkVolume *vol, vtkRenderer *ren, vtkFixedPointRayCastImage *image, float requestedDepth) = 0;
  void RenderTexture(vtkVolume^ vol, vtkRenderer^ ren, vtkFixedPointRayCastImage^ image, float requestedDepth);


  // void SetPreMultipliedColors (int );
  void SetPreMultipliedColors(int arg0);


  // int GetPreMultipliedColorsMinValue ();
  int GetPreMultipliedColorsMinValue();


  // int GetPreMultipliedColorsMaxValue ();
  int GetPreMultipliedColorsMaxValue();


  // int GetPreMultipliedColors ();
  int GetPreMultipliedColors();


  // void PreMultipliedColorsOn ();
  void PreMultipliedColorsOn();


  // void PreMultipliedColorsOff ();
  void PreMultipliedColorsOff();


  // void SetPixelScale (float );
/// <summary>
/// <para>Set / Get the pixel scale to be applied to the image before display. Can be set to scale the incoming pixel values - for example the fixed point mapper uses the unsigned short API but with 15 bit values so needs a scale of 2.0.</para>
/// </summary>
  void SetPixelScale(float arg0);


  // float GetPixelScale ();
/// <summary>
/// <para>Set / Get the pixel scale to be applied to the image before display. Can be set to scale the incoming pixel values - for example the fixed point mapper uses the unsigned short API but with 15 bit values so needs a scale of 2.0.</para>
/// </summary>
  float GetPixelScale();


// Did not wrap:  vtkRayCastImageDisplayHelper ();


// Did not wrap:  ~vtkRayCastImageDisplayHelper ();


// Did not wrap:  vtkRayCastImageDisplayHelper (const vtkRayCastImageDisplayHelper &);


// Did not wrap:  void vtkRayCastImageDisplayHelper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRayCastImageDisplayHelper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRayCastImageDisplayHelper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRayCastImageDisplayHelper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRayCastImageDisplayHelper();


};

} // end vtkVolumeRendering
