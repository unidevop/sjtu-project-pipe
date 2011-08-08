#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkRenderer;

public ref class vtkLight : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkLight *NewInstance ();
  vtkLight^ NewInstance();


  // vtkLight *SafeDownCast (vtkObject* o);
  static vtkLight^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkLight *New ();


  // virtual void Render (vtkRenderer *, int );
/// <summary>
/// <para>Abstract interface to renderer. Each concrete subclass of vtkLight will load its data into the graphics system in response to this method invocation. The actual loading is performed by a vtkLightDevice subclass, which will get created automatically.</para>
/// </summary>
  void Render(vtkRenderer^ arg0, int arg1);


  // void SetAmbientColor (double , double , double );
/// <summary>
/// <para>Set/Get the color of the light. It is possible to set the ambient, diffuse and specular colors separately. The SetColor() method sets the diffuse and specular colors to the same color (this is a feature to preserve backward compatbility.)</para>
/// </summary>
  void SetAmbientColor(double arg0, double arg1, double arg2);


  // void SetAmbientColor (double  a[3]);
/// <summary>
/// <para>Set/Get the color of the light. It is possible to set the ambient, diffuse and specular colors separately. The SetColor() method sets the diffuse and specular colors to the same color (this is a feature to preserve backward compatbility.)</para>
/// </summary>
  void SetAmbientColor(array<double>^ a);


  // double  *GetAmbientColor ();
/// <summary>
/// <para>Set/Get the color of the light. It is possible to set the ambient, diffuse and specular colors separately. The SetColor() method sets the diffuse and specular colors to the same color (this is a feature to preserve backward compatbility.)</para>
/// </summary>
  array<double>^ GetAmbientColor();


  // void SetDiffuseColor (double , double , double );
/// <summary>
/// <para>Set/Get the color of the light. It is possible to set the ambient, diffuse and specular colors separately. The SetColor() method sets the diffuse and specular colors to the same color (this is a feature to preserve backward compatbility.)</para>
/// </summary>
  void SetDiffuseColor(double arg0, double arg1, double arg2);


  // void SetDiffuseColor (double  a[3]);
/// <summary>
/// <para>Set/Get the color of the light. It is possible to set the ambient, diffuse and specular colors separately. The SetColor() method sets the diffuse and specular colors to the same color (this is a feature to preserve backward compatbility.)</para>
/// </summary>
  void SetDiffuseColor(array<double>^ a);


  // double  *GetDiffuseColor ();
/// <summary>
/// <para>Set/Get the color of the light. It is possible to set the ambient, diffuse and specular colors separately. The SetColor() method sets the diffuse and specular colors to the same color (this is a feature to preserve backward compatbility.)</para>
/// </summary>
  array<double>^ GetDiffuseColor();


  // void SetSpecularColor (double , double , double );
/// <summary>
/// <para>Set/Get the color of the light. It is possible to set the ambient, diffuse and specular colors separately. The SetColor() method sets the diffuse and specular colors to the same color (this is a feature to preserve backward compatbility.)</para>
/// </summary>
  void SetSpecularColor(double arg0, double arg1, double arg2);


  // void SetSpecularColor (double  a[3]);
/// <summary>
/// <para>Set/Get the color of the light. It is possible to set the ambient, diffuse and specular colors separately. The SetColor() method sets the diffuse and specular colors to the same color (this is a feature to preserve backward compatbility.)</para>
/// </summary>
  void SetSpecularColor(array<double>^ a);


  // double  *GetSpecularColor ();
/// <summary>
/// <para>Set/Get the color of the light. It is possible to set the ambient, diffuse and specular colors separately. The SetColor() method sets the diffuse and specular colors to the same color (this is a feature to preserve backward compatbility.)</para>
/// </summary>
  array<double>^ GetSpecularColor();


  // void SetColor (double , double , double );
/// <summary>
/// <para>Set/Get the color of the light. It is possible to set the ambient, diffuse and specular colors separately. The SetColor() method sets the diffuse and specular colors to the same color (this is a feature to preserve backward compatbility.)</para>
/// </summary>
  void SetColor(double arg0, double arg1, double arg2);


  // void SetColor (double a[3]);this SetColor a a a 
/// <summary>
/// <para>Set/Get the color of the light. It is possible to set the ambient, diffuse and specular colors separately. The SetColor() method sets the diffuse and specular colors to the same color (this is a feature to preserve backward compatbility.)</para>
/// </summary>
  void SetColor(array<double>^ a);


  // void GetColor (double rgb[3]);
/// <summary>
/// <para>Set/Get the color of the light. It is possible to set the ambient, diffuse and specular colors separately. The SetColor() method sets the diffuse and specular colors to the same color (this is a feature to preserve backward compatbility.)</para>
/// </summary>
  void GetColor(array<double>^ rgb);


  // double *GetColor ();
/// <summary>
/// <para>Set/Get the color of the light. It is possible to set the ambient, diffuse and specular colors separately. The SetColor() method sets the diffuse and specular colors to the same color (this is a feature to preserve backward compatbility.)</para>
/// </summary>
  array<double>^ GetColor();


  // void SetPosition (double , double , double );
/// <summary>
/// <para>Set/Get the position of the light. Note: The position of the light is defined in the coordinate space indicated by its transformation matrix (if it exists). Thus, to get the light's world space position, use  vtkGetTransformedPosition() instead of vtkGetPosition().</para>
/// </summary>
  void SetPosition(double arg0, double arg1, double arg2);


  // void SetPosition (double  a[3]);
/// <summary>
/// <para>Set/Get the position of the light. Note: The position of the light is defined in the coordinate space indicated by its transformation matrix (if it exists). Thus, to get the light's world space position, use  vtkGetTransformedPosition() instead of vtkGetPosition().</para>
/// </summary>
  void SetPosition(array<double>^ a);


  // double  *GetPosition ();
/// <summary>
/// <para>Set/Get the position of the light. Note: The position of the light is defined in the coordinate space indicated by its transformation matrix (if it exists). Thus, to get the light's world space position, use  vtkGetTransformedPosition() instead of vtkGetPosition().</para>
/// </summary>
  array<double>^ GetPosition();


  // void SetPosition (float *a);this SetPosition a a a 
/// <summary>
/// <para>Set/Get the position of the light. Note: The position of the light is defined in the coordinate space indicated by its transformation matrix (if it exists). Thus, to get the light's world space position, use  vtkGetTransformedPosition() instead of vtkGetPosition().</para>
/// </summary>
  void SetPosition(array<float>^ a);


  // void SetFocalPoint (double , double , double );
/// <summary>
/// <para>Set/Get the point at which the light is shining. Note: The focal point of the light is defined in the coordinate space indicated by its transformation matrix (if it exists). Thus, to get the light's world space focal point, use  vtkGetTransformedFocalPoint() instead of vtkGetFocalPoint().</para>
/// </summary>
  void SetFocalPoint(double arg0, double arg1, double arg2);


  // void SetFocalPoint (double  a[3]);
/// <summary>
/// <para>Set/Get the point at which the light is shining. Note: The focal point of the light is defined in the coordinate space indicated by its transformation matrix (if it exists). Thus, to get the light's world space focal point, use  vtkGetTransformedFocalPoint() instead of vtkGetFocalPoint().</para>
/// </summary>
  void SetFocalPoint(array<double>^ a);


  // double  *GetFocalPoint ();
/// <summary>
/// <para>Set/Get the point at which the light is shining. Note: The focal point of the light is defined in the coordinate space indicated by its transformation matrix (if it exists). Thus, to get the light's world space focal point, use  vtkGetTransformedFocalPoint() instead of vtkGetFocalPoint().</para>
/// </summary>
  array<double>^ GetFocalPoint();


  // void SetFocalPoint (float *a);this SetFocalPoint a a a 
/// <summary>
/// <para>Set/Get the point at which the light is shining. Note: The focal point of the light is defined in the coordinate space indicated by its transformation matrix (if it exists). Thus, to get the light's world space focal point, use  vtkGetTransformedFocalPoint() instead of vtkGetFocalPoint().</para>
/// </summary>
  void SetFocalPoint(array<float>^ a);


  // void SetIntensity (double );
/// <summary>
/// <para>Set/Get the brightness of the light (from one to zero).</para>
/// </summary>
  void SetIntensity(double arg0);


  // double GetIntensity ();
/// <summary>
/// <para>Set/Get the brightness of the light (from one to zero).</para>
/// </summary>
  double GetIntensity();


  // void SetSwitch (int );
/// <summary>
/// <para>Turn the light on or off.</para>
/// </summary>
  void SetSwitch(int arg0);


  // int GetSwitch ();
/// <summary>
/// <para>Turn the light on or off.</para>
/// </summary>
  int GetSwitch();


  // void SwitchOn ();
/// <summary>
/// <para>Turn the light on or off.</para>
/// </summary>
  void SwitchOn();


  // void SwitchOff ();
/// <summary>
/// <para>Turn the light on or off.</para>
/// </summary>
  void SwitchOff();


  // void SetPositional (int );
/// <summary>
/// <para>Turn positional lighting on or off.</para>
/// </summary>
  void SetPositional(int arg0);


  // int GetPositional ();
/// <summary>
/// <para>Turn positional lighting on or off.</para>
/// </summary>
  int GetPositional();


  // void PositionalOn ();
/// <summary>
/// <para>Turn positional lighting on or off.</para>
/// </summary>
  void PositionalOn();


  // void PositionalOff ();
/// <summary>
/// <para>Turn positional lighting on or off.</para>
/// </summary>
  void PositionalOff();


  // void SetExponent (double );
/// <summary>
/// <para>Set/Get the exponent of the cosine used in positional lighting.</para>
/// </summary>
  void SetExponent(double arg0);


  // double GetExponent ();
/// <summary>
/// <para>Set/Get the exponent of the cosine used in positional lighting.</para>
/// </summary>
  double GetExponent();


  // void SetConeAngle (double );
/// <summary>
/// <para>Set/Get the lighting cone angle of a positional light in degrees. A value of 180 indicates that you want no spot lighting effects just a positional light.</para>
/// </summary>
  void SetConeAngle(double arg0);


  // double GetConeAngle ();
/// <summary>
/// <para>Set/Get the lighting cone angle of a positional light in degrees. A value of 180 indicates that you want no spot lighting effects just a positional light.</para>
/// </summary>
  double GetConeAngle();


  // void SetAttenuationValues (double , double , double );
/// <summary>
/// <para>Set/Get the quadratic attenuation constants. They are specified as constant, linear, and quadratic, in that order.</para>
/// </summary>
  void SetAttenuationValues(double arg0, double arg1, double arg2);


  // void SetAttenuationValues (double  a[3]);
/// <summary>
/// <para>Set/Get the quadratic attenuation constants. They are specified as constant, linear, and quadratic, in that order.</para>
/// </summary>
  void SetAttenuationValues(array<double>^ a);


  // double  *GetAttenuationValues ();
/// <summary>
/// <para>Set/Get the quadratic attenuation constants. They are specified as constant, linear, and quadratic, in that order.</para>
/// </summary>
  array<double>^ GetAttenuationValues();


  // virtual void SetTransformMatrix (vtkMatrix4x4 *);
/// <summary>
/// <para>Set/Get the light's transformation matrix.  If a matrix is set for a light, the light's parameters (position and focal point) are  transformed by the matrix before being rendered.</para>
/// </summary>
  void SetTransformMatrix(vtkMatrix4x4^ arg0);


  // vtkMatrix4x4 *GetTransformMatrix ();
/// <summary>
/// <para>Set/Get the light's transformation matrix.  If a matrix is set for a light, the light's parameters (position and focal point) are  transformed by the matrix before being rendered.</para>
/// </summary>
  vtkMatrix4x4^ GetTransformMatrix();


  // void GetTransformedPosition (double &a0, double &a1, double &a2);
/// <summary>
/// <para>Get the position of the light, modified by the transformation matrix (if it exists).</para>
/// </summary>
  void GetTransformedPosition(double% a0, double% a1, double% a2);


  // void GetTransformedPosition (double a[3]);
/// <summary>
/// <para>Get the position of the light, modified by the transformation matrix (if it exists).</para>
/// </summary>
  void GetTransformedPosition(array<double>^ a);


  // double *GetTransformedPosition ();
/// <summary>
/// <para>Get the position of the light, modified by the transformation matrix (if it exists).</para>
/// </summary>
  array<double>^ GetTransformedPosition();


  // void GetTransformedFocalPoint (double &a0, double &a1, double &a2);
/// <summary>
/// <para>Get the focal point of the light, modified by the transformation matrix (if it exists).</para>
/// </summary>
  void GetTransformedFocalPoint(double% a0, double% a1, double% a2);


  // void GetTransformedFocalPoint (double a[3]);
/// <summary>
/// <para>Get the focal point of the light, modified by the transformation matrix (if it exists).</para>
/// </summary>
  void GetTransformedFocalPoint(array<double>^ a);


  // double *GetTransformedFocalPoint ();
/// <summary>
/// <para>Get the focal point of the light, modified by the transformation matrix (if it exists).</para>
/// </summary>
  array<double>^ GetTransformedFocalPoint();


  // void SetDirectionAngle (double elevation, double azimuth);
/// <summary>
/// <para>Set the position and focal point of a light based on elevation and azimuth.  The light is moved so it is shining from the given angle. Angles are given in degrees.  If the light is a positional light, it is made directional instead.</para>
/// </summary>
  void SetDirectionAngle(double elevation, double azimuth);


  // void SetDirectionAngle (double ang[2]);this SetDirectionAngle ang ang 
/// <summary>
/// <para>Set the position and focal point of a light based on elevation and azimuth.  The light is moved so it is shining from the given angle. Angles are given in degrees.  If the light is a positional light, it is made directional instead.</para>
/// </summary>
  void SetDirectionAngle(array<double>^ ang);


  // void DeepCopy (vtkLight *light);
/// <summary>
/// <para>Perform deep copy of this light.</para>
/// </summary>
  void DeepCopy(vtkLight^ light);


  // void SetLightType (int );
/// <summary>
/// <para>Set/Get the type of the light. A SceneLight is a light located in the world coordinate space.  A light is initially created as a scene light.</para>
/// <para>A Headlight is always located at the camera and is pointed at the  camera's focal point.  The renderer is free to modify the position and focal point of the camera at any time.</para>
/// <para>A CameraLight is also attached to the camera, but is not necessarily located at the camera's position.  CameraLights are defined in a  coordinate space where the camera is located at (0, 0, 1), looking towards (0, 0, 0) at a distance of 1, with up being (0, 1, 0).</para>
/// <para>Note: Use SetLightTypeToSceneLight, rather than SetLightType(3), since the former clears the light's transform matrix.</para>
/// </summary>
  void SetLightType(int arg0);


  // int GetLightType ();
/// <summary>
/// <para>Set/Get the type of the light. A SceneLight is a light located in the world coordinate space.  A light is initially created as a scene light.</para>
/// <para>A Headlight is always located at the camera and is pointed at the  camera's focal point.  The renderer is free to modify the position and focal point of the camera at any time.</para>
/// <para>A CameraLight is also attached to the camera, but is not necessarily located at the camera's position.  CameraLights are defined in a  coordinate space where the camera is located at (0, 0, 1), looking towards (0, 0, 0) at a distance of 1, with up being (0, 1, 0).</para>
/// <para>Note: Use SetLightTypeToSceneLight, rather than SetLightType(3), since the former clears the light's transform matrix.</para>
/// </summary>
  int GetLightType();


  // void SetLightTypeToHeadlight ();this SetLightType VTK_LIGHT_TYPE_HEADLIGHT 
/// <summary>
/// <para>Set/Get the type of the light. A SceneLight is a light located in the world coordinate space.  A light is initially created as a scene light.</para>
/// <para>A Headlight is always located at the camera and is pointed at the  camera's focal point.  The renderer is free to modify the position and focal point of the camera at any time.</para>
/// <para>A CameraLight is also attached to the camera, but is not necessarily located at the camera's position.  CameraLights are defined in a  coordinate space where the camera is located at (0, 0, 1), looking towards (0, 0, 0) at a distance of 1, with up being (0, 1, 0).</para>
/// <para>Note: Use SetLightTypeToSceneLight, rather than SetLightType(3), since the former clears the light's transform matrix.</para>
/// </summary>
  void SetLightTypeToHeadlight();


  // void SetLightTypeToSceneLight ();this SetTransformMatrix NULL this SetLightType VTK_LIGHT_TYPE_SCENE_LIGHT 
/// <summary>
/// <para>Set/Get the type of the light. A SceneLight is a light located in the world coordinate space.  A light is initially created as a scene light.</para>
/// <para>A Headlight is always located at the camera and is pointed at the  camera's focal point.  The renderer is free to modify the position and focal point of the camera at any time.</para>
/// <para>A CameraLight is also attached to the camera, but is not necessarily located at the camera's position.  CameraLights are defined in a  coordinate space where the camera is located at (0, 0, 1), looking towards (0, 0, 0) at a distance of 1, with up being (0, 1, 0).</para>
/// <para>Note: Use SetLightTypeToSceneLight, rather than SetLightType(3), since the former clears the light's transform matrix.</para>
/// </summary>
  void SetLightTypeToSceneLight();


  // void SetLightTypeToCameraLight ();this SetLightType VTK_LIGHT_TYPE_CAMERA_LIGHT 
/// <summary>
/// <para>Query the type of the light.</para>
/// </summary>
  void SetLightTypeToCameraLight();


  // int LightTypeIsHeadlight ();
/// <summary>
/// <para>Query the type of the light.</para>
/// </summary>
  int LightTypeIsHeadlight();


  // int LightTypeIsSceneLight ();
/// <summary>
/// <para>Query the type of the light.</para>
/// </summary>
  int LightTypeIsSceneLight();


  // int LightTypeIsCameraLight ();
/// <summary>
/// <para>Query the type of the light.</para>
/// </summary>
  int LightTypeIsCameraLight();


// Did not wrap:  void ReadSelf (istream &is);


// Did not wrap:  void WriteSelf (ostream &os);


// Did not wrap:  vtkLight ();


// Did not wrap:  ~vtkLight ();


// Did not wrap:  vtkLight (const vtkLight &);


// Did not wrap:  void vtkLight 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkLight(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkLight(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkLight();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkLight();


};

} // end vtkRendering
