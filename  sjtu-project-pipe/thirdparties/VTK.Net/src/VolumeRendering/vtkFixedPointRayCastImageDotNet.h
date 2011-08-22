#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkFixedPointRayCastImage : public vtkObject
{

public:
// Did not wrap:  static vtkFixedPointRayCastImage *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkFixedPointRayCastImage *NewInstance ();
  vtkFixedPointRayCastImage^ NewInstance();


  // vtkFixedPointRayCastImage *SafeDownCast (vtkObject* o);
  static vtkFixedPointRayCastImage^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  unsigned short *GetImage ();return this Image 


  // void SetImageViewportSize (int , int );
/// <summary>
/// <para>Set / Get the ImageViewportSize. This is the size of the whole viewport in pixels.</para>
/// </summary>
  void SetImageViewportSize(int arg0, int arg1);


  // void SetImageViewportSize (int  a[2]);
/// <summary>
/// <para>Set / Get the ImageViewportSize. This is the size of the whole viewport in pixels.</para>
/// </summary>
  void SetImageViewportSize(array<int>^ a);


  // int  *GetImageViewportSize ();
/// <summary>
/// <para>Set / Get the ImageViewportSize. This is the size of the whole viewport in pixels.</para>
/// </summary>
  array<int>^ GetImageViewportSize();


  // void SetImageMemorySize (int , int );
/// <summary>
/// <para>Set / Get the ImageMemorySize. This is the size in pixels of the Image ivar. This will be a power of two in order to ensure that the texture can be rendered by graphics hardware that requires power of two textures.</para>
/// </summary>
  void SetImageMemorySize(int arg0, int arg1);


  // void SetImageMemorySize (int  a[2]);
/// <summary>
/// <para>Set / Get the ImageMemorySize. This is the size in pixels of the Image ivar. This will be a power of two in order to ensure that the texture can be rendered by graphics hardware that requires power of two textures.</para>
/// </summary>
  void SetImageMemorySize(array<int>^ a);


  // int  *GetImageMemorySize ();
/// <summary>
/// <para>Set / Get the ImageMemorySize. This is the size in pixels of the Image ivar. This will be a power of two in order to ensure that the texture can be rendered by graphics hardware that requires power of two textures.</para>
/// </summary>
  array<int>^ GetImageMemorySize();


  // void SetImageInUseSize (int , int );
/// <summary>
/// <para>Set / Get the size of the image we are actually using. As long as the memory size is big enough, but not too big, we won't bother deleting and re-allocated, we'll just  continue to use the memory size we have. This size will always be equal to or less than the ImageMemorySize.</para>
/// </summary>
  void SetImageInUseSize(int arg0, int arg1);


  // void SetImageInUseSize (int  a[2]);
/// <summary>
/// <para>Set / Get the size of the image we are actually using. As long as the memory size is big enough, but not too big, we won't bother deleting and re-allocated, we'll just  continue to use the memory size we have. This size will always be equal to or less than the ImageMemorySize.</para>
/// </summary>
  void SetImageInUseSize(array<int>^ a);


  // int  *GetImageInUseSize ();
/// <summary>
/// <para>Set / Get the size of the image we are actually using. As long as the memory size is big enough, but not too big, we won't bother deleting and re-allocated, we'll just  continue to use the memory size we have. This size will always be equal to or less than the ImageMemorySize.</para>
/// </summary>
  array<int>^ GetImageInUseSize();


  // void SetImageOrigin (int , int );
/// <summary>
/// <para>Set / Get the origin of the image. This is the starting  pixel within the whole viewport that our Image starts on. That is, we could be generating just a subregion of the whole viewport due to the fact that our volume occupies  only a portion of the viewport. The Image pixels will start from this location.</para>
/// </summary>
  void SetImageOrigin(int arg0, int arg1);


  // void SetImageOrigin (int  a[2]);
/// <summary>
/// <para>Set / Get the origin of the image. This is the starting  pixel within the whole viewport that our Image starts on. That is, we could be generating just a subregion of the whole viewport due to the fact that our volume occupies  only a portion of the viewport. The Image pixels will start from this location.</para>
/// </summary>
  void SetImageOrigin(array<int>^ a);


  // int  *GetImageOrigin ();
/// <summary>
/// <para>Set / Get the origin of the image. This is the starting  pixel within the whole viewport that our Image starts on. That is, we could be generating just a subregion of the whole viewport due to the fact that our volume occupies  only a portion of the viewport. The Image pixels will start from this location.</para>
/// </summary>
  array<int>^ GetImageOrigin();


  // void SetImageSampleDistance (float );
/// <summary>
/// <para>Set / Get the ImageSampleDistance that will be used for  rendering. This is a copy of the value stored in the mapper. It is stored here for sharing between all mappers that are participating in the creation of this image.</para>
/// </summary>
  void SetImageSampleDistance(float arg0);


  // float GetImageSampleDistance ();
/// <summary>
/// <para>Set / Get the ImageSampleDistance that will be used for  rendering. This is a copy of the value stored in the mapper. It is stored here for sharing between all mappers that are participating in the creation of this image.</para>
/// </summary>
  float GetImageSampleDistance();


  // void AllocateImage ();
/// <summary>
/// <para>Call this method once the ImageMemorySize has been set the allocate the image. If an image already exists, it will be deleted first.</para>
/// </summary>
  void AllocateImage();


  // void ClearImage ();
/// <summary>
/// <para>Clear the image to (0,0,0,0) for each pixel.</para>
/// </summary>
  void ClearImage();


  // void SetZBufferSize (int , int );
/// <summary>
/// <para>Set / Get the size of the ZBuffer in pixels. The zbuffer will be captured for the region of the screen covered by the ImageInUseSize image. However, due to subsampling, the size of the ImageInUseSize image may be smaller than this ZBuffer image which will be captured at screen resolution.</para>
/// </summary>
  void SetZBufferSize(int arg0, int arg1);


  // void SetZBufferSize (int  a[2]);
/// <summary>
/// <para>Set / Get the size of the ZBuffer in pixels. The zbuffer will be captured for the region of the screen covered by the ImageInUseSize image. However, due to subsampling, the size of the ImageInUseSize image may be smaller than this ZBuffer image which will be captured at screen resolution.</para>
/// </summary>
  void SetZBufferSize(array<int>^ a);


  // int  *GetZBufferSize ();
/// <summary>
/// <para>Set / Get the size of the ZBuffer in pixels. The zbuffer will be captured for the region of the screen covered by the ImageInUseSize image. However, due to subsampling, the size of the ImageInUseSize image may be smaller than this ZBuffer image which will be captured at screen resolution.</para>
/// </summary>
  array<int>^ GetZBufferSize();


  // void SetZBufferOrigin (int , int );
/// <summary>
/// <para>Set / Get the origin of the ZBuffer. This is the distance from the lower left corner of the viewport where the ZBuffer started (multiply the ImageOrigin by the ImageSampleDistance) This is the pixel location on the full resolution viewport where the ZBuffer capture will start. These values are used  to convert the (x,y) pixel location within the ImageInUseSize  image into a ZBuffer location.</para>
/// </summary>
  void SetZBufferOrigin(int arg0, int arg1);


  // void SetZBufferOrigin (int  a[2]);
/// <summary>
/// <para>Set / Get the origin of the ZBuffer. This is the distance from the lower left corner of the viewport where the ZBuffer started (multiply the ImageOrigin by the ImageSampleDistance) This is the pixel location on the full resolution viewport where the ZBuffer capture will start. These values are used  to convert the (x,y) pixel location within the ImageInUseSize  image into a ZBuffer location.</para>
/// </summary>
  void SetZBufferOrigin(array<int>^ a);


  // int  *GetZBufferOrigin ();
/// <summary>
/// <para>Set / Get the origin of the ZBuffer. This is the distance from the lower left corner of the viewport where the ZBuffer started (multiply the ImageOrigin by the ImageSampleDistance) This is the pixel location on the full resolution viewport where the ZBuffer capture will start. These values are used  to convert the (x,y) pixel location within the ImageInUseSize  image into a ZBuffer location.</para>
/// </summary>
  array<int>^ GetZBufferOrigin();


  // void SetUseZBuffer (int );
/// <summary>
/// <para>The UseZBuffer flag indicates whether the ZBuffer is in use. The ZBuffer is captured and used when IntermixIntersectingGeometry is on in the mapper, and when there are props that have been rendered before the current volume. </para>
/// </summary>
  void SetUseZBuffer(int arg0);


  // int GetUseZBufferMinValue ();
/// <summary>
/// <para>The UseZBuffer flag indicates whether the ZBuffer is in use. The ZBuffer is captured and used when IntermixIntersectingGeometry is on in the mapper, and when there are props that have been rendered before the current volume. </para>
/// </summary>
  int GetUseZBufferMinValue();


  // int GetUseZBufferMaxValue ();
/// <summary>
/// <para>The UseZBuffer flag indicates whether the ZBuffer is in use. The ZBuffer is captured and used when IntermixIntersectingGeometry is on in the mapper, and when there are props that have been rendered before the current volume. </para>
/// </summary>
  int GetUseZBufferMaxValue();


  // int GetUseZBuffer ();
/// <summary>
/// <para>The UseZBuffer flag indicates whether the ZBuffer is in use. The ZBuffer is captured and used when IntermixIntersectingGeometry is on in the mapper, and when there are props that have been rendered before the current volume. </para>
/// </summary>
  int GetUseZBuffer();


  // void UseZBufferOn ();
/// <summary>
/// <para>The UseZBuffer flag indicates whether the ZBuffer is in use. The ZBuffer is captured and used when IntermixIntersectingGeometry is on in the mapper, and when there are props that have been rendered before the current volume. </para>
/// </summary>
  void UseZBufferOn();


  // void UseZBufferOff ();
/// <summary>
/// <para>The UseZBuffer flag indicates whether the ZBuffer is in use. The ZBuffer is captured and used when IntermixIntersectingGeometry is on in the mapper, and when there are props that have been rendered before the current volume. </para>
/// </summary>
  void UseZBufferOff();


  // float GetZBufferValue (int x, int y);
/// <summary>
/// <para>Get the ZBuffer value corresponding to location (x,y) where (x,y) are indexing into the ImageInUse image. This must be converted to the zbuffer image coordinates. Nearest neighbor value is returned. If UseZBuffer is off, then 1.0 is always returned.</para>
/// </summary>
  float GetZBufferValue(int x, int y);


// Did not wrap:  float *GetZBuffer ();return this ZBuffer 


  // void AllocateZBuffer ();
  void AllocateZBuffer();


// Did not wrap:  vtkFixedPointRayCastImage ();


// Did not wrap:  ~vtkFixedPointRayCastImage ();


// Did not wrap:  vtkFixedPointRayCastImage (const vtkFixedPointRayCastImage &);


// Did not wrap:  void vtkFixedPointRayCastImage 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkFixedPointRayCastImage(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkFixedPointRayCastImage(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkFixedPointRayCastImage();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkFixedPointRayCastImage();


};

} // end vtkVolumeRendering
