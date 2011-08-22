

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInteractorStyleSwitchDotNet.h"
#include "vtkRenderWindowInteractorDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkInteractorStyleSwitch.h"
#include "vtkObject.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkRenderer.h"

using namespace System;

namespace vtk {

System::String^ vtkInteractorStyleSwitch::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleSwitch>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInteractorStyleSwitch::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleSwitch>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInteractorStyleSwitch^ vtkInteractorStyleSwitch::NewInstance()
{
  ::vtkInteractorStyleSwitch* retVal = static_cast<::vtkInteractorStyleSwitch*>(vtk::ConvertManagedToNative<::vtkInteractorStyleSwitch>(m_instance)->NewInstance());
  return gcnew vtkInteractorStyleSwitch(IntPtr(retVal), false);
}



vtkInteractorStyleSwitch^ vtkInteractorStyleSwitch::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkInteractorStyleSwitch* retVal = static_cast<::vtkInteractorStyleSwitch*>(::vtkInteractorStyleSwitch::SafeDownCast(oWrap));
  return gcnew vtkInteractorStyleSwitch(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInteractorStyleSwitch::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInteractorStyleSwitch>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInteractorStyleSwitch::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInteractorStyleSwitch>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInteractorStyleSwitch::SetInteractor(vtkRenderWindowInteractor^ iren)
{
  ::vtkRenderWindowInteractor* irenWrap = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(iren->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInteractorStyleSwitch>(m_instance)->SetInteractor(irenWrap);
}



void vtkInteractorStyleSwitch::SetAutoAdjustCameraClippingRange(int value)
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleSwitch>(m_instance)->SetAutoAdjustCameraClippingRange(value);
}



vtkInteractorStyle^ vtkInteractorStyleSwitch::GetCurrentStyle()
{
  ::vtkInteractorStyle* retVal = static_cast<::vtkInteractorStyle*>(vtk::ConvertManagedToNative<::vtkInteractorStyleSwitch>(m_instance)->GetCurrentStyle());
  return gcnew vtkInteractorStyle(IntPtr(retVal), false);
}



void vtkInteractorStyleSwitch::SetCurrentStyleToJoystickActor()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleSwitch>(m_instance)->SetCurrentStyleToJoystickActor();
}



void vtkInteractorStyleSwitch::SetCurrentStyleToJoystickCamera()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleSwitch>(m_instance)->SetCurrentStyleToJoystickCamera();
}



void vtkInteractorStyleSwitch::SetCurrentStyleToTrackballActor()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleSwitch>(m_instance)->SetCurrentStyleToTrackballActor();
}



void vtkInteractorStyleSwitch::SetCurrentStyleToTrackballCamera()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleSwitch>(m_instance)->SetCurrentStyleToTrackballCamera();
}



void vtkInteractorStyleSwitch::OnChar()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleSwitch>(m_instance)->OnChar();
}



void vtkInteractorStyleSwitch::SetDefaultRenderer(vtkRenderer^ arg0)
{
  ::vtkRenderer* arg0Wrap = vtk::ConvertManagedToNative<::vtkRenderer>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInteractorStyleSwitch>(m_instance)->SetDefaultRenderer(arg0Wrap);
}



void vtkInteractorStyleSwitch::SetCurrentRenderer(vtkRenderer^ arg0)
{
  ::vtkRenderer* arg0Wrap = vtk::ConvertManagedToNative<::vtkRenderer>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInteractorStyleSwitch>(m_instance)->SetCurrentRenderer(arg0Wrap);
}



  vtkInteractorStyleSwitch::vtkInteractorStyleSwitch(System::IntPtr native, bool bConst) : vtkInteractorStyle(native, bConst) {}



  vtkInteractorStyleSwitch::vtkInteractorStyleSwitch(bool donothing) : vtkInteractorStyle(donothing) {}



  vtkInteractorStyleSwitch::vtkInteractorStyleSwitch() : vtkInteractorStyle(false) {
  this->SetNativePointer(IntPtr(::vtkInteractorStyleSwitch::New()));
}



  vtkInteractorStyleSwitch::~vtkInteractorStyleSwitch() { }





} // end namespace vtkRendering
