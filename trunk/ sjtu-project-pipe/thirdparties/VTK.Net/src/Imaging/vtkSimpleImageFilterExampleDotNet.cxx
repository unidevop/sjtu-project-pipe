

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSimpleImageFilterExampleDotNet.h"

// native includes
#include "strstream"
#include "vtkSimpleImageFilterExample.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkSimpleImageFilterExample::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSimpleImageFilterExample>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSimpleImageFilterExample::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSimpleImageFilterExample>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSimpleImageFilterExample^ vtkSimpleImageFilterExample::NewInstance()
{
  ::vtkSimpleImageFilterExample* retVal = static_cast<::vtkSimpleImageFilterExample*>(vtk::ConvertManagedToNative<::vtkSimpleImageFilterExample>(m_instance)->NewInstance());
  return gcnew vtkSimpleImageFilterExample(IntPtr(retVal), false);
}



vtkSimpleImageFilterExample^ vtkSimpleImageFilterExample::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSimpleImageFilterExample* retVal = static_cast<::vtkSimpleImageFilterExample*>(::vtkSimpleImageFilterExample::SafeDownCast(oWrap));
  return gcnew vtkSimpleImageFilterExample(IntPtr(retVal), false);
}



  vtkSimpleImageFilterExample::vtkSimpleImageFilterExample(System::IntPtr native, bool bConst) : vtkSimpleImageToImageFilter(native, bConst) {}



  vtkSimpleImageFilterExample::vtkSimpleImageFilterExample(bool donothing) : vtkSimpleImageToImageFilter(donothing) {}



  vtkSimpleImageFilterExample::vtkSimpleImageFilterExample() : vtkSimpleImageToImageFilter(false) {
  this->SetNativePointer(IntPtr(::vtkSimpleImageFilterExample::New()));
}



  vtkSimpleImageFilterExample::~vtkSimpleImageFilterExample() { }





} // end namespace vtkImaging
