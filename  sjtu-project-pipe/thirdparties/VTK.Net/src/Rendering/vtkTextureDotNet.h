#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkRenderer;

public ref class vtkTexture : public vtkImageAlgorithm
{

public:
// Did not wrap:  static vtkTexture *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTexture *NewInstance ();
  vtkTexture^ NewInstance();


  // vtkTexture *SafeDownCast (vtkObject* o);
  static vtkTexture^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void Render (vtkRenderer *ren);
/// <summary>
/// <para>Renders a texture map. It first checks the object's modified time to make sure the texture maps Input is valid, then it invokes the  Load() method.</para>
/// </summary>
  void Render(vtkRenderer^ ren);


  // virtual void ReleaseGraphicsResources (vtkWindow *);
/// <summary>
/// <para>Release any graphics resources that are being consumed by this texture. The parameter window could be used to determine which graphic resources to release.</para>
/// </summary>
  void ReleaseGraphicsResources(vtkWindow^ arg0);


  // virtual void Load (vtkRenderer *);
/// <summary>
/// <para>Abstract interface to renderer. Each concrete subclass of  vtkTexture will load its data into graphics system in response  to this method invocation.</para>
/// </summary>
  void Load(vtkRenderer^ arg0);


  // int GetRepeat ();
/// <summary>
/// <para>Turn on/off the repetition of the texture map when the texture coords extend beyond the [0,1] range.</para>
/// </summary>
  int GetRepeat();


  // void SetRepeat (int );
/// <summary>
/// <para>Turn on/off the repetition of the texture map when the texture coords extend beyond the [0,1] range.</para>
/// </summary>
  void SetRepeat(int arg0);


  // void RepeatOn ();
/// <summary>
/// <para>Turn on/off the repetition of the texture map when the texture coords extend beyond the [0,1] range.</para>
/// </summary>
  void RepeatOn();


  // void RepeatOff ();
/// <summary>
/// <para>Turn on/off the repetition of the texture map when the texture coords extend beyond the [0,1] range.</para>
/// </summary>
  void RepeatOff();


  // int GetInterpolate ();
/// <summary>
/// <para>Turn on/off linear interpolation of the texture map when rendering.</para>
/// </summary>
  int GetInterpolate();


  // void SetInterpolate (int );
/// <summary>
/// <para>Turn on/off linear interpolation of the texture map when rendering.</para>
/// </summary>
  void SetInterpolate(int arg0);


  // void InterpolateOn ();
/// <summary>
/// <para>Turn on/off linear interpolation of the texture map when rendering.</para>
/// </summary>
  void InterpolateOn();


  // void InterpolateOff ();
/// <summary>
/// <para>Turn on/off linear interpolation of the texture map when rendering.</para>
/// </summary>
  void InterpolateOff();


  // void SetQuality (int );
/// <summary>
/// <para>Force texture quality to 16-bit or 32-bit. This might not be supported on all machines.</para>
/// </summary>
  void SetQuality(int arg0);


  // int GetQuality ();
/// <summary>
/// <para>Force texture quality to 16-bit or 32-bit. This might not be supported on all machines.</para>
/// </summary>
  int GetQuality();


  // void SetQualityToDefault ();this SetQuality VTK_TEXTURE_QUALITY_DEFAULT 
/// <summary>
/// <para>Force texture quality to 16-bit or 32-bit. This might not be supported on all machines.</para>
/// </summary>
  void SetQualityToDefault();


  // void SetQualityTo16Bit ();this SetQuality VTK_TEXTURE_QUALITY_16BIT 
/// <summary>
/// <para>Force texture quality to 16-bit or 32-bit. This might not be supported on all machines.</para>
/// </summary>
  void SetQualityTo16Bit();


  // void SetQualityTo32Bit ();this SetQuality VTK_TEXTURE_QUALITY_32BIT 
/// <summary>
/// <para>Force texture quality to 16-bit or 32-bit. This might not be supported on all machines.</para>
/// </summary>
  void SetQualityTo32Bit();


  // int GetMapColorScalarsThroughLookupTable ();
/// <summary>
/// <para>Turn on/off the mapping of color scalars through the lookup table. The default is Off. If Off, unsigned char scalars will be used directly as texture. If On, scalars will be mapped through the lookup table to generate 4-component unsigned char scalars. This ivar does not affect other scalars like unsigned short, float, etc. These scalars are always mapped through lookup tables.</para>
/// </summary>
  int GetMapColorScalarsThroughLookupTable();


  // void SetMapColorScalarsThroughLookupTable (int );
/// <summary>
/// <para>Turn on/off the mapping of color scalars through the lookup table. The default is Off. If Off, unsigned char scalars will be used directly as texture. If On, scalars will be mapped through the lookup table to generate 4-component unsigned char scalars. This ivar does not affect other scalars like unsigned short, float, etc. These scalars are always mapped through lookup tables.</para>
/// </summary>
  void SetMapColorScalarsThroughLookupTable(int arg0);


  // void MapColorScalarsThroughLookupTableOn ();
/// <summary>
/// <para>Turn on/off the mapping of color scalars through the lookup table. The default is Off. If Off, unsigned char scalars will be used directly as texture. If On, scalars will be mapped through the lookup table to generate 4-component unsigned char scalars. This ivar does not affect other scalars like unsigned short, float, etc. These scalars are always mapped through lookup tables.</para>
/// </summary>
  void MapColorScalarsThroughLookupTableOn();


  // void MapColorScalarsThroughLookupTableOff ();
/// <summary>
/// <para>Turn on/off the mapping of color scalars through the lookup table. The default is Off. If Off, unsigned char scalars will be used directly as texture. If On, scalars will be mapped through the lookup table to generate 4-component unsigned char scalars. This ivar does not affect other scalars like unsigned short, float, etc. These scalars are always mapped through lookup tables.</para>
/// </summary>
  void MapColorScalarsThroughLookupTableOff();


  // void SetLookupTable (vtkLookupTable *);
/// <summary>
/// <para>Specify the lookup table to convert scalars if necessary</para>
/// </summary>
  void SetLookupTable(vtkLookupTable^ arg0);


  // vtkLookupTable *GetLookupTable ();
/// <summary>
/// <para>Specify the lookup table to convert scalars if necessary</para>
/// </summary>
  vtkLookupTable^ GetLookupTable();


  // vtkUnsignedCharArray *GetMappedScalars ();
/// <summary>
/// <para>Get Mapped Scalars</para>
/// </summary>
  vtkUnsignedCharArray^ GetMappedScalars();


// Did not wrap:  unsigned char *MapScalarsToColors (vtkDataArray *scalars);


// Did not wrap:  vtkTexture ();


// Did not wrap:  ~vtkTexture ();


// Did not wrap:  vtkTexture (const vtkTexture &);


// Did not wrap:  void vtkTexture 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTexture(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTexture(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTexture();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTexture();


};

} // end vtkRendering
