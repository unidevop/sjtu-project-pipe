

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImplicitPlaneWidgetDotNet.h"

// native includes
#include "strstream"
#include "vtkImplicitPlaneWidget.h"
#include "vtkObject.h"
#include "vtkPlane.h"
#include "vtkPolyData.h"
#include "vtkPolyDataAlgorithm.h"
#include "vtkProperty.h"

using namespace System;

namespace vtk {

System::String^ vtkImplicitPlaneWidget::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImplicitPlaneWidget::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImplicitPlaneWidget^ vtkImplicitPlaneWidget::NewInstance()
{
  ::vtkImplicitPlaneWidget* retVal = static_cast<::vtkImplicitPlaneWidget*>(vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->NewInstance());
  return gcnew vtkImplicitPlaneWidget(IntPtr(retVal), false);
}



vtkImplicitPlaneWidget^ vtkImplicitPlaneWidget::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImplicitPlaneWidget* retVal = static_cast<::vtkImplicitPlaneWidget*>(::vtkImplicitPlaneWidget::SafeDownCast(oWrap));
  return gcnew vtkImplicitPlaneWidget(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImplicitPlaneWidget::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImplicitPlaneWidget::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImplicitPlaneWidget::SetEnabled(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->SetEnabled(arg0);
}



void vtkImplicitPlaneWidget::PlaceWidget(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->PlaceWidget(nativeboundsPin);
}



void vtkImplicitPlaneWidget::PlaceWidget()
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->PlaceWidget();
}



void vtkImplicitPlaneWidget::PlaceWidget(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax)
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->PlaceWidget(xmin, xmax, ymin, ymax, zmin, zmax);
}



void vtkImplicitPlaneWidget::SetOrigin(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->SetOrigin(x, y, z);
}



void vtkImplicitPlaneWidget::SetOrigin(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->SetOrigin(nativexPin);
}



array<double>^ vtkImplicitPlaneWidget::GetOrigin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->GetOrigin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImplicitPlaneWidget::GetOrigin(array<double>^ xyz)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->GetOrigin(nativexyzPin);
}



void vtkImplicitPlaneWidget::SetNormal(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->SetNormal(x, y, z);
}



void vtkImplicitPlaneWidget::SetNormal(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->SetNormal(nativexPin);
}



array<double>^ vtkImplicitPlaneWidget::GetNormal()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->GetNormal();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImplicitPlaneWidget::GetNormal(array<double>^ xyz)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->GetNormal(nativexyzPin);
}



void vtkImplicitPlaneWidget::SetNormalToXAxis(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->SetNormalToXAxis(arg0);
}



int vtkImplicitPlaneWidget::GetNormalToXAxis()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->GetNormalToXAxis();
  return retVal;
}



void vtkImplicitPlaneWidget::NormalToXAxisOn()
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->NormalToXAxisOn();
}



void vtkImplicitPlaneWidget::NormalToXAxisOff()
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->NormalToXAxisOff();
}



void vtkImplicitPlaneWidget::SetNormalToYAxis(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->SetNormalToYAxis(arg0);
}



int vtkImplicitPlaneWidget::GetNormalToYAxis()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->GetNormalToYAxis();
  return retVal;
}



void vtkImplicitPlaneWidget::NormalToYAxisOn()
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->NormalToYAxisOn();
}



void vtkImplicitPlaneWidget::NormalToYAxisOff()
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->NormalToYAxisOff();
}



void vtkImplicitPlaneWidget::SetNormalToZAxis(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->SetNormalToZAxis(arg0);
}



int vtkImplicitPlaneWidget::GetNormalToZAxis()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->GetNormalToZAxis();
  return retVal;
}



void vtkImplicitPlaneWidget::NormalToZAxisOn()
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->NormalToZAxisOn();
}



void vtkImplicitPlaneWidget::NormalToZAxisOff()
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->NormalToZAxisOff();
}



void vtkImplicitPlaneWidget::SetTubing(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->SetTubing(arg0);
}



int vtkImplicitPlaneWidget::GetTubing()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->GetTubing();
  return retVal;
}



void vtkImplicitPlaneWidget::TubingOn()
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->TubingOn();
}



void vtkImplicitPlaneWidget::TubingOff()
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->TubingOff();
}



void vtkImplicitPlaneWidget::SetDrawPlane(int plane)
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->SetDrawPlane(plane);
}



int vtkImplicitPlaneWidget::GetDrawPlane()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->GetDrawPlane();
  return retVal;
}



void vtkImplicitPlaneWidget::DrawPlaneOn()
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->DrawPlaneOn();
}



void vtkImplicitPlaneWidget::DrawPlaneOff()
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->DrawPlaneOff();
}



void vtkImplicitPlaneWidget::SetOutlineTranslation(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->SetOutlineTranslation(arg0);
}



int vtkImplicitPlaneWidget::GetOutlineTranslation()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->GetOutlineTranslation();
  return retVal;
}



void vtkImplicitPlaneWidget::OutlineTranslationOn()
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->OutlineTranslationOn();
}



void vtkImplicitPlaneWidget::OutlineTranslationOff()
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->OutlineTranslationOff();
}



void vtkImplicitPlaneWidget::SetScaleEnabled(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->SetScaleEnabled(arg0);
}



int vtkImplicitPlaneWidget::GetScaleEnabled()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->GetScaleEnabled();
  return retVal;
}



void vtkImplicitPlaneWidget::ScaleEnabledOn()
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->ScaleEnabledOn();
}



void vtkImplicitPlaneWidget::ScaleEnabledOff()
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->ScaleEnabledOff();
}



void vtkImplicitPlaneWidget::GetPolyData(vtkPolyData^ pd)
{
  ::vtkPolyData* pdWrap = vtk::ConvertManagedToNative<::vtkPolyData>(pd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->GetPolyData(pdWrap);
}



vtkPolyDataAlgorithm^ vtkImplicitPlaneWidget::GetPolyDataAlgorithm()
{
  ::vtkPolyDataAlgorithm* retVal = static_cast<::vtkPolyDataAlgorithm*>(vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->GetPolyDataAlgorithm());
  return gcnew vtkPolyDataAlgorithm(IntPtr(retVal), false);
}



void vtkImplicitPlaneWidget::GetPlane(vtkPlane^ plane)
{
  ::vtkPlane* planeWrap = vtk::ConvertManagedToNative<::vtkPlane>(plane->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->GetPlane(planeWrap);
}



void vtkImplicitPlaneWidget::UpdatePlacement()
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->UpdatePlacement();
}



void vtkImplicitPlaneWidget::SizeHandles()
{
  vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->SizeHandles();
}



vtkProperty^ vtkImplicitPlaneWidget::GetNormalProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->GetNormalProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkImplicitPlaneWidget::GetSelectedNormalProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->GetSelectedNormalProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkImplicitPlaneWidget::GetPlaneProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->GetPlaneProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkImplicitPlaneWidget::GetSelectedPlaneProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->GetSelectedPlaneProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkImplicitPlaneWidget::GetOutlineProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->GetOutlineProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkImplicitPlaneWidget::GetSelectedOutlineProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->GetSelectedOutlineProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkImplicitPlaneWidget::GetEdgesProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkImplicitPlaneWidget>(m_instance)->GetEdgesProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



  vtkImplicitPlaneWidget::vtkImplicitPlaneWidget(System::IntPtr native, bool bConst) : vtkPolyDataSourceWidget(native, bConst) {}



  vtkImplicitPlaneWidget::vtkImplicitPlaneWidget(bool donothing) : vtkPolyDataSourceWidget(donothing) {}



  vtkImplicitPlaneWidget::vtkImplicitPlaneWidget() : vtkPolyDataSourceWidget(false) {
  this->SetNativePointer(IntPtr(::vtkImplicitPlaneWidget::New()));
}



  vtkImplicitPlaneWidget::~vtkImplicitPlaneWidget() { }





} // end namespace vtkWidgets
