

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPropertyDotNet.h"
#include "vtkActorDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkProperty.h"
#include "vtkActor.h"
#include "vtkRenderer.h"

using namespace System;

namespace vtk {

System::String^ vtkProperty::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkProperty::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkProperty^ vtkProperty::NewInstance()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->NewInstance());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkProperty::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(::vtkProperty::SafeDownCast(oWrap));
  return gcnew vtkProperty(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkProperty::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkProperty::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkProperty::DeepCopy(vtkProperty^ p)
{
  ::vtkProperty* pWrap = vtk::ConvertManagedToNative<::vtkProperty>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->DeepCopy(pWrap);
}



void vtkProperty::Render(vtkActor^ arg0, vtkRenderer^ arg1)
{
  ::vtkActor* arg0Wrap = vtk::ConvertManagedToNative<::vtkActor>(arg0->GetNativePointer());
  ::vtkRenderer* arg1Wrap = vtk::ConvertManagedToNative<::vtkRenderer>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->Render(arg0Wrap, arg1Wrap);
}



void vtkProperty::BackfaceRender(vtkActor^ arg0, vtkRenderer^ arg1)
{
  ::vtkActor* arg0Wrap = vtk::ConvertManagedToNative<::vtkActor>(arg0->GetNativePointer());
  ::vtkRenderer* arg1Wrap = vtk::ConvertManagedToNative<::vtkRenderer>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->BackfaceRender(arg0Wrap, arg1Wrap);
}



void vtkProperty::SetInterpolation(int arg0)
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetInterpolation(arg0);
}



int vtkProperty::GetInterpolationMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetInterpolationMinValue();
  return retVal;
}



int vtkProperty::GetInterpolationMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetInterpolationMaxValue();
  return retVal;
}



int vtkProperty::GetInterpolation()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetInterpolation();
  return retVal;
}



void vtkProperty::SetInterpolationToFlat()
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetInterpolationToFlat();
}



void vtkProperty::SetInterpolationToGouraud()
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetInterpolationToGouraud();
}



void vtkProperty::SetInterpolationToPhong()
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetInterpolationToPhong();
}



System::String^ vtkProperty::GetInterpolationAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetInterpolationAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkProperty::SetRepresentation(int arg0)
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetRepresentation(arg0);
}



int vtkProperty::GetRepresentationMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetRepresentationMinValue();
  return retVal;
}



int vtkProperty::GetRepresentationMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetRepresentationMaxValue();
  return retVal;
}



int vtkProperty::GetRepresentation()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetRepresentation();
  return retVal;
}



void vtkProperty::SetRepresentationToPoints()
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetRepresentationToPoints();
}



void vtkProperty::SetRepresentationToWireframe()
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetRepresentationToWireframe();
}



void vtkProperty::SetRepresentationToSurface()
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetRepresentationToSurface();
}



System::String^ vtkProperty::GetRepresentationAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetRepresentationAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkProperty::SetColor(double r, double g, double b)
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetColor(r, g, b);
}



void vtkProperty::SetColor(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetColor(nativeaPin);
}



array<double>^ vtkProperty::GetColor()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetColor();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkProperty::GetColor(array<double>^ rgb)
{
  pin_ptr<double> rgbPin = &rgb[0];
  double* nativergbPin = rgbPin;
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetColor(nativergbPin);
}



void vtkProperty::SetAmbient(double arg0)
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetAmbient(arg0);
}



double vtkProperty::GetAmbientMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetAmbientMinValue();
  return retVal;
}



double vtkProperty::GetAmbientMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetAmbientMaxValue();
  return retVal;
}



double vtkProperty::GetAmbient()
{
  double retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetAmbient();
  return retVal;
}



void vtkProperty::SetDiffuse(double arg0)
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetDiffuse(arg0);
}



double vtkProperty::GetDiffuseMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetDiffuseMinValue();
  return retVal;
}



double vtkProperty::GetDiffuseMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetDiffuseMaxValue();
  return retVal;
}



double vtkProperty::GetDiffuse()
{
  double retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetDiffuse();
  return retVal;
}



void vtkProperty::SetSpecular(double arg0)
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetSpecular(arg0);
}



double vtkProperty::GetSpecularMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetSpecularMinValue();
  return retVal;
}



double vtkProperty::GetSpecularMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetSpecularMaxValue();
  return retVal;
}



double vtkProperty::GetSpecular()
{
  double retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetSpecular();
  return retVal;
}



void vtkProperty::SetSpecularPower(double arg0)
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetSpecularPower(arg0);
}



double vtkProperty::GetSpecularPowerMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetSpecularPowerMinValue();
  return retVal;
}



double vtkProperty::GetSpecularPowerMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetSpecularPowerMaxValue();
  return retVal;
}



double vtkProperty::GetSpecularPower()
{
  double retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetSpecularPower();
  return retVal;
}



void vtkProperty::SetOpacity(double arg0)
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetOpacity(arg0);
}



double vtkProperty::GetOpacityMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetOpacityMinValue();
  return retVal;
}



double vtkProperty::GetOpacityMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetOpacityMaxValue();
  return retVal;
}



double vtkProperty::GetOpacity()
{
  double retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetOpacity();
  return retVal;
}



void vtkProperty::SetAmbientColor(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetAmbientColor(arg0, arg1, arg2);
}



void vtkProperty::SetAmbientColor(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetAmbientColor(nativeaPin);
}



array<double>^ vtkProperty::GetAmbientColor()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetAmbientColor();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkProperty::SetDiffuseColor(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetDiffuseColor(arg0, arg1, arg2);
}



void vtkProperty::SetDiffuseColor(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetDiffuseColor(nativeaPin);
}



array<double>^ vtkProperty::GetDiffuseColor()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetDiffuseColor();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkProperty::SetSpecularColor(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetSpecularColor(arg0, arg1, arg2);
}



void vtkProperty::SetSpecularColor(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetSpecularColor(nativeaPin);
}



array<double>^ vtkProperty::GetSpecularColor()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetSpecularColor();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



int vtkProperty::GetEdgeVisibility()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetEdgeVisibility();
  return retVal;
}



void vtkProperty::SetEdgeVisibility(int arg0)
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetEdgeVisibility(arg0);
}



void vtkProperty::EdgeVisibilityOn()
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->EdgeVisibilityOn();
}



void vtkProperty::EdgeVisibilityOff()
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->EdgeVisibilityOff();
}



void vtkProperty::SetEdgeColor(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetEdgeColor(arg0, arg1, arg2);
}



void vtkProperty::SetEdgeColor(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetEdgeColor(nativeaPin);
}



array<double>^ vtkProperty::GetEdgeColor()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetEdgeColor();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkProperty::SetLineWidth(float arg0)
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetLineWidth(arg0);
}



float vtkProperty::GetLineWidthMinValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetLineWidthMinValue();
  return retVal;
}



float vtkProperty::GetLineWidthMaxValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetLineWidthMaxValue();
  return retVal;
}



float vtkProperty::GetLineWidth()
{
  float retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetLineWidth();
  return retVal;
}



void vtkProperty::SetLineStipplePattern(int arg0)
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetLineStipplePattern(arg0);
}



int vtkProperty::GetLineStipplePattern()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetLineStipplePattern();
  return retVal;
}



void vtkProperty::SetLineStippleRepeatFactor(int arg0)
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetLineStippleRepeatFactor(arg0);
}



int vtkProperty::GetLineStippleRepeatFactorMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetLineStippleRepeatFactorMinValue();
  return retVal;
}



int vtkProperty::GetLineStippleRepeatFactorMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetLineStippleRepeatFactorMaxValue();
  return retVal;
}



int vtkProperty::GetLineStippleRepeatFactor()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetLineStippleRepeatFactor();
  return retVal;
}



void vtkProperty::SetPointSize(float arg0)
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetPointSize(arg0);
}



float vtkProperty::GetPointSizeMinValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetPointSizeMinValue();
  return retVal;
}



float vtkProperty::GetPointSizeMaxValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetPointSizeMaxValue();
  return retVal;
}



float vtkProperty::GetPointSize()
{
  float retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetPointSize();
  return retVal;
}



int vtkProperty::GetBackfaceCulling()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetBackfaceCulling();
  return retVal;
}



void vtkProperty::SetBackfaceCulling(int arg0)
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetBackfaceCulling(arg0);
}



void vtkProperty::BackfaceCullingOn()
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->BackfaceCullingOn();
}



void vtkProperty::BackfaceCullingOff()
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->BackfaceCullingOff();
}



int vtkProperty::GetFrontfaceCulling()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->GetFrontfaceCulling();
  return retVal;
}



void vtkProperty::SetFrontfaceCulling(int arg0)
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->SetFrontfaceCulling(arg0);
}



void vtkProperty::FrontfaceCullingOn()
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->FrontfaceCullingOn();
}



void vtkProperty::FrontfaceCullingOff()
{
  vtk::ConvertManagedToNative<::vtkProperty>(m_instance)->FrontfaceCullingOff();
}



  vtkProperty::vtkProperty(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkProperty::vtkProperty(bool donothing) : vtkObject(donothing) {}



  vtkProperty::vtkProperty() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkProperty::New()));
}



  vtkProperty::~vtkProperty() { }





} // end namespace vtkRendering
