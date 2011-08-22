

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkWin32RenderWindowInteractorDotNet.h"

// native includes
#include "strstream"
#include "vtkWin32RenderWindowInteractor.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkWin32RenderWindowInteractor::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkWin32RenderWindowInteractor>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkWin32RenderWindowInteractor::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkWin32RenderWindowInteractor>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkWin32RenderWindowInteractor^ vtkWin32RenderWindowInteractor::NewInstance()
{
  ::vtkWin32RenderWindowInteractor* retVal = static_cast<::vtkWin32RenderWindowInteractor*>(vtk::ConvertManagedToNative<::vtkWin32RenderWindowInteractor>(m_instance)->NewInstance());
  return gcnew vtkWin32RenderWindowInteractor(IntPtr(retVal), false);
}



vtkWin32RenderWindowInteractor^ vtkWin32RenderWindowInteractor::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkWin32RenderWindowInteractor* retVal = static_cast<::vtkWin32RenderWindowInteractor*>(::vtkWin32RenderWindowInteractor::SafeDownCast(oWrap));
  return gcnew vtkWin32RenderWindowInteractor(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkWin32RenderWindowInteractor::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkWin32RenderWindowInteractor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkWin32RenderWindowInteractor::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkWin32RenderWindowInteractor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkWin32RenderWindowInteractor::Initialize()
{
  vtk::ConvertManagedToNative<::vtkWin32RenderWindowInteractor>(m_instance)->Initialize();
}



void vtkWin32RenderWindowInteractor::Enable()
{
  vtk::ConvertManagedToNative<::vtkWin32RenderWindowInteractor>(m_instance)->Enable();
}



void vtkWin32RenderWindowInteractor::Disable()
{
  vtk::ConvertManagedToNative<::vtkWin32RenderWindowInteractor>(m_instance)->Disable();
}



void vtkWin32RenderWindowInteractor::Start()
{
  vtk::ConvertManagedToNative<::vtkWin32RenderWindowInteractor>(m_instance)->Start();
}



void vtkWin32RenderWindowInteractor::SetInstallMessageProc(int arg0)
{
  vtk::ConvertManagedToNative<::vtkWin32RenderWindowInteractor>(m_instance)->SetInstallMessageProc(arg0);
}



int vtkWin32RenderWindowInteractor::GetInstallMessageProc()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWin32RenderWindowInteractor>(m_instance)->GetInstallMessageProc();
  return retVal;
}



void vtkWin32RenderWindowInteractor::InstallMessageProcOn()
{
  vtk::ConvertManagedToNative<::vtkWin32RenderWindowInteractor>(m_instance)->InstallMessageProcOn();
}



void vtkWin32RenderWindowInteractor::InstallMessageProcOff()
{
  vtk::ConvertManagedToNative<::vtkWin32RenderWindowInteractor>(m_instance)->InstallMessageProcOff();
}



void vtkWin32RenderWindowInteractor::TerminateApp()
{
  vtk::ConvertManagedToNative<::vtkWin32RenderWindowInteractor>(m_instance)->TerminateApp();
}



int vtkWin32RenderWindowInteractor::CreateTimer(int timertype)
{
  int retVal = vtk::ConvertManagedToNative<::vtkWin32RenderWindowInteractor>(m_instance)->CreateTimer(timertype);
  return retVal;
}



int vtkWin32RenderWindowInteractor::DestroyTimer()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWin32RenderWindowInteractor>(m_instance)->DestroyTimer();
  return retVal;
}



void vtkWin32RenderWindowInteractor::ExitCallback()
{
  vtk::ConvertManagedToNative<::vtkWin32RenderWindowInteractor>(m_instance)->ExitCallback();
}



  vtkWin32RenderWindowInteractor::vtkWin32RenderWindowInteractor(System::IntPtr native, bool bConst) : vtkRenderWindowInteractor(native, bConst) {}



  vtkWin32RenderWindowInteractor::vtkWin32RenderWindowInteractor(bool donothing) : vtkRenderWindowInteractor(donothing) {}



  vtkWin32RenderWindowInteractor::vtkWin32RenderWindowInteractor() : vtkRenderWindowInteractor(false) {
  this->SetNativePointer(IntPtr(::vtkWin32RenderWindowInteractor::New()));
}



  vtkWin32RenderWindowInteractor::~vtkWin32RenderWindowInteractor() { }





} // end namespace vtkRendering
