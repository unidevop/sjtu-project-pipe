#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkAbstractPicker;
ref class vtkAbstractPropPicker;
ref class vtkInteractorObserver;
ref class vtkRenderWindow;
ref class vtkRenderer;

public ref class vtkRenderWindowInteractor : public vtkObject
{

public:
// Did not wrap:  static vtkRenderWindowInteractor *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRenderWindowInteractor *NewInstance ();
  vtkRenderWindowInteractor^ NewInstance();


  // vtkRenderWindowInteractor *SafeDownCast (vtkObject* o);
  static vtkRenderWindowInteractor^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void Initialize ();
/// <summary>
/// <para>Prepare for handling events. This must be called before the interactor will work.</para>
/// </summary>
  void Initialize();


  // void ReInitialize ();this Initialized this Enabled this Initialize 
/// <summary>
/// <para>This Method detects loops of RenderWindow-Interactor, so objects are freed properly.</para>
/// </summary>
  void ReInitialize();


  // virtual void UnRegister (vtkObjectBase *o);
/// <summary>
/// <para>This Method detects loops of RenderWindow-Interactor, so objects are freed properly.</para>
/// </summary>
  void UnRegister(vtkObjectBase^ o);


  // virtual void Start ();
/// <summary>
/// <para>Start the event loop. This is provided so that you do not have to implement your own event loop. You still can use your own event loop if you want. Initialize should be called before Start.</para>
/// </summary>
  void Start();


  // virtual void Enable ();this Enabled this Modified 
/// <summary>
/// <para>Enable/Disable interactions.  By default interactors are enabled when initialized.  Initialize() must be called prior to enabling/disabling interaction. These methods are used when a window/widget is being shared by multiple renderers and interactors.  This allows a &quot;modal&quot; display where one interactor is active when its data is to be displayed and all other interactors associated with the widget are disabled when their data is not displayed.</para>
/// </summary>
  void Enable();


  // virtual void Disable ();this Enabled this Modified 
/// <summary>
/// <para>Enable/Disable interactions.  By default interactors are enabled when initialized.  Initialize() must be called prior to enabling/disabling interaction. These methods are used when a window/widget is being shared by multiple renderers and interactors.  This allows a &quot;modal&quot; display where one interactor is active when its data is to be displayed and all other interactors associated with the widget are disabled when their data is not displayed.</para>
/// </summary>
  void Disable();


  // int GetEnabled ();
/// <summary>
/// <para>Enable/Disable interactions.  By default interactors are enabled when initialized.  Initialize() must be called prior to enabling/disabling interaction. These methods are used when a window/widget is being shared by multiple renderers and interactors.  This allows a &quot;modal&quot; display where one interactor is active when its data is to be displayed and all other interactors associated with the widget are disabled when their data is not displayed.</para>
/// </summary>
  int GetEnabled();


  // void SetRenderWindow (vtkRenderWindow *aren);
/// <summary>
/// <para>Set/Get the rendering window being controlled by this object.</para>
/// </summary>
  void SetRenderWindow(vtkRenderWindow^ aren);


  // vtkRenderWindow *GetRenderWindow ();
/// <summary>
/// <para>Set/Get the rendering window being controlled by this object.</para>
/// </summary>
  vtkRenderWindow^ GetRenderWindow();


  // virtual void UpdateSize (int x, int y);
/// <summary>
/// <para>Event loop notification member for Window size change</para>
/// </summary>
  void UpdateSize(int x, int y);


  // virtual int CreateTimer (int );return 
/// <summary>
/// <para>Timer methods must be overridden by platform dependent subclasses. flag is passed to indicate if this is first timer set or an update as Win32 uses repeating timers, whereas X uses One shot more timer if flag==VTKXI_TIMER_FIRST Win32 and X should createtimer otherwise Win32 should exit and X should perform AddTimeOut()</para>
/// </summary>
  int CreateTimer(int arg0);


  // virtual int DestroyTimer ();return 
/// <summary>
/// <para>Timer methods must be overridden by platform dependent subclasses. flag is passed to indicate if this is first timer set or an update as Win32 uses repeating timers, whereas X uses One shot more timer if flag==VTKXI_TIMER_FIRST Win32 and X should createtimer otherwise Win32 should exit and X should perform AddTimeOut()</para>
/// </summary>
  int DestroyTimer();


  // virtual void TerminateApp (void );
/// <summary>
/// <para>This function is called on 'q','e' keypress if exitmethod is not specified and should be overridden by platform dependent subclasses to provide a termination procedure if one is required.</para>
/// </summary>
  void TerminateApp();


  // virtual void SetInteractorStyle (vtkInteractorObserver *);
/// <summary>
/// <para>External switching between joystick/trackball/new? modes.</para>
/// </summary>
  void SetInteractorStyle(vtkInteractorObserver^ arg0);


  // vtkInteractorObserver *GetInteractorStyle ();
/// <summary>
/// <para>External switching between joystick/trackball/new? modes.</para>
/// </summary>
  vtkInteractorObserver^ GetInteractorStyle();


  // void SetLightFollowCamera (int );
/// <summary>
/// <para>Turn on/off the automatic repositioning of lights as the camera moves.</para>
/// </summary>
  void SetLightFollowCamera(int arg0);


  // int GetLightFollowCamera ();
/// <summary>
/// <para>Turn on/off the automatic repositioning of lights as the camera moves.</para>
/// </summary>
  int GetLightFollowCamera();


  // void LightFollowCameraOn ();
/// <summary>
/// <para>Turn on/off the automatic repositioning of lights as the camera moves.</para>
/// </summary>
  void LightFollowCameraOn();


  // void LightFollowCameraOff ();
/// <summary>
/// <para>Turn on/off the automatic repositioning of lights as the camera moves.</para>
/// </summary>
  void LightFollowCameraOff();


  // void SetDesiredUpdateRate (double );
/// <summary>
/// <para>Set/Get the desired update rate. This is used by vtkLODActor's to tell them how quickly they need to render.  This update is in effect only when the camera is being rotated, or zoomed.  When the interactor is still, the StillUpdateRate is used instead.</para>
/// </summary>
  void SetDesiredUpdateRate(double arg0);


  // double GetDesiredUpdateRateMinValue ();
/// <summary>
/// <para>Set/Get the desired update rate. This is used by vtkLODActor's to tell them how quickly they need to render.  This update is in effect only when the camera is being rotated, or zoomed.  When the interactor is still, the StillUpdateRate is used instead.</para>
/// </summary>
  double GetDesiredUpdateRateMinValue();


  // double GetDesiredUpdateRateMaxValue ();
/// <summary>
/// <para>Set/Get the desired update rate. This is used by vtkLODActor's to tell them how quickly they need to render.  This update is in effect only when the camera is being rotated, or zoomed.  When the interactor is still, the StillUpdateRate is used instead.</para>
/// </summary>
  double GetDesiredUpdateRateMaxValue();


  // double GetDesiredUpdateRate ();
/// <summary>
/// <para>Set/Get the desired update rate. This is used by vtkLODActor's to tell them how quickly they need to render.  This update is in effect only when the camera is being rotated, or zoomed.  When the interactor is still, the StillUpdateRate is used instead.</para>
/// </summary>
  double GetDesiredUpdateRate();


  // void SetStillUpdateRate (double );
/// <summary>
/// <para>Set/Get the desired update rate when movement has stopped. See the SetDesiredUpdateRate method.</para>
/// </summary>
  void SetStillUpdateRate(double arg0);


  // double GetStillUpdateRateMinValue ();
/// <summary>
/// <para>Set/Get the desired update rate when movement has stopped. See the SetDesiredUpdateRate method.</para>
/// </summary>
  double GetStillUpdateRateMinValue();


  // double GetStillUpdateRateMaxValue ();
/// <summary>
/// <para>Set/Get the desired update rate when movement has stopped. See the SetDesiredUpdateRate method.</para>
/// </summary>
  double GetStillUpdateRateMaxValue();


  // double GetStillUpdateRate ();
/// <summary>
/// <para>Set/Get the desired update rate when movement has stopped. See the SetDesiredUpdateRate method.</para>
/// </summary>
  double GetStillUpdateRate();


  // int GetInitialized ();
/// <summary>
/// <para>See whether interactor has been initialized yet.</para>
/// </summary>
  int GetInitialized();


  // virtual void SetPicker (vtkAbstractPicker *);
/// <summary>
/// <para>Set/Get the object used to perform pick operations. In order to pick instances of vtkProp, the picker must be a subclass of  vtkAbstractPropPicker, meaning that it can identify a particular  instance of vtkProp.</para>
/// </summary>
  void SetPicker(vtkAbstractPicker^ arg0);


  // vtkAbstractPicker *GetPicker ();
/// <summary>
/// <para>Set/Get the object used to perform pick operations. In order to pick instances of vtkProp, the picker must be a subclass of  vtkAbstractPropPicker, meaning that it can identify a particular  instance of vtkProp.</para>
/// </summary>
  vtkAbstractPicker^ GetPicker();


  // virtual vtkAbstractPropPicker *CreateDefaultPicker ();
/// <summary>
/// <para>Create default picker. Used to create one when none is specified. Default is an instance of vtkPropPicker.</para>
/// </summary>
  vtkAbstractPropPicker^ CreateDefaultPicker();


  // virtual void ExitCallback ();
/// <summary>
/// <para>These methods correspond to the the Exit, User and Pick callbacks. They allow for the Style to invoke them.</para>
/// </summary>
  void ExitCallback();


  // virtual void UserCallback ();
/// <summary>
/// <para>These methods correspond to the the Exit, User and Pick callbacks. They allow for the Style to invoke them.</para>
/// </summary>
  void UserCallback();


  // virtual void StartPickCallback ();
/// <summary>
/// <para>These methods correspond to the the Exit, User and Pick callbacks. They allow for the Style to invoke them.</para>
/// </summary>
  void StartPickCallback();


  // virtual void EndPickCallback ();
/// <summary>
/// <para>These methods correspond to the the Exit, User and Pick callbacks. They allow for the Style to invoke them.</para>
/// </summary>
  void EndPickCallback();


  // virtual void GetMousePosition (int *x, int *y);x y 
/// <summary>
/// <para>Hide or show the mouse cursor, it is nice to be able to hide the default cursor if you want VTK to display a 3D cursor instead.</para>
/// </summary>
  void GetMousePosition(array<int>^ x, array<int>^ y);


  // void HideCursor ();
/// <summary>
/// <para>Hide or show the mouse cursor, it is nice to be able to hide the default cursor if you want VTK to display a 3D cursor instead.</para>
/// </summary>
  void HideCursor();


  // void ShowCursor ();
/// <summary>
/// <para>Hide or show the mouse cursor, it is nice to be able to hide the default cursor if you want VTK to display a 3D cursor instead.</para>
/// </summary>
  void ShowCursor();


  // virtual void Render ();
/// <summary>
/// <para>Render the scene. Just pass the render call on to the  associated vtkRenderWindow.</para>
/// </summary>
  void Render();


  // void FlyTo (vtkRenderer *ren, double x, double y, double z);
/// <summary>
/// <para>Given a position x, move the current camera's focal point to x. The movement is animated over the number of frames specified in NumberOfFlyFrames. The LOD desired frame rate is used.</para>
/// </summary>
  void FlyTo(vtkRenderer^ ren, double x, double y, double z);


  // void FlyTo (vtkRenderer *ren, double *x);this FlyTo ren x x x 
/// <summary>
/// <para>Given a position x, move the current camera's focal point to x. The movement is animated over the number of frames specified in NumberOfFlyFrames. The LOD desired frame rate is used.</para>
/// </summary>
  void FlyTo(vtkRenderer^ ren, array<double>^ x);


  // void FlyToImage (vtkRenderer *ren, double x, double y);
/// <summary>
/// <para>Given a position x, move the current camera's focal point to x. The movement is animated over the number of frames specified in NumberOfFlyFrames. The LOD desired frame rate is used.</para>
/// </summary>
  void FlyToImage(vtkRenderer^ ren, double x, double y);


  // void FlyToImage (vtkRenderer *ren, double *x);this FlyToImage ren x x 
/// <summary>
/// <para>Set the number of frames to fly to when FlyTo is invoked.</para>
/// </summary>
  void FlyToImage(vtkRenderer^ ren, array<double>^ x);


  // void SetNumberOfFlyFrames (int );
/// <summary>
/// <para>Set the number of frames to fly to when FlyTo is invoked.</para>
/// </summary>
  void SetNumberOfFlyFrames(int arg0);


  // int GetNumberOfFlyFramesMinValue ();
/// <summary>
/// <para>Set the number of frames to fly to when FlyTo is invoked.</para>
/// </summary>
  int GetNumberOfFlyFramesMinValue();


  // int GetNumberOfFlyFramesMaxValue ();
/// <summary>
/// <para>Set the number of frames to fly to when FlyTo is invoked.</para>
/// </summary>
  int GetNumberOfFlyFramesMaxValue();


  // int GetNumberOfFlyFrames ();
/// <summary>
/// <para>Set the number of frames to fly to when FlyTo is invoked.</para>
/// </summary>
  int GetNumberOfFlyFrames();


  // void SetDolly (double );
/// <summary>
/// <para>Set the total Dolly value to use when flying to (FlyTo()) a specified point. Negative values fly away from the point.</para>
/// </summary>
  void SetDolly(double arg0);


  // double GetDolly ();
/// <summary>
/// <para>Set the total Dolly value to use when flying to (FlyTo()) a specified point. Negative values fly away from the point.</para>
/// </summary>
  double GetDolly();


  // int  *GetEventPosition ();
/// <summary>
/// <para>Set/Get information about the current event.  The current x,y position is in the EventPosition, and the previous event position is in LastEventPosition, updated automatically each time EventPosition is set using its Set() method.  The other information is about key board input.</para>
/// </summary>
  array<int>^ GetEventPosition();


  // int  *GetLastEventPosition ();
/// <summary>
/// <para>Set/Get information about the current event.  The current x,y position is in the EventPosition, and the previous event position is in LastEventPosition, updated automatically each time EventPosition is set using its Set() method.  The other information is about key board input.</para>
/// </summary>
  array<int>^ GetLastEventPosition();


  // void SetLastEventPosition (int , int );
/// <summary>
/// <para>Set/Get information about the current event.  The current x,y position is in the EventPosition, and the previous event position is in LastEventPosition, updated automatically each time EventPosition is set using its Set() method.  The other information is about key board input.</para>
/// </summary>
  void SetLastEventPosition(int arg0, int arg1);


  // void SetLastEventPosition (int  a[2]);
/// <summary>
/// <para>Set/Get information about the current event.  The current x,y position is in the EventPosition, and the previous event position is in LastEventPosition, updated automatically each time EventPosition is set using its Set() method.  The other information is about key board input.</para>
/// </summary>
  void SetLastEventPosition(array<int>^ a);


  // virtual void SetEventPosition (int x, int y);vtkDebugMacro this GetClassName this x y if this EventPosition x this EventPosition y this LastEventPosition this EventPosition this LastEventPosition this EventPosition this EventPosition x this EventPosition y this Modified 
/// <summary>
/// <para>Set/Get information about the current event.  The current x,y position is in the EventPosition, and the previous event position is in LastEventPosition, updated automatically each time EventPosition is set using its Set() method.  The other information is about key board input.</para>
/// </summary>
  void SetEventPosition(int x, int y);


  // virtual void SetEventPosition (int pos[2]);this SetEventPosition pos pos 
/// <summary>
/// <para>Set/Get information about the current event.  The current x,y position is in the EventPosition, and the previous event position is in LastEventPosition, updated automatically each time EventPosition is set using its Set() method.  The other information is about key board input.</para>
/// </summary>
  void SetEventPosition(array<int>^ pos);


  // virtual void SetEventPositionFlipY (int x, int y);this SetEventPosition x this Size y 
/// <summary>
/// <para>Set/Get information about the current event.  The current x,y position is in the EventPosition, and the previous event position is in LastEventPosition, updated automatically each time EventPosition is set using its Set() method.  The other information is about key board input.</para>
/// </summary>
  void SetEventPositionFlipY(int x, int y);


  // virtual void SetEventPositionFlipY (int pos[2]);this SetEventPositionFlipY pos pos 
/// <summary>
/// <para>Set/Get information about the current event.  The current x,y position is in the EventPosition, and the previous event position is in LastEventPosition, updated automatically each time EventPosition is set using its Set() method.  The other information is about key board input.</para>
/// </summary>
  void SetEventPositionFlipY(array<int>^ pos);


  // void SetControlKey (int );
/// <summary>
/// <para>Set/Get information about the current event.  The current x,y position is in the EventPosition, and the previous event position is in LastEventPosition, updated automatically each time EventPosition is set using its Set() method.  The other information is about key board input.</para>
/// </summary>
  void SetControlKey(int arg0);


  // int GetControlKey ();
/// <summary>
/// <para>Set/Get information about the current event.  The current x,y position is in the EventPosition, and the previous event position is in LastEventPosition, updated automatically each time EventPosition is set using its Set() method.  The other information is about key board input.</para>
/// </summary>
  int GetControlKey();


  // void SetShiftKey (int );
/// <summary>
/// <para>Set/Get information about the current event.  The current x,y position is in the EventPosition, and the previous event position is in LastEventPosition, updated automatically each time EventPosition is set using its Set() method.  The other information is about key board input.</para>
/// </summary>
  void SetShiftKey(int arg0);


  // int GetShiftKey ();
/// <summary>
/// <para>Set/Get information about the current event.  The current x,y position is in the EventPosition, and the previous event position is in LastEventPosition, updated automatically each time EventPosition is set using its Set() method.  The other information is about key board input.</para>
/// </summary>
  int GetShiftKey();


  // void SetKeyCode (char );
/// <summary>
/// <para>Set/Get information about the current event.  The current x,y position is in the EventPosition, and the previous event position is in LastEventPosition, updated automatically each time EventPosition is set using its Set() method.  The other information is about key board input.</para>
/// </summary>
  void SetKeyCode(char arg0);


  // char GetKeyCode ();
/// <summary>
/// <para>Set/Get information about the current event.  The current x,y position is in the EventPosition, and the previous event position is in LastEventPosition, updated automatically each time EventPosition is set using its Set() method.  The other information is about key board input.</para>
/// </summary>
  char GetKeyCode();


  // void SetRepeatCount (int );
/// <summary>
/// <para>Set/Get information about the current event.  The current x,y position is in the EventPosition, and the previous event position is in LastEventPosition, updated automatically each time EventPosition is set using its Set() method.  The other information is about key board input.</para>
/// </summary>
  void SetRepeatCount(int arg0);


  // int GetRepeatCount ();
/// <summary>
/// <para>Set/Get information about the current event.  The current x,y position is in the EventPosition, and the previous event position is in LastEventPosition, updated automatically each time EventPosition is set using its Set() method.  The other information is about key board input.</para>
/// </summary>
  int GetRepeatCount();


  // void SetKeySym (char *);
/// <summary>
/// <para>Set/Get information about the current event.  The current x,y position is in the EventPosition, and the previous event position is in LastEventPosition, updated automatically each time EventPosition is set using its Set() method.  The other information is about key board input.</para>
/// </summary>
  void SetKeySym(System::String^ arg0);


  // char *GetKeySym ();
/// <summary>
/// <para>Set/Get information about the current event.  The current x,y position is in the EventPosition, and the previous event position is in LastEventPosition, updated automatically each time EventPosition is set using its Set() method.  The other information is about key board input.</para>
/// </summary>
  System::String^ GetKeySym();


  // void SetEventInformation (int x, int y, int ctrl, int shift, char keycode, int repeatcount, const char *keysym);this LastEventPosition this EventPosition this LastEventPosition this EventPosition this EventPosition x this EventPosition y this ControlKey ctrl this ShiftKey shift this KeyCode keycode this RepeatCount repeatcount if keysym this SetKeySym keysym this Modified 
/// <summary>
/// <para>Calls SetEventInformation, but flips the Y based on the current Size[1]  value (i.e. y = this-&gt;Size[1] - y - 1).</para>
/// </summary>
  void SetEventInformation(int x, int y, int ctrl, int shift, char keycode, int repeatcount, System::String^ keysym);


  // void SetEventInformationFlipY (int x, int y, int ctrl, int shift, char keycode, int repeatcount, const char *keysym);this SetEventInformation x this Size y ctrl shift keycode repeatcount keysym 
/// <summary>
/// <para>Set all the keyboard-related event information in one call.</para>
/// </summary>
  void SetEventInformationFlipY(int x, int y, int ctrl, int shift, char keycode, int repeatcount, System::String^ keysym);


  // void SetKeyEventInformation (int ctrl, int shift, char keycode, int repeatcount, const char *keysym);this ControlKey ctrl this ShiftKey shift this KeyCode keycode this RepeatCount repeatcount if keysym this SetKeySym keysym this Modified 
/// <summary>
/// <para>This methods sets the Size ivar of the interactor without actually changing the size of the window. Normally application programmers would use UpdateSize if anything. This is useful for letting someone else change the size of the rendering window and just letting the interactor know about the change. The current event width/height (if any) is in EventSize  (Expose event, for example).</para>
/// </summary>
  void SetKeyEventInformation(int ctrl, int shift, char keycode, int repeatcount, System::String^ keysym);


  // void SetSize (int , int );
/// <summary>
/// <para>This methods sets the Size ivar of the interactor without actually changing the size of the window. Normally application programmers would use UpdateSize if anything. This is useful for letting someone else change the size of the rendering window and just letting the interactor know about the change. The current event width/height (if any) is in EventSize  (Expose event, for example).</para>
/// </summary>
  void SetSize(int arg0, int arg1);


  // void SetSize (int  a[2]);
/// <summary>
/// <para>This methods sets the Size ivar of the interactor without actually changing the size of the window. Normally application programmers would use UpdateSize if anything. This is useful for letting someone else change the size of the rendering window and just letting the interactor know about the change. The current event width/height (if any) is in EventSize  (Expose event, for example).</para>
/// </summary>
  void SetSize(array<int>^ a);


  // int  *GetSize ();
/// <summary>
/// <para>This methods sets the Size ivar of the interactor without actually changing the size of the window. Normally application programmers would use UpdateSize if anything. This is useful for letting someone else change the size of the rendering window and just letting the interactor know about the change. The current event width/height (if any) is in EventSize  (Expose event, for example).</para>
/// </summary>
  array<int>^ GetSize();


  // void SetEventSize (int , int );
/// <summary>
/// <para>This methods sets the Size ivar of the interactor without actually changing the size of the window. Normally application programmers would use UpdateSize if anything. This is useful for letting someone else change the size of the rendering window and just letting the interactor know about the change. The current event width/height (if any) is in EventSize  (Expose event, for example).</para>
/// </summary>
  void SetEventSize(int arg0, int arg1);


  // void SetEventSize (int  a[2]);
/// <summary>
/// <para>This methods sets the Size ivar of the interactor without actually changing the size of the window. Normally application programmers would use UpdateSize if anything. This is useful for letting someone else change the size of the rendering window and just letting the interactor know about the change. The current event width/height (if any) is in EventSize  (Expose event, for example).</para>
/// </summary>
  void SetEventSize(array<int>^ a);


  // int  *GetEventSize ();
/// <summary>
/// <para>This methods sets the Size ivar of the interactor without actually changing the size of the window. Normally application programmers would use UpdateSize if anything. This is useful for letting someone else change the size of the rendering window and just letting the interactor know about the change. The current event width/height (if any) is in EventSize  (Expose event, for example).</para>
/// </summary>
  array<int>^ GetEventSize();


  // virtual vtkRenderer *FindPokedRenderer (int , int );
/// <summary>
/// <para>When an event occurs, we must determine which Renderer the event occurred within, since one RenderWindow may contain multiple renderers.</para>
/// </summary>
  vtkRenderer^ FindPokedRenderer(int arg0, int arg1);


// Did not wrap:  vtkRenderWindowInteractor ();


// Did not wrap:  ~vtkRenderWindowInteractor ();


// Did not wrap:  vtkRenderWindowInteractor (const vtkRenderWindowInteractor &);


// Did not wrap:  void vtkRenderWindowInteractor 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRenderWindowInteractor(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRenderWindowInteractor(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRenderWindowInteractor();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRenderWindowInteractor();


};

} // end vtkRendering
