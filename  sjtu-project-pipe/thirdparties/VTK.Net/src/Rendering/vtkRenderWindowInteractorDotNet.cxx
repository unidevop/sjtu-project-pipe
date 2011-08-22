

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRenderWindowInteractorDotNet.h"
#include "vtkAbstractPickerDotNet.h"
#include "vtkAbstractPropPickerDotNet.h"
#include "vtkInteractorObserverDotNet.h"
#include "vtkRenderWindowDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkRenderWindowInteractor.h"
#include "vtkAbstractPicker.h"
#include "vtkAbstractPropPicker.h"
#include "vtkInteractorObserver.h"
#include "vtkObjectBase.h"
#include "vtkRenderWindow.h"
#include "vtkRenderer.h"

using namespace System;

namespace vtk {

System::String^ vtkRenderWindowInteractor::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRenderWindowInteractor::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRenderWindowInteractor^ vtkRenderWindowInteractor::NewInstance()
{
  ::vtkRenderWindowInteractor* retVal = static_cast<::vtkRenderWindowInteractor*>(vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->NewInstance());
  return gcnew vtkRenderWindowInteractor(IntPtr(retVal), false);
}



vtkRenderWindowInteractor^ vtkRenderWindowInteractor::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRenderWindowInteractor* retVal = static_cast<::vtkRenderWindowInteractor*>(::vtkRenderWindowInteractor::SafeDownCast(oWrap));
  return gcnew vtkRenderWindowInteractor(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRenderWindowInteractor::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRenderWindowInteractor::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkRenderWindowInteractor::Initialize()
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->Initialize();
}



void vtkRenderWindowInteractor::ReInitialize()
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->ReInitialize();
}



void vtkRenderWindowInteractor::UnRegister(vtkObjectBase^ o)
{
  ::vtkObjectBase* oWrap = static_cast<::vtkObjectBase*>(o->GetNativePointer().ToPointer());
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->UnRegister(oWrap);
}



void vtkRenderWindowInteractor::Start()
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->Start();
}



void vtkRenderWindowInteractor::Enable()
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->Enable();
}



void vtkRenderWindowInteractor::Disable()
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->Disable();
}



int vtkRenderWindowInteractor::GetEnabled()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->GetEnabled();
  return retVal;
}



void vtkRenderWindowInteractor::SetRenderWindow(vtkRenderWindow^ aren)
{
  ::vtkRenderWindow* arenWrap = vtk::ConvertManagedToNative<::vtkRenderWindow>(aren->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->SetRenderWindow(arenWrap);
}



vtkRenderWindow^ vtkRenderWindowInteractor::GetRenderWindow()
{
  ::vtkRenderWindow* retVal = static_cast<::vtkRenderWindow*>(vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->GetRenderWindow());
  return gcnew vtkRenderWindow(IntPtr(retVal), false);
}



void vtkRenderWindowInteractor::UpdateSize(int x, int y)
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->UpdateSize(x, y);
}



int vtkRenderWindowInteractor::CreateTimer(int arg0)
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->CreateTimer(arg0);
  return retVal;
}



int vtkRenderWindowInteractor::DestroyTimer()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->DestroyTimer();
  return retVal;
}



void vtkRenderWindowInteractor::TerminateApp()
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->TerminateApp();
}



void vtkRenderWindowInteractor::SetInteractorStyle(vtkInteractorObserver^ arg0)
{
  ::vtkInteractorObserver* arg0Wrap = vtk::ConvertManagedToNative<::vtkInteractorObserver>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->SetInteractorStyle(arg0Wrap);
}



vtkInteractorObserver^ vtkRenderWindowInteractor::GetInteractorStyle()
{
  ::vtkInteractorObserver* retVal = static_cast<::vtkInteractorObserver*>(vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->GetInteractorStyle());
  return gcnew vtkInteractorObserver(IntPtr(retVal), false);
}



void vtkRenderWindowInteractor::SetLightFollowCamera(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->SetLightFollowCamera(arg0);
}



int vtkRenderWindowInteractor::GetLightFollowCamera()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->GetLightFollowCamera();
  return retVal;
}



void vtkRenderWindowInteractor::LightFollowCameraOn()
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->LightFollowCameraOn();
}



void vtkRenderWindowInteractor::LightFollowCameraOff()
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->LightFollowCameraOff();
}



void vtkRenderWindowInteractor::SetDesiredUpdateRate(double arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->SetDesiredUpdateRate(arg0);
}



double vtkRenderWindowInteractor::GetDesiredUpdateRateMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->GetDesiredUpdateRateMinValue();
  return retVal;
}



double vtkRenderWindowInteractor::GetDesiredUpdateRateMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->GetDesiredUpdateRateMaxValue();
  return retVal;
}



double vtkRenderWindowInteractor::GetDesiredUpdateRate()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->GetDesiredUpdateRate();
  return retVal;
}



void vtkRenderWindowInteractor::SetStillUpdateRate(double arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->SetStillUpdateRate(arg0);
}



double vtkRenderWindowInteractor::GetStillUpdateRateMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->GetStillUpdateRateMinValue();
  return retVal;
}



double vtkRenderWindowInteractor::GetStillUpdateRateMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->GetStillUpdateRateMaxValue();
  return retVal;
}



double vtkRenderWindowInteractor::GetStillUpdateRate()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->GetStillUpdateRate();
  return retVal;
}



int vtkRenderWindowInteractor::GetInitialized()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->GetInitialized();
  return retVal;
}



void vtkRenderWindowInteractor::SetPicker(vtkAbstractPicker^ arg0)
{
  ::vtkAbstractPicker* arg0Wrap = vtk::ConvertManagedToNative<::vtkAbstractPicker>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->SetPicker(arg0Wrap);
}



vtkAbstractPicker^ vtkRenderWindowInteractor::GetPicker()
{
  ::vtkAbstractPicker* retVal = static_cast<::vtkAbstractPicker*>(vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->GetPicker());
  return gcnew vtkAbstractPicker(IntPtr(retVal), false);
}



vtkAbstractPropPicker^ vtkRenderWindowInteractor::CreateDefaultPicker()
{
  ::vtkAbstractPropPicker* retVal = static_cast<::vtkAbstractPropPicker*>(vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->CreateDefaultPicker());
  return gcnew vtkAbstractPropPicker(IntPtr(retVal), false);
}



void vtkRenderWindowInteractor::ExitCallback()
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->ExitCallback();
}



void vtkRenderWindowInteractor::UserCallback()
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->UserCallback();
}



void vtkRenderWindowInteractor::StartPickCallback()
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->StartPickCallback();
}



void vtkRenderWindowInteractor::EndPickCallback()
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->EndPickCallback();
}



void vtkRenderWindowInteractor::GetMousePosition(array<int>^ x, array<int>^ y)
{
  pin_ptr<int> xPin = &x[0];
  int* nativexPin = xPin;
  pin_ptr<int> yPin = &y[0];
  int* nativeyPin = yPin;
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->GetMousePosition(nativexPin, nativeyPin);
}



void vtkRenderWindowInteractor::HideCursor()
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->HideCursor();
}



void vtkRenderWindowInteractor::ShowCursor()
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->ShowCursor();
}



void vtkRenderWindowInteractor::Render()
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->Render();
}



void vtkRenderWindowInteractor::FlyTo(vtkRenderer^ ren, double x, double y, double z)
{
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->FlyTo(renWrap, x, y, z);
}



void vtkRenderWindowInteractor::FlyTo(vtkRenderer^ ren, array<double>^ x)
{
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->FlyTo(renWrap, nativexPin);
}



void vtkRenderWindowInteractor::FlyToImage(vtkRenderer^ ren, double x, double y)
{
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->FlyToImage(renWrap, x, y);
}



void vtkRenderWindowInteractor::FlyToImage(vtkRenderer^ ren, array<double>^ x)
{
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->FlyToImage(renWrap, nativexPin);
}



void vtkRenderWindowInteractor::SetNumberOfFlyFrames(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->SetNumberOfFlyFrames(arg0);
}



int vtkRenderWindowInteractor::GetNumberOfFlyFramesMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->GetNumberOfFlyFramesMinValue();
  return retVal;
}



int vtkRenderWindowInteractor::GetNumberOfFlyFramesMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->GetNumberOfFlyFramesMaxValue();
  return retVal;
}



int vtkRenderWindowInteractor::GetNumberOfFlyFrames()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->GetNumberOfFlyFrames();
  return retVal;
}



void vtkRenderWindowInteractor::SetDolly(double arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->SetDolly(arg0);
}



double vtkRenderWindowInteractor::GetDolly()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->GetDolly();
  return retVal;
}



array<int>^ vtkRenderWindowInteractor::GetEventPosition()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->GetEventPosition();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<int>^ vtkRenderWindowInteractor::GetLastEventPosition()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->GetLastEventPosition();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkRenderWindowInteractor::SetLastEventPosition(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->SetLastEventPosition(arg0, arg1);
}



void vtkRenderWindowInteractor::SetLastEventPosition(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->SetLastEventPosition(nativeaPin);
}



void vtkRenderWindowInteractor::SetEventPosition(int x, int y)
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->SetEventPosition(x, y);
}



void vtkRenderWindowInteractor::SetEventPosition(array<int>^ pos)
{
  pin_ptr<int> posPin = &pos[0];
  int* nativeposPin = posPin;
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->SetEventPosition(nativeposPin);
}



void vtkRenderWindowInteractor::SetEventPositionFlipY(int x, int y)
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->SetEventPositionFlipY(x, y);
}



void vtkRenderWindowInteractor::SetEventPositionFlipY(array<int>^ pos)
{
  pin_ptr<int> posPin = &pos[0];
  int* nativeposPin = posPin;
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->SetEventPositionFlipY(nativeposPin);
}



void vtkRenderWindowInteractor::SetControlKey(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->SetControlKey(arg0);
}



int vtkRenderWindowInteractor::GetControlKey()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->GetControlKey();
  return retVal;
}



void vtkRenderWindowInteractor::SetShiftKey(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->SetShiftKey(arg0);
}



int vtkRenderWindowInteractor::GetShiftKey()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->GetShiftKey();
  return retVal;
}



void vtkRenderWindowInteractor::SetKeyCode(char arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->SetKeyCode(arg0);
}



char vtkRenderWindowInteractor::GetKeyCode()
{
  char retVal = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->GetKeyCode();
  return retVal;
}



void vtkRenderWindowInteractor::SetRepeatCount(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->SetRepeatCount(arg0);
}



int vtkRenderWindowInteractor::GetRepeatCount()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->GetRepeatCount();
  return retVal;
}



void vtkRenderWindowInteractor::SetKeySym(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->SetKeySym(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkRenderWindowInteractor::GetKeySym()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->GetKeySym();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkRenderWindowInteractor::SetEventInformation(int x, int y, int ctrl, int shift, char keycode, int repeatcount, System::String^ keysym)
{
  char* keysymWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(keysym).ToPointer());
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->SetEventInformation(x, y, ctrl, shift, keycode, repeatcount, keysymWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(keysymWrap));
}



void vtkRenderWindowInteractor::SetEventInformationFlipY(int x, int y, int ctrl, int shift, char keycode, int repeatcount, System::String^ keysym)
{
  char* keysymWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(keysym).ToPointer());
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->SetEventInformationFlipY(x, y, ctrl, shift, keycode, repeatcount, keysymWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(keysymWrap));
}



void vtkRenderWindowInteractor::SetKeyEventInformation(int ctrl, int shift, char keycode, int repeatcount, System::String^ keysym)
{
  char* keysymWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(keysym).ToPointer());
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->SetKeyEventInformation(ctrl, shift, keycode, repeatcount, keysymWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(keysymWrap));
}



void vtkRenderWindowInteractor::SetSize(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->SetSize(arg0, arg1);
}



void vtkRenderWindowInteractor::SetSize(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->SetSize(nativeaPin);
}



array<int>^ vtkRenderWindowInteractor::GetSize()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->GetSize();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkRenderWindowInteractor::SetEventSize(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->SetEventSize(arg0, arg1);
}



void vtkRenderWindowInteractor::SetEventSize(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->SetEventSize(nativeaPin);
}



array<int>^ vtkRenderWindowInteractor::GetEventSize()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->GetEventSize();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



vtkRenderer^ vtkRenderWindowInteractor::FindPokedRenderer(int arg0, int arg1)
{
  ::vtkRenderer* retVal = static_cast<::vtkRenderer*>(vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(m_instance)->FindPokedRenderer(arg0, arg1));
  return gcnew vtkRenderer(IntPtr(retVal), false);
}



  vtkRenderWindowInteractor::vtkRenderWindowInteractor(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkRenderWindowInteractor::vtkRenderWindowInteractor(bool donothing) : vtkObject(donothing) {}



  vtkRenderWindowInteractor::vtkRenderWindowInteractor() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkRenderWindowInteractor::New()));
}



  vtkRenderWindowInteractor::~vtkRenderWindowInteractor() { }





} // end namespace vtkRendering
