

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageFlipDotNet.h"

// native includes
#include "strstream"
#include "vtkImageFlip.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageFlip::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageFlip>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageFlip::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageFlip>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageFlip^ vtkImageFlip::NewInstance()
{
  ::vtkImageFlip* retVal = static_cast<::vtkImageFlip*>(vtk::ConvertManagedToNative<::vtkImageFlip>(m_instance)->NewInstance());
  return gcnew vtkImageFlip(IntPtr(retVal), false);
}



vtkImageFlip^ vtkImageFlip::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageFlip* retVal = static_cast<::vtkImageFlip*>(::vtkImageFlip::SafeDownCast(oWrap));
  return gcnew vtkImageFlip(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageFlip::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageFlip>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageFlip::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageFlip>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageFlip::SetFilteredAxis(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageFlip>(m_instance)->SetFilteredAxis(arg0);
}



int vtkImageFlip::GetFilteredAxis()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageFlip>(m_instance)->GetFilteredAxis();
  return retVal;
}



void vtkImageFlip::SetFlipAboutOrigin(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageFlip>(m_instance)->SetFlipAboutOrigin(arg0);
}



int vtkImageFlip::GetFlipAboutOrigin()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageFlip>(m_instance)->GetFlipAboutOrigin();
  return retVal;
}



void vtkImageFlip::FlipAboutOriginOn()
{
  vtk::ConvertManagedToNative<::vtkImageFlip>(m_instance)->FlipAboutOriginOn();
}



void vtkImageFlip::FlipAboutOriginOff()
{
  vtk::ConvertManagedToNative<::vtkImageFlip>(m_instance)->FlipAboutOriginOff();
}



void vtkImageFlip::SetFilteredAxes(int axis)
{
  vtk::ConvertManagedToNative<::vtkImageFlip>(m_instance)->SetFilteredAxes(axis);
}



void vtkImageFlip::SetPreserveImageExtent(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageFlip>(m_instance)->SetPreserveImageExtent(arg0);
}



int vtkImageFlip::GetPreserveImageExtent()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageFlip>(m_instance)->GetPreserveImageExtent();
  return retVal;
}



void vtkImageFlip::PreserveImageExtentOn()
{
  vtk::ConvertManagedToNative<::vtkImageFlip>(m_instance)->PreserveImageExtentOn();
}



void vtkImageFlip::PreserveImageExtentOff()
{
  vtk::ConvertManagedToNative<::vtkImageFlip>(m_instance)->PreserveImageExtentOff();
}



  vtkImageFlip::vtkImageFlip(System::IntPtr native, bool bConst) : vtkImageReslice(native, bConst) {}



  vtkImageFlip::vtkImageFlip(bool donothing) : vtkImageReslice(donothing) {}



  vtkImageFlip::vtkImageFlip() : vtkImageReslice(false) {
  this->SetNativePointer(IntPtr(::vtkImageFlip::New()));
}



  vtkImageFlip::~vtkImageFlip() { }





} // end namespace vtkImaging
