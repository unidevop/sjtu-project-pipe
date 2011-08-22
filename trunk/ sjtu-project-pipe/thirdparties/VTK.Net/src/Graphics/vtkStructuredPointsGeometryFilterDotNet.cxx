

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStructuredPointsGeometryFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkStructuredPointsGeometryFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkStructuredPointsGeometryFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStructuredPointsGeometryFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStructuredPointsGeometryFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredPointsGeometryFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStructuredPointsGeometryFilter^ vtkStructuredPointsGeometryFilter::NewInstance()
{
  ::vtkStructuredPointsGeometryFilter* retVal = static_cast<::vtkStructuredPointsGeometryFilter*>(vtk::ConvertManagedToNative<::vtkStructuredPointsGeometryFilter>(m_instance)->NewInstance());
  return gcnew vtkStructuredPointsGeometryFilter(IntPtr(retVal), false);
}



vtkStructuredPointsGeometryFilter^ vtkStructuredPointsGeometryFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkStructuredPointsGeometryFilter* retVal = static_cast<::vtkStructuredPointsGeometryFilter*>(::vtkStructuredPointsGeometryFilter::SafeDownCast(oWrap));
  return gcnew vtkStructuredPointsGeometryFilter(IntPtr(retVal), false);
}



  vtkStructuredPointsGeometryFilter::vtkStructuredPointsGeometryFilter(System::IntPtr native, bool bConst) : vtkImageDataGeometryFilter(native, bConst) {}



  vtkStructuredPointsGeometryFilter::vtkStructuredPointsGeometryFilter(bool donothing) : vtkImageDataGeometryFilter(donothing) {}



  vtkStructuredPointsGeometryFilter::vtkStructuredPointsGeometryFilter() : vtkImageDataGeometryFilter(false) {
  this->SetNativePointer(IntPtr(::vtkStructuredPointsGeometryFilter::New()));
}



  vtkStructuredPointsGeometryFilter::~vtkStructuredPointsGeometryFilter() { }





} // end namespace vtkGraphics
