

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageNormalizeDotNet.h"

// native includes
#include "strstream"
#include "vtkImageNormalize.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageNormalize::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageNormalize>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageNormalize::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageNormalize>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageNormalize^ vtkImageNormalize::NewInstance()
{
  ::vtkImageNormalize* retVal = static_cast<::vtkImageNormalize*>(vtk::ConvertManagedToNative<::vtkImageNormalize>(m_instance)->NewInstance());
  return gcnew vtkImageNormalize(IntPtr(retVal), false);
}



vtkImageNormalize^ vtkImageNormalize::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageNormalize* retVal = static_cast<::vtkImageNormalize*>(::vtkImageNormalize::SafeDownCast(oWrap));
  return gcnew vtkImageNormalize(IntPtr(retVal), false);
}



  vtkImageNormalize::vtkImageNormalize(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageNormalize::vtkImageNormalize(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageNormalize::vtkImageNormalize() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageNormalize::New()));
}



  vtkImageNormalize::~vtkImageNormalize() { }





} // end namespace vtkImaging
