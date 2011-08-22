

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkLoopSubdivisionFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkLoopSubdivisionFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkLoopSubdivisionFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkLoopSubdivisionFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkLoopSubdivisionFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLoopSubdivisionFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkLoopSubdivisionFilter^ vtkLoopSubdivisionFilter::NewInstance()
{
  ::vtkLoopSubdivisionFilter* retVal = static_cast<::vtkLoopSubdivisionFilter*>(vtk::ConvertManagedToNative<::vtkLoopSubdivisionFilter>(m_instance)->NewInstance());
  return gcnew vtkLoopSubdivisionFilter(IntPtr(retVal), false);
}



vtkLoopSubdivisionFilter^ vtkLoopSubdivisionFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkLoopSubdivisionFilter* retVal = static_cast<::vtkLoopSubdivisionFilter*>(::vtkLoopSubdivisionFilter::SafeDownCast(oWrap));
  return gcnew vtkLoopSubdivisionFilter(IntPtr(retVal), false);
}



  vtkLoopSubdivisionFilter::vtkLoopSubdivisionFilter(System::IntPtr native, bool bConst) : vtkApproximatingSubdivisionFilter(native, bConst) {}



  vtkLoopSubdivisionFilter::vtkLoopSubdivisionFilter(bool donothing) : vtkApproximatingSubdivisionFilter(donothing) {}



  vtkLoopSubdivisionFilter::vtkLoopSubdivisionFilter() : vtkApproximatingSubdivisionFilter(false) {
  this->SetNativePointer(IntPtr(::vtkLoopSubdivisionFilter::New()));
}



  vtkLoopSubdivisionFilter::~vtkLoopSubdivisionFilter() { }





} // end namespace vtkGraphics
