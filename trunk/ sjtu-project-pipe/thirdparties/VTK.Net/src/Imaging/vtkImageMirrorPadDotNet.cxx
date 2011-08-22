

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageMirrorPadDotNet.h"

// native includes
#include "strstream"
#include "vtkImageMirrorPad.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageMirrorPad::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageMirrorPad>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageMirrorPad::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageMirrorPad>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageMirrorPad^ vtkImageMirrorPad::NewInstance()
{
  ::vtkImageMirrorPad* retVal = static_cast<::vtkImageMirrorPad*>(vtk::ConvertManagedToNative<::vtkImageMirrorPad>(m_instance)->NewInstance());
  return gcnew vtkImageMirrorPad(IntPtr(retVal), false);
}



vtkImageMirrorPad^ vtkImageMirrorPad::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageMirrorPad* retVal = static_cast<::vtkImageMirrorPad*>(::vtkImageMirrorPad::SafeDownCast(oWrap));
  return gcnew vtkImageMirrorPad(IntPtr(retVal), false);
}



  vtkImageMirrorPad::vtkImageMirrorPad(System::IntPtr native, bool bConst) : vtkImagePadFilter(native, bConst) {}



  vtkImageMirrorPad::vtkImageMirrorPad(bool donothing) : vtkImagePadFilter(donothing) {}



  vtkImageMirrorPad::vtkImageMirrorPad() : vtkImagePadFilter(false) {
  this->SetNativePointer(IntPtr(::vtkImageMirrorPad::New()));
}



  vtkImageMirrorPad::~vtkImageMirrorPad() { }





} // end namespace vtkImaging
