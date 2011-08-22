

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTexturedSphereSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkTexturedSphereSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTexturedSphereSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTexturedSphereSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTexturedSphereSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTexturedSphereSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTexturedSphereSource^ vtkTexturedSphereSource::NewInstance()
{
  ::vtkTexturedSphereSource* retVal = static_cast<::vtkTexturedSphereSource*>(vtk::ConvertManagedToNative<::vtkTexturedSphereSource>(m_instance)->NewInstance());
  return gcnew vtkTexturedSphereSource(IntPtr(retVal), false);
}



vtkTexturedSphereSource^ vtkTexturedSphereSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTexturedSphereSource* retVal = static_cast<::vtkTexturedSphereSource*>(::vtkTexturedSphereSource::SafeDownCast(oWrap));
  return gcnew vtkTexturedSphereSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTexturedSphereSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTexturedSphereSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTexturedSphereSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTexturedSphereSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkTexturedSphereSource::SetRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkTexturedSphereSource>(m_instance)->SetRadius(arg0);
}



double vtkTexturedSphereSource::GetRadiusMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTexturedSphereSource>(m_instance)->GetRadiusMinValue();
  return retVal;
}



double vtkTexturedSphereSource::GetRadiusMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTexturedSphereSource>(m_instance)->GetRadiusMaxValue();
  return retVal;
}



double vtkTexturedSphereSource::GetRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTexturedSphereSource>(m_instance)->GetRadius();
  return retVal;
}



void vtkTexturedSphereSource::SetThetaResolution(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTexturedSphereSource>(m_instance)->SetThetaResolution(arg0);
}



int vtkTexturedSphereSource::GetThetaResolutionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTexturedSphereSource>(m_instance)->GetThetaResolutionMinValue();
  return retVal;
}



int vtkTexturedSphereSource::GetThetaResolutionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTexturedSphereSource>(m_instance)->GetThetaResolutionMaxValue();
  return retVal;
}



int vtkTexturedSphereSource::GetThetaResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTexturedSphereSource>(m_instance)->GetThetaResolution();
  return retVal;
}



void vtkTexturedSphereSource::SetPhiResolution(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTexturedSphereSource>(m_instance)->SetPhiResolution(arg0);
}



int vtkTexturedSphereSource::GetPhiResolutionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTexturedSphereSource>(m_instance)->GetPhiResolutionMinValue();
  return retVal;
}



int vtkTexturedSphereSource::GetPhiResolutionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTexturedSphereSource>(m_instance)->GetPhiResolutionMaxValue();
  return retVal;
}



int vtkTexturedSphereSource::GetPhiResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTexturedSphereSource>(m_instance)->GetPhiResolution();
  return retVal;
}



void vtkTexturedSphereSource::SetTheta(double arg0)
{
  vtk::ConvertManagedToNative<::vtkTexturedSphereSource>(m_instance)->SetTheta(arg0);
}



double vtkTexturedSphereSource::GetThetaMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTexturedSphereSource>(m_instance)->GetThetaMinValue();
  return retVal;
}



double vtkTexturedSphereSource::GetThetaMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTexturedSphereSource>(m_instance)->GetThetaMaxValue();
  return retVal;
}



double vtkTexturedSphereSource::GetTheta()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTexturedSphereSource>(m_instance)->GetTheta();
  return retVal;
}



void vtkTexturedSphereSource::SetPhi(double arg0)
{
  vtk::ConvertManagedToNative<::vtkTexturedSphereSource>(m_instance)->SetPhi(arg0);
}



double vtkTexturedSphereSource::GetPhiMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTexturedSphereSource>(m_instance)->GetPhiMinValue();
  return retVal;
}



double vtkTexturedSphereSource::GetPhiMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTexturedSphereSource>(m_instance)->GetPhiMaxValue();
  return retVal;
}



double vtkTexturedSphereSource::GetPhi()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTexturedSphereSource>(m_instance)->GetPhi();
  return retVal;
}



  vtkTexturedSphereSource::vtkTexturedSphereSource(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkTexturedSphereSource::vtkTexturedSphereSource(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkTexturedSphereSource::vtkTexturedSphereSource() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkTexturedSphereSource::New()));
}



  vtkTexturedSphereSource::~vtkTexturedSphereSource() { }





} // end namespace vtkGraphics
