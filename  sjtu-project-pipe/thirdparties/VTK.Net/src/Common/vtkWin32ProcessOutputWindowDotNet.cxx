

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkWin32ProcessOutputWindowDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkWin32ProcessOutputWindow.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkWin32ProcessOutputWindow::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkWin32ProcessOutputWindow>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkWin32ProcessOutputWindow::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkWin32ProcessOutputWindow>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkWin32ProcessOutputWindow^ vtkWin32ProcessOutputWindow::NewInstance()
{
  ::vtkWin32ProcessOutputWindow* retVal = static_cast<::vtkWin32ProcessOutputWindow*>(vtk::ConvertManagedToNative<::vtkWin32ProcessOutputWindow>(m_instance)->NewInstance());
  return gcnew vtkWin32ProcessOutputWindow(IntPtr(retVal), false);
}



vtkWin32ProcessOutputWindow^ vtkWin32ProcessOutputWindow::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkWin32ProcessOutputWindow* retVal = static_cast<::vtkWin32ProcessOutputWindow*>(::vtkWin32ProcessOutputWindow::SafeDownCast(oWrap));
  return gcnew vtkWin32ProcessOutputWindow(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkWin32ProcessOutputWindow::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkWin32ProcessOutputWindow>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkWin32ProcessOutputWindow::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkWin32ProcessOutputWindow>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkWin32ProcessOutputWindow::DisplayText(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkWin32ProcessOutputWindow>(m_instance)->DisplayText(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



  vtkWin32ProcessOutputWindow::vtkWin32ProcessOutputWindow(System::IntPtr native, bool bConst) : vtkOutputWindow(native, bConst) {}



  vtkWin32ProcessOutputWindow::vtkWin32ProcessOutputWindow(bool donothing) : vtkOutputWindow(donothing) {}



  vtkWin32ProcessOutputWindow::vtkWin32ProcessOutputWindow() : vtkOutputWindow(false) {
  this->SetNativePointer(IntPtr(::vtkWin32ProcessOutputWindow::New()));
}



  vtkWin32ProcessOutputWindow::~vtkWin32ProcessOutputWindow() { }





} // end namespace vtkCommon
