

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkLightDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkLight.h"
#include "vtkMatrix4x4.h"
#include "vtkRenderer.h"

using namespace System;

namespace vtk {

System::String^ vtkLight::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkLight>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkLight::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLight>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkLight^ vtkLight::NewInstance()
{
  ::vtkLight* retVal = static_cast<::vtkLight*>(vtk::ConvertManagedToNative<::vtkLight>(m_instance)->NewInstance());
  return gcnew vtkLight(IntPtr(retVal), false);
}



vtkLight^ vtkLight::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkLight* retVal = static_cast<::vtkLight*>(::vtkLight::SafeDownCast(oWrap));
  return gcnew vtkLight(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkLight::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkLight>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkLight::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkLight>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkLight::Render(vtkRenderer^ arg0, int arg1)
{
  ::vtkRenderer* arg0Wrap = vtk::ConvertManagedToNative<::vtkRenderer>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->Render(arg0Wrap, arg1);
}



void vtkLight::SetAmbientColor(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetAmbientColor(arg0, arg1, arg2);
}



void vtkLight::SetAmbientColor(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetAmbientColor(nativeaPin);
}



array<double>^ vtkLight::GetAmbientColor()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLight>(m_instance)->GetAmbientColor();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkLight::SetDiffuseColor(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetDiffuseColor(arg0, arg1, arg2);
}



void vtkLight::SetDiffuseColor(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetDiffuseColor(nativeaPin);
}



array<double>^ vtkLight::GetDiffuseColor()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLight>(m_instance)->GetDiffuseColor();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkLight::SetSpecularColor(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetSpecularColor(arg0, arg1, arg2);
}



void vtkLight::SetSpecularColor(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetSpecularColor(nativeaPin);
}



array<double>^ vtkLight::GetSpecularColor()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLight>(m_instance)->GetSpecularColor();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkLight::SetColor(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetColor(arg0, arg1, arg2);
}



void vtkLight::SetColor(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetColor(nativeaPin);
}



void vtkLight::GetColor(array<double>^ rgb)
{
  pin_ptr<double> rgbPin = &rgb[0];
  double* nativergbPin = rgbPin;
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->GetColor(nativergbPin);
}



array<double>^ vtkLight::GetColor()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLight>(m_instance)->GetColor();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkLight::SetPosition(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetPosition(arg0, arg1, arg2);
}



void vtkLight::SetPosition(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetPosition(nativeaPin);
}



array<double>^ vtkLight::GetPosition()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLight>(m_instance)->GetPosition();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkLight::SetPosition(array<float>^ a)
{
  pin_ptr<float> aPin = &a[0];
  float* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetPosition(nativeaPin);
}



void vtkLight::SetFocalPoint(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetFocalPoint(arg0, arg1, arg2);
}



void vtkLight::SetFocalPoint(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetFocalPoint(nativeaPin);
}



array<double>^ vtkLight::GetFocalPoint()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLight>(m_instance)->GetFocalPoint();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkLight::SetFocalPoint(array<float>^ a)
{
  pin_ptr<float> aPin = &a[0];
  float* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetFocalPoint(nativeaPin);
}



void vtkLight::SetIntensity(double arg0)
{
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetIntensity(arg0);
}



double vtkLight::GetIntensity()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLight>(m_instance)->GetIntensity();
  return retVal;
}



void vtkLight::SetSwitch(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetSwitch(arg0);
}



int vtkLight::GetSwitch()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLight>(m_instance)->GetSwitch();
  return retVal;
}



void vtkLight::SwitchOn()
{
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SwitchOn();
}



void vtkLight::SwitchOff()
{
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SwitchOff();
}



void vtkLight::SetPositional(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetPositional(arg0);
}



int vtkLight::GetPositional()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLight>(m_instance)->GetPositional();
  return retVal;
}



void vtkLight::PositionalOn()
{
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->PositionalOn();
}



void vtkLight::PositionalOff()
{
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->PositionalOff();
}



void vtkLight::SetExponent(double arg0)
{
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetExponent(arg0);
}



double vtkLight::GetExponent()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLight>(m_instance)->GetExponent();
  return retVal;
}



void vtkLight::SetConeAngle(double arg0)
{
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetConeAngle(arg0);
}



double vtkLight::GetConeAngle()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLight>(m_instance)->GetConeAngle();
  return retVal;
}



void vtkLight::SetAttenuationValues(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetAttenuationValues(arg0, arg1, arg2);
}



void vtkLight::SetAttenuationValues(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetAttenuationValues(nativeaPin);
}



array<double>^ vtkLight::GetAttenuationValues()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLight>(m_instance)->GetAttenuationValues();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkLight::SetTransformMatrix(vtkMatrix4x4^ arg0)
{
  ::vtkMatrix4x4* arg0Wrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetTransformMatrix(arg0Wrap);
}



vtkMatrix4x4^ vtkLight::GetTransformMatrix()
{
  ::vtkMatrix4x4* retVal = static_cast<::vtkMatrix4x4*>(vtk::ConvertManagedToNative<::vtkLight>(m_instance)->GetTransformMatrix());
  return gcnew vtkMatrix4x4(IntPtr(retVal), false);
}



void vtkLight::GetTransformedPosition(double% a0, double% a1, double% a2)
{
  pin_ptr<double> a0Pin = &a0;
  pin_ptr<double> a1Pin = &a1;
  pin_ptr<double> a2Pin = &a2;
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->GetTransformedPosition(*a0Pin, *a1Pin, *a2Pin);
}



void vtkLight::GetTransformedPosition(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->GetTransformedPosition(nativeaPin);
}



array<double>^ vtkLight::GetTransformedPosition()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLight>(m_instance)->GetTransformedPosition();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkLight::GetTransformedFocalPoint(double% a0, double% a1, double% a2)
{
  pin_ptr<double> a0Pin = &a0;
  pin_ptr<double> a1Pin = &a1;
  pin_ptr<double> a2Pin = &a2;
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->GetTransformedFocalPoint(*a0Pin, *a1Pin, *a2Pin);
}



void vtkLight::GetTransformedFocalPoint(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->GetTransformedFocalPoint(nativeaPin);
}



array<double>^ vtkLight::GetTransformedFocalPoint()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLight>(m_instance)->GetTransformedFocalPoint();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkLight::SetDirectionAngle(double elevation, double azimuth)
{
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetDirectionAngle(elevation, azimuth);
}



void vtkLight::SetDirectionAngle(array<double>^ ang)
{
  pin_ptr<double> angPin = &ang[0];
  double* nativeangPin = angPin;
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetDirectionAngle(nativeangPin);
}



void vtkLight::DeepCopy(vtkLight^ light)
{
  ::vtkLight* lightWrap = vtk::ConvertManagedToNative<::vtkLight>(light->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->DeepCopy(lightWrap);
}



void vtkLight::SetLightType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetLightType(arg0);
}



int vtkLight::GetLightType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLight>(m_instance)->GetLightType();
  return retVal;
}



void vtkLight::SetLightTypeToHeadlight()
{
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetLightTypeToHeadlight();
}



void vtkLight::SetLightTypeToSceneLight()
{
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetLightTypeToSceneLight();
}



void vtkLight::SetLightTypeToCameraLight()
{
  vtk::ConvertManagedToNative<::vtkLight>(m_instance)->SetLightTypeToCameraLight();
}



int vtkLight::LightTypeIsHeadlight()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLight>(m_instance)->LightTypeIsHeadlight();
  return retVal;
}



int vtkLight::LightTypeIsSceneLight()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLight>(m_instance)->LightTypeIsSceneLight();
  return retVal;
}



int vtkLight::LightTypeIsCameraLight()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLight>(m_instance)->LightTypeIsCameraLight();
  return retVal;
}



  vtkLight::vtkLight(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkLight::vtkLight(bool donothing) : vtkObject(donothing) {}



  vtkLight::vtkLight() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkLight::New()));
}



  vtkLight::~vtkLight() { }





} // end namespace vtkRendering
