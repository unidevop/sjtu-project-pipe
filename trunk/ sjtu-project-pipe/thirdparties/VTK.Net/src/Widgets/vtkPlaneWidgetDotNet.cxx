

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPlaneWidgetDotNet.h"

// native includes
#include "strstream"
#include "vtkPlaneWidget.h"
#include "vtkObject.h"
#include "vtkPlane.h"
#include "vtkPolyData.h"
#include "vtkPolyDataAlgorithm.h"
#include "vtkProperty.h"

using namespace System;

namespace vtk {

System::String^ vtkPlaneWidget::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPlaneWidget::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPlaneWidget^ vtkPlaneWidget::NewInstance()
{
  ::vtkPlaneWidget* retVal = static_cast<::vtkPlaneWidget*>(vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->NewInstance());
  return gcnew vtkPlaneWidget(IntPtr(retVal), false);
}



vtkPlaneWidget^ vtkPlaneWidget::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPlaneWidget* retVal = static_cast<::vtkPlaneWidget*>(::vtkPlaneWidget::SafeDownCast(oWrap));
  return gcnew vtkPlaneWidget(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPlaneWidget::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPlaneWidget::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPlaneWidget::SetEnabled(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->SetEnabled(arg0);
}



void vtkPlaneWidget::PlaceWidget(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->PlaceWidget(nativeboundsPin);
}



void vtkPlaneWidget::PlaceWidget()
{
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->PlaceWidget();
}



void vtkPlaneWidget::PlaceWidget(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax)
{
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->PlaceWidget(xmin, xmax, ymin, ymax, zmin, zmax);
}



void vtkPlaneWidget::SetResolution(int r)
{
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->SetResolution(r);
}



int vtkPlaneWidget::GetResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->GetResolution();
  return retVal;
}



void vtkPlaneWidget::SetOrigin(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->SetOrigin(x, y, z);
}



void vtkPlaneWidget::SetOrigin(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->SetOrigin(nativexPin);
}



array<double>^ vtkPlaneWidget::GetOrigin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->GetOrigin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkPlaneWidget::GetOrigin(array<double>^ xyz)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->GetOrigin(nativexyzPin);
}



void vtkPlaneWidget::SetPoint1(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->SetPoint1(x, y, z);
}



void vtkPlaneWidget::SetPoint1(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->SetPoint1(nativexPin);
}



array<double>^ vtkPlaneWidget::GetPoint1()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->GetPoint1();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkPlaneWidget::GetPoint1(array<double>^ xyz)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->GetPoint1(nativexyzPin);
}



void vtkPlaneWidget::SetPoint2(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->SetPoint2(x, y, z);
}



void vtkPlaneWidget::SetPoint2(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->SetPoint2(nativexPin);
}



array<double>^ vtkPlaneWidget::GetPoint2()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->GetPoint2();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkPlaneWidget::GetPoint2(array<double>^ xyz)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->GetPoint2(nativexyzPin);
}



void vtkPlaneWidget::SetCenter(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->SetCenter(x, y, z);
}



void vtkPlaneWidget::SetCenter(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->SetCenter(nativexPin);
}



array<double>^ vtkPlaneWidget::GetCenter()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->GetCenter();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkPlaneWidget::GetCenter(array<double>^ xyz)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->GetCenter(nativexyzPin);
}



void vtkPlaneWidget::SetNormal(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->SetNormal(x, y, z);
}



void vtkPlaneWidget::SetNormal(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->SetNormal(nativexPin);
}



array<double>^ vtkPlaneWidget::GetNormal()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->GetNormal();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkPlaneWidget::GetNormal(array<double>^ xyz)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->GetNormal(nativexyzPin);
}



void vtkPlaneWidget::SetRepresentation(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->SetRepresentation(arg0);
}



int vtkPlaneWidget::GetRepresentationMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->GetRepresentationMinValue();
  return retVal;
}



int vtkPlaneWidget::GetRepresentationMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->GetRepresentationMaxValue();
  return retVal;
}



int vtkPlaneWidget::GetRepresentation()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->GetRepresentation();
  return retVal;
}



void vtkPlaneWidget::SetRepresentationToOff()
{
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->SetRepresentationToOff();
}



void vtkPlaneWidget::SetRepresentationToOutline()
{
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->SetRepresentationToOutline();
}



void vtkPlaneWidget::SetRepresentationToWireframe()
{
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->SetRepresentationToWireframe();
}



void vtkPlaneWidget::SetRepresentationToSurface()
{
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->SetRepresentationToSurface();
}



void vtkPlaneWidget::SetNormalToXAxis(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->SetNormalToXAxis(arg0);
}



int vtkPlaneWidget::GetNormalToXAxis()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->GetNormalToXAxis();
  return retVal;
}



void vtkPlaneWidget::NormalToXAxisOn()
{
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->NormalToXAxisOn();
}



void vtkPlaneWidget::NormalToXAxisOff()
{
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->NormalToXAxisOff();
}



void vtkPlaneWidget::SetNormalToYAxis(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->SetNormalToYAxis(arg0);
}



int vtkPlaneWidget::GetNormalToYAxis()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->GetNormalToYAxis();
  return retVal;
}



void vtkPlaneWidget::NormalToYAxisOn()
{
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->NormalToYAxisOn();
}



void vtkPlaneWidget::NormalToYAxisOff()
{
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->NormalToYAxisOff();
}



void vtkPlaneWidget::SetNormalToZAxis(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->SetNormalToZAxis(arg0);
}



int vtkPlaneWidget::GetNormalToZAxis()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->GetNormalToZAxis();
  return retVal;
}



void vtkPlaneWidget::NormalToZAxisOn()
{
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->NormalToZAxisOn();
}



void vtkPlaneWidget::NormalToZAxisOff()
{
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->NormalToZAxisOff();
}



void vtkPlaneWidget::GetPolyData(vtkPolyData^ pd)
{
  ::vtkPolyData* pdWrap = vtk::ConvertManagedToNative<::vtkPolyData>(pd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->GetPolyData(pdWrap);
}



void vtkPlaneWidget::GetPlane(vtkPlane^ plane)
{
  ::vtkPlane* planeWrap = vtk::ConvertManagedToNative<::vtkPlane>(plane->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->GetPlane(planeWrap);
}



vtkPolyDataAlgorithm^ vtkPlaneWidget::GetPolyDataAlgorithm()
{
  ::vtkPolyDataAlgorithm* retVal = static_cast<::vtkPolyDataAlgorithm*>(vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->GetPolyDataAlgorithm());
  return gcnew vtkPolyDataAlgorithm(IntPtr(retVal), false);
}



void vtkPlaneWidget::UpdatePlacement()
{
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->UpdatePlacement();
}



vtkProperty^ vtkPlaneWidget::GetHandleProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->GetHandleProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkPlaneWidget::GetSelectedHandleProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->GetSelectedHandleProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



void vtkPlaneWidget::SetPlaneProperty(vtkProperty^ arg0)
{
  ::vtkProperty* arg0Wrap = vtk::ConvertManagedToNative<::vtkProperty>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->SetPlaneProperty(arg0Wrap);
}



vtkProperty^ vtkPlaneWidget::GetPlaneProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->GetPlaneProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkPlaneWidget::GetSelectedPlaneProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkPlaneWidget>(m_instance)->GetSelectedPlaneProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



  vtkPlaneWidget::vtkPlaneWidget(System::IntPtr native, bool bConst) : vtkPolyDataSourceWidget(native, bConst) {}



  vtkPlaneWidget::vtkPlaneWidget(bool donothing) : vtkPolyDataSourceWidget(donothing) {}



  vtkPlaneWidget::vtkPlaneWidget() : vtkPolyDataSourceWidget(false) {
  this->SetNativePointer(IntPtr(::vtkPlaneWidget::New()));
}



  vtkPlaneWidget::~vtkPlaneWidget() { }





} // end namespace vtkWidgets
