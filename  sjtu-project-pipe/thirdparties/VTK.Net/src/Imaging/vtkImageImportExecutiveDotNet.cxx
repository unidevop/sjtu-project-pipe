

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageImportExecutiveDotNet.h"

// native includes
#include "strstream"
#include "vtkImageImportExecutive.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageImportExecutive::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageImportExecutive>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageImportExecutive::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageImportExecutive>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageImportExecutive^ vtkImageImportExecutive::NewInstance()
{
  ::vtkImageImportExecutive* retVal = static_cast<::vtkImageImportExecutive*>(vtk::ConvertManagedToNative<::vtkImageImportExecutive>(m_instance)->NewInstance());
  return gcnew vtkImageImportExecutive(IntPtr(retVal), false);
}



vtkImageImportExecutive^ vtkImageImportExecutive::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageImportExecutive* retVal = static_cast<::vtkImageImportExecutive*>(::vtkImageImportExecutive::SafeDownCast(oWrap));
  return gcnew vtkImageImportExecutive(IntPtr(retVal), false);
}



  vtkImageImportExecutive::vtkImageImportExecutive(System::IntPtr native, bool bConst) : vtkStreamingDemandDrivenPipeline(native, bConst) {}



  vtkImageImportExecutive::vtkImageImportExecutive(bool donothing) : vtkStreamingDemandDrivenPipeline(donothing) {}



  vtkImageImportExecutive::vtkImageImportExecutive() : vtkStreamingDemandDrivenPipeline(false) {
  this->SetNativePointer(IntPtr(::vtkImageImportExecutive::New()));
}



  vtkImageImportExecutive::~vtkImageImportExecutive() { }





} // end namespace vtkImaging
