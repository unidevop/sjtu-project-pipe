

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSphereSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkSphereSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkSphereSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSphereSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSphereSource^ vtkSphereSource::NewInstance()
{
  ::vtkSphereSource* retVal = static_cast<::vtkSphereSource*>(vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->NewInstance());
  return gcnew vtkSphereSource(IntPtr(retVal), false);
}



vtkSphereSource^ vtkSphereSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSphereSource* retVal = static_cast<::vtkSphereSource*>(::vtkSphereSource::SafeDownCast(oWrap));
  return gcnew vtkSphereSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSphereSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSphereSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkSphereSource::SetRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->SetRadius(arg0);
}



double vtkSphereSource::GetRadiusMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->GetRadiusMinValue();
  return retVal;
}



double vtkSphereSource::GetRadiusMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->GetRadiusMaxValue();
  return retVal;
}



double vtkSphereSource::GetRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->GetRadius();
  return retVal;
}



void vtkSphereSource::SetCenter(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->SetCenter(arg0, arg1, arg2);
}



void vtkSphereSource::SetCenter(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->SetCenter(nativeaPin);
}



array<double>^ vtkSphereSource::GetCenter()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->GetCenter();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkSphereSource::SetThetaResolution(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->SetThetaResolution(arg0);
}



int vtkSphereSource::GetThetaResolutionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->GetThetaResolutionMinValue();
  return retVal;
}



int vtkSphereSource::GetThetaResolutionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->GetThetaResolutionMaxValue();
  return retVal;
}



int vtkSphereSource::GetThetaResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->GetThetaResolution();
  return retVal;
}



void vtkSphereSource::SetPhiResolution(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->SetPhiResolution(arg0);
}



int vtkSphereSource::GetPhiResolutionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->GetPhiResolutionMinValue();
  return retVal;
}



int vtkSphereSource::GetPhiResolutionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->GetPhiResolutionMaxValue();
  return retVal;
}



int vtkSphereSource::GetPhiResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->GetPhiResolution();
  return retVal;
}



void vtkSphereSource::SetStartTheta(double arg0)
{
  vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->SetStartTheta(arg0);
}



double vtkSphereSource::GetStartThetaMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->GetStartThetaMinValue();
  return retVal;
}



double vtkSphereSource::GetStartThetaMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->GetStartThetaMaxValue();
  return retVal;
}



double vtkSphereSource::GetStartTheta()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->GetStartTheta();
  return retVal;
}



void vtkSphereSource::SetEndTheta(double arg0)
{
  vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->SetEndTheta(arg0);
}



double vtkSphereSource::GetEndThetaMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->GetEndThetaMinValue();
  return retVal;
}



double vtkSphereSource::GetEndThetaMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->GetEndThetaMaxValue();
  return retVal;
}



double vtkSphereSource::GetEndTheta()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->GetEndTheta();
  return retVal;
}



void vtkSphereSource::SetStartPhi(double arg0)
{
  vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->SetStartPhi(arg0);
}



double vtkSphereSource::GetStartPhiMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->GetStartPhiMinValue();
  return retVal;
}



double vtkSphereSource::GetStartPhiMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->GetStartPhiMaxValue();
  return retVal;
}



double vtkSphereSource::GetStartPhi()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->GetStartPhi();
  return retVal;
}



void vtkSphereSource::SetEndPhi(double arg0)
{
  vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->SetEndPhi(arg0);
}



double vtkSphereSource::GetEndPhiMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->GetEndPhiMinValue();
  return retVal;
}



double vtkSphereSource::GetEndPhiMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->GetEndPhiMaxValue();
  return retVal;
}



double vtkSphereSource::GetEndPhi()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->GetEndPhi();
  return retVal;
}



void vtkSphereSource::SetLatLongTessellation(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->SetLatLongTessellation(arg0);
}



int vtkSphereSource::GetLatLongTessellation()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->GetLatLongTessellation();
  return retVal;
}



void vtkSphereSource::LatLongTessellationOn()
{
  vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->LatLongTessellationOn();
}



void vtkSphereSource::LatLongTessellationOff()
{
  vtk::ConvertManagedToNative<::vtkSphereSource>(m_instance)->LatLongTessellationOff();
}



  vtkSphereSource::vtkSphereSource(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkSphereSource::vtkSphereSource(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkSphereSource::vtkSphereSource() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkSphereSource::New()));
}



  vtkSphereSource::~vtkSphereSource() { }





} // end namespace vtkGraphics
