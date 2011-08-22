

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkArrowSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkArrowSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkArrowSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkArrowSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkArrowSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkArrowSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkArrowSource^ vtkArrowSource::NewInstance()
{
  ::vtkArrowSource* retVal = static_cast<::vtkArrowSource*>(vtk::ConvertManagedToNative<::vtkArrowSource>(m_instance)->NewInstance());
  return gcnew vtkArrowSource(IntPtr(retVal), false);
}



vtkArrowSource^ vtkArrowSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkArrowSource* retVal = static_cast<::vtkArrowSource*>(::vtkArrowSource::SafeDownCast(oWrap));
  return gcnew vtkArrowSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkArrowSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkArrowSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkArrowSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkArrowSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkArrowSource::SetTipLength(double arg0)
{
  vtk::ConvertManagedToNative<::vtkArrowSource>(m_instance)->SetTipLength(arg0);
}



double vtkArrowSource::GetTipLengthMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkArrowSource>(m_instance)->GetTipLengthMinValue();
  return retVal;
}



double vtkArrowSource::GetTipLengthMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkArrowSource>(m_instance)->GetTipLengthMaxValue();
  return retVal;
}



double vtkArrowSource::GetTipLength()
{
  double retVal = vtk::ConvertManagedToNative<::vtkArrowSource>(m_instance)->GetTipLength();
  return retVal;
}



void vtkArrowSource::SetTipRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkArrowSource>(m_instance)->SetTipRadius(arg0);
}



double vtkArrowSource::GetTipRadiusMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkArrowSource>(m_instance)->GetTipRadiusMinValue();
  return retVal;
}



double vtkArrowSource::GetTipRadiusMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkArrowSource>(m_instance)->GetTipRadiusMaxValue();
  return retVal;
}



double vtkArrowSource::GetTipRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkArrowSource>(m_instance)->GetTipRadius();
  return retVal;
}



void vtkArrowSource::SetTipResolution(int arg0)
{
  vtk::ConvertManagedToNative<::vtkArrowSource>(m_instance)->SetTipResolution(arg0);
}



int vtkArrowSource::GetTipResolutionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkArrowSource>(m_instance)->GetTipResolutionMinValue();
  return retVal;
}



int vtkArrowSource::GetTipResolutionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkArrowSource>(m_instance)->GetTipResolutionMaxValue();
  return retVal;
}



int vtkArrowSource::GetTipResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkArrowSource>(m_instance)->GetTipResolution();
  return retVal;
}



void vtkArrowSource::SetShaftRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkArrowSource>(m_instance)->SetShaftRadius(arg0);
}



double vtkArrowSource::GetShaftRadiusMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkArrowSource>(m_instance)->GetShaftRadiusMinValue();
  return retVal;
}



double vtkArrowSource::GetShaftRadiusMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkArrowSource>(m_instance)->GetShaftRadiusMaxValue();
  return retVal;
}



double vtkArrowSource::GetShaftRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkArrowSource>(m_instance)->GetShaftRadius();
  return retVal;
}



void vtkArrowSource::SetShaftResolution(int arg0)
{
  vtk::ConvertManagedToNative<::vtkArrowSource>(m_instance)->SetShaftResolution(arg0);
}



int vtkArrowSource::GetShaftResolutionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkArrowSource>(m_instance)->GetShaftResolutionMinValue();
  return retVal;
}



int vtkArrowSource::GetShaftResolutionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkArrowSource>(m_instance)->GetShaftResolutionMaxValue();
  return retVal;
}



int vtkArrowSource::GetShaftResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkArrowSource>(m_instance)->GetShaftResolution();
  return retVal;
}



  vtkArrowSource::vtkArrowSource(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkArrowSource::vtkArrowSource(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkArrowSource::vtkArrowSource() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkArrowSource::New()));
}



  vtkArrowSource::~vtkArrowSource() { }





} // end namespace vtkGraphics
