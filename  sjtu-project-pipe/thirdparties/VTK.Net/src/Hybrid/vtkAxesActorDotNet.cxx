

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkAxesActorDotNet.h"
#include "vtkCaptionActor2DDotNet.h"

// native includes
#include "strstream"
#include "vtkAxesActor.h"
#include "vtkCaptionActor2D.h"
#include "vtkObject.h"
#include "vtkPolyData.h"
#include "vtkProp.h"
#include "vtkPropCollection.h"
#include "vtkProperty.h"
#include "vtkViewport.h"
#include "vtkWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkAxesActor::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAxesActor::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkAxesActor^ vtkAxesActor::NewInstance()
{
  ::vtkAxesActor* retVal = static_cast<::vtkAxesActor*>(vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->NewInstance());
  return gcnew vtkAxesActor(IntPtr(retVal), false);
}



vtkAxesActor^ vtkAxesActor::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkAxesActor* retVal = static_cast<::vtkAxesActor*>(::vtkAxesActor::SafeDownCast(oWrap));
  return gcnew vtkAxesActor(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkAxesActor::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkAxesActor::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkAxesActor::GetActors(vtkPropCollection^ arg0)
{
  ::vtkPropCollection* arg0Wrap = vtk::ConvertManagedToNative<::vtkPropCollection>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetActors(arg0Wrap);
}



int vtkAxesActor::RenderOpaqueGeometry(vtkViewport^ viewport)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->RenderOpaqueGeometry(viewportWrap);
  return retVal;
}



int vtkAxesActor::RenderTranslucentGeometry(vtkViewport^ viewport)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->RenderTranslucentGeometry(viewportWrap);
  return retVal;
}



int vtkAxesActor::RenderOverlay(vtkViewport^ viewport)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->RenderOverlay(viewportWrap);
  return retVal;
}



void vtkAxesActor::ShallowCopy(vtkProp^ prop)
{
  ::vtkProp* propWrap = vtk::ConvertManagedToNative<::vtkProp>(prop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->ShallowCopy(propWrap);
}



void vtkAxesActor::ReleaseGraphicsResources(vtkWindow^ arg0)
{
  ::vtkWindow* arg0Wrap = vtk::ConvertManagedToNative<::vtkWindow>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->ReleaseGraphicsResources(arg0Wrap);
}



void vtkAxesActor::GetBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetBounds(nativeboundsPin);
}



array<double>^ vtkAxesActor::GetBounds()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetBounds();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



unsigned long vtkAxesActor::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetMTime();
  return retVal;
}



unsigned long vtkAxesActor::GetRedrawMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetRedrawMTime();
  return retVal;
}



void vtkAxesActor::SetTotalLength(array<double>^ v)
{
  pin_ptr<double> vPin = &v[0];
  double* nativevPin = vPin;
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetTotalLength(nativevPin);
}



void vtkAxesActor::SetTotalLength(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetTotalLength(x, y, z);
}



array<double>^ vtkAxesActor::GetTotalLength()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetTotalLength();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkAxesActor::SetNormalizedShaftLength(array<double>^ v)
{
  pin_ptr<double> vPin = &v[0];
  double* nativevPin = vPin;
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetNormalizedShaftLength(nativevPin);
}



void vtkAxesActor::SetNormalizedShaftLength(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetNormalizedShaftLength(x, y, z);
}



array<double>^ vtkAxesActor::GetNormalizedShaftLength()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetNormalizedShaftLength();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkAxesActor::SetNormalizedTipLength(array<double>^ v)
{
  pin_ptr<double> vPin = &v[0];
  double* nativevPin = vPin;
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetNormalizedTipLength(nativevPin);
}



void vtkAxesActor::SetNormalizedTipLength(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetNormalizedTipLength(x, y, z);
}



array<double>^ vtkAxesActor::GetNormalizedTipLength()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetNormalizedTipLength();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkAxesActor::SetNormalizedLabelPosition(array<double>^ v)
{
  pin_ptr<double> vPin = &v[0];
  double* nativevPin = vPin;
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetNormalizedLabelPosition(nativevPin);
}



void vtkAxesActor::SetNormalizedLabelPosition(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetNormalizedLabelPosition(x, y, z);
}



array<double>^ vtkAxesActor::GetNormalizedLabelPosition()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetNormalizedLabelPosition();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkAxesActor::SetConeResolution(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetConeResolution(arg0);
}



int vtkAxesActor::GetConeResolutionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetConeResolutionMinValue();
  return retVal;
}



int vtkAxesActor::GetConeResolutionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetConeResolutionMaxValue();
  return retVal;
}



int vtkAxesActor::GetConeResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetConeResolution();
  return retVal;
}



void vtkAxesActor::SetSphereResolution(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetSphereResolution(arg0);
}



int vtkAxesActor::GetSphereResolutionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetSphereResolutionMinValue();
  return retVal;
}



int vtkAxesActor::GetSphereResolutionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetSphereResolutionMaxValue();
  return retVal;
}



int vtkAxesActor::GetSphereResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetSphereResolution();
  return retVal;
}



void vtkAxesActor::SetCylinderResolution(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetCylinderResolution(arg0);
}



int vtkAxesActor::GetCylinderResolutionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetCylinderResolutionMinValue();
  return retVal;
}



int vtkAxesActor::GetCylinderResolutionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetCylinderResolutionMaxValue();
  return retVal;
}



int vtkAxesActor::GetCylinderResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetCylinderResolution();
  return retVal;
}



void vtkAxesActor::SetConeRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetConeRadius(arg0);
}



double vtkAxesActor::GetConeRadiusMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetConeRadiusMinValue();
  return retVal;
}



double vtkAxesActor::GetConeRadiusMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetConeRadiusMaxValue();
  return retVal;
}



double vtkAxesActor::GetConeRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetConeRadius();
  return retVal;
}



void vtkAxesActor::SetSphereRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetSphereRadius(arg0);
}



double vtkAxesActor::GetSphereRadiusMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetSphereRadiusMinValue();
  return retVal;
}



double vtkAxesActor::GetSphereRadiusMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetSphereRadiusMaxValue();
  return retVal;
}



double vtkAxesActor::GetSphereRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetSphereRadius();
  return retVal;
}



void vtkAxesActor::SetCylinderRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetCylinderRadius(arg0);
}



double vtkAxesActor::GetCylinderRadiusMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetCylinderRadiusMinValue();
  return retVal;
}



double vtkAxesActor::GetCylinderRadiusMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetCylinderRadiusMaxValue();
  return retVal;
}



double vtkAxesActor::GetCylinderRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetCylinderRadius();
  return retVal;
}



void vtkAxesActor::SetShaftType(int type)
{
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetShaftType(type);
}



void vtkAxesActor::SetShaftTypeToCylinder()
{
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetShaftTypeToCylinder();
}



void vtkAxesActor::SetShaftTypeToLine()
{
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetShaftTypeToLine();
}



void vtkAxesActor::SetShaftTypeToUserDefined()
{
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetShaftTypeToUserDefined();
}



int vtkAxesActor::GetShaftType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetShaftType();
  return retVal;
}



void vtkAxesActor::SetTipType(int type)
{
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetTipType(type);
}



void vtkAxesActor::SetTipTypeToCone()
{
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetTipTypeToCone();
}



void vtkAxesActor::SetTipTypeToSphere()
{
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetTipTypeToSphere();
}



void vtkAxesActor::SetTipTypeToUserDefined()
{
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetTipTypeToUserDefined();
}



int vtkAxesActor::GetTipType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetTipType();
  return retVal;
}



void vtkAxesActor::SetUserDefinedTip(vtkPolyData^ arg0)
{
  ::vtkPolyData* arg0Wrap = vtk::ConvertManagedToNative<::vtkPolyData>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetUserDefinedTip(arg0Wrap);
}



vtkPolyData^ vtkAxesActor::GetUserDefinedTip()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetUserDefinedTip());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



void vtkAxesActor::SetUserDefinedShaft(vtkPolyData^ arg0)
{
  ::vtkPolyData* arg0Wrap = vtk::ConvertManagedToNative<::vtkPolyData>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetUserDefinedShaft(arg0Wrap);
}



vtkPolyData^ vtkAxesActor::GetUserDefinedShaft()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetUserDefinedShaft());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



vtkProperty^ vtkAxesActor::GetXAxisTipProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetXAxisTipProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkAxesActor::GetYAxisTipProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetYAxisTipProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkAxesActor::GetZAxisTipProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetZAxisTipProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkAxesActor::GetXAxisShaftProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetXAxisShaftProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkAxesActor::GetYAxisShaftProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetYAxisShaftProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkAxesActor::GetZAxisShaftProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetZAxisShaftProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkCaptionActor2D^ vtkAxesActor::GetXAxisCaptionActor2D()
{
  ::vtkCaptionActor2D* retVal = static_cast<::vtkCaptionActor2D*>(vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetXAxisCaptionActor2D());
  return gcnew vtkCaptionActor2D(IntPtr(retVal), false);
}



vtkCaptionActor2D^ vtkAxesActor::GetYAxisCaptionActor2D()
{
  ::vtkCaptionActor2D* retVal = static_cast<::vtkCaptionActor2D*>(vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetYAxisCaptionActor2D());
  return gcnew vtkCaptionActor2D(IntPtr(retVal), false);
}



vtkCaptionActor2D^ vtkAxesActor::GetZAxisCaptionActor2D()
{
  ::vtkCaptionActor2D* retVal = static_cast<::vtkCaptionActor2D*>(vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetZAxisCaptionActor2D());
  return gcnew vtkCaptionActor2D(IntPtr(retVal), false);
}



void vtkAxesActor::SetXAxisLabelText(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetXAxisLabelText(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkAxesActor::GetXAxisLabelText()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetXAxisLabelText();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkAxesActor::SetYAxisLabelText(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetYAxisLabelText(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkAxesActor::GetYAxisLabelText()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetYAxisLabelText();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkAxesActor::SetZAxisLabelText(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetZAxisLabelText(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkAxesActor::GetZAxisLabelText()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetZAxisLabelText();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkAxesActor::SetAxisLabels(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->SetAxisLabels(arg0);
}



int vtkAxesActor::GetAxisLabels()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->GetAxisLabels();
  return retVal;
}



void vtkAxesActor::AxisLabelsOn()
{
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->AxisLabelsOn();
}



void vtkAxesActor::AxisLabelsOff()
{
  vtk::ConvertManagedToNative<::vtkAxesActor>(m_instance)->AxisLabelsOff();
}



  vtkAxesActor::vtkAxesActor(System::IntPtr native, bool bConst) : vtkProp3D(native, bConst) {}



  vtkAxesActor::vtkAxesActor(bool donothing) : vtkProp3D(donothing) {}



  vtkAxesActor::vtkAxesActor() : vtkProp3D(false) {
  this->SetNativePointer(IntPtr(::vtkAxesActor::New()));
}



  vtkAxesActor::~vtkAxesActor() { }





} // end namespace vtkHybrid
