

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPointWidgetDotNet.h"

// native includes
#include "strstream"
#include "vtkPointWidget.h"
#include "vtkObject.h"
#include "vtkPolyData.h"
#include "vtkProperty.h"

using namespace System;

namespace vtk {

System::String^ vtkPointWidget::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPointWidget::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPointWidget^ vtkPointWidget::NewInstance()
{
  ::vtkPointWidget* retVal = static_cast<::vtkPointWidget*>(vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->NewInstance());
  return gcnew vtkPointWidget(IntPtr(retVal), false);
}



vtkPointWidget^ vtkPointWidget::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPointWidget* retVal = static_cast<::vtkPointWidget*>(::vtkPointWidget::SafeDownCast(oWrap));
  return gcnew vtkPointWidget(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPointWidget::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPointWidget::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPointWidget::SetEnabled(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->SetEnabled(arg0);
}



void vtkPointWidget::PlaceWidget(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->PlaceWidget(nativeboundsPin);
}



void vtkPointWidget::PlaceWidget()
{
  vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->PlaceWidget();
}



void vtkPointWidget::PlaceWidget(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax)
{
  vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->PlaceWidget(xmin, xmax, ymin, ymax, zmin, zmax);
}



void vtkPointWidget::GetPolyData(vtkPolyData^ pd)
{
  ::vtkPolyData* pdWrap = vtk::ConvertManagedToNative<::vtkPolyData>(pd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->GetPolyData(pdWrap);
}



void vtkPointWidget::SetPosition(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->SetPosition(x, y, z);
}



void vtkPointWidget::SetPosition(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->SetPosition(nativexPin);
}



array<double>^ vtkPointWidget::GetPosition()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->GetPosition();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkPointWidget::GetPosition(array<double>^ xyz)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->GetPosition(nativexyzPin);
}



void vtkPointWidget::SetOutline(int o)
{
  vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->SetOutline(o);
}



int vtkPointWidget::GetOutline()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->GetOutline();
  return retVal;
}



void vtkPointWidget::OutlineOn()
{
  vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->OutlineOn();
}



void vtkPointWidget::OutlineOff()
{
  vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->OutlineOff();
}



void vtkPointWidget::SetXShadows(int o)
{
  vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->SetXShadows(o);
}



int vtkPointWidget::GetXShadows()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->GetXShadows();
  return retVal;
}



void vtkPointWidget::XShadowsOn()
{
  vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->XShadowsOn();
}



void vtkPointWidget::XShadowsOff()
{
  vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->XShadowsOff();
}



void vtkPointWidget::SetYShadows(int o)
{
  vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->SetYShadows(o);
}



int vtkPointWidget::GetYShadows()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->GetYShadows();
  return retVal;
}



void vtkPointWidget::YShadowsOn()
{
  vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->YShadowsOn();
}



void vtkPointWidget::YShadowsOff()
{
  vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->YShadowsOff();
}



void vtkPointWidget::SetZShadows(int o)
{
  vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->SetZShadows(o);
}



int vtkPointWidget::GetZShadows()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->GetZShadows();
  return retVal;
}



void vtkPointWidget::ZShadowsOn()
{
  vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->ZShadowsOn();
}



void vtkPointWidget::ZShadowsOff()
{
  vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->ZShadowsOff();
}



void vtkPointWidget::SetTranslationMode(int mode)
{
  vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->SetTranslationMode(mode);
}



int vtkPointWidget::GetTranslationMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->GetTranslationMode();
  return retVal;
}



void vtkPointWidget::TranslationModeOn()
{
  vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->TranslationModeOn();
}



void vtkPointWidget::TranslationModeOff()
{
  vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->TranslationModeOff();
}



void vtkPointWidget::AllOn()
{
  vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->AllOn();
}



void vtkPointWidget::AllOff()
{
  vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->AllOff();
}



vtkProperty^ vtkPointWidget::GetProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->GetProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkPointWidget::GetSelectedProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->GetSelectedProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



void vtkPointWidget::SetHotSpotSize(double arg0)
{
  vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->SetHotSpotSize(arg0);
}



double vtkPointWidget::GetHotSpotSizeMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->GetHotSpotSizeMinValue();
  return retVal;
}



double vtkPointWidget::GetHotSpotSizeMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->GetHotSpotSizeMaxValue();
  return retVal;
}



double vtkPointWidget::GetHotSpotSize()
{
  double retVal = vtk::ConvertManagedToNative<::vtkPointWidget>(m_instance)->GetHotSpotSize();
  return retVal;
}



  vtkPointWidget::vtkPointWidget(System::IntPtr native, bool bConst) : vtk3DWidget(native, bConst) {}



  vtkPointWidget::vtkPointWidget(bool donothing) : vtk3DWidget(donothing) {}



  vtkPointWidget::vtkPointWidget() : vtk3DWidget(false) {
  this->SetNativePointer(IntPtr(::vtkPointWidget::New()));
}



  vtkPointWidget::~vtkPointWidget() { }





} // end namespace vtkWidgets
