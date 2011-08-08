#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkRenderer;

public ref class vtkCamera : public vtkObject
{

public:
  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCamera *NewInstance ();
  vtkCamera^ NewInstance();


  // vtkCamera *SafeDownCast (vtkObject* o);
  static vtkCamera^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkCamera *New ();


  // void SetPosition (double x, double y, double z);
/// <summary>
/// <para>Set/Get the position of the camera in world coordinates. The default position is (0,0,1).</para>
/// </summary>
  void SetPosition(double x, double y, double z);


  // void SetPosition (const double a[3]);this SetPosition a a a 
/// <summary>
/// <para>Set/Get the position of the camera in world coordinates. The default position is (0,0,1).</para>
/// </summary>
  void SetPosition(array<double>^ a);


  // double  *GetPosition ();
/// <summary>
/// <para>Set/Get the position of the camera in world coordinates. The default position is (0,0,1).</para>
/// </summary>
  array<double>^ GetPosition();


  // void SetFocalPoint (double x, double y, double z);
/// <summary>
/// <para>Set/Get the focal of the camera in world coordinates. The default focal point is the origin.</para>
/// </summary>
  void SetFocalPoint(double x, double y, double z);


  // void SetFocalPoint (const double a[3]);this SetFocalPoint a a a 
/// <summary>
/// <para>Set/Get the focal of the camera in world coordinates. The default focal point is the origin.</para>
/// </summary>
  void SetFocalPoint(array<double>^ a);


  // double  *GetFocalPoint ();
/// <summary>
/// <para>Set/Get the focal of the camera in world coordinates. The default focal point is the origin.</para>
/// </summary>
  array<double>^ GetFocalPoint();


  // void SetViewUp (double vx, double vy, double vz);
/// <summary>
/// <para>Set/Get the view up direction for the camera.  The default is (0,1,0).  </para>
/// </summary>
  void SetViewUp(double vx, double vy, double vz);


  // void SetViewUp (const double a[3]);this SetViewUp a a a 
/// <summary>
/// <para>Set/Get the view up direction for the camera.  The default is (0,1,0).  </para>
/// </summary>
  void SetViewUp(array<double>^ a);


  // double  *GetViewUp ();
/// <summary>
/// <para>Set/Get the view up direction for the camera.  The default is (0,1,0).  </para>
/// </summary>
  array<double>^ GetViewUp();


  // void OrthogonalizeViewUp ();
/// <summary>
/// <para>Recompute the ViewUp vector to force it to be perpendicular to camera-&gt;focalpoint vector.  Unless you are going to use Yaw or Azimuth on the camera, there is no need to do this.</para>
/// </summary>
  void OrthogonalizeViewUp();


  // void SetDistance (double );
/// <summary>
/// <para>Move the focal point so that it is the specified distance from the camera position.  This distance must be positive.</para>
/// </summary>
  void SetDistance(double arg0);


  // double GetDistance ();
/// <summary>
/// <para>Return the distance from the camera position to the focal point. This distance is positive.</para>
/// </summary>
  double GetDistance();


  // double  *GetDirectionOfProjection ();
/// <summary>
/// <para>Get the vector in the direction from the camera position to the focal point.  This is usually the opposite of the ViewPlaneNormal, the vector perpendicular to the screen, unless the view is oblique.</para>
/// </summary>
  array<double>^ GetDirectionOfProjection();


  // void Dolly (double distance);
/// <summary>
/// <para>Move the position of the camera along the direction of projection. Moving towards the focal point (e.g., greater than 1) is a dolly-in, moving away  from the focal point (e.g., less than 1) is a dolly-out.</para>
/// </summary>
  void Dolly(double distance);


  // void SetRoll (double angle);
/// <summary>
/// <para>Set the roll angle of the camera about the direction of projection.</para>
/// </summary>
  void SetRoll(double angle);


  // double GetRoll ();
/// <summary>
/// <para>Set the roll angle of the camera about the direction of projection.</para>
/// </summary>
  double GetRoll();


  // void Roll (double angle);
/// <summary>
/// <para>Rotate the camera about the direction of projection.</para>
/// </summary>
  void Roll(double angle);


  // void Azimuth (double angle);
/// <summary>
/// <para>Rotate the camera about the view up vector centered at the focal point. Note that the view up vector is not necessarily perpendicular to the direction of projection.</para>
/// </summary>
  void Azimuth(double angle);


  // void Yaw (double angle);
/// <summary>
/// <para>Rotate the focal point about the view up vector centered at the camera's  position.  Note that the view up vector is not necessarily perpendicular to the direction of projection.</para>
/// </summary>
  void Yaw(double angle);


  // void Elevation (double angle);
/// <summary>
/// <para>Rotate the camera about the cross product of the direction of projection and the view up vector centered on the focal point.</para>
/// </summary>
  void Elevation(double angle);


  // void Pitch (double angle);
/// <summary>
/// <para>Rotate the focal point about the cross product of the view up vector  and the direction of projection, centered at the camera's position.</para>
/// </summary>
  void Pitch(double angle);


  // void SetParallelProjection (int flag);
/// <summary>
/// <para>Set/Get the value of the ParallelProjection instance variable. This determines if the camera should do a perspective or parallel projection.</para>
/// </summary>
  void SetParallelProjection(int flag);


  // int GetParallelProjection ();
/// <summary>
/// <para>Set/Get the value of the ParallelProjection instance variable. This determines if the camera should do a perspective or parallel projection.</para>
/// </summary>
  int GetParallelProjection();


  // void ParallelProjectionOn ();
/// <summary>
/// <para>Set/Get the value of the ParallelProjection instance variable. This determines if the camera should do a perspective or parallel projection.</para>
/// </summary>
  void ParallelProjectionOn();


  // void ParallelProjectionOff ();
/// <summary>
/// <para>Set/Get the value of the ParallelProjection instance variable. This determines if the camera should do a perspective or parallel projection.</para>
/// </summary>
  void ParallelProjectionOff();


  // void SetUseHorizontalViewAngle (int flag);
/// <summary>
/// <para>Set/Get the value of the UseHorizontalViewAngle instance variable. If set, the camera's view angle represents a horizontal view angle, rather than the default vertical view angle. This is useful if the application uses a display device which whose specs indicate a particular horizontal view angle, or if the application varies the window height but wants to keep the perspective transform unchanges.</para>
/// </summary>
  void SetUseHorizontalViewAngle(int flag);


  // int GetUseHorizontalViewAngle ();
/// <summary>
/// <para>Set/Get the value of the UseHorizontalViewAngle instance variable. If set, the camera's view angle represents a horizontal view angle, rather than the default vertical view angle. This is useful if the application uses a display device which whose specs indicate a particular horizontal view angle, or if the application varies the window height but wants to keep the perspective transform unchanges.</para>
/// </summary>
  int GetUseHorizontalViewAngle();


  // void UseHorizontalViewAngleOn ();
/// <summary>
/// <para>Set/Get the value of the UseHorizontalViewAngle instance variable. If set, the camera's view angle represents a horizontal view angle, rather than the default vertical view angle. This is useful if the application uses a display device which whose specs indicate a particular horizontal view angle, or if the application varies the window height but wants to keep the perspective transform unchanges.</para>
/// </summary>
  void UseHorizontalViewAngleOn();


  // void UseHorizontalViewAngleOff ();
/// <summary>
/// <para>Set/Get the value of the UseHorizontalViewAngle instance variable. If set, the camera's view angle represents a horizontal view angle, rather than the default vertical view angle. This is useful if the application uses a display device which whose specs indicate a particular horizontal view angle, or if the application varies the window height but wants to keep the perspective transform unchanges.</para>
/// </summary>
  void UseHorizontalViewAngleOff();


  // void SetViewAngle (double angle);
/// <summary>
/// <para>Set/Get the camera view angle, which is the angular height of the camera view measured in degrees.  The default angle is 30 degrees.   This method has no effect in parallel projection mode. The formula for setting the angle up for perfect perspective viewing  is: angle = 2*atan((h/2)/d) where h is the height of the RenderWindow  (measured in mm by holding a ruler up to your screen) and d is the distance from your eyes to the screen. </para>
/// </summary>
  void SetViewAngle(double angle);


  // double GetViewAngle ();
/// <summary>
/// <para>Set/Get the camera view angle, which is the angular height of the camera view measured in degrees.  The default angle is 30 degrees.   This method has no effect in parallel projection mode. The formula for setting the angle up for perfect perspective viewing  is: angle = 2*atan((h/2)/d) where h is the height of the RenderWindow  (measured in mm by holding a ruler up to your screen) and d is the distance from your eyes to the screen. </para>
/// </summary>
  double GetViewAngle();


  // void SetParallelScale (double scale);
/// <summary>
/// <para>Set/Get the scaling used for a parallel projection, i.e. the height of the viewport in world-coordinate distances. The default is 1. Note that the &quot;scale&quot; parameter works as an &quot;inverse scale&quot; --- larger numbers produce smaller images. This method has no effect in perspective projection mode.</para>
/// </summary>
  void SetParallelScale(double scale);


  // double GetParallelScale ();
/// <summary>
/// <para>Set/Get the scaling used for a parallel projection, i.e. the height of the viewport in world-coordinate distances. The default is 1. Note that the &quot;scale&quot; parameter works as an &quot;inverse scale&quot; --- larger numbers produce smaller images. This method has no effect in perspective projection mode.</para>
/// </summary>
  double GetParallelScale();


  // void Zoom (double factor);
/// <summary>
/// <para>In perspective mode, decrease the view angle by the specified factor. In parallel mode, decrease the parallel scale by the specified factor. A value greater than 1 is a zoom-in, a  value less than 1 is a zoom-out.</para>
/// </summary>
  void Zoom(double factor);


  // void SetClippingRange (double dNear, double dFar);
/// <summary>
/// <para>Set/Get the location of the near and far clipping planes along the direction of projection.  Both of these values must be positive. How the clipping planes are set can have a large impact on how  well z-buffering works.  In particular the front clipping plane can make a very big difference. Setting it to 0.01 when it really could be 1.0 can have a big impact on your z-buffer resolution farther away.  The default clipping range is (0.1,1000).</para>
/// </summary>
  void SetClippingRange(double dNear, double dFar);


  // void SetClippingRange (const double a[2]);this SetClippingRange a a 
/// <summary>
/// <para>Set/Get the location of the near and far clipping planes along the direction of projection.  Both of these values must be positive. How the clipping planes are set can have a large impact on how  well z-buffering works.  In particular the front clipping plane can make a very big difference. Setting it to 0.01 when it really could be 1.0 can have a big impact on your z-buffer resolution farther away.  The default clipping range is (0.1,1000).</para>
/// </summary>
  void SetClippingRange(array<double>^ a);


  // double  *GetClippingRange ();
/// <summary>
/// <para>Set/Get the location of the near and far clipping planes along the direction of projection.  Both of these values must be positive. How the clipping planes are set can have a large impact on how  well z-buffering works.  In particular the front clipping plane can make a very big difference. Setting it to 0.01 when it really could be 1.0 can have a big impact on your z-buffer resolution farther away.  The default clipping range is (0.1,1000).</para>
/// </summary>
  array<double>^ GetClippingRange();


  // void SetThickness (double );
/// <summary>
/// <para>Set the distance between clipping planes.  This method adjusts the  far clipping plane to be set a distance 'thickness' beyond the near clipping plane.</para>
/// </summary>
  void SetThickness(double arg0);


  // double GetThickness ();
/// <summary>
/// <para>Set the distance between clipping planes.  This method adjusts the  far clipping plane to be set a distance 'thickness' beyond the near clipping plane.</para>
/// </summary>
  double GetThickness();


  // void SetWindowCenter (double x, double y);
/// <summary>
/// <para>Set/Get the center of the window in viewport coordinates. The viewport coordinate range is ([-1,+1],[-1,+1]).  This method is for if you have one window which consists of several viewports, or if you have several screens which you want to act together as one large screen.</para>
/// </summary>
  void SetWindowCenter(double x, double y);


  // double  *GetWindowCenter ();
/// <summary>
/// <para>Set/Get the center of the window in viewport coordinates. The viewport coordinate range is ([-1,+1],[-1,+1]).  This method is for if you have one window which consists of several viewports, or if you have several screens which you want to act together as one large screen.</para>
/// </summary>
  array<double>^ GetWindowCenter();


  // void SetObliqueAngles (double alpha, double beta);
/// <summary>
/// <para>Get/Set the oblique viewing angles.  The first angle, alpha, is the angle (measured from the horizontal) that rays along the direction of projection will follow once projected onto the 2D screen.   The second angle, beta, is the angle between the view plane and the direction of projection.  This creates a shear transform x' = x + dz*cos(alpha)/tan(beta), y' = dz*sin(alpha)/tan(beta) where dz is the distance of the point from the focal plane. The angles are (45,90) by default.  Oblique projections  commonly use (30,63.435).</para>
/// </summary>
  void SetObliqueAngles(double alpha, double beta);


  // void ApplyTransform (vtkTransform *t);
/// <summary>
/// <para>Apply a transform to the camera.  The camera position, focal-point, and view-up are re-calulated using the transform's matrix to multiply the old points by the new transform.</para>
/// </summary>
  void ApplyTransform(vtkTransform^ t);


  // double  *GetViewPlaneNormal ();
/// <summary>
/// <para>Get the ViewPlaneNormal.  This vector will point opposite to the direction of projection, unless you have created an sheared output view using SetViewShear/SetObliqueAngles.</para>
/// </summary>
  array<double>^ GetViewPlaneNormal();


  // void SetViewShear (double dxdz, double dydz, double center);
/// <summary>
/// <para>Set/get the shear transform of the viewing frustum.  Parameters are dx/dz, dy/dz, and center.  center is a factor that describes where to shear around. The distance dshear from the camera where no shear occurs is given by (dshear = center * FocalDistance).</para>
/// </summary>
  void SetViewShear(double dxdz, double dydz, double center);


  // void SetViewShear (double d[3]);
/// <summary>
/// <para>Set/get the shear transform of the viewing frustum.  Parameters are dx/dz, dy/dz, and center.  center is a factor that describes where to shear around. The distance dshear from the camera where no shear occurs is given by (dshear = center * FocalDistance).</para>
/// </summary>
  void SetViewShear(array<double>^ d);


  // double  *GetViewShear ();
/// <summary>
/// <para>Set/get the shear transform of the viewing frustum.  Parameters are dx/dz, dy/dz, and center.  center is a factor that describes where to shear around. The distance dshear from the camera where no shear occurs is given by (dshear = center * FocalDistance).</para>
/// </summary>
  array<double>^ GetViewShear();


  // void SetEyeAngle (double );
/// <summary>
/// <para>Set/Get the separation between eyes (in degrees). This is used when generating stereo images.</para>
/// </summary>
  void SetEyeAngle(double arg0);


  // double GetEyeAngle ();
/// <summary>
/// <para>Set/Get the separation between eyes (in degrees). This is used when generating stereo images.</para>
/// </summary>
  double GetEyeAngle();


  // void SetFocalDisk (double );
/// <summary>
/// <para>Set the size of the cameras lens in world coordinates. This is only  used when the renderer is doing focal depth rendering. When that is  being done the size of the focal disk will effect how significant the depth effects will be.</para>
/// </summary>
  void SetFocalDisk(double arg0);


  // double GetFocalDisk ();
/// <summary>
/// <para>Set the size of the cameras lens in world coordinates. This is only  used when the renderer is doing focal depth rendering. When that is  being done the size of the focal disk will effect how significant the depth effects will be.</para>
/// </summary>
  double GetFocalDisk();


  // virtual vtkMatrix4x4 *GetViewTransformMatrix ();
/// <summary>
/// <para>Return the matrix of the view transform.</para>
/// </summary>
  vtkMatrix4x4^ GetViewTransformMatrix();


  // virtual vtkMatrix4x4 *GetPerspectiveTransformMatrix (double aspect, double nearz, double farz);
/// <summary>
/// <para>Return the perspective transform matrix, which converts from camera coordinates to viewport coordinates.  The 'aspect' is the width/height for the viewport, and the nearz and farz are the Z-buffer values that map to the near and far clipping planes. The viewport coordinates are in the range ([-1,+1],[-1,+1],[nearz,farz]).</para>
/// </summary>
  vtkMatrix4x4^ GetPerspectiveTransformMatrix(double aspect, double nearz, double farz);


  // virtual vtkMatrix4x4 *GetCompositePerspectiveTransformMatrix (double aspect, double nearz, double farz);
/// <summary>
/// <para>Return the concatenation of the ViewTransform and the  PerspectiveTransform.  This transform will convert world coordinates to view coordinates.  The 'aspect' is the width/height for the viewport, and the nearz and farz are the Z-buffer values that map to the near and far clipping planes. The view coordinates are in the range ([-1,+1],[-1,+1],[nearz,farz]).</para>
/// </summary>
  vtkMatrix4x4^ GetCompositePerspectiveTransformMatrix(double aspect, double nearz, double farz);


  // void SetUserTransform (vtkHomogeneousTransform *transform);
/// <summary>
/// <para>In addition to the instance variables such as position and orientation, you can add an additional transformation for your own use.  This  transformation is concatenated to the camera's PerspectiveTransform</para>
/// </summary>
  void SetUserTransform(vtkHomogeneousTransform^ transform);


  // vtkHomogeneousTransform *GetUserTransform ();
/// <summary>
/// <para>In addition to the instance variables such as position and orientation, you can add an additional transformation for your own use.  This  transformation is concatenated to the camera's PerspectiveTransform</para>
/// </summary>
  vtkHomogeneousTransform^ GetUserTransform();


  // virtual void Render (vtkRenderer *);
/// <summary>
/// <para>This method causes the camera to set up whatever is required for viewing the scene. This is actually handled by an subclass of vtkCamera, which is created through New()</para>
/// </summary>
  void Render(vtkRenderer^ arg0);


  // unsigned long GetViewingRaysMTime ();
/// <summary>
/// <para>Return the MTime that concerns recomputing the view rays of the camera.</para>
/// </summary>
  unsigned long GetViewingRaysMTime();


  // void ViewingRaysModified ();
/// <summary>
/// <para>Mark that something has changed which requires the view rays to be recomputed.</para>
/// </summary>
  void ViewingRaysModified();


  // virtual void GetFrustumPlanes (double aspect, double planes[24]);
/// <summary>
/// <para>Get the plane equations that bound the view frustum. The plane normals point inward. The planes array contains six plane equations of the form (Ax+By+Cz+D=0), the first four values are (A,B,C,D) which repeats for each of the planes. The aspect of the viewport is needed to correctly compute the planes</para>
/// </summary>
  void GetFrustumPlanes(double aspect, array<double>^ planes);


  // double *GetOrientation ();
/// <summary>
/// <para>Get the orientation of the camera.</para>
/// </summary>
  array<double>^ GetOrientation();


  // double *GetOrientationWXYZ ();
/// <summary>
/// <para>Get the orientation of the camera.</para>
/// </summary>
  array<double>^ GetOrientationWXYZ();


  // void SetViewPlaneNormal (double x, double y, double z);
/// <summary>
/// <para>These methods have been deprecated.  The view plane normal is  automatically set from the DirectionOfProjection according to the ViewShear.</para>
/// </summary>
  void SetViewPlaneNormal(double x, double y, double z);


  // void SetViewPlaneNormal (const double a[3]);this SetViewPlaneNormal a a a 
/// <summary>
/// <para>These methods have been deprecated.  The view plane normal is  automatically set from the DirectionOfProjection according to the ViewShear.</para>
/// </summary>
  void SetViewPlaneNormal(array<double>^ a);


  // void ComputeViewPlaneNormal ();
/// <summary>
/// <para>This method is called automatically whenever necessary, it should never be used outside of vtkCamera.cxx.  </para>
/// </summary>
  void ComputeViewPlaneNormal();


  // vtkMatrix4x4 *GetCameraLightTransformMatrix ();
/// <summary>
/// <para>Returns a transformation matrix for a coordinate frame attached to the camera, where the camera is located at (0, 0, 1) looking at the focal point at (0, 0, 0), with up being (0, 1, 0).</para>
/// </summary>
  vtkMatrix4x4^ GetCameraLightTransformMatrix();


  // virtual void UpdateViewport (vtkRenderer *);
  void UpdateViewport(vtkRenderer^ arg0);


  // virtual vtkTransform *GetViewTransformObject ();return this ViewTransform 
  vtkTransform^ GetViewTransformObject();


// Did not wrap:  vtkCamera ();


// Did not wrap:  ~vtkCamera ();


// Did not wrap:  void ComputeDistance ();


// Did not wrap:  void ComputeViewTransform ();


// Did not wrap:  void ComputePerspectiveTransform (double aspect, double nearz, double farz);


// Did not wrap:  void ComputeCompositePerspectiveTransform (double aspect, double nearz, double farz);


// Did not wrap:  void ComputeCameraLightTransform ();


// Did not wrap:  vtkCamera (const vtkCamera &);


// Did not wrap:  void vtkCamera 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCamera(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCamera(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCamera();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCamera();


};

} // end vtkRendering
