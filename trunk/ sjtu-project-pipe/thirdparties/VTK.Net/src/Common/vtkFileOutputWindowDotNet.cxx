

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkFileOutputWindowDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkFileOutputWindow.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkFileOutputWindow::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFileOutputWindow>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkFileOutputWindow::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkFileOutputWindow>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkFileOutputWindow^ vtkFileOutputWindow::NewInstance()
{
  ::vtkFileOutputWindow* retVal = static_cast<::vtkFileOutputWindow*>(vtk::ConvertManagedToNative<::vtkFileOutputWindow>(m_instance)->NewInstance());
  return gcnew vtkFileOutputWindow(IntPtr(retVal), false);
}



vtkFileOutputWindow^ vtkFileOutputWindow::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkFileOutputWindow* retVal = static_cast<::vtkFileOutputWindow*>(::vtkFileOutputWindow::SafeDownCast(oWrap));
  return gcnew vtkFileOutputWindow(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkFileOutputWindow::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkFileOutputWindow>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkFileOutputWindow::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkFileOutputWindow>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkFileOutputWindow::DisplayText(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkFileOutputWindow>(m_instance)->DisplayText(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkFileOutputWindow::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkFileOutputWindow>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkFileOutputWindow::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFileOutputWindow>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkFileOutputWindow::SetFlush(int arg0)
{
  vtk::ConvertManagedToNative<::vtkFileOutputWindow>(m_instance)->SetFlush(arg0);
}



int vtkFileOutputWindow::GetFlush()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFileOutputWindow>(m_instance)->GetFlush();
  return retVal;
}



void vtkFileOutputWindow::FlushOn()
{
  vtk::ConvertManagedToNative<::vtkFileOutputWindow>(m_instance)->FlushOn();
}



void vtkFileOutputWindow::FlushOff()
{
  vtk::ConvertManagedToNative<::vtkFileOutputWindow>(m_instance)->FlushOff();
}



void vtkFileOutputWindow::SetAppend(int arg0)
{
  vtk::ConvertManagedToNative<::vtkFileOutputWindow>(m_instance)->SetAppend(arg0);
}



int vtkFileOutputWindow::GetAppend()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFileOutputWindow>(m_instance)->GetAppend();
  return retVal;
}



void vtkFileOutputWindow::AppendOn()
{
  vtk::ConvertManagedToNative<::vtkFileOutputWindow>(m_instance)->AppendOn();
}



void vtkFileOutputWindow::AppendOff()
{
  vtk::ConvertManagedToNative<::vtkFileOutputWindow>(m_instance)->AppendOff();
}



  vtkFileOutputWindow::vtkFileOutputWindow(System::IntPtr native, bool bConst) : vtkOutputWindow(native, bConst) {}



  vtkFileOutputWindow::vtkFileOutputWindow(bool donothing) : vtkOutputWindow(donothing) {}



  vtkFileOutputWindow::vtkFileOutputWindow() : vtkOutputWindow(false) {
  this->SetNativePointer(IntPtr(::vtkFileOutputWindow::New()));
}



  vtkFileOutputWindow::~vtkFileOutputWindow() { }





} // end namespace vtkCommon
