

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOpenGLExtensionManagerDotNet.h"
#include "vtkRenderWindowDotNet.h"

// native includes
#include "strstream"
#include "vtkOpenGLExtensionManager.h"
#include "vtkRenderWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkOpenGLExtensionManager::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOpenGLExtensionManager>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOpenGLExtensionManager::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLExtensionManager>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOpenGLExtensionManager^ vtkOpenGLExtensionManager::NewInstance()
{
  ::vtkOpenGLExtensionManager* retVal = static_cast<::vtkOpenGLExtensionManager*>(vtk::ConvertManagedToNative<::vtkOpenGLExtensionManager>(m_instance)->NewInstance());
  return gcnew vtkOpenGLExtensionManager(IntPtr(retVal), false);
}



vtkOpenGLExtensionManager^ vtkOpenGLExtensionManager::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOpenGLExtensionManager* retVal = static_cast<::vtkOpenGLExtensionManager*>(::vtkOpenGLExtensionManager::SafeDownCast(oWrap));
  return gcnew vtkOpenGLExtensionManager(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOpenGLExtensionManager::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOpenGLExtensionManager>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOpenGLExtensionManager::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOpenGLExtensionManager>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkRenderWindow^ vtkOpenGLExtensionManager::GetRenderWindow()
{
  ::vtkRenderWindow* retVal = static_cast<::vtkRenderWindow*>(vtk::ConvertManagedToNative<::vtkOpenGLExtensionManager>(m_instance)->GetRenderWindow());
  return gcnew vtkRenderWindow(IntPtr(retVal), false);
}



void vtkOpenGLExtensionManager::SetRenderWindow(vtkRenderWindow^ renwin)
{
  ::vtkRenderWindow* renwinWrap = vtk::ConvertManagedToNative<::vtkRenderWindow>(renwin->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkOpenGLExtensionManager>(m_instance)->SetRenderWindow(renwinWrap);
}



void vtkOpenGLExtensionManager::Update()
{
  vtk::ConvertManagedToNative<::vtkOpenGLExtensionManager>(m_instance)->Update();
}



System::String^ vtkOpenGLExtensionManager::GetExtensionsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOpenGLExtensionManager>(m_instance)->GetExtensionsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOpenGLExtensionManager::ExtensionSupported(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLExtensionManager>(m_instance)->ExtensionSupported(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



void vtkOpenGLExtensionManager::LoadExtension(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkOpenGLExtensionManager>(m_instance)->LoadExtension(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



  vtkOpenGLExtensionManager::vtkOpenGLExtensionManager(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkOpenGLExtensionManager::vtkOpenGLExtensionManager(bool donothing) : vtkObject(donothing) {}



  vtkOpenGLExtensionManager::vtkOpenGLExtensionManager() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkOpenGLExtensionManager::New()));
}



  vtkOpenGLExtensionManager::~vtkOpenGLExtensionManager() { }





} // end namespace vtkRendering
