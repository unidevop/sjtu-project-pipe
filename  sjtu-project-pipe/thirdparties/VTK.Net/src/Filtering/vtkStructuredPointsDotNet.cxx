

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStructuredPointsDotNet.h"

// native includes
#include "strstream"
#include "vtkStructuredPoints.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkStructuredPoints::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStructuredPoints>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStructuredPoints::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredPoints>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStructuredPoints^ vtkStructuredPoints::NewInstance()
{
  ::vtkStructuredPoints* retVal = static_cast<::vtkStructuredPoints*>(vtk::ConvertManagedToNative<::vtkStructuredPoints>(m_instance)->NewInstance());
  return gcnew vtkStructuredPoints(IntPtr(retVal), false);
}



vtkStructuredPoints^ vtkStructuredPoints::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkStructuredPoints* retVal = static_cast<::vtkStructuredPoints*>(::vtkStructuredPoints::SafeDownCast(oWrap));
  return gcnew vtkStructuredPoints(IntPtr(retVal), false);
}



int vtkStructuredPoints::GetDataObjectType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredPoints>(m_instance)->GetDataObjectType();
  return retVal;
}



  vtkStructuredPoints::vtkStructuredPoints(System::IntPtr native, bool bConst) : vtkImageData(native, bConst) {}



  vtkStructuredPoints::vtkStructuredPoints(bool donothing) : vtkImageData(donothing) {}



  vtkStructuredPoints::vtkStructuredPoints() : vtkImageData(false) {
  this->SetNativePointer(IntPtr(::vtkStructuredPoints::New()));
}



  vtkStructuredPoints::~vtkStructuredPoints() { }





} // end namespace vtkFiltering
