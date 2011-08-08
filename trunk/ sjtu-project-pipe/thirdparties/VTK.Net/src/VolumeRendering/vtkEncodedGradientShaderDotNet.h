#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkEncodedGradientEstimator;

public ref class vtkEncodedGradientShader : public vtkObject
{

public:
// Did not wrap:  static vtkEncodedGradientShader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkEncodedGradientShader *NewInstance ();
  vtkEncodedGradientShader^ NewInstance();


  // vtkEncodedGradientShader *SafeDownCast (vtkObject* o);
  static vtkEncodedGradientShader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetZeroNormalDiffuseIntensity (float );
/// <summary>
/// <para>Set / Get the intensity diffuse / specular light used for the zero normals. </para>
/// </summary>
  void SetZeroNormalDiffuseIntensity(float arg0);


  // float GetZeroNormalDiffuseIntensityMinValue ();
/// <summary>
/// <para>Set / Get the intensity diffuse / specular light used for the zero normals. </para>
/// </summary>
  float GetZeroNormalDiffuseIntensityMinValue();


  // float GetZeroNormalDiffuseIntensityMaxValue ();
/// <summary>
/// <para>Set / Get the intensity diffuse / specular light used for the zero normals. </para>
/// </summary>
  float GetZeroNormalDiffuseIntensityMaxValue();


  // float GetZeroNormalDiffuseIntensity ();
/// <summary>
/// <para>Set / Get the intensity diffuse / specular light used for the zero normals. </para>
/// </summary>
  float GetZeroNormalDiffuseIntensity();


  // void SetZeroNormalSpecularIntensity (float );
/// <summary>
/// <para>Set / Get the intensity diffuse / specular light used for the zero normals. </para>
/// </summary>
  void SetZeroNormalSpecularIntensity(float arg0);


  // float GetZeroNormalSpecularIntensityMinValue ();
/// <summary>
/// <para>Set / Get the intensity diffuse / specular light used for the zero normals. </para>
/// </summary>
  float GetZeroNormalSpecularIntensityMinValue();


  // float GetZeroNormalSpecularIntensityMaxValue ();
/// <summary>
/// <para>Set / Get the intensity diffuse / specular light used for the zero normals. </para>
/// </summary>
  float GetZeroNormalSpecularIntensityMaxValue();


  // float GetZeroNormalSpecularIntensity ();
/// <summary>
/// <para>Set / Get the intensity diffuse / specular light used for the zero normals. </para>
/// </summary>
  float GetZeroNormalSpecularIntensity();


  // void UpdateShadingTable (vtkRenderer *ren, vtkVolume *vol, vtkEncodedGradientEstimator *gradest);
/// <summary>
/// <para>Cause the shading table to be updated</para>
/// </summary>
  void UpdateShadingTable(vtkRenderer^ ren, vtkVolume^ vol, vtkEncodedGradientEstimator^ gradest);


// Did not wrap:  float *GetRedDiffuseShadingTable (vtkVolume *vol);


// Did not wrap:  float *GetGreenDiffuseShadingTable (vtkVolume *vol);


// Did not wrap:  float *GetBlueDiffuseShadingTable (vtkVolume *vol);


// Did not wrap:  float *GetRedSpecularShadingTable (vtkVolume *vol);


// Did not wrap:  float *GetGreenSpecularShadingTable (vtkVolume *vol);


// Did not wrap:  float *GetBlueSpecularShadingTable (vtkVolume *vol);


  // void SetActiveComponent (int );
/// <summary>
/// <para>Set the active component for shading. This component's  ambient / diffuse / specular / specular power values will be used to create the shading table. The default is 1.0</para>
/// </summary>
  void SetActiveComponent(int arg0);


  // int GetActiveComponentMinValue ();
/// <summary>
/// <para>Set the active component for shading. This component's  ambient / diffuse / specular / specular power values will be used to create the shading table. The default is 1.0</para>
/// </summary>
  int GetActiveComponentMinValue();


  // int GetActiveComponentMaxValue ();
/// <summary>
/// <para>Set the active component for shading. This component's  ambient / diffuse / specular / specular power values will be used to create the shading table. The default is 1.0</para>
/// </summary>
  int GetActiveComponentMaxValue();


  // int GetActiveComponent ();
/// <summary>
/// <para>Set the active component for shading. This component's  ambient / diffuse / specular / specular power values will be used to create the shading table. The default is 1.0</para>
/// </summary>
  int GetActiveComponent();


// Did not wrap:  vtkEncodedGradientShader ();


// Did not wrap:  ~vtkEncodedGradientShader ();


// Did not wrap:  void BuildShadingTable (int index, double lightDirection[3], double lightColor[3], double lightIntensity, double viewDirection[3], double material[4], int twoSided, vtkEncodedGradientEstimator *gradest, int updateFlag);


// Did not wrap:  vtkEncodedGradientShader (const vtkEncodedGradientShader &);


// Did not wrap:  void vtkEncodedGradientShader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkEncodedGradientShader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkEncodedGradientShader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkEncodedGradientShader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkEncodedGradientShader();


};

} // end vtkVolumeRendering
