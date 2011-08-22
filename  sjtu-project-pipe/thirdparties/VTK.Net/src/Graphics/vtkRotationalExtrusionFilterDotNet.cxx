

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRotationalExtrusionFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkRotationalExtrusionFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkRotationalExtrusionFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRotationalExtrusionFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRotationalExtrusionFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRotationalExtrusionFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRotationalExtrusionFilter^ vtkRotationalExtrusionFilter::NewInstance()
{
  ::vtkRotationalExtrusionFilter* retVal = static_cast<::vtkRotationalExtrusionFilter*>(vtk::ConvertManagedToNative<::vtkRotationalExtrusionFilter>(m_instance)->NewInstance());
  return gcnew vtkRotationalExtrusionFilter(IntPtr(retVal), false);
}



vtkRotationalExtrusionFilter^ vtkRotationalExtrusionFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRotationalExtrusionFilter* retVal = static_cast<::vtkRotationalExtrusionFilter*>(::vtkRotationalExtrusionFilter::SafeDownCast(oWrap));
  return gcnew vtkRotationalExtrusionFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRotationalExtrusionFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRotationalExtrusionFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRotationalExtrusionFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRotationalExtrusionFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkRotationalExtrusionFilter::SetResolution(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRotationalExtrusionFilter>(m_instance)->SetResolution(arg0);
}



int vtkRotationalExtrusionFilter::GetResolutionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRotationalExtrusionFilter>(m_instance)->GetResolutionMinValue();
  return retVal;
}



int vtkRotationalExtrusionFilter::GetResolutionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRotationalExtrusionFilter>(m_instance)->GetResolutionMaxValue();
  return retVal;
}



int vtkRotationalExtrusionFilter::GetResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRotationalExtrusionFilter>(m_instance)->GetResolution();
  return retVal;
}



void vtkRotationalExtrusionFilter::SetCapping(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRotationalExtrusionFilter>(m_instance)->SetCapping(arg0);
}



int vtkRotationalExtrusionFilter::GetCapping()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRotationalExtrusionFilter>(m_instance)->GetCapping();
  return retVal;
}



void vtkRotationalExtrusionFilter::CappingOn()
{
  vtk::ConvertManagedToNative<::vtkRotationalExtrusionFilter>(m_instance)->CappingOn();
}



void vtkRotationalExtrusionFilter::CappingOff()
{
  vtk::ConvertManagedToNative<::vtkRotationalExtrusionFilter>(m_instance)->CappingOff();
}



void vtkRotationalExtrusionFilter::SetAngle(double arg0)
{
  vtk::ConvertManagedToNative<::vtkRotationalExtrusionFilter>(m_instance)->SetAngle(arg0);
}



double vtkRotationalExtrusionFilter::GetAngle()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRotationalExtrusionFilter>(m_instance)->GetAngle();
  return retVal;
}



void vtkRotationalExtrusionFilter::SetTranslation(double arg0)
{
  vtk::ConvertManagedToNative<::vtkRotationalExtrusionFilter>(m_instance)->SetTranslation(arg0);
}



double vtkRotationalExtrusionFilter::GetTranslation()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRotationalExtrusionFilter>(m_instance)->GetTranslation();
  return retVal;
}



void vtkRotationalExtrusionFilter::SetDeltaRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkRotationalExtrusionFilter>(m_instance)->SetDeltaRadius(arg0);
}



double vtkRotationalExtrusionFilter::GetDeltaRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRotationalExtrusionFilter>(m_instance)->GetDeltaRadius();
  return retVal;
}



  vtkRotationalExtrusionFilter::vtkRotationalExtrusionFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkRotationalExtrusionFilter::vtkRotationalExtrusionFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkRotationalExtrusionFilter::vtkRotationalExtrusionFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkRotationalExtrusionFilter::New()));
}



  vtkRotationalExtrusionFilter::~vtkRotationalExtrusionFilter() { }





} // end namespace vtkGraphics
