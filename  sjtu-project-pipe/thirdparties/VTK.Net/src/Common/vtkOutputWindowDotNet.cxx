

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOutputWindowDotNet.h"

// native includes
#include "strstream"
#include "vtkOutputWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkOutputWindow::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOutputWindow>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOutputWindow::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOutputWindow>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOutputWindow^ vtkOutputWindow::NewInstance()
{
  ::vtkOutputWindow* retVal = static_cast<::vtkOutputWindow*>(vtk::ConvertManagedToNative<::vtkOutputWindow>(m_instance)->NewInstance());
  return gcnew vtkOutputWindow(IntPtr(retVal), false);
}



vtkOutputWindow^ vtkOutputWindow::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOutputWindow* retVal = static_cast<::vtkOutputWindow*>(::vtkOutputWindow::SafeDownCast(oWrap));
  return gcnew vtkOutputWindow(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOutputWindow::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOutputWindow>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOutputWindow::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOutputWindow>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkOutputWindow^ vtkOutputWindow::GetInstance()
{
  ::vtkOutputWindow* retVal = static_cast<::vtkOutputWindow*>(::vtkOutputWindow::GetInstance());
  return gcnew vtkOutputWindow(IntPtr(retVal), false);
}



void vtkOutputWindow::SetInstance(vtkOutputWindow^ instance)
{
  ::vtkOutputWindow* instanceWrap = vtk::ConvertManagedToNative<::vtkOutputWindow>(instance->GetNativePointer());
  ::vtkOutputWindow::SetInstance(instanceWrap);
}



void vtkOutputWindow::DisplayText(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkOutputWindow>(m_instance)->DisplayText(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkOutputWindow::DisplayErrorText(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkOutputWindow>(m_instance)->DisplayErrorText(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkOutputWindow::DisplayWarningText(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkOutputWindow>(m_instance)->DisplayWarningText(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkOutputWindow::DisplayGenericWarningText(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkOutputWindow>(m_instance)->DisplayGenericWarningText(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkOutputWindow::DisplayDebugText(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkOutputWindow>(m_instance)->DisplayDebugText(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkOutputWindow::PromptUserOn()
{
  vtk::ConvertManagedToNative<::vtkOutputWindow>(m_instance)->PromptUserOn();
}



void vtkOutputWindow::PromptUserOff()
{
  vtk::ConvertManagedToNative<::vtkOutputWindow>(m_instance)->PromptUserOff();
}



void vtkOutputWindow::SetPromptUser(int arg0)
{
  vtk::ConvertManagedToNative<::vtkOutputWindow>(m_instance)->SetPromptUser(arg0);
}



  vtkOutputWindow::vtkOutputWindow(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkOutputWindow::vtkOutputWindow(bool donothing) : vtkObject(donothing) {}



  vtkOutputWindow::vtkOutputWindow() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkOutputWindow::New()));
}



  vtkOutputWindow::~vtkOutputWindow() { }





} // end namespace vtkCommon
