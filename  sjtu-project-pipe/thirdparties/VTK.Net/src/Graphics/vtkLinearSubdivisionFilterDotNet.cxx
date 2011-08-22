

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkLinearSubdivisionFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkLinearSubdivisionFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkLinearSubdivisionFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkLinearSubdivisionFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkLinearSubdivisionFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLinearSubdivisionFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkLinearSubdivisionFilter^ vtkLinearSubdivisionFilter::NewInstance()
{
  ::vtkLinearSubdivisionFilter* retVal = static_cast<::vtkLinearSubdivisionFilter*>(vtk::ConvertManagedToNative<::vtkLinearSubdivisionFilter>(m_instance)->NewInstance());
  return gcnew vtkLinearSubdivisionFilter(IntPtr(retVal), false);
}



vtkLinearSubdivisionFilter^ vtkLinearSubdivisionFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkLinearSubdivisionFilter* retVal = static_cast<::vtkLinearSubdivisionFilter*>(::vtkLinearSubdivisionFilter::SafeDownCast(oWrap));
  return gcnew vtkLinearSubdivisionFilter(IntPtr(retVal), false);
}



  vtkLinearSubdivisionFilter::vtkLinearSubdivisionFilter(System::IntPtr native, bool bConst) : vtkInterpolatingSubdivisionFilter(native, bConst) {}



  vtkLinearSubdivisionFilter::vtkLinearSubdivisionFilter(bool donothing) : vtkInterpolatingSubdivisionFilter(donothing) {}



  vtkLinearSubdivisionFilter::vtkLinearSubdivisionFilter() : vtkInterpolatingSubdivisionFilter(false) {
  this->SetNativePointer(IntPtr(::vtkLinearSubdivisionFilter::New()));
}



  vtkLinearSubdivisionFilter::~vtkLinearSubdivisionFilter() { }





} // end namespace vtkGraphics
