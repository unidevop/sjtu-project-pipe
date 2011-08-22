

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageDivergenceDotNet.h"

// native includes
#include "strstream"
#include "vtkImageDivergence.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageDivergence::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageDivergence>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageDivergence::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageDivergence>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageDivergence^ vtkImageDivergence::NewInstance()
{
  ::vtkImageDivergence* retVal = static_cast<::vtkImageDivergence*>(vtk::ConvertManagedToNative<::vtkImageDivergence>(m_instance)->NewInstance());
  return gcnew vtkImageDivergence(IntPtr(retVal), false);
}



vtkImageDivergence^ vtkImageDivergence::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageDivergence* retVal = static_cast<::vtkImageDivergence*>(::vtkImageDivergence::SafeDownCast(oWrap));
  return gcnew vtkImageDivergence(IntPtr(retVal), false);
}



  vtkImageDivergence::vtkImageDivergence(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageDivergence::vtkImageDivergence(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageDivergence::vtkImageDivergence() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageDivergence::New()));
}



  vtkImageDivergence::~vtkImageDivergence() { }





} // end namespace vtkImaging
