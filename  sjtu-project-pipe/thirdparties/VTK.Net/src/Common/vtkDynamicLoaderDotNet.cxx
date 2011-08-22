

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDynamicLoaderDotNet.h"

// native includes
#include "strstream"
#include "vtkDynamicLoader.h"

using namespace System;

namespace vtk {

System::String^ vtkDynamicLoader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDynamicLoader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDynamicLoader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDynamicLoader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDynamicLoader^ vtkDynamicLoader::NewInstance()
{
  ::vtkDynamicLoader* retVal = static_cast<::vtkDynamicLoader*>(vtk::ConvertManagedToNative<::vtkDynamicLoader>(m_instance)->NewInstance());
  return gcnew vtkDynamicLoader(IntPtr(retVal), false);
}



vtkDynamicLoader^ vtkDynamicLoader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDynamicLoader* retVal = static_cast<::vtkDynamicLoader*>(::vtkDynamicLoader::SafeDownCast(oWrap));
  return gcnew vtkDynamicLoader(IntPtr(retVal), false);
}



System::String^ vtkDynamicLoader::LibPrefix()
{
  const char* retVal = ::vtkDynamicLoader::LibPrefix();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkDynamicLoader::LibExtension()
{
  const char* retVal = ::vtkDynamicLoader::LibExtension();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkDynamicLoader::LastError()
{
  const char* retVal = ::vtkDynamicLoader::LastError();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkDynamicLoader::vtkDynamicLoader(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkDynamicLoader::vtkDynamicLoader(bool donothing) : vtkObject(donothing) {}



  vtkDynamicLoader::vtkDynamicLoader() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkDynamicLoader::New()));
}



  vtkDynamicLoader::~vtkDynamicLoader() { }





} // end namespace vtkCommon
