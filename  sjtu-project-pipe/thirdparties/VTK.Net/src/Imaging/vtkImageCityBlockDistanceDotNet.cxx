

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageCityBlockDistanceDotNet.h"

// native includes
#include "strstream"
#include "vtkImageCityBlockDistance.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageCityBlockDistance::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageCityBlockDistance>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageCityBlockDistance::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageCityBlockDistance>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageCityBlockDistance^ vtkImageCityBlockDistance::NewInstance()
{
  ::vtkImageCityBlockDistance* retVal = static_cast<::vtkImageCityBlockDistance*>(vtk::ConvertManagedToNative<::vtkImageCityBlockDistance>(m_instance)->NewInstance());
  return gcnew vtkImageCityBlockDistance(IntPtr(retVal), false);
}



vtkImageCityBlockDistance^ vtkImageCityBlockDistance::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageCityBlockDistance* retVal = static_cast<::vtkImageCityBlockDistance*>(::vtkImageCityBlockDistance::SafeDownCast(oWrap));
  return gcnew vtkImageCityBlockDistance(IntPtr(retVal), false);
}



  vtkImageCityBlockDistance::vtkImageCityBlockDistance(System::IntPtr native, bool bConst) : vtkImageDecomposeFilter(native, bConst) {}



  vtkImageCityBlockDistance::vtkImageCityBlockDistance(bool donothing) : vtkImageDecomposeFilter(donothing) {}



  vtkImageCityBlockDistance::vtkImageCityBlockDistance() : vtkImageDecomposeFilter(false) {
  this->SetNativePointer(IntPtr(::vtkImageCityBlockDistance::New()));
}



  vtkImageCityBlockDistance::~vtkImageCityBlockDistance() { }





} // end namespace vtkImaging
