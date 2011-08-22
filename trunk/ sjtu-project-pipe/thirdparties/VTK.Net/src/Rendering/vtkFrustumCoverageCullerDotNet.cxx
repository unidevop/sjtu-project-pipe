

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkFrustumCoverageCullerDotNet.h"

// native includes
#include "strstream"
#include "vtkFrustumCoverageCuller.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkFrustumCoverageCuller::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFrustumCoverageCuller>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkFrustumCoverageCuller::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkFrustumCoverageCuller>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkFrustumCoverageCuller^ vtkFrustumCoverageCuller::NewInstance()
{
  ::vtkFrustumCoverageCuller* retVal = static_cast<::vtkFrustumCoverageCuller*>(vtk::ConvertManagedToNative<::vtkFrustumCoverageCuller>(m_instance)->NewInstance());
  return gcnew vtkFrustumCoverageCuller(IntPtr(retVal), false);
}



vtkFrustumCoverageCuller^ vtkFrustumCoverageCuller::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkFrustumCoverageCuller* retVal = static_cast<::vtkFrustumCoverageCuller*>(::vtkFrustumCoverageCuller::SafeDownCast(oWrap));
  return gcnew vtkFrustumCoverageCuller(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkFrustumCoverageCuller::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkFrustumCoverageCuller>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkFrustumCoverageCuller::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkFrustumCoverageCuller>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkFrustumCoverageCuller::SetMinimumCoverage(double arg0)
{
  vtk::ConvertManagedToNative<::vtkFrustumCoverageCuller>(m_instance)->SetMinimumCoverage(arg0);
}



double vtkFrustumCoverageCuller::GetMinimumCoverage()
{
  double retVal = vtk::ConvertManagedToNative<::vtkFrustumCoverageCuller>(m_instance)->GetMinimumCoverage();
  return retVal;
}



void vtkFrustumCoverageCuller::SetMaximumCoverage(double arg0)
{
  vtk::ConvertManagedToNative<::vtkFrustumCoverageCuller>(m_instance)->SetMaximumCoverage(arg0);
}



double vtkFrustumCoverageCuller::GetMaximumCoverage()
{
  double retVal = vtk::ConvertManagedToNative<::vtkFrustumCoverageCuller>(m_instance)->GetMaximumCoverage();
  return retVal;
}



void vtkFrustumCoverageCuller::SetSortingStyle(int arg0)
{
  vtk::ConvertManagedToNative<::vtkFrustumCoverageCuller>(m_instance)->SetSortingStyle(arg0);
}



int vtkFrustumCoverageCuller::GetSortingStyleMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFrustumCoverageCuller>(m_instance)->GetSortingStyleMinValue();
  return retVal;
}



int vtkFrustumCoverageCuller::GetSortingStyleMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFrustumCoverageCuller>(m_instance)->GetSortingStyleMaxValue();
  return retVal;
}



int vtkFrustumCoverageCuller::GetSortingStyle()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFrustumCoverageCuller>(m_instance)->GetSortingStyle();
  return retVal;
}



void vtkFrustumCoverageCuller::SetSortingStyleToNone()
{
  vtk::ConvertManagedToNative<::vtkFrustumCoverageCuller>(m_instance)->SetSortingStyleToNone();
}



void vtkFrustumCoverageCuller::SetSortingStyleToBackToFront()
{
  vtk::ConvertManagedToNative<::vtkFrustumCoverageCuller>(m_instance)->SetSortingStyleToBackToFront();
}



void vtkFrustumCoverageCuller::SetSortingStyleToFrontToBack()
{
  vtk::ConvertManagedToNative<::vtkFrustumCoverageCuller>(m_instance)->SetSortingStyleToFrontToBack();
}



System::String^ vtkFrustumCoverageCuller::GetSortingStyleAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFrustumCoverageCuller>(m_instance)->GetSortingStyleAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkFrustumCoverageCuller::vtkFrustumCoverageCuller(System::IntPtr native, bool bConst) : vtkCuller(native, bConst) {}



  vtkFrustumCoverageCuller::vtkFrustumCoverageCuller(bool donothing) : vtkCuller(donothing) {}



  vtkFrustumCoverageCuller::vtkFrustumCoverageCuller() : vtkCuller(false) {
  this->SetNativePointer(IntPtr(::vtkFrustumCoverageCuller::New()));
}



  vtkFrustumCoverageCuller::~vtkFrustumCoverageCuller() { }





} // end namespace vtkRendering
