

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageRFFTDotNet.h"

// native includes
#include "strstream"
#include "vtkImageRFFT.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageRFFT::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageRFFT>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageRFFT::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageRFFT>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageRFFT^ vtkImageRFFT::NewInstance()
{
  ::vtkImageRFFT* retVal = static_cast<::vtkImageRFFT*>(vtk::ConvertManagedToNative<::vtkImageRFFT>(m_instance)->NewInstance());
  return gcnew vtkImageRFFT(IntPtr(retVal), false);
}



vtkImageRFFT^ vtkImageRFFT::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageRFFT* retVal = static_cast<::vtkImageRFFT*>(::vtkImageRFFT::SafeDownCast(oWrap));
  return gcnew vtkImageRFFT(IntPtr(retVal), false);
}



int vtkImageRFFT::SplitExtent(array<int>^ splitExt, array<int>^ startExt, int num, int total)
{
  pin_ptr<int> splitExtPin = &splitExt[0];
  int* nativesplitExtPin = splitExtPin;
  pin_ptr<int> startExtPin = &startExt[0];
  int* nativestartExtPin = startExtPin;
  int retVal = vtk::ConvertManagedToNative<::vtkImageRFFT>(m_instance)->SplitExtent(nativesplitExtPin, nativestartExtPin, num, total);
  return retVal;
}



  vtkImageRFFT::vtkImageRFFT(System::IntPtr native, bool bConst) : vtkImageFourierFilter(native, bConst) {}



  vtkImageRFFT::vtkImageRFFT(bool donothing) : vtkImageFourierFilter(donothing) {}



  vtkImageRFFT::vtkImageRFFT() : vtkImageFourierFilter(false) {
  this->SetNativePointer(IntPtr(::vtkImageRFFT::New()));
}



  vtkImageRFFT::~vtkImageRFFT() { }





} // end namespace vtkImaging
