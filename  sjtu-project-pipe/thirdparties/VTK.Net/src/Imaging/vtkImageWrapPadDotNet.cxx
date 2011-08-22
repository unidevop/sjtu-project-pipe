

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageWrapPadDotNet.h"

// native includes
#include "strstream"
#include "vtkImageWrapPad.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageWrapPad::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageWrapPad>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageWrapPad::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageWrapPad>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageWrapPad^ vtkImageWrapPad::NewInstance()
{
  ::vtkImageWrapPad* retVal = static_cast<::vtkImageWrapPad*>(vtk::ConvertManagedToNative<::vtkImageWrapPad>(m_instance)->NewInstance());
  return gcnew vtkImageWrapPad(IntPtr(retVal), false);
}



vtkImageWrapPad^ vtkImageWrapPad::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageWrapPad* retVal = static_cast<::vtkImageWrapPad*>(::vtkImageWrapPad::SafeDownCast(oWrap));
  return gcnew vtkImageWrapPad(IntPtr(retVal), false);
}



  vtkImageWrapPad::vtkImageWrapPad(System::IntPtr native, bool bConst) : vtkImagePadFilter(native, bConst) {}



  vtkImageWrapPad::vtkImageWrapPad(bool donothing) : vtkImagePadFilter(donothing) {}



  vtkImageWrapPad::vtkImageWrapPad() : vtkImagePadFilter(false) {
  this->SetNativePointer(IntPtr(::vtkImageWrapPad::New()));
}



  vtkImageWrapPad::~vtkImageWrapPad() { }





} // end namespace vtkImaging
