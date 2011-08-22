#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkParametricFunctionSource : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkParametricFunctionSource *NewInstance ();
  vtkParametricFunctionSource^ NewInstance();


  // vtkParametricFunctionSource *SafeDownCast (vtkObject* o);
  static vtkParametricFunctionSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkParametricFunctionSource *New ();


  // virtual void SetParametricFunction (vtkParametricFunction *);
/// <summary>
/// <para>Specify the parametric function to use to generate the tessellation.</para>
/// </summary>
  void SetParametricFunction(vtkParametricFunction^ arg0);


  // vtkParametricFunction *GetParametricFunction ();
/// <summary>
/// <para>Specify the parametric function to use to generate the tessellation.</para>
/// </summary>
  vtkParametricFunction^ GetParametricFunction();


  // void SetUResolution (int );
/// <summary>
/// <para>Set/Get the number of subdivisions / tessellations in the u parametric direction. Note that the number of tessellant points in the u  direction is the UResolution + 1.</para>
/// </summary>
  void SetUResolution(int arg0);


  // int GetUResolution ();
/// <summary>
/// <para>Set/Get the number of subdivisions / tessellations in the u parametric direction. Note that the number of tessellant points in the u  direction is the UResolution + 1.</para>
/// </summary>
  int GetUResolution();


  // void SetVResolution (int );
/// <summary>
/// <para>Set/Get the number of subdivisions / tessellations in the v parametric direction. Note that the number of tessellant points in the v  direction is the VResolution + 1.</para>
/// </summary>
  void SetVResolution(int arg0);


  // int GetVResolution ();
/// <summary>
/// <para>Set/Get the number of subdivisions / tessellations in the v parametric direction. Note that the number of tessellant points in the v  direction is the VResolution + 1.</para>
/// </summary>
  int GetVResolution();


  // void SetWResolution (int );
/// <summary>
/// <para>Set/Get the number of subdivisions / tessellations in the w parametric direction. Note that the number of tessellant points in the w  direction is the WResolution + 1.</para>
/// </summary>
  void SetWResolution(int arg0);


  // int GetWResolution ();
/// <summary>
/// <para>Set/Get the number of subdivisions / tessellations in the w parametric direction. Note that the number of tessellant points in the w  direction is the WResolution + 1.</para>
/// </summary>
  int GetWResolution();


  // void GenerateTextureCoordinatesOn ();
/// <summary>
/// <para>Set/Get the generation of texture coordinates. This is off by default. Note that this is only applicable to parametric surfaces  whose parametric dimension is 2. Note that texturing may fail in some cases.</para>
/// </summary>
  void GenerateTextureCoordinatesOn();


  // void GenerateTextureCoordinatesOff ();
/// <summary>
/// <para>Set/Get the generation of texture coordinates. This is off by default. Note that this is only applicable to parametric surfaces  whose parametric dimension is 2. Note that texturing may fail in some cases.</para>
/// </summary>
  void GenerateTextureCoordinatesOff();


  // void SetGenerateTextureCoordinates (int );
/// <summary>
/// <para>Set/Get the generation of texture coordinates. This is off by default. Note that this is only applicable to parametric surfaces  whose parametric dimension is 2. Note that texturing may fail in some cases.</para>
/// </summary>
  void SetGenerateTextureCoordinates(int arg0);


  // int GetGenerateTextureCoordinates ();
/// <summary>
/// <para>Set/Get the generation of texture coordinates. This is off by default. Note that this is only applicable to parametric surfaces  whose parametric dimension is 2. Note that texturing may fail in some cases.</para>
/// </summary>
  int GetGenerateTextureCoordinates();


  // void SetScalarMode (int );
/// <summary>
/// <para>Get/Set the mode used for the scalar data.  The options are: SCALAR_NONE, (default) scalars are not generated. SCALAR_U, the scalar is set to the u-value.  SCALAR_V, the scalar is set to the v-value. SCALAR_U0, the scalar is set to 1 if u = (u_max - u_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1 if v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the scalar is    set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg &amp;&amp; v = v_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to (sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg). SCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to 360), this is measured relative to (u_avg,v_avg). SCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4    depending upon the quadrant of the point (u,v). SCALAR_X, the scalar is set to the x-value.  SCALAR_Y, the scalar is set to the y-value.  SCALAR_Z, the scalar is set to the z-value.  SCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e. distance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is set to the value returned from EvaluateScalar().</para>
/// </summary>
  void SetScalarMode(int arg0);


  // int GetScalarModeMinValue ();
/// <summary>
/// <para>Get/Set the mode used for the scalar data.  The options are: SCALAR_NONE, (default) scalars are not generated. SCALAR_U, the scalar is set to the u-value.  SCALAR_V, the scalar is set to the v-value. SCALAR_U0, the scalar is set to 1 if u = (u_max - u_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1 if v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the scalar is    set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg &amp;&amp; v = v_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to (sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg). SCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to 360), this is measured relative to (u_avg,v_avg). SCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4    depending upon the quadrant of the point (u,v). SCALAR_X, the scalar is set to the x-value.  SCALAR_Y, the scalar is set to the y-value.  SCALAR_Z, the scalar is set to the z-value.  SCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e. distance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is set to the value returned from EvaluateScalar().</para>
/// </summary>
  int GetScalarModeMinValue();


  // int GetScalarModeMaxValue ();
/// <summary>
/// <para>Get/Set the mode used for the scalar data.  The options are: SCALAR_NONE, (default) scalars are not generated. SCALAR_U, the scalar is set to the u-value.  SCALAR_V, the scalar is set to the v-value. SCALAR_U0, the scalar is set to 1 if u = (u_max - u_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1 if v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the scalar is    set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg &amp;&amp; v = v_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to (sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg). SCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to 360), this is measured relative to (u_avg,v_avg). SCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4    depending upon the quadrant of the point (u,v). SCALAR_X, the scalar is set to the x-value.  SCALAR_Y, the scalar is set to the y-value.  SCALAR_Z, the scalar is set to the z-value.  SCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e. distance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is set to the value returned from EvaluateScalar().</para>
/// </summary>
  int GetScalarModeMaxValue();


  // int GetScalarMode ();
/// <summary>
/// <para>Get/Set the mode used for the scalar data.  The options are: SCALAR_NONE, (default) scalars are not generated. SCALAR_U, the scalar is set to the u-value.  SCALAR_V, the scalar is set to the v-value. SCALAR_U0, the scalar is set to 1 if u = (u_max - u_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1 if v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the scalar is    set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg &amp;&amp; v = v_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to (sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg). SCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to 360), this is measured relative to (u_avg,v_avg). SCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4    depending upon the quadrant of the point (u,v). SCALAR_X, the scalar is set to the x-value.  SCALAR_Y, the scalar is set to the y-value.  SCALAR_Z, the scalar is set to the z-value.  SCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e. distance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is set to the value returned from EvaluateScalar().</para>
/// </summary>
  int GetScalarMode();


  // void SetScalarModeToNone (void );this SetScalarMode SCALAR_NONE 
/// <summary>
/// <para>Get/Set the mode used for the scalar data.  The options are: SCALAR_NONE, (default) scalars are not generated. SCALAR_U, the scalar is set to the u-value.  SCALAR_V, the scalar is set to the v-value. SCALAR_U0, the scalar is set to 1 if u = (u_max - u_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1 if v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the scalar is    set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg &amp;&amp; v = v_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to (sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg). SCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to 360), this is measured relative to (u_avg,v_avg). SCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4    depending upon the quadrant of the point (u,v). SCALAR_X, the scalar is set to the x-value.  SCALAR_Y, the scalar is set to the y-value.  SCALAR_Z, the scalar is set to the z-value.  SCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e. distance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is set to the value returned from EvaluateScalar().</para>
/// </summary>
  void SetScalarModeToNone();


  // void SetScalarModeToU (void );this SetScalarMode SCALAR_U 
/// <summary>
/// <para>Get/Set the mode used for the scalar data.  The options are: SCALAR_NONE, (default) scalars are not generated. SCALAR_U, the scalar is set to the u-value.  SCALAR_V, the scalar is set to the v-value. SCALAR_U0, the scalar is set to 1 if u = (u_max - u_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1 if v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the scalar is    set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg &amp;&amp; v = v_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to (sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg). SCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to 360), this is measured relative to (u_avg,v_avg). SCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4    depending upon the quadrant of the point (u,v). SCALAR_X, the scalar is set to the x-value.  SCALAR_Y, the scalar is set to the y-value.  SCALAR_Z, the scalar is set to the z-value.  SCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e. distance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is set to the value returned from EvaluateScalar().</para>
/// </summary>
  void SetScalarModeToU();


  // void SetScalarModeToV (void );this SetScalarMode SCALAR_V 
/// <summary>
/// <para>Get/Set the mode used for the scalar data.  The options are: SCALAR_NONE, (default) scalars are not generated. SCALAR_U, the scalar is set to the u-value.  SCALAR_V, the scalar is set to the v-value. SCALAR_U0, the scalar is set to 1 if u = (u_max - u_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1 if v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the scalar is    set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg &amp;&amp; v = v_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to (sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg). SCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to 360), this is measured relative to (u_avg,v_avg). SCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4    depending upon the quadrant of the point (u,v). SCALAR_X, the scalar is set to the x-value.  SCALAR_Y, the scalar is set to the y-value.  SCALAR_Z, the scalar is set to the z-value.  SCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e. distance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is set to the value returned from EvaluateScalar().</para>
/// </summary>
  void SetScalarModeToV();


  // void SetScalarModeToU0 (void );this SetScalarMode SCALAR_U0 
/// <summary>
/// <para>Get/Set the mode used for the scalar data.  The options are: SCALAR_NONE, (default) scalars are not generated. SCALAR_U, the scalar is set to the u-value.  SCALAR_V, the scalar is set to the v-value. SCALAR_U0, the scalar is set to 1 if u = (u_max - u_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1 if v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the scalar is    set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg &amp;&amp; v = v_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to (sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg). SCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to 360), this is measured relative to (u_avg,v_avg). SCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4    depending upon the quadrant of the point (u,v). SCALAR_X, the scalar is set to the x-value.  SCALAR_Y, the scalar is set to the y-value.  SCALAR_Z, the scalar is set to the z-value.  SCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e. distance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is set to the value returned from EvaluateScalar().</para>
/// </summary>
  void SetScalarModeToU0();


  // void SetScalarModeToV0 (void );this SetScalarMode SCALAR_V0 
/// <summary>
/// <para>Get/Set the mode used for the scalar data.  The options are: SCALAR_NONE, (default) scalars are not generated. SCALAR_U, the scalar is set to the u-value.  SCALAR_V, the scalar is set to the v-value. SCALAR_U0, the scalar is set to 1 if u = (u_max - u_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1 if v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the scalar is    set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg &amp;&amp; v = v_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to (sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg). SCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to 360), this is measured relative to (u_avg,v_avg). SCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4    depending upon the quadrant of the point (u,v). SCALAR_X, the scalar is set to the x-value.  SCALAR_Y, the scalar is set to the y-value.  SCALAR_Z, the scalar is set to the z-value.  SCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e. distance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is set to the value returned from EvaluateScalar().</para>
/// </summary>
  void SetScalarModeToV0();


  // void SetScalarModeToU0V0 (void );this SetScalarMode SCALAR_U0V0 
/// <summary>
/// <para>Get/Set the mode used for the scalar data.  The options are: SCALAR_NONE, (default) scalars are not generated. SCALAR_U, the scalar is set to the u-value.  SCALAR_V, the scalar is set to the v-value. SCALAR_U0, the scalar is set to 1 if u = (u_max - u_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1 if v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the scalar is    set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg &amp;&amp; v = v_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to (sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg). SCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to 360), this is measured relative to (u_avg,v_avg). SCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4    depending upon the quadrant of the point (u,v). SCALAR_X, the scalar is set to the x-value.  SCALAR_Y, the scalar is set to the y-value.  SCALAR_Z, the scalar is set to the z-value.  SCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e. distance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is set to the value returned from EvaluateScalar().</para>
/// </summary>
  void SetScalarModeToU0V0();


  // void SetScalarModeToModulus (void );this SetScalarMode SCALAR_MODULUS 
/// <summary>
/// <para>Get/Set the mode used for the scalar data.  The options are: SCALAR_NONE, (default) scalars are not generated. SCALAR_U, the scalar is set to the u-value.  SCALAR_V, the scalar is set to the v-value. SCALAR_U0, the scalar is set to 1 if u = (u_max - u_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1 if v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the scalar is    set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg &amp;&amp; v = v_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to (sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg). SCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to 360), this is measured relative to (u_avg,v_avg). SCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4    depending upon the quadrant of the point (u,v). SCALAR_X, the scalar is set to the x-value.  SCALAR_Y, the scalar is set to the y-value.  SCALAR_Z, the scalar is set to the z-value.  SCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e. distance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is set to the value returned from EvaluateScalar().</para>
/// </summary>
  void SetScalarModeToModulus();


  // void SetScalarModeToPhase (void );this SetScalarMode SCALAR_PHASE 
/// <summary>
/// <para>Get/Set the mode used for the scalar data.  The options are: SCALAR_NONE, (default) scalars are not generated. SCALAR_U, the scalar is set to the u-value.  SCALAR_V, the scalar is set to the v-value. SCALAR_U0, the scalar is set to 1 if u = (u_max - u_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1 if v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the scalar is    set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg &amp;&amp; v = v_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to (sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg). SCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to 360), this is measured relative to (u_avg,v_avg). SCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4    depending upon the quadrant of the point (u,v). SCALAR_X, the scalar is set to the x-value.  SCALAR_Y, the scalar is set to the y-value.  SCALAR_Z, the scalar is set to the z-value.  SCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e. distance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is set to the value returned from EvaluateScalar().</para>
/// </summary>
  void SetScalarModeToPhase();


  // void SetScalarModeToQuadrant (void );this SetScalarMode SCALAR_QUADRANT 
/// <summary>
/// <para>Get/Set the mode used for the scalar data.  The options are: SCALAR_NONE, (default) scalars are not generated. SCALAR_U, the scalar is set to the u-value.  SCALAR_V, the scalar is set to the v-value. SCALAR_U0, the scalar is set to 1 if u = (u_max - u_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1 if v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the scalar is    set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg &amp;&amp; v = v_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to (sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg). SCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to 360), this is measured relative to (u_avg,v_avg). SCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4    depending upon the quadrant of the point (u,v). SCALAR_X, the scalar is set to the x-value.  SCALAR_Y, the scalar is set to the y-value.  SCALAR_Z, the scalar is set to the z-value.  SCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e. distance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is set to the value returned from EvaluateScalar().</para>
/// </summary>
  void SetScalarModeToQuadrant();


  // void SetScalarModeToX (void );this SetScalarMode SCALAR_X 
/// <summary>
/// <para>Get/Set the mode used for the scalar data.  The options are: SCALAR_NONE, (default) scalars are not generated. SCALAR_U, the scalar is set to the u-value.  SCALAR_V, the scalar is set to the v-value. SCALAR_U0, the scalar is set to 1 if u = (u_max - u_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1 if v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the scalar is    set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg &amp;&amp; v = v_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to (sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg). SCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to 360), this is measured relative to (u_avg,v_avg). SCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4    depending upon the quadrant of the point (u,v). SCALAR_X, the scalar is set to the x-value.  SCALAR_Y, the scalar is set to the y-value.  SCALAR_Z, the scalar is set to the z-value.  SCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e. distance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is set to the value returned from EvaluateScalar().</para>
/// </summary>
  void SetScalarModeToX();


  // void SetScalarModeToY (void );this SetScalarMode SCALAR_Y 
/// <summary>
/// <para>Get/Set the mode used for the scalar data.  The options are: SCALAR_NONE, (default) scalars are not generated. SCALAR_U, the scalar is set to the u-value.  SCALAR_V, the scalar is set to the v-value. SCALAR_U0, the scalar is set to 1 if u = (u_max - u_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1 if v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the scalar is    set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg &amp;&amp; v = v_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to (sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg). SCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to 360), this is measured relative to (u_avg,v_avg). SCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4    depending upon the quadrant of the point (u,v). SCALAR_X, the scalar is set to the x-value.  SCALAR_Y, the scalar is set to the y-value.  SCALAR_Z, the scalar is set to the z-value.  SCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e. distance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is set to the value returned from EvaluateScalar().</para>
/// </summary>
  void SetScalarModeToY();


  // void SetScalarModeToZ (void );this SetScalarMode SCALAR_Z 
/// <summary>
/// <para>Get/Set the mode used for the scalar data.  The options are: SCALAR_NONE, (default) scalars are not generated. SCALAR_U, the scalar is set to the u-value.  SCALAR_V, the scalar is set to the v-value. SCALAR_U0, the scalar is set to 1 if u = (u_max - u_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1 if v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the scalar is    set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg &amp;&amp; v = v_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to (sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg). SCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to 360), this is measured relative to (u_avg,v_avg). SCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4    depending upon the quadrant of the point (u,v). SCALAR_X, the scalar is set to the x-value.  SCALAR_Y, the scalar is set to the y-value.  SCALAR_Z, the scalar is set to the z-value.  SCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e. distance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is set to the value returned from EvaluateScalar().</para>
/// </summary>
  void SetScalarModeToZ();


  // void SetScalarModeToDistance (void );this SetScalarMode SCALAR_DISTANCE 
/// <summary>
/// <para>Get/Set the mode used for the scalar data.  The options are: SCALAR_NONE, (default) scalars are not generated. SCALAR_U, the scalar is set to the u-value.  SCALAR_V, the scalar is set to the v-value. SCALAR_U0, the scalar is set to 1 if u = (u_max - u_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1 if v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the scalar is    set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg &amp;&amp; v = v_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to (sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg). SCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to 360), this is measured relative to (u_avg,v_avg). SCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4    depending upon the quadrant of the point (u,v). SCALAR_X, the scalar is set to the x-value.  SCALAR_Y, the scalar is set to the y-value.  SCALAR_Z, the scalar is set to the z-value.  SCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e. distance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is set to the value returned from EvaluateScalar().</para>
/// </summary>
  void SetScalarModeToDistance();


  // void SetScalarModeToFunctionDefined (void );this SetScalarMode SCALAR_FUNCTION_DEFINED 
/// <summary>
/// <para>Return the MTime also considering the parametric function.</para>
/// </summary>
  void SetScalarModeToFunctionDefined();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Return the MTime also considering the parametric function.</para>
/// </summary>
  unsigned long GetMTime();


// Did not wrap:  vtkParametricFunctionSource ();


// Did not wrap:  virtual ~vtkParametricFunctionSource ();


// Did not wrap:  int RequestData (vtkInformation *info, vtkInformationVector *input, vtkInformationVector *output);


// Did not wrap:  void Produce1DOutput (vtkInformationVector *output);


// Did not wrap:  void Produce2DOutput (vtkInformationVector *output);


// Did not wrap:  void MakeTriangleStrips (vtkCellArray *strips, int PtsU, int PtsV);


// Did not wrap:  vtkParametricFunctionSource (const vtkParametricFunctionSource &);


// Did not wrap:  void vtkParametricFunctionSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkParametricFunctionSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkParametricFunctionSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkParametricFunctionSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkParametricFunctionSource();


};

} // end vtkGraphics
