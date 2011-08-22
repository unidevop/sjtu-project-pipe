

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkWin32OutputWindowDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkWin32OutputWindow.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkWin32OutputWindow::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkWin32OutputWindow>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkWin32OutputWindow::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkWin32OutputWindow>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkWin32OutputWindow^ vtkWin32OutputWindow::NewInstance()
{
  ::vtkWin32OutputWindow* retVal = static_cast<::vtkWin32OutputWindow*>(vtk::ConvertManagedToNative<::vtkWin32OutputWindow>(m_instance)->NewInstance());
  return gcnew vtkWin32OutputWindow(IntPtr(retVal), false);
}



vtkWin32OutputWindow^ vtkWin32OutputWindow::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkWin32OutputWindow* retVal = static_cast<::vtkWin32OutputWindow*>(::vtkWin32OutputWindow::SafeDownCast(oWrap));
  return gcnew vtkWin32OutputWindow(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkWin32OutputWindow::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkWin32OutputWindow>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkWin32OutputWindow::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkWin32OutputWindow>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkWin32OutputWindow::DisplayText(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkWin32OutputWindow>(m_instance)->DisplayText(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



  vtkWin32OutputWindow::vtkWin32OutputWindow(System::IntPtr native, bool bConst) : vtkOutputWindow(native, bConst) {}



  vtkWin32OutputWindow::vtkWin32OutputWindow(bool donothing) : vtkOutputWindow(donothing) {}



  vtkWin32OutputWindow::vtkWin32OutputWindow() : vtkOutputWindow(false) {
  this->SetNativePointer(IntPtr(::vtkWin32OutputWindow::New()));
}



  vtkWin32OutputWindow::~vtkWin32OutputWindow() { }





} // end namespace vtkCommon
