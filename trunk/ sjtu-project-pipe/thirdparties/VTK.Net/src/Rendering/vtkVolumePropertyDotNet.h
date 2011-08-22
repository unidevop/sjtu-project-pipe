#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkVolumeProperty : public vtkObject
{

public:
// Did not wrap:  static vtkVolumeProperty *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkVolumeProperty *NewInstance ();
  vtkVolumeProperty^ NewInstance();


  // vtkVolumeProperty *SafeDownCast (vtkObject* o);
  static vtkVolumeProperty^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // unsigned long GetMTime ();
/// <summary>
/// <para>Get the modified time for this object (or the properties registered with this object).</para>
/// </summary>
  unsigned long GetMTime();


  // void SetIndependentComponents (int );
/// <summary>
/// <para>Does the data have independent components, or do some define color  only? If IndependentComponents is On (the default) then each component  will be independently passed through a lookup table to determine RGBA,  shaded. Some volume Mappers can handle 1 to 4 component  unsigned char or unsigned short data (see each mapper header file to determine functionality). If IndependentComponents is Off, then you  must have either 2 or 4 component data. For 2 component data, the  first is passed through the first color transfer function and the  second component is passed through the first opacity transfer function.  Normals will be generated off of the second component. For 4 component  data, the first three will directly represent RGB (no lookup table).  The fourth component will be passed through the first scalar opacity  transfer function for opacity. Normals will be generated from the fourth  component.</para>
/// </summary>
  void SetIndependentComponents(int arg0);


  // int GetIndependentComponentsMinValue ();
/// <summary>
/// <para>Does the data have independent components, or do some define color  only? If IndependentComponents is On (the default) then each component  will be independently passed through a lookup table to determine RGBA,  shaded. Some volume Mappers can handle 1 to 4 component  unsigned char or unsigned short data (see each mapper header file to determine functionality). If IndependentComponents is Off, then you  must have either 2 or 4 component data. For 2 component data, the  first is passed through the first color transfer function and the  second component is passed through the first opacity transfer function.  Normals will be generated off of the second component. For 4 component  data, the first three will directly represent RGB (no lookup table).  The fourth component will be passed through the first scalar opacity  transfer function for opacity. Normals will be generated from the fourth  component.</para>
/// </summary>
  int GetIndependentComponentsMinValue();


  // int GetIndependentComponentsMaxValue ();
/// <summary>
/// <para>Does the data have independent components, or do some define color  only? If IndependentComponents is On (the default) then each component  will be independently passed through a lookup table to determine RGBA,  shaded. Some volume Mappers can handle 1 to 4 component  unsigned char or unsigned short data (see each mapper header file to determine functionality). If IndependentComponents is Off, then you  must have either 2 or 4 component data. For 2 component data, the  first is passed through the first color transfer function and the  second component is passed through the first opacity transfer function.  Normals will be generated off of the second component. For 4 component  data, the first three will directly represent RGB (no lookup table).  The fourth component will be passed through the first scalar opacity  transfer function for opacity. Normals will be generated from the fourth  component.</para>
/// </summary>
  int GetIndependentComponentsMaxValue();


  // int GetIndependentComponents ();
/// <summary>
/// <para>Does the data have independent components, or do some define color  only? If IndependentComponents is On (the default) then each component  will be independently passed through a lookup table to determine RGBA,  shaded. Some volume Mappers can handle 1 to 4 component  unsigned char or unsigned short data (see each mapper header file to determine functionality). If IndependentComponents is Off, then you  must have either 2 or 4 component data. For 2 component data, the  first is passed through the first color transfer function and the  second component is passed through the first opacity transfer function.  Normals will be generated off of the second component. For 4 component  data, the first three will directly represent RGB (no lookup table).  The fourth component will be passed through the first scalar opacity  transfer function for opacity. Normals will be generated from the fourth  component.</para>
/// </summary>
  int GetIndependentComponents();


  // void IndependentComponentsOn ();
/// <summary>
/// <para>Does the data have independent components, or do some define color  only? If IndependentComponents is On (the default) then each component  will be independently passed through a lookup table to determine RGBA,  shaded. Some volume Mappers can handle 1 to 4 component  unsigned char or unsigned short data (see each mapper header file to determine functionality). If IndependentComponents is Off, then you  must have either 2 or 4 component data. For 2 component data, the  first is passed through the first color transfer function and the  second component is passed through the first opacity transfer function.  Normals will be generated off of the second component. For 4 component  data, the first three will directly represent RGB (no lookup table).  The fourth component will be passed through the first scalar opacity  transfer function for opacity. Normals will be generated from the fourth  component.</para>
/// </summary>
  void IndependentComponentsOn();


  // void IndependentComponentsOff ();
/// <summary>
/// <para>Does the data have independent components, or do some define color  only? If IndependentComponents is On (the default) then each component  will be independently passed through a lookup table to determine RGBA,  shaded. Some volume Mappers can handle 1 to 4 component  unsigned char or unsigned short data (see each mapper header file to determine functionality). If IndependentComponents is Off, then you  must have either 2 or 4 component data. For 2 component data, the  first is passed through the first color transfer function and the  second component is passed through the first opacity transfer function.  Normals will be generated off of the second component. For 4 component  data, the first three will directly represent RGB (no lookup table).  The fourth component will be passed through the first scalar opacity  transfer function for opacity. Normals will be generated from the fourth  component.</para>
/// </summary>
  void IndependentComponentsOff();


  // virtual void SetComponentWeight (int index, double value);
/// <summary>
/// <para>Set/Get the scalar component weights</para>
/// </summary>
  void SetComponentWeight(int index, double value);


  // virtual double GetComponentWeight (int index);
/// <summary>
/// <para>Set/Get the scalar component weights</para>
/// </summary>
  double GetComponentWeight(int index);


  // void SetInterpolationType (int );
/// <summary>
/// <para>Set the interpolation type for sampling a volume.</para>
/// </summary>
  void SetInterpolationType(int arg0);


  // int GetInterpolationTypeMinValue ();
/// <summary>
/// <para>Set the interpolation type for sampling a volume.</para>
/// </summary>
  int GetInterpolationTypeMinValue();


  // int GetInterpolationTypeMaxValue ();
/// <summary>
/// <para>Set the interpolation type for sampling a volume.</para>
/// </summary>
  int GetInterpolationTypeMaxValue();


  // int GetInterpolationType ();
/// <summary>
/// <para>Set the interpolation type for sampling a volume.</para>
/// </summary>
  int GetInterpolationType();


  // void SetInterpolationTypeToNearest ();this SetInterpolationType VTK_NEAREST_INTERPOLATION 
/// <summary>
/// <para>Set the interpolation type for sampling a volume.</para>
/// </summary>
  void SetInterpolationTypeToNearest();


  // void SetInterpolationTypeToLinear ();this SetInterpolationType VTK_LINEAR_INTERPOLATION 
/// <summary>
/// <para>Set the interpolation type for sampling a volume.</para>
/// </summary>
  void SetInterpolationTypeToLinear();


  // const char *GetInterpolationTypeAsString (void );
/// <summary>
/// <para>Set the interpolation type for sampling a volume.</para>
/// </summary>
  System::String^ GetInterpolationTypeAsString();


  // void SetColor (int index, vtkPiecewiseFunction *function);
/// <summary>
/// <para>Set the color of a volume to a gray level transfer function for the component indicated by index. This will set the color channels for this component to 1.</para>
/// </summary>
  void SetColor(int index, vtkPiecewiseFunction^ function);


  // void SetColor (vtkPiecewiseFunction *f);this SetColor f 
/// <summary>
/// <para>Set the color of a volume to a gray level transfer function for the component indicated by index. This will set the color channels for this component to 1.</para>
/// </summary>
  void SetColor(vtkPiecewiseFunction^ f);


  // void SetColor (int index, vtkColorTransferFunction *function);
/// <summary>
/// <para>Set the color of a volume to an RGB transfer function for the component indicated by index. This will set the color channels for this component to 3. This will also recompute the color channels</para>
/// </summary>
  void SetColor(int index, vtkColorTransferFunction^ function);


  // void SetColor (vtkColorTransferFunction *f);this SetColor f 
/// <summary>
/// <para>Set the color of a volume to an RGB transfer function for the component indicated by index. This will set the color channels for this component to 3. This will also recompute the color channels</para>
/// </summary>
  void SetColor(vtkColorTransferFunction^ f);


  // int GetColorChannels (int index);
/// <summary>
/// <para>Get the number of color channels in the transfer function for the given component.</para>
/// </summary>
  int GetColorChannels(int index);


  // int GetColorChannels ();return this GetColorChannels 
/// <summary>
/// <para>Get the number of color channels in the transfer function for the given component.</para>
/// </summary>
  int GetColorChannels();


  // vtkPiecewiseFunction *GetGrayTransferFunction (int index);
/// <summary>
/// <para>Get the gray transfer function. If no transfer function has been set for this component, a default one is created and returned.</para>
/// </summary>
  vtkPiecewiseFunction^ GetGrayTransferFunction(int index);


  // vtkPiecewiseFunction *GetGrayTransferFunction ();return this GetGrayTransferFunction 
/// <summary>
/// <para>Get the gray transfer function. If no transfer function has been set for this component, a default one is created and returned.</para>
/// </summary>
  vtkPiecewiseFunction^ GetGrayTransferFunction();


  // vtkColorTransferFunction *GetRGBTransferFunction (int index);
/// <summary>
/// <para>Get the RGB transfer function for the given component. If no transfer function has been set for this component, a default one is created and returned.</para>
/// </summary>
  vtkColorTransferFunction^ GetRGBTransferFunction(int index);


  // vtkColorTransferFunction *GetRGBTransferFunction ();return this GetRGBTransferFunction 
/// <summary>
/// <para>Get the RGB transfer function for the given component. If no transfer function has been set for this component, a default one is created and returned.</para>
/// </summary>
  vtkColorTransferFunction^ GetRGBTransferFunction();


  // void SetScalarOpacity (int index, vtkPiecewiseFunction *function);
/// <summary>
/// <para>Set the opacity of a volume to an opacity transfer function based on scalar value for the component indicated by index. </para>
/// </summary>
  void SetScalarOpacity(int index, vtkPiecewiseFunction^ function);


  // void SetScalarOpacity (vtkPiecewiseFunction *f);this SetScalarOpacity f 
/// <summary>
/// <para>Set the opacity of a volume to an opacity transfer function based on scalar value for the component indicated by index. </para>
/// </summary>
  void SetScalarOpacity(vtkPiecewiseFunction^ f);


  // vtkPiecewiseFunction *GetScalarOpacity (int index);
/// <summary>
/// <para>Get the scalar opacity transfer function for the given component. If no transfer function has been set for this component, a default one is created and returned.</para>
/// </summary>
  vtkPiecewiseFunction^ GetScalarOpacity(int index);


  // vtkPiecewiseFunction *GetScalarOpacity ();return this GetScalarOpacity 
/// <summary>
/// <para>Get the scalar opacity transfer function for the given component. If no transfer function has been set for this component, a default one is created and returned.</para>
/// </summary>
  vtkPiecewiseFunction^ GetScalarOpacity();


  // void SetScalarOpacityUnitDistance (int index, double distance);
/// <summary>
/// <para>Set/Get the unit distance on which the scalar opacity transfer function is defined. By default this is 1.0, meaning that over a distance of 1.0 units, a given opacity (from the transfer function) is accumulated. This is adjusted for the actual sampling distance during rendering.</para>
/// </summary>
  void SetScalarOpacityUnitDistance(int index, double distance);


  // void SetScalarOpacityUnitDistance (double distance);this SetScalarOpacityUnitDistance distance 
/// <summary>
/// <para>Set/Get the unit distance on which the scalar opacity transfer function is defined. By default this is 1.0, meaning that over a distance of 1.0 units, a given opacity (from the transfer function) is accumulated. This is adjusted for the actual sampling distance during rendering.</para>
/// </summary>
  void SetScalarOpacityUnitDistance(double distance);


  // double GetScalarOpacityUnitDistance (int index);
/// <summary>
/// <para>Set/Get the unit distance on which the scalar opacity transfer function is defined. By default this is 1.0, meaning that over a distance of 1.0 units, a given opacity (from the transfer function) is accumulated. This is adjusted for the actual sampling distance during rendering.</para>
/// </summary>
  double GetScalarOpacityUnitDistance(int index);


  // double GetScalarOpacityUnitDistance ();return this GetScalarOpacityUnitDistance 
/// <summary>
/// <para>Set the opacity of a volume to an opacity transfer function based on gradient magnitude for the given component.</para>
/// </summary>
  double GetScalarOpacityUnitDistance();


  // void SetGradientOpacity (int index, vtkPiecewiseFunction *function);
/// <summary>
/// <para>Set the opacity of a volume to an opacity transfer function based on gradient magnitude for the given component.</para>
/// </summary>
  void SetGradientOpacity(int index, vtkPiecewiseFunction^ function);


  // void SetGradientOpacity (vtkPiecewiseFunction *function);this SetGradientOpacity function 
/// <summary>
/// <para>Get the gradient magnitude opacity transfer function for the given component. If no transfer function has been set for this component, a default one is created and returned. This default function is always returned if DisableGradientOpacity is On for that component.</para>
/// </summary>
  void SetGradientOpacity(vtkPiecewiseFunction^ function);


  // vtkPiecewiseFunction *GetGradientOpacity (int index);
/// <summary>
/// <para>Get the gradient magnitude opacity transfer function for the given component. If no transfer function has been set for this component, a default one is created and returned. This default function is always returned if DisableGradientOpacity is On for that component.</para>
/// </summary>
  vtkPiecewiseFunction^ GetGradientOpacity(int index);


  // vtkPiecewiseFunction *GetGradientOpacity ();return this GetGradientOpacity 
/// <summary>
/// <para>Enable/Disable the gradient opacity function for the given component.  If set to true, any call to GetGradientOpacity() will return a default function for this component. Note that the gradient opacity function is  still stored, it is not set or reset and can be retrieved using  GetStoredGradientOpacity().</para>
/// </summary>
  vtkPiecewiseFunction^ GetGradientOpacity();


  // virtual void SetDisableGradientOpacity (int index, int value);
/// <summary>
/// <para>Enable/Disable the gradient opacity function for the given component.  If set to true, any call to GetGradientOpacity() will return a default function for this component. Note that the gradient opacity function is  still stored, it is not set or reset and can be retrieved using  GetStoredGradientOpacity().</para>
/// </summary>
  void SetDisableGradientOpacity(int index, int value);


  // virtual void SetDisableGradientOpacity (int value);this SetDisableGradientOpacity value 
/// <summary>
/// <para>Enable/Disable the gradient opacity function for the given component.  If set to true, any call to GetGradientOpacity() will return a default function for this component. Note that the gradient opacity function is  still stored, it is not set or reset and can be retrieved using  GetStoredGradientOpacity().</para>
/// </summary>
  void SetDisableGradientOpacity(int value);


  // virtual void DisableGradientOpacityOn (int index);this SetDisableGradientOpacity index 
/// <summary>
/// <para>Enable/Disable the gradient opacity function for the given component.  If set to true, any call to GetGradientOpacity() will return a default function for this component. Note that the gradient opacity function is  still stored, it is not set or reset and can be retrieved using  GetStoredGradientOpacity().</para>
/// </summary>
  void DisableGradientOpacityOn(int index);


  // virtual void DisableGradientOpacityOn ();this DisableGradientOpacityOn 
/// <summary>
/// <para>Enable/Disable the gradient opacity function for the given component.  If set to true, any call to GetGradientOpacity() will return a default function for this component. Note that the gradient opacity function is  still stored, it is not set or reset and can be retrieved using  GetStoredGradientOpacity().</para>
/// </summary>
  void DisableGradientOpacityOn();


  // virtual void DisableGradientOpacityOff (int index);this SetDisableGradientOpacity index 
/// <summary>
/// <para>Enable/Disable the gradient opacity function for the given component.  If set to true, any call to GetGradientOpacity() will return a default function for this component. Note that the gradient opacity function is  still stored, it is not set or reset and can be retrieved using  GetStoredGradientOpacity().</para>
/// </summary>
  void DisableGradientOpacityOff(int index);


  // virtual void DisableGradientOpacityOff ();this DisableGradientOpacityOff 
/// <summary>
/// <para>Enable/Disable the gradient opacity function for the given component.  If set to true, any call to GetGradientOpacity() will return a default function for this component. Note that the gradient opacity function is  still stored, it is not set or reset and can be retrieved using  GetStoredGradientOpacity().</para>
/// </summary>
  void DisableGradientOpacityOff();


  // virtual int GetDisableGradientOpacity (int index);
/// <summary>
/// <para>Enable/Disable the gradient opacity function for the given component.  If set to true, any call to GetGradientOpacity() will return a default function for this component. Note that the gradient opacity function is  still stored, it is not set or reset and can be retrieved using  GetStoredGradientOpacity().</para>
/// </summary>
  int GetDisableGradientOpacity(int index);


  // virtual int GetDisableGradientOpacity ();return this GetDisableGradientOpacity 
/// <summary>
/// <para>Enable/Disable the gradient opacity function for the given component.  If set to true, any call to GetGradientOpacity() will return a default function for this component. Note that the gradient opacity function is  still stored, it is not set or reset and can be retrieved using  GetStoredGradientOpacity().</para>
/// </summary>
  int GetDisableGradientOpacity();


  // vtkPiecewiseFunction *GetStoredGradientOpacity (int index);
/// <summary>
/// <para>Enable/Disable the gradient opacity function for the given component.  If set to true, any call to GetGradientOpacity() will return a default function for this component. Note that the gradient opacity function is  still stored, it is not set or reset and can be retrieved using  GetStoredGradientOpacity().</para>
/// </summary>
  vtkPiecewiseFunction^ GetStoredGradientOpacity(int index);


  // vtkPiecewiseFunction *GetStoredGradientOpacity ();return this GetStoredGradientOpacity 
/// <summary>
/// <para>Set/Get the shading of a volume. If shading is turned off, then the mapper for the volume will not perform shading calculations. If shading is turned on, the mapper may perform shading  calculations - in some cases shading does not apply (for example, in a maximum intensity projection) and therefore shading will not be performed even if this flag is on. For a compositing type of mapper, turning shading off is generally the same as setting ambient=1, diffuse=0, specular=0. Shading can be independently turned on/off per component.</para>
/// </summary>
  vtkPiecewiseFunction^ GetStoredGradientOpacity();


  // void SetShade (int index, int value);
/// <summary>
/// <para>Set/Get the shading of a volume. If shading is turned off, then the mapper for the volume will not perform shading calculations. If shading is turned on, the mapper may perform shading  calculations - in some cases shading does not apply (for example, in a maximum intensity projection) and therefore shading will not be performed even if this flag is on. For a compositing type of mapper, turning shading off is generally the same as setting ambient=1, diffuse=0, specular=0. Shading can be independently turned on/off per component.</para>
/// </summary>
  void SetShade(int index, int value);


  // void SetShade (int value);this SetShade value 
/// <summary>
/// <para>Set/Get the shading of a volume. If shading is turned off, then the mapper for the volume will not perform shading calculations. If shading is turned on, the mapper may perform shading  calculations - in some cases shading does not apply (for example, in a maximum intensity projection) and therefore shading will not be performed even if this flag is on. For a compositing type of mapper, turning shading off is generally the same as setting ambient=1, diffuse=0, specular=0. Shading can be independently turned on/off per component.</para>
/// </summary>
  void SetShade(int value);


  // int GetShade (int index);
/// <summary>
/// <para>Set/Get the shading of a volume. If shading is turned off, then the mapper for the volume will not perform shading calculations. If shading is turned on, the mapper may perform shading  calculations - in some cases shading does not apply (for example, in a maximum intensity projection) and therefore shading will not be performed even if this flag is on. For a compositing type of mapper, turning shading off is generally the same as setting ambient=1, diffuse=0, specular=0. Shading can be independently turned on/off per component.</para>
/// </summary>
  int GetShade(int index);


  // int GetShade ();return this GetShade 
/// <summary>
/// <para>Set/Get the shading of a volume. If shading is turned off, then the mapper for the volume will not perform shading calculations. If shading is turned on, the mapper may perform shading  calculations - in some cases shading does not apply (for example, in a maximum intensity projection) and therefore shading will not be performed even if this flag is on. For a compositing type of mapper, turning shading off is generally the same as setting ambient=1, diffuse=0, specular=0. Shading can be independently turned on/off per component.</para>
/// </summary>
  int GetShade();


  // void ShadeOn (int index);
/// <summary>
/// <para>Set/Get the shading of a volume. If shading is turned off, then the mapper for the volume will not perform shading calculations. If shading is turned on, the mapper may perform shading  calculations - in some cases shading does not apply (for example, in a maximum intensity projection) and therefore shading will not be performed even if this flag is on. For a compositing type of mapper, turning shading off is generally the same as setting ambient=1, diffuse=0, specular=0. Shading can be independently turned on/off per component.</para>
/// </summary>
  void ShadeOn(int index);


  // void ShadeOn ();this ShadeOn 
/// <summary>
/// <para>Set/Get the shading of a volume. If shading is turned off, then the mapper for the volume will not perform shading calculations. If shading is turned on, the mapper may perform shading  calculations - in some cases shading does not apply (for example, in a maximum intensity projection) and therefore shading will not be performed even if this flag is on. For a compositing type of mapper, turning shading off is generally the same as setting ambient=1, diffuse=0, specular=0. Shading can be independently turned on/off per component.</para>
/// </summary>
  void ShadeOn();


  // void ShadeOff (int index);
/// <summary>
/// <para>Set/Get the shading of a volume. If shading is turned off, then the mapper for the volume will not perform shading calculations. If shading is turned on, the mapper may perform shading  calculations - in some cases shading does not apply (for example, in a maximum intensity projection) and therefore shading will not be performed even if this flag is on. For a compositing type of mapper, turning shading off is generally the same as setting ambient=1, diffuse=0, specular=0. Shading can be independently turned on/off per component.</para>
/// </summary>
  void ShadeOff(int index);


  // void ShadeOff ();this ShadeOff 
/// <summary>
/// <para>Set/Get the ambient lighting coefficient.</para>
/// </summary>
  void ShadeOff();


  // void SetAmbient (int index, double value);
/// <summary>
/// <para>Set/Get the ambient lighting coefficient.</para>
/// </summary>
  void SetAmbient(int index, double value);


  // void SetAmbient (double value);this SetAmbient value 
/// <summary>
/// <para>Set/Get the ambient lighting coefficient.</para>
/// </summary>
  void SetAmbient(double value);


  // double GetAmbient (int index);
/// <summary>
/// <para>Set/Get the ambient lighting coefficient.</para>
/// </summary>
  double GetAmbient(int index);


  // double GetAmbient ();return this GetAmbient 
/// <summary>
/// <para>Set/Get the diffuse lighting coefficient.</para>
/// </summary>
  double GetAmbient();


  // void SetDiffuse (int index, double value);
/// <summary>
/// <para>Set/Get the diffuse lighting coefficient.</para>
/// </summary>
  void SetDiffuse(int index, double value);


  // void SetDiffuse (double value);this SetDiffuse value 
/// <summary>
/// <para>Set/Get the diffuse lighting coefficient.</para>
/// </summary>
  void SetDiffuse(double value);


  // double GetDiffuse (int index);
/// <summary>
/// <para>Set/Get the diffuse lighting coefficient.</para>
/// </summary>
  double GetDiffuse(int index);


  // double GetDiffuse ();return this GetDiffuse 
/// <summary>
/// <para>Set/Get the specular lighting coefficient.</para>
/// </summary>
  double GetDiffuse();


  // void SetSpecular (int index, double value);
/// <summary>
/// <para>Set/Get the specular lighting coefficient.</para>
/// </summary>
  void SetSpecular(int index, double value);


  // void SetSpecular (double value);this SetSpecular value 
/// <summary>
/// <para>Set/Get the specular lighting coefficient.</para>
/// </summary>
  void SetSpecular(double value);


  // double GetSpecular (int index);
/// <summary>
/// <para>Set/Get the specular lighting coefficient.</para>
/// </summary>
  double GetSpecular(int index);


  // double GetSpecular ();return this GetSpecular 
/// <summary>
/// <para>Set/Get the specular power.</para>
/// </summary>
  double GetSpecular();


  // void SetSpecularPower (int index, double value);
/// <summary>
/// <para>Set/Get the specular power.</para>
/// </summary>
  void SetSpecularPower(int index, double value);


  // void SetSpecularPower (double value);this SetSpecularPower value 
/// <summary>
/// <para>Set/Get the specular power.</para>
/// </summary>
  void SetSpecularPower(double value);


  // double GetSpecularPower (int index);
/// <summary>
/// <para>Set/Get the specular power.</para>
/// </summary>
  double GetSpecularPower(int index);


  // double GetSpecularPower ();return this GetSpecularPower 
  double GetSpecularPower();


// Did not wrap:  vtkVolumeProperty ();


// Did not wrap:  ~vtkVolumeProperty ();


// Did not wrap:  virtual void CreateDefaultGradientOpacity (int index);


// Did not wrap:  vtkVolumeProperty (const vtkVolumeProperty &);


// Did not wrap:  void vtkVolumeProperty 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkVolumeProperty(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkVolumeProperty(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkVolumeProperty();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkVolumeProperty();


};

} // end vtkRendering
