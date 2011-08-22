

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGenericRenderWindowInteractorDotNet.h"

// native includes
#include "strstream"
#include "vtkGenericRenderWindowInteractor.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkGenericRenderWindowInteractor::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericRenderWindowInteractor>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGenericRenderWindowInteractor::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericRenderWindowInteractor>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGenericRenderWindowInteractor^ vtkGenericRenderWindowInteractor::NewInstance()
{
  ::vtkGenericRenderWindowInteractor* retVal = static_cast<::vtkGenericRenderWindowInteractor*>(vtk::ConvertManagedToNative<::vtkGenericRenderWindowInteractor>(m_instance)->NewInstance());
  return gcnew vtkGenericRenderWindowInteractor(IntPtr(retVal), false);
}



vtkGenericRenderWindowInteractor^ vtkGenericRenderWindowInteractor::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGenericRenderWindowInteractor* retVal = static_cast<::vtkGenericRenderWindowInteractor*>(::vtkGenericRenderWindowInteractor::SafeDownCast(oWrap));
  return gcnew vtkGenericRenderWindowInteractor(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGenericRenderWindowInteractor::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGenericRenderWindowInteractor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGenericRenderWindowInteractor::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGenericRenderWindowInteractor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkGenericRenderWindowInteractor::MouseMoveEvent()
{
  vtk::ConvertManagedToNative<::vtkGenericRenderWindowInteractor>(m_instance)->MouseMoveEvent();
}



void vtkGenericRenderWindowInteractor::RightButtonPressEvent()
{
  vtk::ConvertManagedToNative<::vtkGenericRenderWindowInteractor>(m_instance)->RightButtonPressEvent();
}



void vtkGenericRenderWindowInteractor::RightButtonReleaseEvent()
{
  vtk::ConvertManagedToNative<::vtkGenericRenderWindowInteractor>(m_instance)->RightButtonReleaseEvent();
}



void vtkGenericRenderWindowInteractor::LeftButtonPressEvent()
{
  vtk::ConvertManagedToNative<::vtkGenericRenderWindowInteractor>(m_instance)->LeftButtonPressEvent();
}



void vtkGenericRenderWindowInteractor::LeftButtonReleaseEvent()
{
  vtk::ConvertManagedToNative<::vtkGenericRenderWindowInteractor>(m_instance)->LeftButtonReleaseEvent();
}



void vtkGenericRenderWindowInteractor::MiddleButtonPressEvent()
{
  vtk::ConvertManagedToNative<::vtkGenericRenderWindowInteractor>(m_instance)->MiddleButtonPressEvent();
}



void vtkGenericRenderWindowInteractor::MiddleButtonReleaseEvent()
{
  vtk::ConvertManagedToNative<::vtkGenericRenderWindowInteractor>(m_instance)->MiddleButtonReleaseEvent();
}



void vtkGenericRenderWindowInteractor::MouseWheelForwardEvent()
{
  vtk::ConvertManagedToNative<::vtkGenericRenderWindowInteractor>(m_instance)->MouseWheelForwardEvent();
}



void vtkGenericRenderWindowInteractor::MouseWheelBackwardEvent()
{
  vtk::ConvertManagedToNative<::vtkGenericRenderWindowInteractor>(m_instance)->MouseWheelBackwardEvent();
}



void vtkGenericRenderWindowInteractor::ExposeEvent()
{
  vtk::ConvertManagedToNative<::vtkGenericRenderWindowInteractor>(m_instance)->ExposeEvent();
}



void vtkGenericRenderWindowInteractor::ConfigureEvent()
{
  vtk::ConvertManagedToNative<::vtkGenericRenderWindowInteractor>(m_instance)->ConfigureEvent();
}



void vtkGenericRenderWindowInteractor::EnterEvent()
{
  vtk::ConvertManagedToNative<::vtkGenericRenderWindowInteractor>(m_instance)->EnterEvent();
}



void vtkGenericRenderWindowInteractor::LeaveEvent()
{
  vtk::ConvertManagedToNative<::vtkGenericRenderWindowInteractor>(m_instance)->LeaveEvent();
}



void vtkGenericRenderWindowInteractor::TimerEvent()
{
  vtk::ConvertManagedToNative<::vtkGenericRenderWindowInteractor>(m_instance)->TimerEvent();
}



void vtkGenericRenderWindowInteractor::KeyPressEvent()
{
  vtk::ConvertManagedToNative<::vtkGenericRenderWindowInteractor>(m_instance)->KeyPressEvent();
}



void vtkGenericRenderWindowInteractor::KeyReleaseEvent()
{
  vtk::ConvertManagedToNative<::vtkGenericRenderWindowInteractor>(m_instance)->KeyReleaseEvent();
}



void vtkGenericRenderWindowInteractor::CharEvent()
{
  vtk::ConvertManagedToNative<::vtkGenericRenderWindowInteractor>(m_instance)->CharEvent();
}



void vtkGenericRenderWindowInteractor::ExitEvent()
{
  vtk::ConvertManagedToNative<::vtkGenericRenderWindowInteractor>(m_instance)->ExitEvent();
}



int vtkGenericRenderWindowInteractor::CreateTimer(int arg0)
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericRenderWindowInteractor>(m_instance)->CreateTimer(arg0);
  return retVal;
}



int vtkGenericRenderWindowInteractor::DestroyTimer()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericRenderWindowInteractor>(m_instance)->DestroyTimer();
  return retVal;
}



  vtkGenericRenderWindowInteractor::vtkGenericRenderWindowInteractor(System::IntPtr native, bool bConst) : vtkRenderWindowInteractor(native, bConst) {}



  vtkGenericRenderWindowInteractor::vtkGenericRenderWindowInteractor(bool donothing) : vtkRenderWindowInteractor(donothing) {}



  vtkGenericRenderWindowInteractor::vtkGenericRenderWindowInteractor() : vtkRenderWindowInteractor(false) {
  this->SetNativePointer(IntPtr(::vtkGenericRenderWindowInteractor::New()));
}



  vtkGenericRenderWindowInteractor::~vtkGenericRenderWindowInteractor() { }





} // end namespace vtkRendering
