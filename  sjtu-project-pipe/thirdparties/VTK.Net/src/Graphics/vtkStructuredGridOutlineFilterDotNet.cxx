

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStructuredGridOutlineFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkStructuredGridOutlineFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkStructuredGridOutlineFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStructuredGridOutlineFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStructuredGridOutlineFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredGridOutlineFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStructuredGridOutlineFilter^ vtkStructuredGridOutlineFilter::NewInstance()
{
  ::vtkStructuredGridOutlineFilter* retVal = static_cast<::vtkStructuredGridOutlineFilter*>(vtk::ConvertManagedToNative<::vtkStructuredGridOutlineFilter>(m_instance)->NewInstance());
  return gcnew vtkStructuredGridOutlineFilter(IntPtr(retVal), false);
}



vtkStructuredGridOutlineFilter^ vtkStructuredGridOutlineFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkStructuredGridOutlineFilter* retVal = static_cast<::vtkStructuredGridOutlineFilter*>(::vtkStructuredGridOutlineFilter::SafeDownCast(oWrap));
  return gcnew vtkStructuredGridOutlineFilter(IntPtr(retVal), false);
}



  vtkStructuredGridOutlineFilter::vtkStructuredGridOutlineFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkStructuredGridOutlineFilter::vtkStructuredGridOutlineFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkStructuredGridOutlineFilter::vtkStructuredGridOutlineFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkStructuredGridOutlineFilter::New()));
}



  vtkStructuredGridOutlineFilter::~vtkStructuredGridOutlineFilter() { }





} // end namespace vtkGraphics
