

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageFFTDotNet.h"

// native includes
#include "strstream"
#include "vtkImageFFT.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageFFT::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageFFT>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageFFT::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageFFT>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageFFT^ vtkImageFFT::NewInstance()
{
  ::vtkImageFFT* retVal = static_cast<::vtkImageFFT*>(vtk::ConvertManagedToNative<::vtkImageFFT>(m_instance)->NewInstance());
  return gcnew vtkImageFFT(IntPtr(retVal), false);
}



vtkImageFFT^ vtkImageFFT::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageFFT* retVal = static_cast<::vtkImageFFT*>(::vtkImageFFT::SafeDownCast(oWrap));
  return gcnew vtkImageFFT(IntPtr(retVal), false);
}



int vtkImageFFT::SplitExtent(array<int>^ splitExt, array<int>^ startExt, int num, int total)
{
  pin_ptr<int> splitExtPin = &splitExt[0];
  int* nativesplitExtPin = splitExtPin;
  pin_ptr<int> startExtPin = &startExt[0];
  int* nativestartExtPin = startExtPin;
  int retVal = vtk::ConvertManagedToNative<::vtkImageFFT>(m_instance)->SplitExtent(nativesplitExtPin, nativestartExtPin, num, total);
  return retVal;
}



  vtkImageFFT::vtkImageFFT(System::IntPtr native, bool bConst) : vtkImageFourierFilter(native, bConst) {}



  vtkImageFFT::vtkImageFFT(bool donothing) : vtkImageFourierFilter(donothing) {}



  vtkImageFFT::vtkImageFFT() : vtkImageFourierFilter(false) {
  this->SetNativePointer(IntPtr(::vtkImageFFT::New()));
}



  vtkImageFFT::~vtkImageFFT() { }





} // end namespace vtkImaging
