#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkActor;
ref class vtkRenderer;

public ref class vtkProperty : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkProperty *NewInstance ();
  vtkProperty^ NewInstance();


  // vtkProperty *SafeDownCast (vtkObject* o);
  static vtkProperty^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkProperty *New ();


  // void DeepCopy (vtkProperty *p);
/// <summary>
/// <para>Assign one property to another. </para>
/// </summary>
  void DeepCopy(vtkProperty^ p);


  // virtual void Render (vtkActor *, vtkRenderer *);
/// <summary>
/// <para>This method causes the property to set up whatever is required for its instance variables. This is actually handled by a subclass of vtkProperty, which is created automatically. This method includes the invoking actor as an argument which can be used by property devices that require the actor.</para>
/// </summary>
  void Render(vtkActor^ arg0, vtkRenderer^ arg1);


  // virtual void BackfaceRender (vtkActor *, vtkRenderer *);
/// <summary>
/// <para>This method renders the property as a backface property. TwoSidedLighting must be turned off to see any backface properties. Note that only colors and opacity are used for backface properties. Other properties such as Representation, Culling are specified by the Property.</para>
/// </summary>
  void BackfaceRender(vtkActor^ arg0, vtkRenderer^ arg1);


  // void SetInterpolation (int );
/// <summary>
/// <para>Set the shading interpolation method for an object.</para>
/// </summary>
  void SetInterpolation(int arg0);


  // int GetInterpolationMinValue ();
/// <summary>
/// <para>Set the shading interpolation method for an object.</para>
/// </summary>
  int GetInterpolationMinValue();


  // int GetInterpolationMaxValue ();
/// <summary>
/// <para>Set the shading interpolation method for an object.</para>
/// </summary>
  int GetInterpolationMaxValue();


  // int GetInterpolation ();
/// <summary>
/// <para>Set the shading interpolation method for an object.</para>
/// </summary>
  int GetInterpolation();


  // void SetInterpolationToFlat ();this SetInterpolation VTK_FLAT 
/// <summary>
/// <para>Set the shading interpolation method for an object.</para>
/// </summary>
  void SetInterpolationToFlat();


  // void SetInterpolationToGouraud ();this SetInterpolation VTK_GOURAUD 
/// <summary>
/// <para>Set the shading interpolation method for an object.</para>
/// </summary>
  void SetInterpolationToGouraud();


  // void SetInterpolationToPhong ();this SetInterpolation VTK_PHONG 
/// <summary>
/// <para>Set the shading interpolation method for an object.</para>
/// </summary>
  void SetInterpolationToPhong();


  // char *GetInterpolationAsString ();
/// <summary>
/// <para>Set the shading interpolation method for an object.</para>
/// </summary>
  System::String^ GetInterpolationAsString();


  // void SetRepresentation (int );
/// <summary>
/// <para>Control the surface geometry representation for the object.</para>
/// </summary>
  void SetRepresentation(int arg0);


  // int GetRepresentationMinValue ();
/// <summary>
/// <para>Control the surface geometry representation for the object.</para>
/// </summary>
  int GetRepresentationMinValue();


  // int GetRepresentationMaxValue ();
/// <summary>
/// <para>Control the surface geometry representation for the object.</para>
/// </summary>
  int GetRepresentationMaxValue();


  // int GetRepresentation ();
/// <summary>
/// <para>Control the surface geometry representation for the object.</para>
/// </summary>
  int GetRepresentation();


  // void SetRepresentationToPoints ();this SetRepresentation VTK_POINTS 
/// <summary>
/// <para>Control the surface geometry representation for the object.</para>
/// </summary>
  void SetRepresentationToPoints();


  // void SetRepresentationToWireframe ();this SetRepresentation VTK_WIREFRAME 
/// <summary>
/// <para>Control the surface geometry representation for the object.</para>
/// </summary>
  void SetRepresentationToWireframe();


  // void SetRepresentationToSurface ();this SetRepresentation VTK_SURFACE 
/// <summary>
/// <para>Control the surface geometry representation for the object.</para>
/// </summary>
  void SetRepresentationToSurface();


  // char *GetRepresentationAsString ();
/// <summary>
/// <para>Control the surface geometry representation for the object.</para>
/// </summary>
  System::String^ GetRepresentationAsString();


  // void SetColor (double r, double g, double b);
/// <summary>
/// <para>Set the color of the object. Has the side effect of setting the ambient diffuse and specular colors as well. This is basically a quick overall color setting method.</para>
/// </summary>
  void SetColor(double r, double g, double b);


  // void SetColor (double a[3]);this SetColor a a a 
/// <summary>
/// <para>Set the color of the object. Has the side effect of setting the ambient diffuse and specular colors as well. This is basically a quick overall color setting method.</para>
/// </summary>
  void SetColor(array<double>^ a);


  // double *GetColor ();
/// <summary>
/// <para>Set the color of the object. Has the side effect of setting the ambient diffuse and specular colors as well. This is basically a quick overall color setting method.</para>
/// </summary>
  array<double>^ GetColor();


  // void GetColor (double rgb[3]);
/// <summary>
/// <para>Set the color of the object. Has the side effect of setting the ambient diffuse and specular colors as well. This is basically a quick overall color setting method.</para>
/// </summary>
  void GetColor(array<double>^ rgb);


  // void SetAmbient (double );
/// <summary>
/// <para>Set/Get the ambient lighting coefficient.</para>
/// </summary>
  void SetAmbient(double arg0);


  // double GetAmbientMinValue ();
/// <summary>
/// <para>Set/Get the ambient lighting coefficient.</para>
/// </summary>
  double GetAmbientMinValue();


  // double GetAmbientMaxValue ();
/// <summary>
/// <para>Set/Get the ambient lighting coefficient.</para>
/// </summary>
  double GetAmbientMaxValue();


  // double GetAmbient ();
/// <summary>
/// <para>Set/Get the ambient lighting coefficient.</para>
/// </summary>
  double GetAmbient();


  // void SetDiffuse (double );
/// <summary>
/// <para>Set/Get the diffuse lighting coefficient.</para>
/// </summary>
  void SetDiffuse(double arg0);


  // double GetDiffuseMinValue ();
/// <summary>
/// <para>Set/Get the diffuse lighting coefficient.</para>
/// </summary>
  double GetDiffuseMinValue();


  // double GetDiffuseMaxValue ();
/// <summary>
/// <para>Set/Get the diffuse lighting coefficient.</para>
/// </summary>
  double GetDiffuseMaxValue();


  // double GetDiffuse ();
/// <summary>
/// <para>Set/Get the diffuse lighting coefficient.</para>
/// </summary>
  double GetDiffuse();


  // void SetSpecular (double );
/// <summary>
/// <para>Set/Get the specular lighting coefficient.</para>
/// </summary>
  void SetSpecular(double arg0);


  // double GetSpecularMinValue ();
/// <summary>
/// <para>Set/Get the specular lighting coefficient.</para>
/// </summary>
  double GetSpecularMinValue();


  // double GetSpecularMaxValue ();
/// <summary>
/// <para>Set/Get the specular lighting coefficient.</para>
/// </summary>
  double GetSpecularMaxValue();


  // double GetSpecular ();
/// <summary>
/// <para>Set/Get the specular lighting coefficient.</para>
/// </summary>
  double GetSpecular();


  // void SetSpecularPower (double );
/// <summary>
/// <para>Set/Get the specular power.</para>
/// </summary>
  void SetSpecularPower(double arg0);


  // double GetSpecularPowerMinValue ();
/// <summary>
/// <para>Set/Get the specular power.</para>
/// </summary>
  double GetSpecularPowerMinValue();


  // double GetSpecularPowerMaxValue ();
/// <summary>
/// <para>Set/Get the specular power.</para>
/// </summary>
  double GetSpecularPowerMaxValue();


  // double GetSpecularPower ();
/// <summary>
/// <para>Set/Get the specular power.</para>
/// </summary>
  double GetSpecularPower();


  // void SetOpacity (double );
/// <summary>
/// <para>Set/Get the object's opacity. 1.0 is totally opaque and 0.0 is completely transparent.</para>
/// </summary>
  void SetOpacity(double arg0);


  // double GetOpacityMinValue ();
/// <summary>
/// <para>Set/Get the object's opacity. 1.0 is totally opaque and 0.0 is completely transparent.</para>
/// </summary>
  double GetOpacityMinValue();


  // double GetOpacityMaxValue ();
/// <summary>
/// <para>Set/Get the object's opacity. 1.0 is totally opaque and 0.0 is completely transparent.</para>
/// </summary>
  double GetOpacityMaxValue();


  // double GetOpacity ();
/// <summary>
/// <para>Set/Get the object's opacity. 1.0 is totally opaque and 0.0 is completely transparent.</para>
/// </summary>
  double GetOpacity();


  // void SetAmbientColor (double , double , double );
/// <summary>
/// <para>Set/Get the ambient surface color. Not all renderers support separate ambient and diffuse colors. From a physical standpoint it really doesn't make too much sense to have both. For the rendering libraries that don't support both, the diffuse color is used.</para>
/// </summary>
  void SetAmbientColor(double arg0, double arg1, double arg2);


  // void SetAmbientColor (double  a[3]);
/// <summary>
/// <para>Set/Get the ambient surface color. Not all renderers support separate ambient and diffuse colors. From a physical standpoint it really doesn't make too much sense to have both. For the rendering libraries that don't support both, the diffuse color is used.</para>
/// </summary>
  void SetAmbientColor(array<double>^ a);


  // double  *GetAmbientColor ();
/// <summary>
/// <para>Set/Get the ambient surface color. Not all renderers support separate ambient and diffuse colors. From a physical standpoint it really doesn't make too much sense to have both. For the rendering libraries that don't support both, the diffuse color is used.</para>
/// </summary>
  array<double>^ GetAmbientColor();


  // void SetDiffuseColor (double , double , double );
/// <summary>
/// <para>Set/Get the diffuse surface color.</para>
/// </summary>
  void SetDiffuseColor(double arg0, double arg1, double arg2);


  // void SetDiffuseColor (double  a[3]);
/// <summary>
/// <para>Set/Get the diffuse surface color.</para>
/// </summary>
  void SetDiffuseColor(array<double>^ a);


  // double  *GetDiffuseColor ();
/// <summary>
/// <para>Set/Get the diffuse surface color.</para>
/// </summary>
  array<double>^ GetDiffuseColor();


  // void SetSpecularColor (double , double , double );
/// <summary>
/// <para>Set/Get the specular surface color.</para>
/// </summary>
  void SetSpecularColor(double arg0, double arg1, double arg2);


  // void SetSpecularColor (double  a[3]);
/// <summary>
/// <para>Set/Get the specular surface color.</para>
/// </summary>
  void SetSpecularColor(array<double>^ a);


  // double  *GetSpecularColor ();
/// <summary>
/// <para>Set/Get the specular surface color.</para>
/// </summary>
  array<double>^ GetSpecularColor();


  // int GetEdgeVisibility ();
/// <summary>
/// <para>Turn on/off the visibility of edges. On some renderers it is possible to render the edges of geometric primitives separately from the interior.</para>
/// </summary>
  int GetEdgeVisibility();


  // void SetEdgeVisibility (int );
/// <summary>
/// <para>Turn on/off the visibility of edges. On some renderers it is possible to render the edges of geometric primitives separately from the interior.</para>
/// </summary>
  void SetEdgeVisibility(int arg0);


  // void EdgeVisibilityOn ();
/// <summary>
/// <para>Turn on/off the visibility of edges. On some renderers it is possible to render the edges of geometric primitives separately from the interior.</para>
/// </summary>
  void EdgeVisibilityOn();


  // void EdgeVisibilityOff ();
/// <summary>
/// <para>Turn on/off the visibility of edges. On some renderers it is possible to render the edges of geometric primitives separately from the interior.</para>
/// </summary>
  void EdgeVisibilityOff();


  // void SetEdgeColor (double , double , double );
/// <summary>
/// <para>Set/Get the color of primitive edges (if edge visibility is enabled).</para>
/// </summary>
  void SetEdgeColor(double arg0, double arg1, double arg2);


  // void SetEdgeColor (double  a[3]);
/// <summary>
/// <para>Set/Get the color of primitive edges (if edge visibility is enabled).</para>
/// </summary>
  void SetEdgeColor(array<double>^ a);


  // double  *GetEdgeColor ();
/// <summary>
/// <para>Set/Get the color of primitive edges (if edge visibility is enabled).</para>
/// </summary>
  array<double>^ GetEdgeColor();


  // void SetLineWidth (float );
/// <summary>
/// <para>Set/Get the width of a Line. The width is expressed in screen units. This is only implemented for OpenGL. The default is 1.0.</para>
/// </summary>
  void SetLineWidth(float arg0);


  // float GetLineWidthMinValue ();
/// <summary>
/// <para>Set/Get the width of a Line. The width is expressed in screen units. This is only implemented for OpenGL. The default is 1.0.</para>
/// </summary>
  float GetLineWidthMinValue();


  // float GetLineWidthMaxValue ();
/// <summary>
/// <para>Set/Get the width of a Line. The width is expressed in screen units. This is only implemented for OpenGL. The default is 1.0.</para>
/// </summary>
  float GetLineWidthMaxValue();


  // float GetLineWidth ();
/// <summary>
/// <para>Set/Get the width of a Line. The width is expressed in screen units. This is only implemented for OpenGL. The default is 1.0.</para>
/// </summary>
  float GetLineWidth();


  // void SetLineStipplePattern (int );
/// <summary>
/// <para>Set/Get the stippling pattern of a Line, as a 16-bit binary pattern  (1 = pixel on, 0 = pixel off). This is only implemented for OpenGL. The default is 0xFFFF.</para>
/// </summary>
  void SetLineStipplePattern(int arg0);


  // int GetLineStipplePattern ();
/// <summary>
/// <para>Set/Get the stippling pattern of a Line, as a 16-bit binary pattern  (1 = pixel on, 0 = pixel off). This is only implemented for OpenGL. The default is 0xFFFF.</para>
/// </summary>
  int GetLineStipplePattern();


  // void SetLineStippleRepeatFactor (int );
/// <summary>
/// <para>Set/Get the stippling repeat factor of a Line, which specifies how many times each bit in the pattern is to be repeated. This is only implemented for OpenGL. The default is 1.</para>
/// </summary>
  void SetLineStippleRepeatFactor(int arg0);


  // int GetLineStippleRepeatFactorMinValue ();
/// <summary>
/// <para>Set/Get the stippling repeat factor of a Line, which specifies how many times each bit in the pattern is to be repeated. This is only implemented for OpenGL. The default is 1.</para>
/// </summary>
  int GetLineStippleRepeatFactorMinValue();


  // int GetLineStippleRepeatFactorMaxValue ();
/// <summary>
/// <para>Set/Get the stippling repeat factor of a Line, which specifies how many times each bit in the pattern is to be repeated. This is only implemented for OpenGL. The default is 1.</para>
/// </summary>
  int GetLineStippleRepeatFactorMaxValue();


  // int GetLineStippleRepeatFactor ();
/// <summary>
/// <para>Set/Get the stippling repeat factor of a Line, which specifies how many times each bit in the pattern is to be repeated. This is only implemented for OpenGL. The default is 1.</para>
/// </summary>
  int GetLineStippleRepeatFactor();


  // void SetPointSize (float );
/// <summary>
/// <para>Set/Get the diameter of a point. The size is expressed in screen units. This is only implemented for OpenGL. The default is 1.0.</para>
/// </summary>
  void SetPointSize(float arg0);


  // float GetPointSizeMinValue ();
/// <summary>
/// <para>Set/Get the diameter of a point. The size is expressed in screen units. This is only implemented for OpenGL. The default is 1.0.</para>
/// </summary>
  float GetPointSizeMinValue();


  // float GetPointSizeMaxValue ();
/// <summary>
/// <para>Set/Get the diameter of a point. The size is expressed in screen units. This is only implemented for OpenGL. The default is 1.0.</para>
/// </summary>
  float GetPointSizeMaxValue();


  // float GetPointSize ();
/// <summary>
/// <para>Set/Get the diameter of a point. The size is expressed in screen units. This is only implemented for OpenGL. The default is 1.0.</para>
/// </summary>
  float GetPointSize();


  // int GetBackfaceCulling ();
/// <summary>
/// <para>Turn on/off fast culling of polygons based on orientation of normal  with respect to camera. If backface culling is on, polygons facing away from camera are not drawn.</para>
/// </summary>
  int GetBackfaceCulling();


  // void SetBackfaceCulling (int );
/// <summary>
/// <para>Turn on/off fast culling of polygons based on orientation of normal  with respect to camera. If backface culling is on, polygons facing away from camera are not drawn.</para>
/// </summary>
  void SetBackfaceCulling(int arg0);


  // void BackfaceCullingOn ();
/// <summary>
/// <para>Turn on/off fast culling of polygons based on orientation of normal  with respect to camera. If backface culling is on, polygons facing away from camera are not drawn.</para>
/// </summary>
  void BackfaceCullingOn();


  // void BackfaceCullingOff ();
/// <summary>
/// <para>Turn on/off fast culling of polygons based on orientation of normal  with respect to camera. If backface culling is on, polygons facing away from camera are not drawn.</para>
/// </summary>
  void BackfaceCullingOff();


  // int GetFrontfaceCulling ();
/// <summary>
/// <para>Turn on/off fast culling of polygons based on orientation of normal  with respect to camera. If frontface culling is on, polygons facing towards camera are not drawn.</para>
/// </summary>
  int GetFrontfaceCulling();


  // void SetFrontfaceCulling (int );
/// <summary>
/// <para>Turn on/off fast culling of polygons based on orientation of normal  with respect to camera. If frontface culling is on, polygons facing towards camera are not drawn.</para>
/// </summary>
  void SetFrontfaceCulling(int arg0);


  // void FrontfaceCullingOn ();
/// <summary>
/// <para>Turn on/off fast culling of polygons based on orientation of normal  with respect to camera. If frontface culling is on, polygons facing towards camera are not drawn.</para>
/// </summary>
  void FrontfaceCullingOn();


  // void FrontfaceCullingOff ();
/// <summary>
/// <para>Turn on/off fast culling of polygons based on orientation of normal  with respect to camera. If frontface culling is on, polygons facing towards camera are not drawn.</para>
/// </summary>
  void FrontfaceCullingOff();


// Did not wrap:  vtkProperty ();


// Did not wrap:  ~vtkProperty ();


// Did not wrap:  vtkProperty (const vtkProperty &);


// Did not wrap:  void vtkProperty 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkProperty(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkProperty(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkProperty();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkProperty();


};

} // end vtkRendering
