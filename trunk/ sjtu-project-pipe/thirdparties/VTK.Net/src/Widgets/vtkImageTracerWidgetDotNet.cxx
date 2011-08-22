

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageTracerWidgetDotNet.h"

// native includes
#include "strstream"
#include "vtkImageTracerWidget.h"
#include "vtkGlyphSource2D.h"
#include "vtkObject.h"
#include "vtkPoints.h"
#include "vtkPolyData.h"
#include "vtkProp.h"
#include "vtkProperty.h"

using namespace System;

namespace vtk {

System::String^ vtkImageTracerWidget::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageTracerWidget::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageTracerWidget^ vtkImageTracerWidget::NewInstance()
{
  ::vtkImageTracerWidget* retVal = static_cast<::vtkImageTracerWidget*>(vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->NewInstance());
  return gcnew vtkImageTracerWidget(IntPtr(retVal), false);
}



vtkImageTracerWidget^ vtkImageTracerWidget::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageTracerWidget* retVal = static_cast<::vtkImageTracerWidget*>(::vtkImageTracerWidget::SafeDownCast(oWrap));
  return gcnew vtkImageTracerWidget(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageTracerWidget::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageTracerWidget::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageTracerWidget::SetEnabled(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->SetEnabled(arg0);
}



void vtkImageTracerWidget::PlaceWidget(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->PlaceWidget(nativeboundsPin);
}



void vtkImageTracerWidget::PlaceWidget()
{
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->PlaceWidget();
}



void vtkImageTracerWidget::PlaceWidget(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax)
{
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->PlaceWidget(xmin, xmax, ymin, ymax, zmin, zmax);
}



void vtkImageTracerWidget::SetHandleProperty(vtkProperty^ arg0)
{
  ::vtkProperty* arg0Wrap = vtk::ConvertManagedToNative<::vtkProperty>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->SetHandleProperty(arg0Wrap);
}



vtkProperty^ vtkImageTracerWidget::GetHandleProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->GetHandleProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



void vtkImageTracerWidget::SetSelectedHandleProperty(vtkProperty^ arg0)
{
  ::vtkProperty* arg0Wrap = vtk::ConvertManagedToNative<::vtkProperty>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->SetSelectedHandleProperty(arg0Wrap);
}



vtkProperty^ vtkImageTracerWidget::GetSelectedHandleProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->GetSelectedHandleProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



void vtkImageTracerWidget::SetLineProperty(vtkProperty^ arg0)
{
  ::vtkProperty* arg0Wrap = vtk::ConvertManagedToNative<::vtkProperty>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->SetLineProperty(arg0Wrap);
}



vtkProperty^ vtkImageTracerWidget::GetLineProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->GetLineProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



void vtkImageTracerWidget::SetSelectedLineProperty(vtkProperty^ arg0)
{
  ::vtkProperty* arg0Wrap = vtk::ConvertManagedToNative<::vtkProperty>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->SetSelectedLineProperty(arg0Wrap);
}



vtkProperty^ vtkImageTracerWidget::GetSelectedLineProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->GetSelectedLineProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



void vtkImageTracerWidget::SetViewProp(vtkProp^ prop)
{
  ::vtkProp* propWrap = vtk::ConvertManagedToNative<::vtkProp>(prop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->SetViewProp(propWrap);
}



void vtkImageTracerWidget::SetProjectToPlane(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->SetProjectToPlane(arg0);
}



int vtkImageTracerWidget::GetProjectToPlane()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->GetProjectToPlane();
  return retVal;
}



void vtkImageTracerWidget::ProjectToPlaneOn()
{
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->ProjectToPlaneOn();
}



void vtkImageTracerWidget::ProjectToPlaneOff()
{
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->ProjectToPlaneOff();
}



void vtkImageTracerWidget::SetProjectionNormal(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->SetProjectionNormal(arg0);
}



int vtkImageTracerWidget::GetProjectionNormalMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->GetProjectionNormalMinValue();
  return retVal;
}



int vtkImageTracerWidget::GetProjectionNormalMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->GetProjectionNormalMaxValue();
  return retVal;
}



int vtkImageTracerWidget::GetProjectionNormal()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->GetProjectionNormal();
  return retVal;
}



void vtkImageTracerWidget::SetProjectionNormalToXAxes()
{
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->SetProjectionNormalToXAxes();
}



void vtkImageTracerWidget::SetProjectionNormalToYAxes()
{
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->SetProjectionNormalToYAxes();
}



void vtkImageTracerWidget::SetProjectionNormalToZAxes()
{
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->SetProjectionNormalToZAxes();
}



void vtkImageTracerWidget::SetProjectionPosition(double position)
{
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->SetProjectionPosition(position);
}



double vtkImageTracerWidget::GetProjectionPosition()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->GetProjectionPosition();
  return retVal;
}



void vtkImageTracerWidget::SetSnapToImage(int snap)
{
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->SetSnapToImage(snap);
}



int vtkImageTracerWidget::GetSnapToImage()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->GetSnapToImage();
  return retVal;
}



void vtkImageTracerWidget::SnapToImageOn()
{
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->SnapToImageOn();
}



void vtkImageTracerWidget::SnapToImageOff()
{
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->SnapToImageOff();
}



void vtkImageTracerWidget::SetAutoClose(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->SetAutoClose(arg0);
}



int vtkImageTracerWidget::GetAutoClose()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->GetAutoClose();
  return retVal;
}



void vtkImageTracerWidget::AutoCloseOn()
{
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->AutoCloseOn();
}



void vtkImageTracerWidget::AutoCloseOff()
{
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->AutoCloseOff();
}



void vtkImageTracerWidget::SetCaptureRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->SetCaptureRadius(arg0);
}



double vtkImageTracerWidget::GetCaptureRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->GetCaptureRadius();
  return retVal;
}



void vtkImageTracerWidget::GetPath(vtkPolyData^ pd)
{
  ::vtkPolyData* pdWrap = vtk::ConvertManagedToNative<::vtkPolyData>(pd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->GetPath(pdWrap);
}



vtkGlyphSource2D^ vtkImageTracerWidget::GetGlyphSource()
{
  ::vtkGlyphSource2D* retVal = static_cast<::vtkGlyphSource2D*>(vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->GetGlyphSource());
  return gcnew vtkGlyphSource2D(IntPtr(retVal), false);
}



void vtkImageTracerWidget::SetImageSnapType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->SetImageSnapType(arg0);
}



int vtkImageTracerWidget::GetImageSnapTypeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->GetImageSnapTypeMinValue();
  return retVal;
}



int vtkImageTracerWidget::GetImageSnapTypeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->GetImageSnapTypeMaxValue();
  return retVal;
}



int vtkImageTracerWidget::GetImageSnapType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->GetImageSnapType();
  return retVal;
}



void vtkImageTracerWidget::SetHandlePosition(int handle, array<double>^ xyz)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->SetHandlePosition(handle, nativexyzPin);
}



void vtkImageTracerWidget::SetHandlePosition(int handle, double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->SetHandlePosition(handle, x, y, z);
}



void vtkImageTracerWidget::GetHandlePosition(int handle, array<double>^ xyz)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->GetHandlePosition(handle, nativexyzPin);
}



array<double>^ vtkImageTracerWidget::GetHandlePosition(int handle)
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->GetHandlePosition(handle);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



int vtkImageTracerWidget::GetNumberOfHandles()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->GetNumberOfHandles();
  return retVal;
}



void vtkImageTracerWidget::SetInteraction(int interact)
{
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->SetInteraction(interact);
}



int vtkImageTracerWidget::GetInteraction()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->GetInteraction();
  return retVal;
}



void vtkImageTracerWidget::InteractionOn()
{
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->InteractionOn();
}



void vtkImageTracerWidget::InteractionOff()
{
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->InteractionOff();
}



void vtkImageTracerWidget::InitializeHandles(vtkPoints^ arg0)
{
  ::vtkPoints* arg0Wrap = vtk::ConvertManagedToNative<::vtkPoints>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->InitializeHandles(arg0Wrap);
}



int vtkImageTracerWidget::IsClosed()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->IsClosed();
  return retVal;
}



void vtkImageTracerWidget::SetProp(vtkProp^ prop)
{
  ::vtkProp* propWrap = vtk::ConvertManagedToNative<::vtkProp>(prop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageTracerWidget>(m_instance)->SetProp(propWrap);
}



  vtkImageTracerWidget::vtkImageTracerWidget(System::IntPtr native, bool bConst) : vtk3DWidget(native, bConst) {}



  vtkImageTracerWidget::vtkImageTracerWidget(bool donothing) : vtk3DWidget(donothing) {}



  vtkImageTracerWidget::vtkImageTracerWidget() : vtk3DWidget(false) {
  this->SetNativePointer(IntPtr(::vtkImageTracerWidget::New()));
}



  vtkImageTracerWidget::~vtkImageTracerWidget() { }





} // end namespace vtkWidgets
