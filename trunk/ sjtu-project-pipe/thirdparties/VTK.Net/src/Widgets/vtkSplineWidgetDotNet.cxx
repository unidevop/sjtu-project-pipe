

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSplineWidgetDotNet.h"

// native includes
#include "strstream"
#include "vtkSplineWidget.h"
#include "vtkObject.h"
#include "vtkParametricSpline.h"
#include "vtkPlaneSource.h"
#include "vtkPoints.h"
#include "vtkPolyData.h"
#include "vtkProperty.h"

using namespace System;

namespace vtk {

System::String^ vtkSplineWidget::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSplineWidget::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSplineWidget^ vtkSplineWidget::NewInstance()
{
  ::vtkSplineWidget* retVal = static_cast<::vtkSplineWidget*>(vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->NewInstance());
  return gcnew vtkSplineWidget(IntPtr(retVal), false);
}



vtkSplineWidget^ vtkSplineWidget::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSplineWidget* retVal = static_cast<::vtkSplineWidget*>(::vtkSplineWidget::SafeDownCast(oWrap));
  return gcnew vtkSplineWidget(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSplineWidget::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSplineWidget::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkSplineWidget::SetEnabled(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->SetEnabled(arg0);
}



void vtkSplineWidget::PlaceWidget(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->PlaceWidget(nativeboundsPin);
}



void vtkSplineWidget::PlaceWidget()
{
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->PlaceWidget();
}



void vtkSplineWidget::PlaceWidget(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax)
{
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->PlaceWidget(xmin, xmax, ymin, ymax, zmin, zmax);
}



void vtkSplineWidget::SetProjectToPlane(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->SetProjectToPlane(arg0);
}



int vtkSplineWidget::GetProjectToPlane()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->GetProjectToPlane();
  return retVal;
}



void vtkSplineWidget::ProjectToPlaneOn()
{
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->ProjectToPlaneOn();
}



void vtkSplineWidget::ProjectToPlaneOff()
{
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->ProjectToPlaneOff();
}



void vtkSplineWidget::SetPlaneSource(vtkPlaneSource^ plane)
{
  ::vtkPlaneSource* planeWrap = vtk::ConvertManagedToNative<::vtkPlaneSource>(plane->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->SetPlaneSource(planeWrap);
}



void vtkSplineWidget::SetProjectionNormal(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->SetProjectionNormal(arg0);
}



int vtkSplineWidget::GetProjectionNormalMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->GetProjectionNormalMinValue();
  return retVal;
}



int vtkSplineWidget::GetProjectionNormalMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->GetProjectionNormalMaxValue();
  return retVal;
}



int vtkSplineWidget::GetProjectionNormal()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->GetProjectionNormal();
  return retVal;
}



void vtkSplineWidget::SetProjectionNormalToXAxes()
{
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->SetProjectionNormalToXAxes();
}



void vtkSplineWidget::SetProjectionNormalToYAxes()
{
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->SetProjectionNormalToYAxes();
}



void vtkSplineWidget::SetProjectionNormalToZAxes()
{
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->SetProjectionNormalToZAxes();
}



void vtkSplineWidget::SetProjectionNormalToOblique()
{
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->SetProjectionNormalToOblique();
}



void vtkSplineWidget::SetProjectionPosition(double position)
{
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->SetProjectionPosition(position);
}



double vtkSplineWidget::GetProjectionPosition()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->GetProjectionPosition();
  return retVal;
}



void vtkSplineWidget::GetPolyData(vtkPolyData^ pd)
{
  ::vtkPolyData* pdWrap = vtk::ConvertManagedToNative<::vtkPolyData>(pd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->GetPolyData(pdWrap);
}



void vtkSplineWidget::SetHandleProperty(vtkProperty^ arg0)
{
  ::vtkProperty* arg0Wrap = vtk::ConvertManagedToNative<::vtkProperty>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->SetHandleProperty(arg0Wrap);
}



vtkProperty^ vtkSplineWidget::GetHandleProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->GetHandleProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



void vtkSplineWidget::SetSelectedHandleProperty(vtkProperty^ arg0)
{
  ::vtkProperty* arg0Wrap = vtk::ConvertManagedToNative<::vtkProperty>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->SetSelectedHandleProperty(arg0Wrap);
}



vtkProperty^ vtkSplineWidget::GetSelectedHandleProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->GetSelectedHandleProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



void vtkSplineWidget::SetLineProperty(vtkProperty^ arg0)
{
  ::vtkProperty* arg0Wrap = vtk::ConvertManagedToNative<::vtkProperty>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->SetLineProperty(arg0Wrap);
}



vtkProperty^ vtkSplineWidget::GetLineProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->GetLineProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



void vtkSplineWidget::SetSelectedLineProperty(vtkProperty^ arg0)
{
  ::vtkProperty* arg0Wrap = vtk::ConvertManagedToNative<::vtkProperty>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->SetSelectedLineProperty(arg0Wrap);
}



vtkProperty^ vtkSplineWidget::GetSelectedLineProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->GetSelectedLineProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



void vtkSplineWidget::SetNumberOfHandles(int npts)
{
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->SetNumberOfHandles(npts);
}



int vtkSplineWidget::GetNumberOfHandles()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->GetNumberOfHandles();
  return retVal;
}



void vtkSplineWidget::SetResolution(int resolution)
{
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->SetResolution(resolution);
}



int vtkSplineWidget::GetResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->GetResolution();
  return retVal;
}



void vtkSplineWidget::SetParametricSpline(vtkParametricSpline^ arg0)
{
  ::vtkParametricSpline* arg0Wrap = vtk::ConvertManagedToNative<::vtkParametricSpline>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->SetParametricSpline(arg0Wrap);
}



vtkParametricSpline^ vtkSplineWidget::GetParametricSpline()
{
  ::vtkParametricSpline* retVal = static_cast<::vtkParametricSpline*>(vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->GetParametricSpline());
  return gcnew vtkParametricSpline(IntPtr(retVal), false);
}



void vtkSplineWidget::SetHandlePosition(int handle, double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->SetHandlePosition(handle, x, y, z);
}



void vtkSplineWidget::SetHandlePosition(int handle, array<double>^ xyz)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->SetHandlePosition(handle, nativexyzPin);
}



void vtkSplineWidget::GetHandlePosition(int handle, array<double>^ xyz)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->GetHandlePosition(handle, nativexyzPin);
}



array<double>^ vtkSplineWidget::GetHandlePosition(int handle)
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->GetHandlePosition(handle);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkSplineWidget::SetClosed(int closed)
{
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->SetClosed(closed);
}



int vtkSplineWidget::GetClosed()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->GetClosed();
  return retVal;
}



void vtkSplineWidget::ClosedOn()
{
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->ClosedOn();
}



void vtkSplineWidget::ClosedOff()
{
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->ClosedOff();
}



int vtkSplineWidget::IsClosed()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->IsClosed();
  return retVal;
}



double vtkSplineWidget::GetSummedLength()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->GetSummedLength();
  return retVal;
}



void vtkSplineWidget::InitializeHandles(vtkPoints^ points)
{
  ::vtkPoints* pointsWrap = vtk::ConvertManagedToNative<::vtkPoints>(points->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSplineWidget>(m_instance)->InitializeHandles(pointsWrap);
}



  vtkSplineWidget::vtkSplineWidget(System::IntPtr native, bool bConst) : vtk3DWidget(native, bConst) {}



  vtkSplineWidget::vtkSplineWidget(bool donothing) : vtk3DWidget(donothing) {}



  vtkSplineWidget::vtkSplineWidget() : vtk3DWidget(false) {
  this->SetNativePointer(IntPtr(::vtkSplineWidget::New()));
}



  vtkSplineWidget::~vtkSplineWidget() { }





} // end namespace vtkWidgets
