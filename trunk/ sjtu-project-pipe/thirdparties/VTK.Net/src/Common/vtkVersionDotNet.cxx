

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkVersionDotNet.h"

// native includes
#include "strstream"
#include "vtkVersion.h"

using namespace System;

namespace vtk {

System::String^ vtkVersion::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVersion>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkVersion::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkVersion>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkVersion^ vtkVersion::NewInstance()
{
  ::vtkVersion* retVal = static_cast<::vtkVersion*>(vtk::ConvertManagedToNative<::vtkVersion>(m_instance)->NewInstance());
  return gcnew vtkVersion(IntPtr(retVal), false);
}



vtkVersion^ vtkVersion::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkVersion* retVal = static_cast<::vtkVersion*>(::vtkVersion::SafeDownCast(oWrap));
  return gcnew vtkVersion(IntPtr(retVal), false);
}



System::String^ vtkVersion::GetVTKVersion()
{
  const char* retVal = ::vtkVersion::GetVTKVersion();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkVersion::GetVTKMajorVersion()
{
  int retVal = ::vtkVersion::GetVTKMajorVersion();
  return retVal;
}



int vtkVersion::GetVTKMinorVersion()
{
  int retVal = ::vtkVersion::GetVTKMinorVersion();
  return retVal;
}



int vtkVersion::GetVTKBuildVersion()
{
  int retVal = ::vtkVersion::GetVTKBuildVersion();
  return retVal;
}



System::String^ vtkVersion::GetVTKSourceVersion()
{
  const char* retVal = ::vtkVersion::GetVTKSourceVersion();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkVersion::vtkVersion(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkVersion::vtkVersion(bool donothing) : vtkObject(donothing) {}



  vtkVersion::vtkVersion() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkVersion::New()));
}



  vtkVersion::~vtkVersion() { }





} // end namespace vtkCommon
