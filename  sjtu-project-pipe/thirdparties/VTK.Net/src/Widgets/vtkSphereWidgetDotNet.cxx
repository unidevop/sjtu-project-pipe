

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSphereWidgetDotNet.h"

// native includes
#include "strstream"
#include "vtkSphereWidget.h"
#include "vtkObject.h"
#include "vtkPolyData.h"
#include "vtkProperty.h"
#include "vtkSphere.h"

using namespace System;

namespace vtk {

System::String^ vtkSphereWidget::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSphereWidget::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSphereWidget^ vtkSphereWidget::NewInstance()
{
  ::vtkSphereWidget* retVal = static_cast<::vtkSphereWidget*>(vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->NewInstance());
  return gcnew vtkSphereWidget(IntPtr(retVal), false);
}



vtkSphereWidget^ vtkSphereWidget::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSphereWidget* retVal = static_cast<::vtkSphereWidget*>(::vtkSphereWidget::SafeDownCast(oWrap));
  return gcnew vtkSphereWidget(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSphereWidget::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSphereWidget::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkSphereWidget::SetEnabled(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->SetEnabled(arg0);
}



void vtkSphereWidget::PlaceWidget(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->PlaceWidget(nativeboundsPin);
}



void vtkSphereWidget::PlaceWidget()
{
  vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->PlaceWidget();
}



void vtkSphereWidget::PlaceWidget(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax)
{
  vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->PlaceWidget(xmin, xmax, ymin, ymax, zmin, zmax);
}



void vtkSphereWidget::SetRepresentation(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->SetRepresentation(arg0);
}



int vtkSphereWidget::GetRepresentationMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->GetRepresentationMinValue();
  return retVal;
}



int vtkSphereWidget::GetRepresentationMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->GetRepresentationMaxValue();
  return retVal;
}



int vtkSphereWidget::GetRepresentation()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->GetRepresentation();
  return retVal;
}



void vtkSphereWidget::SetRepresentationToOff()
{
  vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->SetRepresentationToOff();
}



void vtkSphereWidget::SetRepresentationToWireframe()
{
  vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->SetRepresentationToWireframe();
}



void vtkSphereWidget::SetRepresentationToSurface()
{
  vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->SetRepresentationToSurface();
}



void vtkSphereWidget::SetThetaResolution(int r)
{
  vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->SetThetaResolution(r);
}



int vtkSphereWidget::GetThetaResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->GetThetaResolution();
  return retVal;
}



void vtkSphereWidget::SetPhiResolution(int r)
{
  vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->SetPhiResolution(r);
}



int vtkSphereWidget::GetPhiResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->GetPhiResolution();
  return retVal;
}



void vtkSphereWidget::SetRadius(double r)
{
  vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->SetRadius(r);
}



double vtkSphereWidget::GetRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->GetRadius();
  return retVal;
}



void vtkSphereWidget::SetCenter(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->SetCenter(x, y, z);
}



void vtkSphereWidget::SetCenter(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->SetCenter(nativexPin);
}



array<double>^ vtkSphereWidget::GetCenter()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->GetCenter();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkSphereWidget::GetCenter(array<double>^ xyz)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->GetCenter(nativexyzPin);
}



void vtkSphereWidget::SetTranslation(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->SetTranslation(arg0);
}



int vtkSphereWidget::GetTranslation()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->GetTranslation();
  return retVal;
}



void vtkSphereWidget::TranslationOn()
{
  vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->TranslationOn();
}



void vtkSphereWidget::TranslationOff()
{
  vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->TranslationOff();
}



void vtkSphereWidget::SetScale(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->SetScale(arg0);
}



int vtkSphereWidget::GetScale()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->GetScale();
  return retVal;
}



void vtkSphereWidget::ScaleOn()
{
  vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->ScaleOn();
}



void vtkSphereWidget::ScaleOff()
{
  vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->ScaleOff();
}



void vtkSphereWidget::SetHandleVisibility(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->SetHandleVisibility(arg0);
}



int vtkSphereWidget::GetHandleVisibility()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->GetHandleVisibility();
  return retVal;
}



void vtkSphereWidget::HandleVisibilityOn()
{
  vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->HandleVisibilityOn();
}



void vtkSphereWidget::HandleVisibilityOff()
{
  vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->HandleVisibilityOff();
}



void vtkSphereWidget::SetHandleDirection(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->SetHandleDirection(arg0, arg1, arg2);
}



void vtkSphereWidget::SetHandleDirection(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->SetHandleDirection(nativeaPin);
}



array<double>^ vtkSphereWidget::GetHandleDirection()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->GetHandleDirection();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkSphereWidget::GetHandlePosition()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->GetHandlePosition();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkSphereWidget::GetPolyData(vtkPolyData^ pd)
{
  ::vtkPolyData* pdWrap = vtk::ConvertManagedToNative<::vtkPolyData>(pd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->GetPolyData(pdWrap);
}



void vtkSphereWidget::GetSphere(vtkSphere^ sphere)
{
  ::vtkSphere* sphereWrap = vtk::ConvertManagedToNative<::vtkSphere>(sphere->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->GetSphere(sphereWrap);
}



vtkProperty^ vtkSphereWidget::GetSphereProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->GetSphereProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkSphereWidget::GetSelectedSphereProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->GetSelectedSphereProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkSphereWidget::GetHandleProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->GetHandleProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkSphereWidget::GetSelectedHandleProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkSphereWidget>(m_instance)->GetSelectedHandleProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



  vtkSphereWidget::vtkSphereWidget(System::IntPtr native, bool bConst) : vtk3DWidget(native, bConst) {}



  vtkSphereWidget::vtkSphereWidget(bool donothing) : vtk3DWidget(donothing) {}



  vtkSphereWidget::vtkSphereWidget() : vtk3DWidget(false) {
  this->SetNativePointer(IntPtr(::vtkSphereWidget::New()));
}



  vtkSphereWidget::~vtkSphereWidget() { }





} // end namespace vtkWidgets
