

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageFourierCenterDotNet.h"

// native includes
#include "strstream"
#include "vtkImageFourierCenter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageFourierCenter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageFourierCenter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageFourierCenter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageFourierCenter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageFourierCenter^ vtkImageFourierCenter::NewInstance()
{
  ::vtkImageFourierCenter* retVal = static_cast<::vtkImageFourierCenter*>(vtk::ConvertManagedToNative<::vtkImageFourierCenter>(m_instance)->NewInstance());
  return gcnew vtkImageFourierCenter(IntPtr(retVal), false);
}



vtkImageFourierCenter^ vtkImageFourierCenter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageFourierCenter* retVal = static_cast<::vtkImageFourierCenter*>(::vtkImageFourierCenter::SafeDownCast(oWrap));
  return gcnew vtkImageFourierCenter(IntPtr(retVal), false);
}



  vtkImageFourierCenter::vtkImageFourierCenter(System::IntPtr native, bool bConst) : vtkImageDecomposeFilter(native, bConst) {}



  vtkImageFourierCenter::vtkImageFourierCenter(bool donothing) : vtkImageDecomposeFilter(donothing) {}



  vtkImageFourierCenter::vtkImageFourierCenter() : vtkImageDecomposeFilter(false) {
  this->SetNativePointer(IntPtr(::vtkImageFourierCenter::New()));
}



  vtkImageFourierCenter::~vtkImageFourierCenter() { }





} // end namespace vtkImaging
