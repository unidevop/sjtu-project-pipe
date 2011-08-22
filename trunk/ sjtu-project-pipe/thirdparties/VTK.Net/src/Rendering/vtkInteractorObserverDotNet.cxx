

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInteractorObserverDotNet.h"
#include "vtkRenderWindowInteractorDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkInteractorObserver.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkRenderer.h"

using namespace System;

namespace vtk {

System::String^ vtkInteractorObserver::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInteractorObserver::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInteractorObserver^ vtkInteractorObserver::NewInstance()
{
  ::vtkInteractorObserver* retVal = static_cast<::vtkInteractorObserver*>(vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->NewInstance());
  return gcnew vtkInteractorObserver(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInteractorObserver::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInteractorObserver::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInteractorObserver::SetEnabled(int arg0)
{
  vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->SetEnabled(arg0);
}



int vtkInteractorObserver::GetEnabled()
{
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->GetEnabled();
  return retVal;
}



void vtkInteractorObserver::EnabledOn()
{
  vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->EnabledOn();
}



void vtkInteractorObserver::EnabledOff()
{
  vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->EnabledOff();
}



void vtkInteractorObserver::On()
{
  vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->On();
}



void vtkInteractorObserver::Off()
{
  vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->Off();
}



void vtkInteractorObserver::SetInteractor(vtkRenderWindowInteractor^ iren)
{
  ::vtkRenderWindowInteractor* irenWrap = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(iren->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->SetInteractor(irenWrap);
}



vtkRenderWindowInteractor^ vtkInteractorObserver::GetInteractor()
{
  ::vtkRenderWindowInteractor* retVal = static_cast<::vtkRenderWindowInteractor*>(vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->GetInteractor());
  return gcnew vtkRenderWindowInteractor(IntPtr(retVal), false);
}



void vtkInteractorObserver::SetPriority(float arg0)
{
  vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->SetPriority(arg0);
}



float vtkInteractorObserver::GetPriorityMinValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->GetPriorityMinValue();
  return retVal;
}



float vtkInteractorObserver::GetPriorityMaxValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->GetPriorityMaxValue();
  return retVal;
}



float vtkInteractorObserver::GetPriority()
{
  float retVal = vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->GetPriority();
  return retVal;
}



void vtkInteractorObserver::SetKeyPressActivation(int arg0)
{
  vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->SetKeyPressActivation(arg0);
}



int vtkInteractorObserver::GetKeyPressActivation()
{
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->GetKeyPressActivation();
  return retVal;
}



void vtkInteractorObserver::KeyPressActivationOn()
{
  vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->KeyPressActivationOn();
}



void vtkInteractorObserver::KeyPressActivationOff()
{
  vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->KeyPressActivationOff();
}



void vtkInteractorObserver::SetKeyPressActivationValue(char arg0)
{
  vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->SetKeyPressActivationValue(arg0);
}



char vtkInteractorObserver::GetKeyPressActivationValue()
{
  char retVal = vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->GetKeyPressActivationValue();
  return retVal;
}



vtkRenderer^ vtkInteractorObserver::GetDefaultRenderer()
{
  ::vtkRenderer* retVal = static_cast<::vtkRenderer*>(vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->GetDefaultRenderer());
  return gcnew vtkRenderer(IntPtr(retVal), false);
}



void vtkInteractorObserver::SetDefaultRenderer(vtkRenderer^ arg0)
{
  ::vtkRenderer* arg0Wrap = vtk::ConvertManagedToNative<::vtkRenderer>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->SetDefaultRenderer(arg0Wrap);
}



vtkRenderer^ vtkInteractorObserver::GetCurrentRenderer()
{
  ::vtkRenderer* retVal = static_cast<::vtkRenderer*>(vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->GetCurrentRenderer());
  return gcnew vtkRenderer(IntPtr(retVal), false);
}



void vtkInteractorObserver::SetCurrentRenderer(vtkRenderer^ arg0)
{
  ::vtkRenderer* arg0Wrap = vtk::ConvertManagedToNative<::vtkRenderer>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->SetCurrentRenderer(arg0Wrap);
}



void vtkInteractorObserver::OnChar()
{
  vtk::ConvertManagedToNative<::vtkInteractorObserver>(m_instance)->OnChar();
}



void vtkInteractorObserver::ComputeDisplayToWorld(vtkRenderer^ ren, double x, double y, double z, array<double>^ worldPt)
{
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  pin_ptr<double> worldPtPin = &worldPt[0];
  double* nativeworldPtPin = worldPtPin;
  ::vtkInteractorObserver::ComputeDisplayToWorld(renWrap, x, y, z, nativeworldPtPin);
}



void vtkInteractorObserver::ComputeWorldToDisplay(vtkRenderer^ ren, double x, double y, double z, array<double>^ displayPt)
{
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  pin_ptr<double> displayPtPin = &displayPt[0];
  double* nativedisplayPtPin = displayPtPin;
  ::vtkInteractorObserver::ComputeWorldToDisplay(renWrap, x, y, z, nativedisplayPtPin);
}



  vtkInteractorObserver::vtkInteractorObserver(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkInteractorObserver::vtkInteractorObserver(bool donothing) : vtkObject(donothing) {}



  vtkInteractorObserver::vtkInteractorObserver() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkInteractorObserver::New()));
}



  vtkInteractorObserver::~vtkInteractorObserver() { }





} // end namespace vtkRendering
