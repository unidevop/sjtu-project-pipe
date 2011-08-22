

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDiskSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkDiskSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkDiskSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDiskSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDiskSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDiskSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDiskSource^ vtkDiskSource::NewInstance()
{
  ::vtkDiskSource* retVal = static_cast<::vtkDiskSource*>(vtk::ConvertManagedToNative<::vtkDiskSource>(m_instance)->NewInstance());
  return gcnew vtkDiskSource(IntPtr(retVal), false);
}



vtkDiskSource^ vtkDiskSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDiskSource* retVal = static_cast<::vtkDiskSource*>(::vtkDiskSource::SafeDownCast(oWrap));
  return gcnew vtkDiskSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDiskSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDiskSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDiskSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDiskSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkDiskSource::SetInnerRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkDiskSource>(m_instance)->SetInnerRadius(arg0);
}



double vtkDiskSource::GetInnerRadiusMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDiskSource>(m_instance)->GetInnerRadiusMinValue();
  return retVal;
}



double vtkDiskSource::GetInnerRadiusMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDiskSource>(m_instance)->GetInnerRadiusMaxValue();
  return retVal;
}



double vtkDiskSource::GetInnerRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDiskSource>(m_instance)->GetInnerRadius();
  return retVal;
}



void vtkDiskSource::SetOuterRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkDiskSource>(m_instance)->SetOuterRadius(arg0);
}



double vtkDiskSource::GetOuterRadiusMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDiskSource>(m_instance)->GetOuterRadiusMinValue();
  return retVal;
}



double vtkDiskSource::GetOuterRadiusMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDiskSource>(m_instance)->GetOuterRadiusMaxValue();
  return retVal;
}



double vtkDiskSource::GetOuterRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDiskSource>(m_instance)->GetOuterRadius();
  return retVal;
}



void vtkDiskSource::SetRadialResolution(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDiskSource>(m_instance)->SetRadialResolution(arg0);
}



int vtkDiskSource::GetRadialResolutionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDiskSource>(m_instance)->GetRadialResolutionMinValue();
  return retVal;
}



int vtkDiskSource::GetRadialResolutionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDiskSource>(m_instance)->GetRadialResolutionMaxValue();
  return retVal;
}



int vtkDiskSource::GetRadialResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDiskSource>(m_instance)->GetRadialResolution();
  return retVal;
}



void vtkDiskSource::SetCircumferentialResolution(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDiskSource>(m_instance)->SetCircumferentialResolution(arg0);
}



int vtkDiskSource::GetCircumferentialResolutionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDiskSource>(m_instance)->GetCircumferentialResolutionMinValue();
  return retVal;
}



int vtkDiskSource::GetCircumferentialResolutionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDiskSource>(m_instance)->GetCircumferentialResolutionMaxValue();
  return retVal;
}



int vtkDiskSource::GetCircumferentialResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDiskSource>(m_instance)->GetCircumferentialResolution();
  return retVal;
}



  vtkDiskSource::vtkDiskSource(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkDiskSource::vtkDiskSource(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkDiskSource::vtkDiskSource() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkDiskSource::New()));
}



  vtkDiskSource::~vtkDiskSource() { }





} // end namespace vtkGraphics
