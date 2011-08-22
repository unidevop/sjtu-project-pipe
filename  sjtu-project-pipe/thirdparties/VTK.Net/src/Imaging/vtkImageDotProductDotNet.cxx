

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageDotProductDotNet.h"

// native includes
#include "strstream"
#include "vtkImageDotProduct.h"
#include "vtkDataObject.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageDotProduct::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageDotProduct>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageDotProduct::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageDotProduct>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageDotProduct^ vtkImageDotProduct::NewInstance()
{
  ::vtkImageDotProduct* retVal = static_cast<::vtkImageDotProduct*>(vtk::ConvertManagedToNative<::vtkImageDotProduct>(m_instance)->NewInstance());
  return gcnew vtkImageDotProduct(IntPtr(retVal), false);
}



vtkImageDotProduct^ vtkImageDotProduct::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageDotProduct* retVal = static_cast<::vtkImageDotProduct*>(::vtkImageDotProduct::SafeDownCast(oWrap));
  return gcnew vtkImageDotProduct(IntPtr(retVal), false);
}



void vtkImageDotProduct::SetInput1(vtkDataObject^ in)
{
  ::vtkDataObject* inWrap = vtk::ConvertManagedToNative<::vtkDataObject>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageDotProduct>(m_instance)->SetInput1(inWrap);
}



void vtkImageDotProduct::SetInput2(vtkDataObject^ in)
{
  ::vtkDataObject* inWrap = vtk::ConvertManagedToNative<::vtkDataObject>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageDotProduct>(m_instance)->SetInput2(inWrap);
}



  vtkImageDotProduct::vtkImageDotProduct(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageDotProduct::vtkImageDotProduct(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageDotProduct::vtkImageDotProduct() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageDotProduct::New()));
}



  vtkImageDotProduct::~vtkImageDotProduct() { }





} // end namespace vtkImaging
