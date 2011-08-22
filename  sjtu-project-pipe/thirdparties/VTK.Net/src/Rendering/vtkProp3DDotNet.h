#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkProp3D : public vtkProp
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkProp3D *NewInstance ();
  vtkProp3D^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void ShallowCopy (vtkProp *prop);
/// <summary>
/// <para>Shallow copy of this vtkProp3D.</para>
/// </summary>
  void ShallowCopy(vtkProp^ prop);


  // virtual void SetPosition (double _arg1, double _arg2, double _arg3);vtkDebugMacro this GetClassName this _arg1 _arg2 _arg3 if this Position _arg1 this Position _arg2 this Position _arg3 this Position _arg1 this Position _arg2 this Position _arg3 this Modified this IsIdentity 
/// <summary>
/// <para>Set/Get/Add the position of the Prop3D in world coordinates.</para>
/// </summary>
  void SetPosition(double _arg1, double _arg2, double _arg3);


  // virtual void SetPosition (double _arg[3]);this SetPosition _arg _arg _arg 
/// <summary>
/// <para>Set/Get/Add the position of the Prop3D in world coordinates.</para>
/// </summary>
  void SetPosition(array<double>^ _arg);


  // double  *GetPosition ();
/// <summary>
/// <para>Set/Get/Add the position of the Prop3D in world coordinates.</para>
/// </summary>
  array<double>^ GetPosition();


  // void AddPosition (double deltaPosition[3]);
/// <summary>
/// <para>Set/Get/Add the position of the Prop3D in world coordinates.</para>
/// </summary>
  void AddPosition(array<double>^ deltaPosition);


  // void AddPosition (double deltaX, double deltaY, double deltaZ);
/// <summary>
/// <para>Set/Get/Add the position of the Prop3D in world coordinates.</para>
/// </summary>
  void AddPosition(double deltaX, double deltaY, double deltaZ);


  // virtual void SetOrigin (double _arg1, double _arg2, double _arg3);vtkDebugMacro this GetClassName this _arg1 _arg2 _arg3 if this Origin _arg1 this Origin _arg2 this Origin _arg3 this Origin _arg1 this Origin _arg2 this Origin _arg3 this Modified this IsIdentity 
/// <summary>
/// <para>Set/Get the origin of the Prop3D. This is the point about which all  rotations take place.</para>
/// </summary>
  void SetOrigin(double _arg1, double _arg2, double _arg3);


  // virtual void SetOrigin (double _arg[3]);this SetOrigin _arg _arg _arg 
/// <summary>
/// <para>Set/Get the origin of the Prop3D. This is the point about which all  rotations take place.</para>
/// </summary>
  void SetOrigin(array<double>^ _arg);


  // double  *GetOrigin ();
/// <summary>
/// <para>Set/Get the origin of the Prop3D. This is the point about which all  rotations take place.</para>
/// </summary>
  array<double>^ GetOrigin();


  // virtual void SetScale (double _arg1, double _arg2, double _arg3);vtkDebugMacro this GetClassName this _arg1 _arg2 _arg3 if this Scale _arg1 this Scale _arg2 this Scale _arg3 this Scale _arg1 this Scale _arg2 this Scale _arg3 this Modified this IsIdentity 
/// <summary>
/// <para>Set/Get the scale of the actor. Scaling in performed independently on the X, Y and Z axis. A scale of zero is illegal and will be replaced with one.</para>
/// </summary>
  void SetScale(double _arg1, double _arg2, double _arg3);


  // virtual void SetScale (double _arg[3]);this SetScale _arg _arg _arg 
/// <summary>
/// <para>Set/Get the scale of the actor. Scaling in performed independently on the X, Y and Z axis. A scale of zero is illegal and will be replaced with one.</para>
/// </summary>
  void SetScale(array<double>^ _arg);


  // double  *GetScale ();
/// <summary>
/// <para>Set/Get the scale of the actor. Scaling in performed independently on the X, Y and Z axis. A scale of zero is illegal and will be replaced with one.</para>
/// </summary>
  array<double>^ GetScale();


  // void SetScale (double s);this SetScale s s s 
/// <summary>
/// <para>Method to set the scale isotropically</para>
/// </summary>
  void SetScale(double s);


  // void SetUserTransform (vtkLinearTransform *transform);
/// <summary>
/// <para>In addition to the instance variables such as position and orientation, you can add an additional transformation for your own use.  This  transformation is concatenated with the actor's internal transformation, which you implicitly create through the use of SetPosition(),  SetOrigin() and SetOrientation().   </para>
/// <para>If the internal transformation is identity (i.e. if you don't set the Position, Origin, or  Orientation) then the actors final transformation will be the UserTransform, concatenated with the UserMatrix if the UserMatrix is present.</para>
/// </summary>
  void SetUserTransform(vtkLinearTransform^ transform);


  // vtkLinearTransform *GetUserTransform ();
/// <summary>
/// <para>In addition to the instance variables such as position and orientation, you can add an additional transformation for your own use.  This  transformation is concatenated with the actor's internal transformation, which you implicitly create through the use of SetPosition(),  SetOrigin() and SetOrientation().   </para>
/// <para>If the internal transformation is identity (i.e. if you don't set the Position, Origin, or  Orientation) then the actors final transformation will be the UserTransform, concatenated with the UserMatrix if the UserMatrix is present.</para>
/// </summary>
  vtkLinearTransform^ GetUserTransform();


  // void SetUserMatrix (vtkMatrix4x4 *matrix);
/// <summary>
/// <para>The UserMatrix can be used in place of UserTransform.</para>
/// </summary>
  void SetUserMatrix(vtkMatrix4x4^ matrix);


  // vtkMatrix4x4 *GetUserMatrix ();
/// <summary>
/// <para>The UserMatrix can be used in place of UserTransform.</para>
/// </summary>
  vtkMatrix4x4^ GetUserMatrix();


  // virtual void GetMatrix (vtkMatrix4x4 *m);
/// <summary>
/// <para>Return a reference to the Prop3D's 4x4 composite matrix. Get the matrix from the position, origin, scale and orientation This matrix is cached, so multiple GetMatrix() calls will be efficient.</para>
/// </summary>
  void GetMatrix(vtkMatrix4x4^ m);


  // virtual void GetMatrix (double m[16]);
/// <summary>
/// <para>Return a reference to the Prop3D's 4x4 composite matrix. Get the matrix from the position, origin, scale and orientation This matrix is cached, so multiple GetMatrix() calls will be efficient.</para>
/// </summary>
  void GetMatrix(array<double>^ m);


  // void GetBounds (double bounds[6]);
/// <summary>
/// <para>Get the bounds for this Prop3D as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).</para>
/// </summary>
  void GetBounds(array<double>^ bounds);


  // virtual double *GetBounds () = 0;
/// <summary>
/// <para>Get the bounds for this Prop3D as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).</para>
/// </summary>
  array<double>^ GetBounds();


  // double *GetCenter ();
/// <summary>
/// <para>Get the center of the bounding box in world coordinates.</para>
/// </summary>
  array<double>^ GetCenter();


  // double *GetXRange ();
/// <summary>
/// <para>Get the Prop3D's x range in world coordinates.</para>
/// </summary>
  array<double>^ GetXRange();


  // double *GetYRange ();
/// <summary>
/// <para>Get the Prop3D's y range in world coordinates.</para>
/// </summary>
  array<double>^ GetYRange();


  // double *GetZRange ();
/// <summary>
/// <para>Get the Prop3D's z range in world coordinates.</para>
/// </summary>
  array<double>^ GetZRange();


  // double GetLength ();
/// <summary>
/// <para>Get the length of the diagonal of the bounding box.</para>
/// </summary>
  double GetLength();


  // void RotateX (double );
/// <summary>
/// <para>Rotate the Prop3D in degrees about the X axis using the right hand rule. The axis is the Prop3D's X axis, which can change as other rotations are performed.  To rotate about the world X axis use RotateWXYZ (angle, 1, 0, 0). This rotation is applied before all others in the current transformation matrix.</para>
/// </summary>
  void RotateX(double arg0);


  // void RotateY (double );
/// <summary>
/// <para>Rotate the Prop3D in degrees about the Y axis using the right hand rule. The axis is the Prop3D's Y axis, which can change as other rotations are performed.  To rotate about the world Y axis use RotateWXYZ (angle, 0, 1, 0). This rotation is applied before all others in the current transformation matrix.</para>
/// </summary>
  void RotateY(double arg0);


  // void RotateZ (double );
/// <summary>
/// <para>Rotate the Prop3D in degrees about the Z axis using the right hand rule. The axis is the Prop3D's Z axis, which can change as other rotations are performed.  To rotate about the world Z axis use RotateWXYZ (angle, 0, 0, 1). This rotation is applied before all others in the current transformation matrix.</para>
/// </summary>
  void RotateZ(double arg0);


  // void RotateWXYZ (double , double , double , double );
/// <summary>
/// <para>Rotate the Prop3D in degrees about an arbitrary axis specified by the last three arguments. The axis is specified in world coordinates. To rotate an about its model axes, use RotateX, RotateY, RotateZ.</para>
/// </summary>
  void RotateWXYZ(double arg0, double arg1, double arg2, double arg3);


  // void SetOrientation (double , double , double );
/// <summary>
/// <para>Sets the orientation of the Prop3D.  Orientation is specified as X,Y and Z rotations in that order, but they are performed as RotateZ, RotateX, and finally RotateY.</para>
/// </summary>
  void SetOrientation(double arg0, double arg1, double arg2);


  // void SetOrientation (double a[3]);
/// <summary>
/// <para>Sets the orientation of the Prop3D.  Orientation is specified as X,Y and Z rotations in that order, but they are performed as RotateZ, RotateX, and finally RotateY.</para>
/// </summary>
  void SetOrientation(array<double>^ a);


  // double *GetOrientation ();
/// <summary>
/// <para>Returns the orientation of the Prop3D as s vector of X,Y and Z rotation. The ordering in which these rotations must be done to generate the  same matrix is RotateZ, RotateX, and finally RotateY. See also  SetOrientation.</para>
/// </summary>
  array<double>^ GetOrientation();


  // void GetOrientation (double o[3]);
/// <summary>
/// <para>Returns the orientation of the Prop3D as s vector of X,Y and Z rotation. The ordering in which these rotations must be done to generate the  same matrix is RotateZ, RotateX, and finally RotateY. See also  SetOrientation.</para>
/// </summary>
  void GetOrientation(array<double>^ o);


  // double *GetOrientationWXYZ ();
/// <summary>
/// <para>Returns the WXYZ orientation of the Prop3D. </para>
/// </summary>
  array<double>^ GetOrientationWXYZ();


  // void AddOrientation (double , double , double );
/// <summary>
/// <para>Add to the current orientation. See SetOrientation and GetOrientation for more details. This basically does a GetOrientation, adds the passed in arguments, and then calls SetOrientation.</para>
/// </summary>
  void AddOrientation(double arg0, double arg1, double arg2);


  // void AddOrientation (double a[3]);
/// <summary>
/// <para>Add to the current orientation. See SetOrientation and GetOrientation for more details. This basically does a GetOrientation, adds the passed in arguments, and then calls SetOrientation.</para>
/// </summary>
  void AddOrientation(array<double>^ a);


  // void PokeMatrix (vtkMatrix4x4 *matrix);
/// <summary>
/// <para>This method modifies the vtkProp3D so that its transformation state is set to the matrix specified. The method does this by setting appropriate transformation-related ivars to initial values (i.e., not transformed), and placing the user-supplied matrix into the UserMatrix of this vtkProp3D. If the method is called again with a NULL matrix, then the original state of the vtkProp3D will be restored. This method is used to support picking and assembly structures.</para>
/// </summary>
  void PokeMatrix(vtkMatrix4x4^ matrix);


  // void InitPathTraversal ();
/// <summary>
/// <para>Overload vtkProp's method for setting up assembly paths. See the documentation for vtkProp.</para>
/// </summary>
  void InitPathTraversal();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Get the vtkProp3D's mtime </para>
/// </summary>
  unsigned long GetMTime();


  // unsigned long GetUserTransformMatrixMTime ();
/// <summary>
/// <para>Get the modified time of the user matrix or user transform.</para>
/// </summary>
  unsigned long GetUserTransformMatrixMTime();


  // virtual void ComputeMatrix ();
/// <summary>
/// <para>Generate the matrix based on ivars</para>
/// </summary>
  void ComputeMatrix();


  // vtkMatrix4x4 *GetMatrix ();this ComputeMatrix return this Matrix 
/// <summary>
/// <para>Is the matrix for this actor identity</para>
/// </summary>
  vtkMatrix4x4^ GetMatrix();


  // int GetIsIdentity ();
/// <summary>
/// <para>Is the matrix for this actor identity</para>
/// </summary>
  int GetIsIdentity();


// Did not wrap:  vtkProp3D ();


// Did not wrap:  ~vtkProp3D ();


// Did not wrap:  vtkProp3D (const vtkProp3D &);


// Did not wrap:  void vtkProp3D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkProp3D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkProp3D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkProp3D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkProp3D();


};

} // end vtkRendering
