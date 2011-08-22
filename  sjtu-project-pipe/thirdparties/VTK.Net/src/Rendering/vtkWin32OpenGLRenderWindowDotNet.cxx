

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkWin32OpenGLRenderWindowDotNet.h"

// native includes
#include "strstream"
#include "vtkWin32OpenGLRenderWindow.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkWin32OpenGLRenderWindow::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkWin32OpenGLRenderWindow::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkWin32OpenGLRenderWindow^ vtkWin32OpenGLRenderWindow::NewInstance()
{
  ::vtkWin32OpenGLRenderWindow* retVal = static_cast<::vtkWin32OpenGLRenderWindow*>(vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->NewInstance());
  return gcnew vtkWin32OpenGLRenderWindow(IntPtr(retVal), false);
}



vtkWin32OpenGLRenderWindow^ vtkWin32OpenGLRenderWindow::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkWin32OpenGLRenderWindow* retVal = static_cast<::vtkWin32OpenGLRenderWindow*>(::vtkWin32OpenGLRenderWindow::SafeDownCast(oWrap));
  return gcnew vtkWin32OpenGLRenderWindow(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkWin32OpenGLRenderWindow::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkWin32OpenGLRenderWindow::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkWin32OpenGLRenderWindow::Start()
{
  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->Start();
}



void vtkWin32OpenGLRenderWindow::Frame()
{
  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->Frame();
}



void vtkWin32OpenGLRenderWindow::WindowInitialize()
{
  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->WindowInitialize();
}



void vtkWin32OpenGLRenderWindow::Initialize()
{
  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->Initialize();
}



void vtkWin32OpenGLRenderWindow::FinalizeWrap()
{
  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->Finalize();
}



void vtkWin32OpenGLRenderWindow::SetFullScreen(int arg0)
{
  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->SetFullScreen(arg0);
}



void vtkWin32OpenGLRenderWindow::WindowRemap()
{
  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->WindowRemap();
}



void vtkWin32OpenGLRenderWindow::PrefFullScreen()
{
  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->PrefFullScreen();
}



void vtkWin32OpenGLRenderWindow::SetSize(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->SetSize(arg0, arg1);
}



void vtkWin32OpenGLRenderWindow::SetSize(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->SetSize(nativeaPin);
}



void vtkWin32OpenGLRenderWindow::SetPosition(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->SetPosition(arg0, arg1);
}



void vtkWin32OpenGLRenderWindow::SetPosition(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->SetPosition(nativeaPin);
}



void vtkWin32OpenGLRenderWindow::SetWindowName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->SetWindowName(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkWin32OpenGLRenderWindow::SetWindowInfo(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->SetWindowInfo(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkWin32OpenGLRenderWindow::SetNextWindowInfo(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->SetNextWindowInfo(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkWin32OpenGLRenderWindow::SetParentInfo(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->SetParentInfo(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkWin32OpenGLRenderWindow::SetStereoCapableWindow(int capable)
{
  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->SetStereoCapableWindow(capable);
}



void vtkWin32OpenGLRenderWindow::MakeCurrent()
{
  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->MakeCurrent();
}



System::String^ vtkWin32OpenGLRenderWindow::ReportCapabilities()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->ReportCapabilities();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkWin32OpenGLRenderWindow::SupportsOpenGL()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->SupportsOpenGL();
  return retVal;
}



int vtkWin32OpenGLRenderWindow::IsDirect()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->IsDirect();
  return retVal;
}



int vtkWin32OpenGLRenderWindow::GetEventPending()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->GetEventPending();
  return retVal;
}



void vtkWin32OpenGLRenderWindow::ResumeScreenRendering()
{
  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->ResumeScreenRendering();
}



void vtkWin32OpenGLRenderWindow::Clean()
{
  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->Clean();
}



void vtkWin32OpenGLRenderWindow::HideCursor()
{
  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->HideCursor();
}



void vtkWin32OpenGLRenderWindow::ShowCursor()
{
  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->ShowCursor();
}



void vtkWin32OpenGLRenderWindow::SetCursorPosition(int x, int y)
{
  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->SetCursorPosition(x, y);
}



void vtkWin32OpenGLRenderWindow::SetCurrentCursor(int arg0)
{
  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->SetCurrentCursor(arg0);
}



void vtkWin32OpenGLRenderWindow::SetOffScreenRendering(int offscreen)
{
  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->SetOffScreenRendering(offscreen);
}



void vtkWin32OpenGLRenderWindow::SetWindowId(System::IntPtr hWindow) {
  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->SetWindowId(
    hWindow.ToPointer());
}

void vtkWin32OpenGLRenderWindow::SetParentId(System::IntPtr hParent) {
  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->SetParentId(
    hParent.ToPointer());
}



  vtkWin32OpenGLRenderWindow::vtkWin32OpenGLRenderWindow(System::IntPtr native, bool bConst) : vtkOpenGLRenderWindow(native, bConst) {}



  vtkWin32OpenGLRenderWindow::vtkWin32OpenGLRenderWindow(bool donothing) : vtkOpenGLRenderWindow(donothing) {}



  vtkWin32OpenGLRenderWindow::vtkWin32OpenGLRenderWindow() : vtkOpenGLRenderWindow(false) {
  this->SetNativePointer(IntPtr(::vtkWin32OpenGLRenderWindow::New()));
}



  vtkWin32OpenGLRenderWindow::~vtkWin32OpenGLRenderWindow() { }





} // end namespace vtkRendering
