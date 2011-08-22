

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageMapToRGBADotNet.h"

// native includes
#include "strstream"
#include "vtkImageMapToRGBA.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageMapToRGBA::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageMapToRGBA>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageMapToRGBA::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageMapToRGBA>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageMapToRGBA^ vtkImageMapToRGBA::NewInstance()
{
  ::vtkImageMapToRGBA* retVal = static_cast<::vtkImageMapToRGBA*>(vtk::ConvertManagedToNative<::vtkImageMapToRGBA>(m_instance)->NewInstance());
  return gcnew vtkImageMapToRGBA(IntPtr(retVal), false);
}



vtkImageMapToRGBA^ vtkImageMapToRGBA::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageMapToRGBA* retVal = static_cast<::vtkImageMapToRGBA*>(::vtkImageMapToRGBA::SafeDownCast(oWrap));
  return gcnew vtkImageMapToRGBA(IntPtr(retVal), false);
}



  vtkImageMapToRGBA::vtkImageMapToRGBA(System::IntPtr native, bool bConst) : vtkImageMapToColors(native, bConst) {}



  vtkImageMapToRGBA::vtkImageMapToRGBA(bool donothing) : vtkImageMapToColors(donothing) {}



  vtkImageMapToRGBA::vtkImageMapToRGBA() : vtkImageMapToColors(false) {
  this->SetNativePointer(IntPtr(::vtkImageMapToRGBA::New()));
}



  vtkImageMapToRGBA::~vtkImageMapToRGBA() { }





} // end namespace vtkImaging
