

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkLightKitDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkLightKit.h"
#include "vtkRenderer.h"

using namespace System;

namespace vtk {

System::String^ vtkLightKit::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkLightKit::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkLightKit^ vtkLightKit::NewInstance()
{
  ::vtkLightKit* retVal = static_cast<::vtkLightKit*>(vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->NewInstance());
  return gcnew vtkLightKit(IntPtr(retVal), false);
}



vtkLightKit^ vtkLightKit::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkLightKit* retVal = static_cast<::vtkLightKit*>(::vtkLightKit::SafeDownCast(oWrap));
  return gcnew vtkLightKit(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkLightKit::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkLightKit::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkLightKit::SetKeyLightIntensity(double arg0)
{
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->SetKeyLightIntensity(arg0);
}



double vtkLightKit::GetKeyLightIntensity()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetKeyLightIntensity();
  return retVal;
}



void vtkLightKit::SetKeyToFillRatio(double arg0)
{
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->SetKeyToFillRatio(arg0);
}



double vtkLightKit::GetKeyToFillRatioMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetKeyToFillRatioMinValue();
  return retVal;
}



double vtkLightKit::GetKeyToFillRatioMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetKeyToFillRatioMaxValue();
  return retVal;
}



double vtkLightKit::GetKeyToFillRatio()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetKeyToFillRatio();
  return retVal;
}



void vtkLightKit::SetKeyToHeadRatio(double arg0)
{
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->SetKeyToHeadRatio(arg0);
}



double vtkLightKit::GetKeyToHeadRatioMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetKeyToHeadRatioMinValue();
  return retVal;
}



double vtkLightKit::GetKeyToHeadRatioMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetKeyToHeadRatioMaxValue();
  return retVal;
}



double vtkLightKit::GetKeyToHeadRatio()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetKeyToHeadRatio();
  return retVal;
}



void vtkLightKit::SetKeyToBackRatio(double arg0)
{
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->SetKeyToBackRatio(arg0);
}



double vtkLightKit::GetKeyToBackRatioMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetKeyToBackRatioMinValue();
  return retVal;
}



double vtkLightKit::GetKeyToBackRatioMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetKeyToBackRatioMaxValue();
  return retVal;
}



double vtkLightKit::GetKeyToBackRatio()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetKeyToBackRatio();
  return retVal;
}



void vtkLightKit::SetKeyLightWarmth(double arg0)
{
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->SetKeyLightWarmth(arg0);
}



double vtkLightKit::GetKeyLightWarmth()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetKeyLightWarmth();
  return retVal;
}



void vtkLightKit::SetFillLightWarmth(double arg0)
{
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->SetFillLightWarmth(arg0);
}



double vtkLightKit::GetFillLightWarmth()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetFillLightWarmth();
  return retVal;
}



void vtkLightKit::SetHeadLightWarmth(double arg0)
{
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->SetHeadLightWarmth(arg0);
}



double vtkLightKit::GetHeadLightWarmth()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetHeadLightWarmth();
  return retVal;
}



void vtkLightKit::SetBackLightWarmth(double arg0)
{
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->SetBackLightWarmth(arg0);
}



double vtkLightKit::GetBackLightWarmth()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetBackLightWarmth();
  return retVal;
}



array<double>^ vtkLightKit::GetKeyLightColor()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetKeyLightColor();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkLightKit::GetFillLightColor()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetFillLightColor();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkLightKit::GetHeadLightColor()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetHeadLightColor();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkLightKit::GetBackLightColor()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetBackLightColor();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkLightKit::SetHeadlightWarmth(double v)
{
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->SetHeadlightWarmth(v);
}



double vtkLightKit::GetHeadlightWarmth()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetHeadlightWarmth();
  return retVal;
}



void vtkLightKit::GetHeadlightColor(array<double>^ color)
{
  pin_ptr<double> colorPin = &color[0];
  double* nativecolorPin = colorPin;
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetHeadlightColor(nativecolorPin);
}



void vtkLightKit::MaintainLuminanceOn()
{
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->MaintainLuminanceOn();
}



void vtkLightKit::MaintainLuminanceOff()
{
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->MaintainLuminanceOff();
}



int vtkLightKit::GetMaintainLuminance()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetMaintainLuminance();
  return retVal;
}



void vtkLightKit::SetMaintainLuminance(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->SetMaintainLuminance(arg0);
}



void vtkLightKit::SetKeyLightAngle(double elevation, double azimuth)
{
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->SetKeyLightAngle(elevation, azimuth);
}



void vtkLightKit::SetKeyLightAngle(array<double>^ angle)
{
  pin_ptr<double> anglePin = &angle[0];
  double* nativeanglePin = anglePin;
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->SetKeyLightAngle(nativeanglePin);
}



void vtkLightKit::SetKeyLightElevation(double x)
{
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->SetKeyLightElevation(x);
}



void vtkLightKit::SetKeyLightAzimuth(double x)
{
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->SetKeyLightAzimuth(x);
}



array<double>^ vtkLightKit::GetKeyLightAngle()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetKeyLightAngle();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



double vtkLightKit::GetKeyLightElevation()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetKeyLightElevation();
  return retVal;
}



double vtkLightKit::GetKeyLightAzimuth()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetKeyLightAzimuth();
  return retVal;
}



void vtkLightKit::SetFillLightAngle(double elevation, double azimuth)
{
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->SetFillLightAngle(elevation, azimuth);
}



void vtkLightKit::SetFillLightAngle(array<double>^ angle)
{
  pin_ptr<double> anglePin = &angle[0];
  double* nativeanglePin = anglePin;
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->SetFillLightAngle(nativeanglePin);
}



void vtkLightKit::SetFillLightElevation(double x)
{
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->SetFillLightElevation(x);
}



void vtkLightKit::SetFillLightAzimuth(double x)
{
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->SetFillLightAzimuth(x);
}



array<double>^ vtkLightKit::GetFillLightAngle()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetFillLightAngle();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



double vtkLightKit::GetFillLightElevation()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetFillLightElevation();
  return retVal;
}



double vtkLightKit::GetFillLightAzimuth()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetFillLightAzimuth();
  return retVal;
}



void vtkLightKit::SetBackLightAngle(double elevation, double azimuth)
{
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->SetBackLightAngle(elevation, azimuth);
}



void vtkLightKit::SetBackLightAngle(array<double>^ angle)
{
  pin_ptr<double> anglePin = &angle[0];
  double* nativeanglePin = anglePin;
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->SetBackLightAngle(nativeanglePin);
}



void vtkLightKit::SetBackLightElevation(double x)
{
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->SetBackLightElevation(x);
}



void vtkLightKit::SetBackLightAzimuth(double x)
{
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->SetBackLightAzimuth(x);
}



array<double>^ vtkLightKit::GetBackLightAngle()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetBackLightAngle();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



double vtkLightKit::GetBackLightElevation()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetBackLightElevation();
  return retVal;
}



double vtkLightKit::GetBackLightAzimuth()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->GetBackLightAzimuth();
  return retVal;
}



void vtkLightKit::AddLightsToRenderer(vtkRenderer^ renderer)
{
  ::vtkRenderer* rendererWrap = vtk::ConvertManagedToNative<::vtkRenderer>(renderer->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->AddLightsToRenderer(rendererWrap);
}



void vtkLightKit::RemoveLightsFromRenderer(vtkRenderer^ renderer)
{
  ::vtkRenderer* rendererWrap = vtk::ConvertManagedToNative<::vtkRenderer>(renderer->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->RemoveLightsFromRenderer(rendererWrap);
}



void vtkLightKit::DeepCopy(vtkLightKit^ kit)
{
  ::vtkLightKit* kitWrap = vtk::ConvertManagedToNative<::vtkLightKit>(kit->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->DeepCopy(kitWrap);
}



void vtkLightKit::Modified()
{
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->Modified();
}



void vtkLightKit::Update()
{
  vtk::ConvertManagedToNative<::vtkLightKit>(m_instance)->Update();
}



System::String^ vtkLightKit::GetStringFromType(int type)
{
  const char* retVal = ::vtkLightKit::GetStringFromType(type);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkLightKit::GetStringFromSubType(int type)
{
  const char* retVal = ::vtkLightKit::GetStringFromSubType(type);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkLightKit::GetShortStringFromSubType(int subtype)
{
  const char* retVal = ::vtkLightKit::GetShortStringFromSubType(subtype);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkLightKit::vtkLightKit(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkLightKit::vtkLightKit(bool donothing) : vtkObject(donothing) {}



  vtkLightKit::vtkLightKit() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkLightKit::New()));
}



  vtkLightKit::~vtkLightKit() { }





} // end namespace vtkRendering
