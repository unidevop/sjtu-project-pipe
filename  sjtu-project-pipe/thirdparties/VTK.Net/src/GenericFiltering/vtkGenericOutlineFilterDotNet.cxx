

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGenericOutlineFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkGenericOutlineFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkGenericOutlineFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericOutlineFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGenericOutlineFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericOutlineFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGenericOutlineFilter^ vtkGenericOutlineFilter::NewInstance()
{
  ::vtkGenericOutlineFilter* retVal = static_cast<::vtkGenericOutlineFilter*>(vtk::ConvertManagedToNative<::vtkGenericOutlineFilter>(m_instance)->NewInstance());
  return gcnew vtkGenericOutlineFilter(IntPtr(retVal), false);
}



vtkGenericOutlineFilter^ vtkGenericOutlineFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGenericOutlineFilter* retVal = static_cast<::vtkGenericOutlineFilter*>(::vtkGenericOutlineFilter::SafeDownCast(oWrap));
  return gcnew vtkGenericOutlineFilter(IntPtr(retVal), false);
}



  vtkGenericOutlineFilter::vtkGenericOutlineFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkGenericOutlineFilter::vtkGenericOutlineFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkGenericOutlineFilter::vtkGenericOutlineFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkGenericOutlineFilter::New()));
}



  vtkGenericOutlineFilter::~vtkGenericOutlineFilter() { }





} // end namespace vtkGenericFiltering
