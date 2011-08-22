

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageMagnitudeDotNet.h"

// native includes
#include "strstream"
#include "vtkImageMagnitude.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageMagnitude::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageMagnitude>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageMagnitude::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageMagnitude>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageMagnitude^ vtkImageMagnitude::NewInstance()
{
  ::vtkImageMagnitude* retVal = static_cast<::vtkImageMagnitude*>(vtk::ConvertManagedToNative<::vtkImageMagnitude>(m_instance)->NewInstance());
  return gcnew vtkImageMagnitude(IntPtr(retVal), false);
}



vtkImageMagnitude^ vtkImageMagnitude::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageMagnitude* retVal = static_cast<::vtkImageMagnitude*>(::vtkImageMagnitude::SafeDownCast(oWrap));
  return gcnew vtkImageMagnitude(IntPtr(retVal), false);
}



  vtkImageMagnitude::vtkImageMagnitude(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageMagnitude::vtkImageMagnitude(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageMagnitude::vtkImageMagnitude() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageMagnitude::New()));
}



  vtkImageMagnitude::~vtkImageMagnitude() { }





} // end namespace vtkImaging
