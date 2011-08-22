#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkRenderer;

public ref class vtkLightKit : public vtkObject
{

public:
// Did not wrap:  static vtkLightKit *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkLightKit *NewInstance ();
  vtkLightKit^ NewInstance();


  // vtkLightKit *SafeDownCast (vtkObject* o);
  static vtkLightKit^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetKeyLightIntensity (double );
/// <summary>
/// <para>Set/Get the intensity of the key light.  The key light is the brightest light in the scene.  The intensities of the other two lights are ratios of the key light's intensity.  </para>
/// </summary>
  void SetKeyLightIntensity(double arg0);


  // double GetKeyLightIntensity ();
/// <summary>
/// <para>Set/Get the intensity of the key light.  The key light is the brightest light in the scene.  The intensities of the other two lights are ratios of the key light's intensity.  </para>
/// </summary>
  double GetKeyLightIntensity();


  // void SetKeyToFillRatio (double );
/// <summary>
/// <para>Set/Get the key-to-fill ratio.  This ratio controls how bright the fill light is compared to the key light: larger values correspond to a dimmer fill light.  The purpose of the fill light is to light parts of the object not lit by the key light, while still maintaining constrast.  This type of lighting may correspond to indirect illumination from the key light, bounced off a wall, floor, or other object.  The fill light should never be brighter than the key light:  a good range for the key-to-fill ratio is between 2 and 10.</para>
/// </summary>
  void SetKeyToFillRatio(double arg0);


  // double GetKeyToFillRatioMinValue ();
/// <summary>
/// <para>Set/Get the key-to-fill ratio.  This ratio controls how bright the fill light is compared to the key light: larger values correspond to a dimmer fill light.  The purpose of the fill light is to light parts of the object not lit by the key light, while still maintaining constrast.  This type of lighting may correspond to indirect illumination from the key light, bounced off a wall, floor, or other object.  The fill light should never be brighter than the key light:  a good range for the key-to-fill ratio is between 2 and 10.</para>
/// </summary>
  double GetKeyToFillRatioMinValue();


  // double GetKeyToFillRatioMaxValue ();
/// <summary>
/// <para>Set/Get the key-to-fill ratio.  This ratio controls how bright the fill light is compared to the key light: larger values correspond to a dimmer fill light.  The purpose of the fill light is to light parts of the object not lit by the key light, while still maintaining constrast.  This type of lighting may correspond to indirect illumination from the key light, bounced off a wall, floor, or other object.  The fill light should never be brighter than the key light:  a good range for the key-to-fill ratio is between 2 and 10.</para>
/// </summary>
  double GetKeyToFillRatioMaxValue();


  // double GetKeyToFillRatio ();
/// <summary>
/// <para>Set/Get the key-to-fill ratio.  This ratio controls how bright the fill light is compared to the key light: larger values correspond to a dimmer fill light.  The purpose of the fill light is to light parts of the object not lit by the key light, while still maintaining constrast.  This type of lighting may correspond to indirect illumination from the key light, bounced off a wall, floor, or other object.  The fill light should never be brighter than the key light:  a good range for the key-to-fill ratio is between 2 and 10.</para>
/// </summary>
  double GetKeyToFillRatio();


  // void SetKeyToHeadRatio (double );
/// <summary>
/// <para>Set/Get the key-to-headlight ratio.  Similar to the key-to-fill ratio, this ratio controls how bright the headlight light is compared to the key light: larger values correspond to a dimmer headlight light.  The headlight is special kind of fill light, lighting only the parts of the object that the camera can see. As such, a headlight tends to reduce the contrast of a scene.  It can be used to fill in &quot;shadows&quot; of the object missed by the key and fill lights.  The headlight should always be significantly dimmer than the key light:  ratios of 2 to 15 are typical.</para>
/// </summary>
  void SetKeyToHeadRatio(double arg0);


  // double GetKeyToHeadRatioMinValue ();
/// <summary>
/// <para>Set/Get the key-to-headlight ratio.  Similar to the key-to-fill ratio, this ratio controls how bright the headlight light is compared to the key light: larger values correspond to a dimmer headlight light.  The headlight is special kind of fill light, lighting only the parts of the object that the camera can see. As such, a headlight tends to reduce the contrast of a scene.  It can be used to fill in &quot;shadows&quot; of the object missed by the key and fill lights.  The headlight should always be significantly dimmer than the key light:  ratios of 2 to 15 are typical.</para>
/// </summary>
  double GetKeyToHeadRatioMinValue();


  // double GetKeyToHeadRatioMaxValue ();
/// <summary>
/// <para>Set/Get the key-to-headlight ratio.  Similar to the key-to-fill ratio, this ratio controls how bright the headlight light is compared to the key light: larger values correspond to a dimmer headlight light.  The headlight is special kind of fill light, lighting only the parts of the object that the camera can see. As such, a headlight tends to reduce the contrast of a scene.  It can be used to fill in &quot;shadows&quot; of the object missed by the key and fill lights.  The headlight should always be significantly dimmer than the key light:  ratios of 2 to 15 are typical.</para>
/// </summary>
  double GetKeyToHeadRatioMaxValue();


  // double GetKeyToHeadRatio ();
/// <summary>
/// <para>Set/Get the key-to-headlight ratio.  Similar to the key-to-fill ratio, this ratio controls how bright the headlight light is compared to the key light: larger values correspond to a dimmer headlight light.  The headlight is special kind of fill light, lighting only the parts of the object that the camera can see. As such, a headlight tends to reduce the contrast of a scene.  It can be used to fill in &quot;shadows&quot; of the object missed by the key and fill lights.  The headlight should always be significantly dimmer than the key light:  ratios of 2 to 15 are typical.</para>
/// </summary>
  double GetKeyToHeadRatio();


  // void SetKeyToBackRatio (double );
/// <summary>
/// <para>Set/Get the key-to-back light ratio.  This ratio controls how bright the back lights are compared to the key light: larger values correspond to dimmer back lights.  The back lights fill in the remaining high-contrast regions behind the object. Values between 2 and 10 are good.</para>
/// </summary>
  void SetKeyToBackRatio(double arg0);


  // double GetKeyToBackRatioMinValue ();
/// <summary>
/// <para>Set/Get the key-to-back light ratio.  This ratio controls how bright the back lights are compared to the key light: larger values correspond to dimmer back lights.  The back lights fill in the remaining high-contrast regions behind the object. Values between 2 and 10 are good.</para>
/// </summary>
  double GetKeyToBackRatioMinValue();


  // double GetKeyToBackRatioMaxValue ();
/// <summary>
/// <para>Set/Get the key-to-back light ratio.  This ratio controls how bright the back lights are compared to the key light: larger values correspond to dimmer back lights.  The back lights fill in the remaining high-contrast regions behind the object. Values between 2 and 10 are good.</para>
/// </summary>
  double GetKeyToBackRatioMaxValue();


  // double GetKeyToBackRatio ();
/// <summary>
/// <para>Set/Get the key-to-back light ratio.  This ratio controls how bright the back lights are compared to the key light: larger values correspond to dimmer back lights.  The back lights fill in the remaining high-contrast regions behind the object. Values between 2 and 10 are good.</para>
/// </summary>
  double GetKeyToBackRatio();


  // void SetKeyLightWarmth (double );
/// <summary>
/// <para>Set the warmth of each the lights.  Warmth is a parameter that varies from 0 to 1, where 0 is &quot;cold&quot; (looks icy or lit by a very blue sky), 1 is &quot;warm&quot; (the red of a very red sunset, or the embers of a campfire), and 0.5 is a neutral white.  The warmth scale is non-linear. Warmth values close to 0.5 are subtly &quot;warmer&quot; or &quot;cooler,&quot; much like a warmer tungsten incandescent bulb, a cooler halogen, or daylight (cooler still).  Moving further away from 0.5, colors become more quickly varying towards blues and reds.  With regards to aesthetics, extremes of warmth should be used sparingly.</para>
/// </summary>
  void SetKeyLightWarmth(double arg0);


  // double GetKeyLightWarmth ();
/// <summary>
/// <para>Set the warmth of each the lights.  Warmth is a parameter that varies from 0 to 1, where 0 is &quot;cold&quot; (looks icy or lit by a very blue sky), 1 is &quot;warm&quot; (the red of a very red sunset, or the embers of a campfire), and 0.5 is a neutral white.  The warmth scale is non-linear. Warmth values close to 0.5 are subtly &quot;warmer&quot; or &quot;cooler,&quot; much like a warmer tungsten incandescent bulb, a cooler halogen, or daylight (cooler still).  Moving further away from 0.5, colors become more quickly varying towards blues and reds.  With regards to aesthetics, extremes of warmth should be used sparingly.</para>
/// </summary>
  double GetKeyLightWarmth();


  // void SetFillLightWarmth (double );
  void SetFillLightWarmth(double arg0);


  // double GetFillLightWarmth ();
  double GetFillLightWarmth();


  // void SetHeadLightWarmth (double );
  void SetHeadLightWarmth(double arg0);


  // double GetHeadLightWarmth ();
  double GetHeadLightWarmth();


  // void SetBackLightWarmth (double );
  void SetBackLightWarmth(double arg0);


  // double GetBackLightWarmth ();
  double GetBackLightWarmth();


  // double  *GetKeyLightColor ();
/// <summary>
/// <para>Returns the floating-point RGB values of each of the light's color.</para>
/// </summary>
  array<double>^ GetKeyLightColor();


  // double  *GetFillLightColor ();
/// <summary>
/// <para>Returns the floating-point RGB values of each of the light's color.</para>
/// </summary>
  array<double>^ GetFillLightColor();


  // double  *GetHeadLightColor ();
/// <summary>
/// <para>Returns the floating-point RGB values of each of the light's color.</para>
/// </summary>
  array<double>^ GetHeadLightColor();


  // double  *GetBackLightColor ();
/// <summary>
/// <para>Returns the floating-point RGB values of each of the light's color.</para>
/// </summary>
  array<double>^ GetBackLightColor();


  // void SetHeadlightWarmth (double v);
/// <summary>
/// <para>To maintain a deprecation API:</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  void SetHeadlightWarmth(double v);


  // double GetHeadlightWarmth ();
/// <summary>
/// <para>To maintain a deprecation API:</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  double GetHeadlightWarmth();


  // void GetHeadlightColor (double *color);
/// <summary>
/// <para>To maintain a deprecation API:</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  void GetHeadlightColor(array<double>^ color);


  // void MaintainLuminanceOn ();
/// <summary>
/// <para>If MaintainLuminance is set, the LightKit will attempt to maintain the apparent intensity of lights based on their perceptual brightnesses. By default, MaintainLuminance is off.</para>
/// </summary>
  void MaintainLuminanceOn();


  // void MaintainLuminanceOff ();
/// <summary>
/// <para>If MaintainLuminance is set, the LightKit will attempt to maintain the apparent intensity of lights based on their perceptual brightnesses. By default, MaintainLuminance is off.</para>
/// </summary>
  void MaintainLuminanceOff();


  // int GetMaintainLuminance ();
/// <summary>
/// <para>If MaintainLuminance is set, the LightKit will attempt to maintain the apparent intensity of lights based on their perceptual brightnesses. By default, MaintainLuminance is off.</para>
/// </summary>
  int GetMaintainLuminance();


  // void SetMaintainLuminance (int );
/// <summary>
/// <para>If MaintainLuminance is set, the LightKit will attempt to maintain the apparent intensity of lights based on their perceptual brightnesses. By default, MaintainLuminance is off.</para>
/// </summary>
  void SetMaintainLuminance(int arg0);


  // void SetKeyLightAngle (double elevation, double azimuth);
/// <summary>
/// <para>Get/Set the position of the key, fill, and back lights using angular methods.  Elevation corresponds to latitude, azimuth to longitude.  It is recommended that the key light always be on the viewer's side of the object and above the object, while the fill light generally lights the part of the object not lit by the fill light.  The headlight, which is always located at the viewer, can then be used to reduce the contrast in the image. There are a pair of back lights.  They are located at the same elevation and at opposing azimuths (ie, one to the left, and one to the right).  They are generally set at the equator (elevation = 0), and at approximately 120 degrees (lighting from each side and behind).</para>
/// </summary>
  void SetKeyLightAngle(double elevation, double azimuth);


  // void SetKeyLightAngle (double angle[2]);this SetKeyLightAngle angle angle 
/// <summary>
/// <para>Get/Set the position of the key, fill, and back lights using angular methods.  Elevation corresponds to latitude, azimuth to longitude.  It is recommended that the key light always be on the viewer's side of the object and above the object, while the fill light generally lights the part of the object not lit by the fill light.  The headlight, which is always located at the viewer, can then be used to reduce the contrast in the image. There are a pair of back lights.  They are located at the same elevation and at opposing azimuths (ie, one to the left, and one to the right).  They are generally set at the equator (elevation = 0), and at approximately 120 degrees (lighting from each side and behind).</para>
/// </summary>
  void SetKeyLightAngle(array<double>^ angle);


  // void SetKeyLightElevation (double x);this SetKeyLightAngle x this KeyLightAngle 
  void SetKeyLightElevation(double x);


  // void SetKeyLightAzimuth (double x);this SetKeyLightAngle this KeyLightAngle x 
  void SetKeyLightAzimuth(double x);


  // double  *GetKeyLightAngle ();
  array<double>^ GetKeyLightAngle();


  // double GetKeyLightElevation ();double ang this GetKeyLightAngle ang return ang 
  double GetKeyLightElevation();


  // double GetKeyLightAzimuth ();double ang this GetKeyLightAngle ang return ang 
  double GetKeyLightAzimuth();


  // void SetFillLightAngle (double elevation, double azimuth);
  void SetFillLightAngle(double elevation, double azimuth);


  // void SetFillLightAngle (double angle[2]);this SetFillLightAngle angle angle 
  void SetFillLightAngle(array<double>^ angle);


  // void SetFillLightElevation (double x);this SetFillLightAngle x this FillLightAngle 
  void SetFillLightElevation(double x);


  // void SetFillLightAzimuth (double x);this SetFillLightAngle this FillLightAngle x 
  void SetFillLightAzimuth(double x);


  // double  *GetFillLightAngle ();
  array<double>^ GetFillLightAngle();


  // double GetFillLightElevation ();double ang this GetFillLightAngle ang return ang 
  double GetFillLightElevation();


  // double GetFillLightAzimuth ();double ang this GetFillLightAngle ang return ang 
  double GetFillLightAzimuth();


  // void SetBackLightAngle (double elevation, double azimuth);
  void SetBackLightAngle(double elevation, double azimuth);


  // void SetBackLightAngle (double angle[2]);this SetBackLightAngle angle angle 
  void SetBackLightAngle(array<double>^ angle);


  // void SetBackLightElevation (double x);this SetBackLightAngle x this BackLightAngle 
  void SetBackLightElevation(double x);


  // void SetBackLightAzimuth (double x);this SetBackLightAngle this BackLightAngle x 
  void SetBackLightAzimuth(double x);


  // double  *GetBackLightAngle ();
  array<double>^ GetBackLightAngle();


  // double GetBackLightElevation ();double ang this GetBackLightAngle ang return ang 
  double GetBackLightElevation();


  // double GetBackLightAzimuth ();double ang this GetBackLightAngle ang return ang 
  double GetBackLightAzimuth();


  // void AddLightsToRenderer (vtkRenderer *renderer);
/// <summary>
/// <para>Add lights to, or remove lights from, a renderer.   Lights may be added to more than one renderer, if desired.</para>
/// </summary>
  void AddLightsToRenderer(vtkRenderer^ renderer);


  // void RemoveLightsFromRenderer (vtkRenderer *renderer);
/// <summary>
/// <para>Add lights to, or remove lights from, a renderer.   Lights may be added to more than one renderer, if desired.</para>
/// </summary>
  void RemoveLightsFromRenderer(vtkRenderer^ renderer);


  // void DeepCopy (vtkLightKit *kit);
  void DeepCopy(vtkLightKit^ kit);


  // void Modified ();
  void Modified();


  // void Update ();
  void Update();


  // static const char *GetStringFromType (int type);
/// <summary>
/// <para>Helper method to go from a enum type to a string type</para>
/// </summary>
  static System::String^ GetStringFromType(int type);


  // static const char *GetStringFromSubType (int type);
/// <summary>
/// <para>Helper method to go from a enum subtype to a string subtype</para>
/// </summary>
  static System::String^ GetStringFromSubType(int type);


  // static const char *GetShortStringFromSubType (int subtype);
/// <summary>
/// <para>Helper method to go from a enum subtype to a string subtype The difference from GetStringFromSubType is that it returns a shorter strings (usefull for GUI with minimun space)</para>
/// </summary>
  static System::String^ GetShortStringFromSubType(int subtype);


// Did not wrap:  static LightKitSubType GetSubType (LightKitType type, int i);


// Did not wrap:  vtkLightKit ();


// Did not wrap:  ~vtkLightKit ();


// Did not wrap:  void WarmthToRGBI (double w, double rgb[3], double &i);


// Did not wrap:  void WarmthToRGB (double w, double rgb[3]);


// Did not wrap:  void InitializeWarmthFunctions ();


// Did not wrap:  double WarmthToIntensity (double w);


// Did not wrap:  vtkLightKit (const vtkLightKit &);


// Did not wrap:  void vtkLightKit 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkLightKit(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkLightKit(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkLightKit();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkLightKit();


};

} // end vtkRendering
