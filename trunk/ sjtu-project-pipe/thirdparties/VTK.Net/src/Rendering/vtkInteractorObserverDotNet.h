#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkRenderWindowInteractor;
ref class vtkRenderer;

public ref class vtkInteractorObserver : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkInteractorObserver *NewInstance ();
  vtkInteractorObserver^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetEnabled (int );
/// <summary>
/// <para>Methods for turning the interactor observer on and off, and determining its state. All subclasses must provide the SetEnabled() method. Enabling a vtkInteractorObserver has the side effect of adding observers; disabling it removes the observers. Prior to enabling the vtkInteractorObserver you must set the render window interactor (via SetInteractor()).</para>
/// </summary>
  void SetEnabled(int arg0);


  // int GetEnabled ();return this Enabled 
/// <summary>
/// <para>Methods for turning the interactor observer on and off, and determining its state. All subclasses must provide the SetEnabled() method. Enabling a vtkInteractorObserver has the side effect of adding observers; disabling it removes the observers. Prior to enabling the vtkInteractorObserver you must set the render window interactor (via SetInteractor()).</para>
/// </summary>
  int GetEnabled();


  // void EnabledOn ();this SetEnabled 
/// <summary>
/// <para>Methods for turning the interactor observer on and off, and determining its state. All subclasses must provide the SetEnabled() method. Enabling a vtkInteractorObserver has the side effect of adding observers; disabling it removes the observers. Prior to enabling the vtkInteractorObserver you must set the render window interactor (via SetInteractor()).</para>
/// </summary>
  void EnabledOn();


  // void EnabledOff ();this SetEnabled 
/// <summary>
/// <para>Methods for turning the interactor observer on and off, and determining its state. All subclasses must provide the SetEnabled() method. Enabling a vtkInteractorObserver has the side effect of adding observers; disabling it removes the observers. Prior to enabling the vtkInteractorObserver you must set the render window interactor (via SetInteractor()).</para>
/// </summary>
  void EnabledOff();


  // void On ();this SetEnabled 
/// <summary>
/// <para>Methods for turning the interactor observer on and off, and determining its state. All subclasses must provide the SetEnabled() method. Enabling a vtkInteractorObserver has the side effect of adding observers; disabling it removes the observers. Prior to enabling the vtkInteractorObserver you must set the render window interactor (via SetInteractor()).</para>
/// </summary>
  void On();


  // void Off ();this SetEnabled 
/// <summary>
/// <para>This method is used to associate the widget with the render window interactor.  Observers of the appropriate events invoked in the render window interactor are set up as a result of this method invocation. The SetInteractor() method must be invoked prior to enabling the vtkInteractorObserver.</para>
/// </summary>
  void Off();


  // virtual void SetInteractor (vtkRenderWindowInteractor *iren);
/// <summary>
/// <para>This method is used to associate the widget with the render window interactor.  Observers of the appropriate events invoked in the render window interactor are set up as a result of this method invocation. The SetInteractor() method must be invoked prior to enabling the vtkInteractorObserver.</para>
/// </summary>
  void SetInteractor(vtkRenderWindowInteractor^ iren);


  // vtkRenderWindowInteractor *GetInteractor ();
/// <summary>
/// <para>This method is used to associate the widget with the render window interactor.  Observers of the appropriate events invoked in the render window interactor are set up as a result of this method invocation. The SetInteractor() method must be invoked prior to enabling the vtkInteractorObserver.</para>
/// </summary>
  vtkRenderWindowInteractor^ GetInteractor();


  // void SetPriority (float );
/// <summary>
/// <para>Set/Get the priority at which events are processed. This is used when multiple interactor observers are used simultaneously. The default value is 0.0 (lowest priority.) Note that when multiple interactor observer have the same priority, then the last observer added will process the event first. (Note: once the SetInteractor() method has been called, changing the priority does not effect event processing. You will have to SetInteractor(NULL), change priority, and then SetInteractor(iren) to have the priority take effect.)</para>
/// </summary>
  void SetPriority(float arg0);


  // float GetPriorityMinValue ();
/// <summary>
/// <para>Set/Get the priority at which events are processed. This is used when multiple interactor observers are used simultaneously. The default value is 0.0 (lowest priority.) Note that when multiple interactor observer have the same priority, then the last observer added will process the event first. (Note: once the SetInteractor() method has been called, changing the priority does not effect event processing. You will have to SetInteractor(NULL), change priority, and then SetInteractor(iren) to have the priority take effect.)</para>
/// </summary>
  float GetPriorityMinValue();


  // float GetPriorityMaxValue ();
/// <summary>
/// <para>Set/Get the priority at which events are processed. This is used when multiple interactor observers are used simultaneously. The default value is 0.0 (lowest priority.) Note that when multiple interactor observer have the same priority, then the last observer added will process the event first. (Note: once the SetInteractor() method has been called, changing the priority does not effect event processing. You will have to SetInteractor(NULL), change priority, and then SetInteractor(iren) to have the priority take effect.)</para>
/// </summary>
  float GetPriorityMaxValue();


  // float GetPriority ();
/// <summary>
/// <para>Set/Get the priority at which events are processed. This is used when multiple interactor observers are used simultaneously. The default value is 0.0 (lowest priority.) Note that when multiple interactor observer have the same priority, then the last observer added will process the event first. (Note: once the SetInteractor() method has been called, changing the priority does not effect event processing. You will have to SetInteractor(NULL), change priority, and then SetInteractor(iren) to have the priority take effect.)</para>
/// </summary>
  float GetPriority();


  // void SetKeyPressActivation (int );
/// <summary>
/// <para>Enable/Disable of the use of a keypress to turn on and off the interactor observer. (By default, the keypress is 'i' for &quot;interactor observer&quot;.)  Set the KeyPressActivationValue to change which key activates the widget.)</para>
/// </summary>
  void SetKeyPressActivation(int arg0);


  // int GetKeyPressActivation ();
/// <summary>
/// <para>Enable/Disable of the use of a keypress to turn on and off the interactor observer. (By default, the keypress is 'i' for &quot;interactor observer&quot;.)  Set the KeyPressActivationValue to change which key activates the widget.)</para>
/// </summary>
  int GetKeyPressActivation();


  // void KeyPressActivationOn ();
/// <summary>
/// <para>Enable/Disable of the use of a keypress to turn on and off the interactor observer. (By default, the keypress is 'i' for &quot;interactor observer&quot;.)  Set the KeyPressActivationValue to change which key activates the widget.)</para>
/// </summary>
  void KeyPressActivationOn();


  // void KeyPressActivationOff ();
/// <summary>
/// <para>Enable/Disable of the use of a keypress to turn on and off the interactor observer. (By default, the keypress is 'i' for &quot;interactor observer&quot;.)  Set the KeyPressActivationValue to change which key activates the widget.)</para>
/// </summary>
  void KeyPressActivationOff();


  // void SetKeyPressActivationValue (char );
/// <summary>
/// <para>Specify which key press value to use to activate the interactor observer (if key press activation is enabled). By default, the key press activation value is 'i'. Note: once the SetInteractor() method is invoked, changing the key press activation value will not affect the key press until SetInteractor(NULL)/SetInteractor(iren) is called.</para>
/// </summary>
  void SetKeyPressActivationValue(char arg0);


  // char GetKeyPressActivationValue ();
/// <summary>
/// <para>Specify which key press value to use to activate the interactor observer (if key press activation is enabled). By default, the key press activation value is 'i'. Note: once the SetInteractor() method is invoked, changing the key press activation value will not affect the key press until SetInteractor(NULL)/SetInteractor(iren) is called.</para>
/// </summary>
  char GetKeyPressActivationValue();


  // vtkRenderer *GetDefaultRenderer ();
/// <summary>
/// <para>Set/Get the default renderer to use when activating the interactor  observer. Normally when the widget is activated (SetEnabled(1) or when  keypress activation takes place), the renderer over which the mouse pointer is positioned is used. Alternatively, you can specify the renderer to bind the interactor to when the interactor observer is activated. </para>
/// </summary>
  vtkRenderer^ GetDefaultRenderer();


  // virtual void SetDefaultRenderer (vtkRenderer *);
/// <summary>
/// <para>Set/Get the default renderer to use when activating the interactor  observer. Normally when the widget is activated (SetEnabled(1) or when  keypress activation takes place), the renderer over which the mouse pointer is positioned is used. Alternatively, you can specify the renderer to bind the interactor to when the interactor observer is activated. </para>
/// </summary>
  void SetDefaultRenderer(vtkRenderer^ arg0);


  // vtkRenderer *GetCurrentRenderer ();
/// <summary>
/// <para>Set/Get the current renderer. Normally when the widget is activated  (SetEnabled(1) or when keypress activation takes place), the renderer over which the mouse pointer is positioned is used and assigned to this Ivar. Alternatively, you might want to set the CurrentRenderer explicitly. WARNING: note that if the DefaultRenderer Ivar is set (see above),  it will always override the parameter passed to SetCurrentRenderer, unless it is NULL. (i.e., SetCurrentRenderer(foo) = SetCurrentRenderer(DefaultRenderer).</para>
/// </summary>
  vtkRenderer^ GetCurrentRenderer();


  // virtual void SetCurrentRenderer (vtkRenderer *);
/// <summary>
/// <para>Set/Get the current renderer. Normally when the widget is activated  (SetEnabled(1) or when keypress activation takes place), the renderer over which the mouse pointer is positioned is used and assigned to this Ivar. Alternatively, you might want to set the CurrentRenderer explicitly. WARNING: note that if the DefaultRenderer Ivar is set (see above),  it will always override the parameter passed to SetCurrentRenderer, unless it is NULL. (i.e., SetCurrentRenderer(foo) = SetCurrentRenderer(DefaultRenderer).</para>
/// </summary>
  void SetCurrentRenderer(vtkRenderer^ arg0);


  // virtual void OnChar ();
  void OnChar();


  // static void ComputeDisplayToWorld (vtkRenderer *ren, double x, double y, double z, double worldPt[4]);
  static void ComputeDisplayToWorld(vtkRenderer^ ren, double x, double y, double z, array<double>^ worldPt);


  // static void ComputeWorldToDisplay (vtkRenderer *ren, double x, double y, double z, double displayPt[3]);
  static void ComputeWorldToDisplay(vtkRenderer^ ren, double x, double y, double z, array<double>^ displayPt);


// Did not wrap:  vtkInteractorObserver ();


// Did not wrap:  ~vtkInteractorObserver ();


// Did not wrap:  virtual void StartInteraction ();


// Did not wrap:  virtual void EndInteraction ();


// Did not wrap:  static void ProcessEvents (vtkObject *object, unsigned long event, void *clientdata, void *calldata);


// Did not wrap:  void ComputeDisplayToWorld (double x, double y, double z, double worldPt[4]);


// Did not wrap:  void ComputeWorldToDisplay (double x, double y, double z, double displayPt[3]);


// Did not wrap:  vtkInteractorObserver (const vtkInteractorObserver &);


// Did not wrap:  void vtkInteractorObserver 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkInteractorObserver(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkInteractorObserver(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkInteractorObserver();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkInteractorObserver();


};

} // end vtkRendering
