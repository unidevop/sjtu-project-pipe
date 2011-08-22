

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageHybridMedian2DDotNet.h"

// native includes
#include "strstream"
#include "vtkImageHybridMedian2D.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageHybridMedian2D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageHybridMedian2D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageHybridMedian2D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageHybridMedian2D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageHybridMedian2D^ vtkImageHybridMedian2D::NewInstance()
{
  ::vtkImageHybridMedian2D* retVal = static_cast<::vtkImageHybridMedian2D*>(vtk::ConvertManagedToNative<::vtkImageHybridMedian2D>(m_instance)->NewInstance());
  return gcnew vtkImageHybridMedian2D(IntPtr(retVal), false);
}



vtkImageHybridMedian2D^ vtkImageHybridMedian2D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageHybridMedian2D* retVal = static_cast<::vtkImageHybridMedian2D*>(::vtkImageHybridMedian2D::SafeDownCast(oWrap));
  return gcnew vtkImageHybridMedian2D(IntPtr(retVal), false);
}



  vtkImageHybridMedian2D::vtkImageHybridMedian2D(System::IntPtr native, bool bConst) : vtkImageSpatialAlgorithm(native, bConst) {}



  vtkImageHybridMedian2D::vtkImageHybridMedian2D(bool donothing) : vtkImageSpatialAlgorithm(donothing) {}



  vtkImageHybridMedian2D::vtkImageHybridMedian2D() : vtkImageSpatialAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageHybridMedian2D::New()));
}



  vtkImageHybridMedian2D::~vtkImageHybridMedian2D() { }





} // end namespace vtkImaging
