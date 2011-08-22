

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkButterflySubdivisionFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkButterflySubdivisionFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkButterflySubdivisionFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkButterflySubdivisionFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkButterflySubdivisionFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkButterflySubdivisionFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkButterflySubdivisionFilter^ vtkButterflySubdivisionFilter::NewInstance()
{
  ::vtkButterflySubdivisionFilter* retVal = static_cast<::vtkButterflySubdivisionFilter*>(vtk::ConvertManagedToNative<::vtkButterflySubdivisionFilter>(m_instance)->NewInstance());
  return gcnew vtkButterflySubdivisionFilter(IntPtr(retVal), false);
}



vtkButterflySubdivisionFilter^ vtkButterflySubdivisionFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkButterflySubdivisionFilter* retVal = static_cast<::vtkButterflySubdivisionFilter*>(::vtkButterflySubdivisionFilter::SafeDownCast(oWrap));
  return gcnew vtkButterflySubdivisionFilter(IntPtr(retVal), false);
}



  vtkButterflySubdivisionFilter::vtkButterflySubdivisionFilter(System::IntPtr native, bool bConst) : vtkInterpolatingSubdivisionFilter(native, bConst) {}



  vtkButterflySubdivisionFilter::vtkButterflySubdivisionFilter(bool donothing) : vtkInterpolatingSubdivisionFilter(donothing) {}



  vtkButterflySubdivisionFilter::vtkButterflySubdivisionFilter() : vtkInterpolatingSubdivisionFilter(false) {
  this->SetNativePointer(IntPtr(::vtkButterflySubdivisionFilter::New()));
}



  vtkButterflySubdivisionFilter::~vtkButterflySubdivisionFilter() { }





} // end namespace vtkGraphics
