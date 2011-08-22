

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOutlineFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkOutlineFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkOutlineFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOutlineFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOutlineFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOutlineFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOutlineFilter^ vtkOutlineFilter::NewInstance()
{
  ::vtkOutlineFilter* retVal = static_cast<::vtkOutlineFilter*>(vtk::ConvertManagedToNative<::vtkOutlineFilter>(m_instance)->NewInstance());
  return gcnew vtkOutlineFilter(IntPtr(retVal), false);
}



vtkOutlineFilter^ vtkOutlineFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOutlineFilter* retVal = static_cast<::vtkOutlineFilter*>(::vtkOutlineFilter::SafeDownCast(oWrap));
  return gcnew vtkOutlineFilter(IntPtr(retVal), false);
}



  vtkOutlineFilter::vtkOutlineFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkOutlineFilter::vtkOutlineFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkOutlineFilter::vtkOutlineFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkOutlineFilter::New()));
}



  vtkOutlineFilter::~vtkOutlineFilter() { }





} // end namespace vtkGraphics
