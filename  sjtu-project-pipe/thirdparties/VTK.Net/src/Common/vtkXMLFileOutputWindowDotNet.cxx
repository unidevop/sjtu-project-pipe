

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLFileOutputWindowDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLFileOutputWindow.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLFileOutputWindow::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLFileOutputWindow>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLFileOutputWindow::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLFileOutputWindow>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLFileOutputWindow^ vtkXMLFileOutputWindow::NewInstance()
{
  ::vtkXMLFileOutputWindow* retVal = static_cast<::vtkXMLFileOutputWindow*>(vtk::ConvertManagedToNative<::vtkXMLFileOutputWindow>(m_instance)->NewInstance());
  return gcnew vtkXMLFileOutputWindow(IntPtr(retVal), false);
}



vtkXMLFileOutputWindow^ vtkXMLFileOutputWindow::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLFileOutputWindow* retVal = static_cast<::vtkXMLFileOutputWindow*>(::vtkXMLFileOutputWindow::SafeDownCast(oWrap));
  return gcnew vtkXMLFileOutputWindow(IntPtr(retVal), false);
}



void vtkXMLFileOutputWindow::DisplayText(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkXMLFileOutputWindow>(m_instance)->DisplayText(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkXMLFileOutputWindow::DisplayErrorText(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkXMLFileOutputWindow>(m_instance)->DisplayErrorText(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkXMLFileOutputWindow::DisplayWarningText(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkXMLFileOutputWindow>(m_instance)->DisplayWarningText(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkXMLFileOutputWindow::DisplayGenericWarningText(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkXMLFileOutputWindow>(m_instance)->DisplayGenericWarningText(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkXMLFileOutputWindow::DisplayDebugText(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkXMLFileOutputWindow>(m_instance)->DisplayDebugText(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkXMLFileOutputWindow::DisplayTag(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkXMLFileOutputWindow>(m_instance)->DisplayTag(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



  vtkXMLFileOutputWindow::vtkXMLFileOutputWindow(System::IntPtr native, bool bConst) : vtkFileOutputWindow(native, bConst) {}



  vtkXMLFileOutputWindow::vtkXMLFileOutputWindow(bool donothing) : vtkFileOutputWindow(donothing) {}



  vtkXMLFileOutputWindow::vtkXMLFileOutputWindow() : vtkFileOutputWindow(false) {
  this->SetNativePointer(IntPtr(::vtkXMLFileOutputWindow::New()));
}



  vtkXMLFileOutputWindow::~vtkXMLFileOutputWindow() { }





} // end namespace vtkCommon
