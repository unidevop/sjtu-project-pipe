

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkLineWidgetDotNet.h"

// native includes
#include "strstream"
#include "vtkLineWidget.h"
#include "vtkObject.h"
#include "vtkPolyData.h"
#include "vtkProperty.h"

using namespace System;

namespace vtk {

System::String^ vtkLineWidget::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkLineWidget::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkLineWidget^ vtkLineWidget::NewInstance()
{
  ::vtkLineWidget* retVal = static_cast<::vtkLineWidget*>(vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->NewInstance());
  return gcnew vtkLineWidget(IntPtr(retVal), false);
}



vtkLineWidget^ vtkLineWidget::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkLineWidget* retVal = static_cast<::vtkLineWidget*>(::vtkLineWidget::SafeDownCast(oWrap));
  return gcnew vtkLineWidget(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkLineWidget::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkLineWidget::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkLineWidget::SetEnabled(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->SetEnabled(arg0);
}



void vtkLineWidget::PlaceWidget(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->PlaceWidget(nativeboundsPin);
}



void vtkLineWidget::PlaceWidget()
{
  vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->PlaceWidget();
}



void vtkLineWidget::PlaceWidget(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax)
{
  vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->PlaceWidget(xmin, xmax, ymin, ymax, zmin, zmax);
}



void vtkLineWidget::SetResolution(int r)
{
  vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->SetResolution(r);
}



int vtkLineWidget::GetResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->GetResolution();
  return retVal;
}



void vtkLineWidget::SetPoint1(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->SetPoint1(x, y, z);
}



void vtkLineWidget::SetPoint1(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->SetPoint1(nativexPin);
}



array<double>^ vtkLineWidget::GetPoint1()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->GetPoint1();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkLineWidget::GetPoint1(array<double>^ xyz)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->GetPoint1(nativexyzPin);
}



void vtkLineWidget::SetPoint2(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->SetPoint2(x, y, z);
}



void vtkLineWidget::SetPoint2(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->SetPoint2(nativexPin);
}



array<double>^ vtkLineWidget::GetPoint2()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->GetPoint2();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkLineWidget::GetPoint2(array<double>^ xyz)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->GetPoint2(nativexyzPin);
}



void vtkLineWidget::SetAlign(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->SetAlign(arg0);
}



int vtkLineWidget::GetAlignMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->GetAlignMinValue();
  return retVal;
}



int vtkLineWidget::GetAlignMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->GetAlignMaxValue();
  return retVal;
}



int vtkLineWidget::GetAlign()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->GetAlign();
  return retVal;
}



void vtkLineWidget::SetAlignToXAxis()
{
  vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->SetAlignToXAxis();
}



void vtkLineWidget::SetAlignToYAxis()
{
  vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->SetAlignToYAxis();
}



void vtkLineWidget::SetAlignToZAxis()
{
  vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->SetAlignToZAxis();
}



void vtkLineWidget::SetAlignToNone()
{
  vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->SetAlignToNone();
}



void vtkLineWidget::SetClampToBounds(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->SetClampToBounds(arg0);
}



int vtkLineWidget::GetClampToBounds()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->GetClampToBounds();
  return retVal;
}



void vtkLineWidget::ClampToBoundsOn()
{
  vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->ClampToBoundsOn();
}



void vtkLineWidget::ClampToBoundsOff()
{
  vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->ClampToBoundsOff();
}



void vtkLineWidget::GetPolyData(vtkPolyData^ pd)
{
  ::vtkPolyData* pdWrap = vtk::ConvertManagedToNative<::vtkPolyData>(pd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->GetPolyData(pdWrap);
}



vtkProperty^ vtkLineWidget::GetHandleProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->GetHandleProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkLineWidget::GetSelectedHandleProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->GetSelectedHandleProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkLineWidget::GetLineProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->GetLineProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkLineWidget::GetSelectedLineProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkLineWidget>(m_instance)->GetSelectedLineProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



  vtkLineWidget::vtkLineWidget(System::IntPtr native, bool bConst) : vtk3DWidget(native, bConst) {}



  vtkLineWidget::vtkLineWidget(bool donothing) : vtk3DWidget(donothing) {}



  vtkLineWidget::vtkLineWidget() : vtk3DWidget(false) {
  this->SetNativePointer(IntPtr(::vtkLineWidget::New()));
}



  vtkLineWidget::~vtkLineWidget() { }





} // end namespace vtkWidgets
