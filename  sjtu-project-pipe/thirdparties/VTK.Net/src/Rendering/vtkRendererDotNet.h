#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkActorCollection;
ref class vtkCamera;
ref class vtkCuller;
ref class vtkCullerCollection;
ref class vtkLight;
ref class vtkLightCollection;
ref class vtkRenderWindow;
ref class vtkVolumeCollection;

public ref class vtkRenderer : public vtkViewport
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRenderer *NewInstance ();
  vtkRenderer^ NewInstance();


  // vtkRenderer *SafeDownCast (vtkObject* o);
  static vtkRenderer^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkRenderer *New ();


  // void AddActor (vtkProp *p);
/// <summary>
/// <para>Add/Remove different types of props to the renderer. These methods are all synonyms to AddViewProp and RemoveViewProp. They are here for convenience and backwards compatibility.</para>
/// </summary>
  void AddActor(vtkProp^ p);


  // void AddVolume (vtkProp *p);
/// <summary>
/// <para>Add/Remove different types of props to the renderer. These methods are all synonyms to AddViewProp and RemoveViewProp. They are here for convenience and backwards compatibility.</para>
/// </summary>
  void AddVolume(vtkProp^ p);


  // void RemoveActor (vtkProp *p);
/// <summary>
/// <para>Add/Remove different types of props to the renderer. These methods are all synonyms to AddViewProp and RemoveViewProp. They are here for convenience and backwards compatibility.</para>
/// </summary>
  void RemoveActor(vtkProp^ p);


  // void RemoveVolume (vtkProp *p);
/// <summary>
/// <para>Add/Remove different types of props to the renderer. These methods are all synonyms to AddViewProp and RemoveViewProp. They are here for convenience and backwards compatibility.</para>
/// </summary>
  void RemoveVolume(vtkProp^ p);


  // void AddLight (vtkLight *);
/// <summary>
/// <para>Add a light to the list of lights.</para>
/// </summary>
  void AddLight(vtkLight^ arg0);


  // void RemoveLight (vtkLight *);
/// <summary>
/// <para>Remove a light from the list of lights.</para>
/// </summary>
  void RemoveLight(vtkLight^ arg0);


  // vtkLightCollection *GetLights ();
/// <summary>
/// <para>Return the collection of lights.</para>
/// </summary>
  vtkLightCollection^ GetLights();


  // void CreateLight (void );
/// <summary>
/// <para>Create and add a light to renderer.</para>
/// </summary>
  void CreateLight();


  // virtual vtkLight *MakeLight ();
/// <summary>
/// <para>Create a new Light sutible for use with this type of Renderer. For example, a vtkMesaRenderer should create a vtkMesaLight  in this function.   The default is to just call vtkLight::New.</para>
/// </summary>
  vtkLight^ MakeLight();


  // int GetTwoSidedLighting ();
/// <summary>
/// <para>Turn on/off two-sided lighting of surfaces. If two-sided lighting is off, then only the side of the surface facing the light(s) will be lit, and the other side dark. If two-sided lighting on, both sides of the  surface will be lit.</para>
/// </summary>
  int GetTwoSidedLighting();


  // void SetTwoSidedLighting (int );
/// <summary>
/// <para>Turn on/off two-sided lighting of surfaces. If two-sided lighting is off, then only the side of the surface facing the light(s) will be lit, and the other side dark. If two-sided lighting on, both sides of the  surface will be lit.</para>
/// </summary>
  void SetTwoSidedLighting(int arg0);


  // void TwoSidedLightingOn ();
/// <summary>
/// <para>Turn on/off two-sided lighting of surfaces. If two-sided lighting is off, then only the side of the surface facing the light(s) will be lit, and the other side dark. If two-sided lighting on, both sides of the  surface will be lit.</para>
/// </summary>
  void TwoSidedLightingOn();


  // void TwoSidedLightingOff ();
/// <summary>
/// <para>Turn on/off two-sided lighting of surfaces. If two-sided lighting is off, then only the side of the surface facing the light(s) will be lit, and the other side dark. If two-sided lighting on, both sides of the  surface will be lit.</para>
/// </summary>
  void TwoSidedLightingOff();


  // void SetLightFollowCamera (int );
/// <summary>
/// <para>Turn on/off the automatic repositioning of lights as the camera moves. If LightFollowCamera is on, lights that are designated as Headlights or CameraLights will be adjusted to move with this renderer's camera. If LightFollowCamera is off, the lights will not be adjusted.  </para>
/// <para>(Note: In previous versions of vtk, this light-tracking functionality was part of the interactors, not the renderer. For backwards compatibility, the older, more limited interactor behavior is enabled by default. To disable this mode, turn the interactor's LightFollowCamera flag OFF, and leave the renderer's LightFollowCamera flag ON.)</para>
/// </summary>
  void SetLightFollowCamera(int arg0);


  // int GetLightFollowCamera ();
/// <summary>
/// <para>Turn on/off the automatic repositioning of lights as the camera moves. If LightFollowCamera is on, lights that are designated as Headlights or CameraLights will be adjusted to move with this renderer's camera. If LightFollowCamera is off, the lights will not be adjusted.  </para>
/// <para>(Note: In previous versions of vtk, this light-tracking functionality was part of the interactors, not the renderer. For backwards compatibility, the older, more limited interactor behavior is enabled by default. To disable this mode, turn the interactor's LightFollowCamera flag OFF, and leave the renderer's LightFollowCamera flag ON.)</para>
/// </summary>
  int GetLightFollowCamera();


  // void LightFollowCameraOn ();
/// <summary>
/// <para>Turn on/off the automatic repositioning of lights as the camera moves. If LightFollowCamera is on, lights that are designated as Headlights or CameraLights will be adjusted to move with this renderer's camera. If LightFollowCamera is off, the lights will not be adjusted.  </para>
/// <para>(Note: In previous versions of vtk, this light-tracking functionality was part of the interactors, not the renderer. For backwards compatibility, the older, more limited interactor behavior is enabled by default. To disable this mode, turn the interactor's LightFollowCamera flag OFF, and leave the renderer's LightFollowCamera flag ON.)</para>
/// </summary>
  void LightFollowCameraOn();


  // void LightFollowCameraOff ();
/// <summary>
/// <para>Turn on/off the automatic repositioning of lights as the camera moves. If LightFollowCamera is on, lights that are designated as Headlights or CameraLights will be adjusted to move with this renderer's camera. If LightFollowCamera is off, the lights will not be adjusted.  </para>
/// <para>(Note: In previous versions of vtk, this light-tracking functionality was part of the interactors, not the renderer. For backwards compatibility, the older, more limited interactor behavior is enabled by default. To disable this mode, turn the interactor's LightFollowCamera flag OFF, and leave the renderer's LightFollowCamera flag ON.)</para>
/// </summary>
  void LightFollowCameraOff();


  // int GetAutomaticLightCreation ();
/// <summary>
/// <para>Turn on/off a flag which disables the automatic light creation capability. Normally in VTK if no lights are associated with the renderer, then a light is automatically created. However, in special circumstances this feature is undesirable, so the following boolean is provided to disable automatic light creation. (Turn AutomaticLightCreation off if you do not want lights to be created.)</para>
/// </summary>
  int GetAutomaticLightCreation();


  // void SetAutomaticLightCreation (int );
/// <summary>
/// <para>Turn on/off a flag which disables the automatic light creation capability. Normally in VTK if no lights are associated with the renderer, then a light is automatically created. However, in special circumstances this feature is undesirable, so the following boolean is provided to disable automatic light creation. (Turn AutomaticLightCreation off if you do not want lights to be created.)</para>
/// </summary>
  void SetAutomaticLightCreation(int arg0);


  // void AutomaticLightCreationOn ();
/// <summary>
/// <para>Turn on/off a flag which disables the automatic light creation capability. Normally in VTK if no lights are associated with the renderer, then a light is automatically created. However, in special circumstances this feature is undesirable, so the following boolean is provided to disable automatic light creation. (Turn AutomaticLightCreation off if you do not want lights to be created.)</para>
/// </summary>
  void AutomaticLightCreationOn();


  // void AutomaticLightCreationOff ();
/// <summary>
/// <para>Turn on/off a flag which disables the automatic light creation capability. Normally in VTK if no lights are associated with the renderer, then a light is automatically created. However, in special circumstances this feature is undesirable, so the following boolean is provided to disable automatic light creation. (Turn AutomaticLightCreation off if you do not want lights to be created.)</para>
/// </summary>
  void AutomaticLightCreationOff();


  // virtual int UpdateLightsGeometryToFollowCamera (void );
/// <summary>
/// <para>Ask the lights in the scene that are not in world space (for instance, Headlights or CameraLights that are attached to the  camera) to update their geometry to match the active camera.</para>
/// </summary>
  int UpdateLightsGeometryToFollowCamera();


  // vtkVolumeCollection *GetVolumes ();
/// <summary>
/// <para>Return the collection of volumes.</para>
/// </summary>
  vtkVolumeCollection^ GetVolumes();


  // vtkActorCollection *GetActors ();
/// <summary>
/// <para>Return any actors in this renderer.</para>
/// </summary>
  vtkActorCollection^ GetActors();


  // void SetActiveCamera (vtkCamera *);
/// <summary>
/// <para>Specify the camera to use for this renderer.</para>
/// </summary>
  void SetActiveCamera(vtkCamera^ arg0);


  // vtkCamera *GetActiveCamera ();
/// <summary>
/// <para>Get the current camera. If there is not camera assigned to the renderer already, a new one is created automatically. This does *not* reset the camera.</para>
/// </summary>
  vtkCamera^ GetActiveCamera();


  // virtual vtkCamera *MakeCamera ();
/// <summary>
/// <para>Create a new Camera sutible for use with this type of Renderer. For example, a vtkMesaRenderer should create a vtkMesaCamera  in this function.   The default is to just call vtkCamera::New.</para>
/// </summary>
  vtkCamera^ MakeCamera();


  // void SetErase (int );
/// <summary>
/// <para>When this flag is off, the renderer will not erase the background or the Zbuffer.  It is used to have overlapping renderers. Both the RenderWindow Erase and Render Erase must be on for the camera to clear the renderer.  By default, Erase is on.</para>
/// </summary>
  void SetErase(int arg0);


  // int GetErase ();
/// <summary>
/// <para>When this flag is off, the renderer will not erase the background or the Zbuffer.  It is used to have overlapping renderers. Both the RenderWindow Erase and Render Erase must be on for the camera to clear the renderer.  By default, Erase is on.</para>
/// </summary>
  int GetErase();


  // void EraseOn ();
/// <summary>
/// <para>When this flag is off, the renderer will not erase the background or the Zbuffer.  It is used to have overlapping renderers. Both the RenderWindow Erase and Render Erase must be on for the camera to clear the renderer.  By default, Erase is on.</para>
/// </summary>
  void EraseOn();


  // void EraseOff ();
/// <summary>
/// <para>When this flag is off, the renderer will not erase the background or the Zbuffer.  It is used to have overlapping renderers. Both the RenderWindow Erase and Render Erase must be on for the camera to clear the renderer.  By default, Erase is on.</para>
/// </summary>
  void EraseOff();


  // void AddCuller (vtkCuller *);
/// <summary>
/// <para>Add an culler to the list of cullers.</para>
/// </summary>
  void AddCuller(vtkCuller^ arg0);


  // void RemoveCuller (vtkCuller *);
/// <summary>
/// <para>Remove an actor from the list of cullers.</para>
/// </summary>
  void RemoveCuller(vtkCuller^ arg0);


  // vtkCullerCollection *GetCullers ();
/// <summary>
/// <para>Return the collection of cullers.</para>
/// </summary>
  vtkCullerCollection^ GetCullers();


  // void SetAmbient (double , double , double );
/// <summary>
/// <para>Set the intensity of ambient lighting.</para>
/// </summary>
  void SetAmbient(double arg0, double arg1, double arg2);


  // void SetAmbient (double  a[3]);
/// <summary>
/// <para>Set the intensity of ambient lighting.</para>
/// </summary>
  void SetAmbient(array<double>^ a);


  // double  *GetAmbient ();
/// <summary>
/// <para>Set the intensity of ambient lighting.</para>
/// </summary>
  array<double>^ GetAmbient();


  // void SetAllocatedRenderTime (double );
/// <summary>
/// <para>Set/Get the amount of time this renderer is allowed to spend rendering its scene. This is used by vtkLODActor's.</para>
/// </summary>
  void SetAllocatedRenderTime(double arg0);


  // virtual double GetAllocatedRenderTime ();
/// <summary>
/// <para>Set/Get the amount of time this renderer is allowed to spend rendering its scene. This is used by vtkLODActor's.</para>
/// </summary>
  double GetAllocatedRenderTime();


  // virtual double GetTimeFactor ();
/// <summary>
/// <para>Get the ratio between allocated time and actual render time. TimeFactor has been taken out of the render process.   It is still computed in case someone finds it useful. It may be taken away in the future.</para>
/// </summary>
  double GetTimeFactor();


  // virtual void Render ();
/// <summary>
/// <para>Create an image. This is a superclass method which will in turn  call the DeviceRender method of Subclasses of vtkRenderer</para>
/// </summary>
  void Render();


  // virtual void DeviceRender () = 0;
/// <summary>
/// <para>Create an image. Subclasses of vtkRenderer must implement this method.</para>
/// </summary>
  void DeviceRender();


  // virtual void Clear ();
/// <summary>
/// <para>Clear the image to the background color.</para>
/// </summary>
  void Clear();


  // int VisibleActorCount ();
/// <summary>
/// <para>Returns the number of visible actors.</para>
/// </summary>
  int VisibleActorCount();


  // int VisibleVolumeCount ();
/// <summary>
/// <para>Returns the number of visible volumes.</para>
/// </summary>
  int VisibleVolumeCount();


  // void ComputeVisiblePropBounds (double bounds[6]);
/// <summary>
/// <para>Compute the bounding box of all the visible props Used in ResetCamera() and ResetCameraClippingRange() </para>
/// </summary>
  void ComputeVisiblePropBounds(array<double>^ bounds);


  // double *ComputeVisiblePropBounds ();
/// <summary>
/// <para>Wrapper-friendly version of ComputeVisiblePropBounds </para>
/// </summary>
  array<double>^ ComputeVisiblePropBounds();


  // void ResetCameraClippingRange ();
/// <summary>
/// <para>Reset the camera clipping range based on the bounds of the visible actors. This ensures that no props are cut off</para>
/// </summary>
  void ResetCameraClippingRange();


  // void ResetCameraClippingRange (double bounds[6]);
/// <summary>
/// <para>Reset the camera clipping range based on a bounding box. This method is called from ResetCameraClippingRange()</para>
/// </summary>
  void ResetCameraClippingRange(array<double>^ bounds);


  // void ResetCameraClippingRange (double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);
/// <summary>
/// <para>Reset the camera clipping range based on a bounding box. This method is called from ResetCameraClippingRange()</para>
/// </summary>
  void ResetCameraClippingRange(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);


  // void SetNearClippingPlaneTolerance (double );
/// <summary>
/// <para>Specify tolerance for near clipping plane distance to the camera as a percentage of the far clipping plane distance. By default this will be set to 0.01 for 16 bit zbuffers and 0.001 for higher depth z buffers</para>
/// </summary>
  void SetNearClippingPlaneTolerance(double arg0);


  // double GetNearClippingPlaneToleranceMinValue ();
/// <summary>
/// <para>Specify tolerance for near clipping plane distance to the camera as a percentage of the far clipping plane distance. By default this will be set to 0.01 for 16 bit zbuffers and 0.001 for higher depth z buffers</para>
/// </summary>
  double GetNearClippingPlaneToleranceMinValue();


  // double GetNearClippingPlaneToleranceMaxValue ();
/// <summary>
/// <para>Specify tolerance for near clipping plane distance to the camera as a percentage of the far clipping plane distance. By default this will be set to 0.01 for 16 bit zbuffers and 0.001 for higher depth z buffers</para>
/// </summary>
  double GetNearClippingPlaneToleranceMaxValue();


  // double GetNearClippingPlaneTolerance ();
/// <summary>
/// <para>Specify tolerance for near clipping plane distance to the camera as a percentage of the far clipping plane distance. By default this will be set to 0.01 for 16 bit zbuffers and 0.001 for higher depth z buffers</para>
/// </summary>
  double GetNearClippingPlaneTolerance();


  // void ResetCamera ();
/// <summary>
/// <para>Automatically set up the camera based on the visible actors. The camera will reposition itself to view the center point of the actors, and move along its initial view plane normal (i.e., vector defined from  camera position to focal point) so that all of the actors can be seen.</para>
/// </summary>
  void ResetCamera();


  // void ResetCamera (double bounds[6]);
/// <summary>
/// <para>Automatically set up the camera based on a specified bounding box (xmin,xmax, ymin,ymax, zmin,zmax). Camera will reposition itself so that its focal point is the center of the bounding box, and adjust its distance and position to preserve its initial view plane normal  (i.e., vector defined from camera position to focal point). Note: is  the view plane is parallel to the view up axis, the view up axis will be reset to one of the three coordinate axes.</para>
/// </summary>
  void ResetCamera(array<double>^ bounds);


  // void ResetCamera (double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);
/// <summary>
/// <para>Alternative version of ResetCamera(bounds[6]);</para>
/// </summary>
  void ResetCamera(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);


  // void SetRenderWindow (vtkRenderWindow *);
/// <summary>
/// <para>Specify the rendering window in which to draw. This is automatically set when the renderer is created by MakeRenderer.  The user probably shouldn't ever need to call this method.</para>
/// </summary>
  void SetRenderWindow(vtkRenderWindow^ arg0);


  // vtkRenderWindow *GetRenderWindow ();return this RenderWindow 
/// <summary>
/// <para>Specify the rendering window in which to draw. This is automatically set when the renderer is created by MakeRenderer.  The user probably shouldn't ever need to call this method.</para>
/// </summary>
  vtkRenderWindow^ GetRenderWindow();


  // virtual vtkWindow *GetVTKWindow ();
/// <summary>
/// <para>Specify the rendering window in which to draw. This is automatically set when the renderer is created by MakeRenderer.  The user probably shouldn't ever need to call this method.</para>
/// </summary>
  vtkWindow^ GetVTKWindow();


  // void SetBackingStore (int );
/// <summary>
/// <para>Turn on/off using backing store. This may cause the re-rendering time to be slightly slower when the view changes. But it is much faster when the image has not changed, such as during an expose event.</para>
/// </summary>
  void SetBackingStore(int arg0);


  // int GetBackingStore ();
/// <summary>
/// <para>Turn on/off using backing store. This may cause the re-rendering time to be slightly slower when the view changes. But it is much faster when the image has not changed, such as during an expose event.</para>
/// </summary>
  int GetBackingStore();


  // void BackingStoreOn ();
/// <summary>
/// <para>Turn on/off using backing store. This may cause the re-rendering time to be slightly slower when the view changes. But it is much faster when the image has not changed, such as during an expose event.</para>
/// </summary>
  void BackingStoreOn();


  // void BackingStoreOff ();
/// <summary>
/// <para>Turn on/off using backing store. This may cause the re-rendering time to be slightly slower when the view changes. But it is much faster when the image has not changed, such as during an expose event.</para>
/// </summary>
  void BackingStoreOff();


  // void SetInteractive (int );
/// <summary>
/// <para>Turn on/off interactive status.  An interactive renderer is one that  can receive events from an interactor.  Should only be set if there are multiple renderers in the same section of the viewport.</para>
/// </summary>
  void SetInteractive(int arg0);


  // int GetInteractive ();
/// <summary>
/// <para>Turn on/off interactive status.  An interactive renderer is one that  can receive events from an interactor.  Should only be set if there are multiple renderers in the same section of the viewport.</para>
/// </summary>
  int GetInteractive();


  // void InteractiveOn ();
/// <summary>
/// <para>Turn on/off interactive status.  An interactive renderer is one that  can receive events from an interactor.  Should only be set if there are multiple renderers in the same section of the viewport.</para>
/// </summary>
  void InteractiveOn();


  // void InteractiveOff ();
/// <summary>
/// <para>Turn on/off interactive status.  An interactive renderer is one that  can receive events from an interactor.  Should only be set if there are multiple renderers in the same section of the viewport.</para>
/// </summary>
  void InteractiveOff();


  // void SetLayer (int );
/// <summary>
/// <para>Set/Get the layer that this renderer belongs to.  This is only used if there are layered renderers.</para>
/// </summary>
  void SetLayer(int arg0);


  // int GetLayer ();
/// <summary>
/// <para>Set/Get the layer that this renderer belongs to.  This is only used if there are layered renderers.</para>
/// </summary>
  int GetLayer();


  // int Transparent ();
/// <summary>
/// <para>Returns a boolean indicating if this renderer is transparent.  It is transparent if it is not in the deepest layer of its render window.</para>
/// </summary>
  int Transparent();


  // void WorldToView ();
/// <summary>
/// <para>Convert world point coordinates to view coordinates.</para>
/// </summary>
  void WorldToView();


  // void ViewToWorld ();
/// <summary>
/// <para>Convert view point coordinates to world coordinates.</para>
/// </summary>
  void ViewToWorld();


  // virtual void ViewToWorld (double &wx, double &wy, double &wz);
/// <summary>
/// <para>Convert view point coordinates to world coordinates.</para>
/// </summary>
  void ViewToWorld(double% wx, double% wy, double% wz);


  // virtual void WorldToView (double &wx, double &wy, double &wz);
/// <summary>
/// <para>Convert world point coordinates to view coordinates.</para>
/// </summary>
  void WorldToView(double% wx, double% wy, double% wz);


  // double GetZ (int x, int y);
/// <summary>
/// <para>Given a pixel location, return the Z value. The z value is normalized (0,1) between the front and back clipping planes.</para>
/// </summary>
  double GetZ(int x, int y);


  // unsigned long GetMTime ();
/// <summary>
/// <para>Return the MTime of the renderer also considering its ivars.</para>
/// </summary>
  unsigned long GetMTime();


  // double GetLastRenderTimeInSeconds ();
/// <summary>
/// <para>Get the time required, in seconds, for the last Render call.</para>
/// </summary>
  double GetLastRenderTimeInSeconds();


  // int GetNumberOfPropsRendered ();
/// <summary>
/// <para>Should be used internally only during a render Get the number of props that were rendered using a RenderOpaqueGeometry or RenderTranslucentGeometry call. This is used to know if something is in the frame buffer.</para>
/// </summary>
  int GetNumberOfPropsRendered();


  // vtkAssemblyPath *PickProp (double selectionX, double selectionY);
/// <summary>
/// <para>Return the prop (via a vtkAssemblyPath) that has the highest z value  at the given x, y position in the viewport.  Basically, the top most  prop that renders the pixel at selectionX, selectionY will be returned. If nothing was picked then NULL is returned.  This method selects from  the renderers Prop list.</para>
/// </summary>
  vtkAssemblyPath^ PickProp(double selectionX, double selectionY);


  // virtual void StereoMidpoint ();return 
/// <summary>
/// <para>Do anything necessary between rendering the left and right viewpoints in a stereo render. Doesn't do anything except in the derived vtkIceTRenderer in ParaView.</para>
/// </summary>
  void StereoMidpoint();


  // double GetTiledAspectRatio ();
/// <summary>
/// <para>Compute the aspect ratio of this renderer for the current tile. When tiled displays are used the aspect ratio of the renderer for a given tile may be diferent that the aspect ratio of the renderer when rendered in it entirity</para>
/// </summary>
  double GetTiledAspectRatio();


// Did not wrap:  vtkRenderer ();


// Did not wrap:  ~vtkRenderer ();


// Did not wrap:  virtual void PickRender (vtkPropCollection *props);


// Did not wrap:  virtual void PickGeometry ();


// Did not wrap:  void AllocateTime ();


// Did not wrap:  virtual int UpdateGeometry (void );


// Did not wrap:  virtual int UpdateCamera (void );


// Did not wrap:  virtual int UpdateLightGeometry (void );


// Did not wrap:  virtual int UpdateLights (void );return 


// Did not wrap:  vtkCamera *GetActiveCameraAndEventuallyReset ();


// Did not wrap:  vtkRenderer (const vtkRenderer &);


// Did not wrap:  void vtkRenderer 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRenderer(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRenderer(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRenderer();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRenderer();


};

} // end vtkRendering
