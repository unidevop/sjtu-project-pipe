

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageLuminanceDotNet.h"

// native includes
#include "strstream"
#include "vtkImageLuminance.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageLuminance::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageLuminance>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageLuminance::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageLuminance>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageLuminance^ vtkImageLuminance::NewInstance()
{
  ::vtkImageLuminance* retVal = static_cast<::vtkImageLuminance*>(vtk::ConvertManagedToNative<::vtkImageLuminance>(m_instance)->NewInstance());
  return gcnew vtkImageLuminance(IntPtr(retVal), false);
}



vtkImageLuminance^ vtkImageLuminance::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageLuminance* retVal = static_cast<::vtkImageLuminance*>(::vtkImageLuminance::SafeDownCast(oWrap));
  return gcnew vtkImageLuminance(IntPtr(retVal), false);
}



  vtkImageLuminance::vtkImageLuminance(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageLuminance::vtkImageLuminance(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageLuminance::vtkImageLuminance() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageLuminance::New()));
}



  vtkImageLuminance::~vtkImageLuminance() { }





} // end namespace vtkImaging
