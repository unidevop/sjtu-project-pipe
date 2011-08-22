#pragma once

#include "vtkCommand.h"


using namespace System;
#include <vcclr.h>

class vtkObject;

// Need to use TypeRevisionMacro and such.
#ifdef DOTNET_KIT_IS_NAMESPACE
namespace vtkCommon
#else
namespace vtk
#endif
{

public enum class EventIds
{
    NoEvent = 0,
    AnyEvent,
    DeleteEvent,
    StartEvent,
    EndEvent,
    RenderEvent,
    ProgressEvent,
    PickEvent,
    StartPickEvent,
    EndPickEvent,
    AbortCheckEvent,
    ExitEvent,
    LeftButtonPressEvent,
    LeftButtonReleaseEvent,
    MiddleButtonPressEvent,
    MiddleButtonReleaseEvent,
    RightButtonPressEvent,
    RightButtonReleaseEvent,
    EnterEvent,
    LeaveEvent,
    KeyPressEvent,
    KeyReleaseEvent,
    CharEvent,
    ExposeEvent,
    ConfigureEvent,
    TimerEvent,
    MouseMoveEvent,
    MouseWheelForwardEvent,
    MouseWheelBackwardEvent,
    ResetCameraEvent,
    ResetCameraClippingRangeEvent,
    ModifiedEvent,
    WindowLevelEvent,
    StartWindowLevelEvent,
    EndWindowLevelEvent,
    ResetWindowLevelEvent,
    SetOutputEvent,
    ErrorEvent,
    WarningEvent,
    StartInteractionEvent, //mainly used by vtkInteractorObservers
    InteractionEvent,
    EndInteractionEvent,
    EnableEvent,
    DisableEvent,
    CreateTimerEvent,
    DestroyTimerEvent,
    PlacePointEvent,
    PlaceWidgetEvent,
    CursorChangedEvent,
    ExecuteInformationEvent,
    RenderWindowMessageEvent,
    WrongTagEvent,
    StartAnimationCueEvent, // used by vtkAnimationCue
    AnimationCueTickEvent,
    EndAnimationCueEvent,
    VolumeMapperRenderProgressEvent,
    VolumeMapperComputeGradientsEndEvent,
    VolumeMapperComputeGradientsProgressEvent,
    VolumeMapperComputeGradientsStartEvent,
    WidgetModifiedEvent,
    WidgetValueChangedEvent,
    WidgetActivateEvent,
    UserEvent = 1000
};

ref class vtkObject;

/// <summary>Delegates of type vtkDotNetCallback can receive messages
/// from the native vtkDotNetCommand class. Use this delegate with
/// vtk.vtkObject.AddObserver.
/// </summary>
/// <param name="caller">The class which sent the message.</param>
/// <param name="eventId">The type of event, defined by a C++ enum EventId.</param>
/// <param name="clientData">The message returns to the delegate an optional
/// parameter to AddObserver.</param>
/// <param name="callData">A void* pointer passed in from the caller.</param>
public delegate void vtkDotNetCallback(vtkObject^ caller, unsigned long eventId,
		Object^ clientData, IntPtr callData);

class vtkDotNetCommand : public ::vtkCommand
{
	gcroot<vtkDotNetCallback^> m_callback;
	gcroot<Object^> m_data;

public:
	vtkDotNetCommand();
	static vtkDotNetCommand* New();

	void SetCallback(vtkDotNetCallback^ cb);
	void SetClientData(Object^ data);

	virtual void Execute(::vtkObject *caller, unsigned long eventId, void *callData);
};
}