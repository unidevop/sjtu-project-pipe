

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageFourierFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkImageFourierFilter.h"

using namespace System;

namespace vtk {

System::String^ vtkImageFourierFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageFourierFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageFourierFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageFourierFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageFourierFilter^ vtkImageFourierFilter::NewInstance()
{
  ::vtkImageFourierFilter* retVal = static_cast<::vtkImageFourierFilter*>(vtk::ConvertManagedToNative<::vtkImageFourierFilter>(m_instance)->NewInstance());
  return gcnew vtkImageFourierFilter(IntPtr(retVal), false);
}



  vtkImageFourierFilter::vtkImageFourierFilter(System::IntPtr native, bool bConst) : vtkImageDecomposeFilter(native, bConst) {}



  vtkImageFourierFilter::vtkImageFourierFilter(bool donothing) : vtkImageDecomposeFilter(donothing) {}



  vtkImageFourierFilter::vtkImageFourierFilter() : vtkImageDecomposeFilter(false) {
  this->SetNativePointer(IntPtr(::vtkImageFourierFilter::New()));
}



  vtkImageFourierFilter::~vtkImageFourierFilter() { }





} // end namespace vtkImaging
