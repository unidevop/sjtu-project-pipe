

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInteractorStyleDotNet.h"
#include "vtkProp3DDotNet.h"
#include "vtkRenderWindowInteractorDotNet.h"

// native includes
#include "strstream"
#include "vtkInteractorStyle.h"
#include "vtkActor2D.h"
#include "vtkObject.h"
#include "vtkProp.h"
#include "vtkProp3D.h"
#include "vtkRenderWindowInteractor.h"

using namespace System;

namespace vtk {

System::String^ vtkInteractorStyle::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInteractorStyle::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInteractorStyle^ vtkInteractorStyle::NewInstance()
{
  ::vtkInteractorStyle* retVal = static_cast<::vtkInteractorStyle*>(vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->NewInstance());
  return gcnew vtkInteractorStyle(IntPtr(retVal), false);
}



vtkInteractorStyle^ vtkInteractorStyle::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkInteractorStyle* retVal = static_cast<::vtkInteractorStyle*>(::vtkInteractorStyle::SafeDownCast(oWrap));
  return gcnew vtkInteractorStyle(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInteractorStyle::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInteractorStyle::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInteractorStyle::SetInteractor(vtkRenderWindowInteractor^ interactor)
{
  ::vtkRenderWindowInteractor* interactorWrap = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(interactor->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->SetInteractor(interactorWrap);
}



void vtkInteractorStyle::SetEnabled(int arg0)
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->SetEnabled(arg0);
}



void vtkInteractorStyle::SetAutoAdjustCameraClippingRange(int arg0)
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->SetAutoAdjustCameraClippingRange(arg0);
}



int vtkInteractorStyle::GetAutoAdjustCameraClippingRangeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->GetAutoAdjustCameraClippingRangeMinValue();
  return retVal;
}



int vtkInteractorStyle::GetAutoAdjustCameraClippingRangeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->GetAutoAdjustCameraClippingRangeMaxValue();
  return retVal;
}



int vtkInteractorStyle::GetAutoAdjustCameraClippingRange()
{
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->GetAutoAdjustCameraClippingRange();
  return retVal;
}



void vtkInteractorStyle::AutoAdjustCameraClippingRangeOn()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->AutoAdjustCameraClippingRangeOn();
}



void vtkInteractorStyle::AutoAdjustCameraClippingRangeOff()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->AutoAdjustCameraClippingRangeOff();
}



void vtkInteractorStyle::FindPokedRenderer(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->FindPokedRenderer(arg0, arg1);
}



int vtkInteractorStyle::GetState()
{
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->GetState();
  return retVal;
}



int vtkInteractorStyle::GetUseTimers()
{
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->GetUseTimers();
  return retVal;
}



void vtkInteractorStyle::SetUseTimers(int arg0)
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->SetUseTimers(arg0);
}



void vtkInteractorStyle::UseTimersOn()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->UseTimersOn();
}



void vtkInteractorStyle::UseTimersOff()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->UseTimersOff();
}



void vtkInteractorStyle::SetHandleObservers(int arg0)
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->SetHandleObservers(arg0);
}



int vtkInteractorStyle::GetHandleObservers()
{
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->GetHandleObservers();
  return retVal;
}



void vtkInteractorStyle::HandleObserversOn()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->HandleObserversOn();
}



void vtkInteractorStyle::HandleObserversOff()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->HandleObserversOff();
}



void vtkInteractorStyle::OnMouseMove()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->OnMouseMove();
}



void vtkInteractorStyle::OnLeftButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->OnLeftButtonDown();
}



void vtkInteractorStyle::OnLeftButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->OnLeftButtonUp();
}



void vtkInteractorStyle::OnMiddleButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->OnMiddleButtonDown();
}



void vtkInteractorStyle::OnMiddleButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->OnMiddleButtonUp();
}



void vtkInteractorStyle::OnRightButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->OnRightButtonDown();
}



void vtkInteractorStyle::OnRightButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->OnRightButtonUp();
}



void vtkInteractorStyle::OnMouseWheelForward()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->OnMouseWheelForward();
}



void vtkInteractorStyle::OnMouseWheelBackward()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->OnMouseWheelBackward();
}



void vtkInteractorStyle::OnChar()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->OnChar();
}



void vtkInteractorStyle::OnKeyDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->OnKeyDown();
}



void vtkInteractorStyle::OnKeyUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->OnKeyUp();
}



void vtkInteractorStyle::OnKeyPress()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->OnKeyPress();
}



void vtkInteractorStyle::OnKeyRelease()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->OnKeyRelease();
}



void vtkInteractorStyle::OnExpose()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->OnExpose();
}



void vtkInteractorStyle::OnConfigure()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->OnConfigure();
}



void vtkInteractorStyle::OnEnter()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->OnEnter();
}



void vtkInteractorStyle::OnLeave()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->OnLeave();
}



void vtkInteractorStyle::OnTimer()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->OnTimer();
}



void vtkInteractorStyle::Rotate()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->Rotate();
}



void vtkInteractorStyle::Spin()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->Spin();
}



void vtkInteractorStyle::Pan()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->Pan();
}



void vtkInteractorStyle::Dolly()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->Dolly();
}



void vtkInteractorStyle::Zoom()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->Zoom();
}



void vtkInteractorStyle::UniformScale()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->UniformScale();
}



void vtkInteractorStyle::StartState(int newstate)
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->StartState(newstate);
}



void vtkInteractorStyle::StopState()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->StopState();
}



void vtkInteractorStyle::StartAnimate()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->StartAnimate();
}



void vtkInteractorStyle::StopAnimate()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->StopAnimate();
}



void vtkInteractorStyle::StartRotate()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->StartRotate();
}



void vtkInteractorStyle::EndRotate()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->EndRotate();
}



void vtkInteractorStyle::StartZoom()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->StartZoom();
}



void vtkInteractorStyle::EndZoom()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->EndZoom();
}



void vtkInteractorStyle::StartPan()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->StartPan();
}



void vtkInteractorStyle::EndPan()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->EndPan();
}



void vtkInteractorStyle::StartSpin()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->StartSpin();
}



void vtkInteractorStyle::EndSpin()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->EndSpin();
}



void vtkInteractorStyle::StartDolly()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->StartDolly();
}



void vtkInteractorStyle::EndDolly()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->EndDolly();
}



void vtkInteractorStyle::StartUniformScale()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->StartUniformScale();
}



void vtkInteractorStyle::EndUniformScale()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->EndUniformScale();
}



void vtkInteractorStyle::StartTimer()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->StartTimer();
}



void vtkInteractorStyle::EndTimer()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->EndTimer();
}



void vtkInteractorStyle::HighlightProp(vtkProp^ prop)
{
  ::vtkProp* propWrap = vtk::ConvertManagedToNative<::vtkProp>(prop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->HighlightProp(propWrap);
}



void vtkInteractorStyle::HighlightActor2D(vtkActor2D^ actor2D)
{
  ::vtkActor2D* actor2DWrap = vtk::ConvertManagedToNative<::vtkActor2D>(actor2D->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->HighlightActor2D(actor2DWrap);
}



void vtkInteractorStyle::HighlightProp3D(vtkProp3D^ prop3D)
{
  ::vtkProp3D* prop3DWrap = vtk::ConvertManagedToNative<::vtkProp3D>(prop3D->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->HighlightProp3D(prop3DWrap);
}



void vtkInteractorStyle::SetPickColor(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->SetPickColor(arg0, arg1, arg2);
}



void vtkInteractorStyle::SetPickColor(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->SetPickColor(nativeaPin);
}



array<double>^ vtkInteractorStyle::GetPickColor()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->GetPickColor();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkInteractorStyle::SetMouseWheelMotionFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->SetMouseWheelMotionFactor(arg0);
}



double vtkInteractorStyle::GetMouseWheelMotionFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkInteractorStyle>(m_instance)->GetMouseWheelMotionFactor();
  return retVal;
}



  vtkInteractorStyle::vtkInteractorStyle(System::IntPtr native, bool bConst) : vtkInteractorObserver(native, bConst) {}



  vtkInteractorStyle::vtkInteractorStyle(bool donothing) : vtkInteractorObserver(donothing) {}



  vtkInteractorStyle::vtkInteractorStyle() : vtkInteractorObserver(false) {
  this->SetNativePointer(IntPtr(::vtkInteractorStyle::New()));
}



  vtkInteractorStyle::~vtkInteractorStyle() { }





} // end namespace vtkRendering
