

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkBoxWidgetDotNet.h"

// native includes
#include "strstream"
#include "vtkBoxWidget.h"
#include "vtkObject.h"
#include "vtkPlanes.h"
#include "vtkPolyData.h"
#include "vtkProperty.h"
#include "vtkTransform.h"

using namespace System;

namespace vtk {

System::String^ vtkBoxWidget::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkBoxWidget::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkBoxWidget^ vtkBoxWidget::NewInstance()
{
  ::vtkBoxWidget* retVal = static_cast<::vtkBoxWidget*>(vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->NewInstance());
  return gcnew vtkBoxWidget(IntPtr(retVal), false);
}



vtkBoxWidget^ vtkBoxWidget::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkBoxWidget* retVal = static_cast<::vtkBoxWidget*>(::vtkBoxWidget::SafeDownCast(oWrap));
  return gcnew vtkBoxWidget(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkBoxWidget::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkBoxWidget::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkBoxWidget::SetEnabled(int arg0)
{
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->SetEnabled(arg0);
}



void vtkBoxWidget::PlaceWidget(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->PlaceWidget(nativeboundsPin);
}



void vtkBoxWidget::PlaceWidget()
{
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->PlaceWidget();
}



void vtkBoxWidget::PlaceWidget(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax)
{
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->PlaceWidget(xmin, xmax, ymin, ymax, zmin, zmax);
}



void vtkBoxWidget::GetPlanes(vtkPlanes^ planes)
{
  ::vtkPlanes* planesWrap = vtk::ConvertManagedToNative<::vtkPlanes>(planes->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->GetPlanes(planesWrap);
}



void vtkBoxWidget::SetInsideOut(int arg0)
{
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->SetInsideOut(arg0);
}



int vtkBoxWidget::GetInsideOut()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->GetInsideOut();
  return retVal;
}



void vtkBoxWidget::InsideOutOn()
{
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->InsideOutOn();
}



void vtkBoxWidget::InsideOutOff()
{
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->InsideOutOff();
}



void vtkBoxWidget::GetTransform(vtkTransform^ t)
{
  ::vtkTransform* tWrap = vtk::ConvertManagedToNative<::vtkTransform>(t->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->GetTransform(tWrap);
}



void vtkBoxWidget::SetTransform(vtkTransform^ t)
{
  ::vtkTransform* tWrap = vtk::ConvertManagedToNative<::vtkTransform>(t->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->SetTransform(tWrap);
}



void vtkBoxWidget::GetPolyData(vtkPolyData^ pd)
{
  ::vtkPolyData* pdWrap = vtk::ConvertManagedToNative<::vtkPolyData>(pd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->GetPolyData(pdWrap);
}



vtkProperty^ vtkBoxWidget::GetHandleProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->GetHandleProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkBoxWidget::GetSelectedHandleProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->GetSelectedHandleProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



void vtkBoxWidget::HandlesOn()
{
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->HandlesOn();
}



void vtkBoxWidget::HandlesOff()
{
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->HandlesOff();
}



vtkProperty^ vtkBoxWidget::GetFaceProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->GetFaceProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkBoxWidget::GetSelectedFaceProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->GetSelectedFaceProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkBoxWidget::GetOutlineProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->GetOutlineProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkBoxWidget::GetSelectedOutlineProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->GetSelectedOutlineProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



void vtkBoxWidget::SetOutlineFaceWires(int arg0)
{
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->SetOutlineFaceWires(arg0);
}



int vtkBoxWidget::GetOutlineFaceWires()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->GetOutlineFaceWires();
  return retVal;
}



void vtkBoxWidget::OutlineFaceWiresOn()
{
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->OutlineFaceWiresOn();
}



void vtkBoxWidget::OutlineFaceWiresOff()
{
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->OutlineFaceWiresOff();
}



void vtkBoxWidget::SetOutlineCursorWires(int arg0)
{
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->SetOutlineCursorWires(arg0);
}



int vtkBoxWidget::GetOutlineCursorWires()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->GetOutlineCursorWires();
  return retVal;
}



void vtkBoxWidget::OutlineCursorWiresOn()
{
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->OutlineCursorWiresOn();
}



void vtkBoxWidget::OutlineCursorWiresOff()
{
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->OutlineCursorWiresOff();
}



void vtkBoxWidget::SetTranslationEnabled(int arg0)
{
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->SetTranslationEnabled(arg0);
}



int vtkBoxWidget::GetTranslationEnabled()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->GetTranslationEnabled();
  return retVal;
}



void vtkBoxWidget::TranslationEnabledOn()
{
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->TranslationEnabledOn();
}



void vtkBoxWidget::TranslationEnabledOff()
{
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->TranslationEnabledOff();
}



void vtkBoxWidget::SetScalingEnabled(int arg0)
{
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->SetScalingEnabled(arg0);
}



int vtkBoxWidget::GetScalingEnabled()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->GetScalingEnabled();
  return retVal;
}



void vtkBoxWidget::ScalingEnabledOn()
{
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->ScalingEnabledOn();
}



void vtkBoxWidget::ScalingEnabledOff()
{
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->ScalingEnabledOff();
}



void vtkBoxWidget::SetRotationEnabled(int arg0)
{
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->SetRotationEnabled(arg0);
}



int vtkBoxWidget::GetRotationEnabled()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->GetRotationEnabled();
  return retVal;
}



void vtkBoxWidget::RotationEnabledOn()
{
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->RotationEnabledOn();
}



void vtkBoxWidget::RotationEnabledOff()
{
  vtk::ConvertManagedToNative<::vtkBoxWidget>(m_instance)->RotationEnabledOff();
}



  vtkBoxWidget::vtkBoxWidget(System::IntPtr native, bool bConst) : vtk3DWidget(native, bConst) {}



  vtkBoxWidget::vtkBoxWidget(bool donothing) : vtk3DWidget(donothing) {}



  vtkBoxWidget::vtkBoxWidget() : vtk3DWidget(false) {
  this->SetNativePointer(IntPtr(::vtkBoxWidget::New()));
}



  vtkBoxWidget::~vtkBoxWidget() { }





} // end namespace vtkWidgets
