

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOrientationMarkerWidgetDotNet.h"

// native includes
#include "strstream"
#include "vtkOrientationMarkerWidget.h"
#include "vtkObject.h"
#include "vtkProp.h"

using namespace System;

namespace vtk {

System::String^ vtkOrientationMarkerWidget::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOrientationMarkerWidget>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOrientationMarkerWidget::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOrientationMarkerWidget>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOrientationMarkerWidget^ vtkOrientationMarkerWidget::NewInstance()
{
  ::vtkOrientationMarkerWidget* retVal = static_cast<::vtkOrientationMarkerWidget*>(vtk::ConvertManagedToNative<::vtkOrientationMarkerWidget>(m_instance)->NewInstance());
  return gcnew vtkOrientationMarkerWidget(IntPtr(retVal), false);
}



vtkOrientationMarkerWidget^ vtkOrientationMarkerWidget::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOrientationMarkerWidget* retVal = static_cast<::vtkOrientationMarkerWidget*>(::vtkOrientationMarkerWidget::SafeDownCast(oWrap));
  return gcnew vtkOrientationMarkerWidget(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOrientationMarkerWidget::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOrientationMarkerWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOrientationMarkerWidget::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOrientationMarkerWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkOrientationMarkerWidget::SetOrientationMarker(vtkProp^ prop)
{
  ::vtkProp* propWrap = vtk::ConvertManagedToNative<::vtkProp>(prop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkOrientationMarkerWidget>(m_instance)->SetOrientationMarker(propWrap);
}



vtkProp^ vtkOrientationMarkerWidget::GetOrientationMarker()
{
  ::vtkProp* retVal = static_cast<::vtkProp*>(vtk::ConvertManagedToNative<::vtkOrientationMarkerWidget>(m_instance)->GetOrientationMarker());
  return gcnew vtkProp(IntPtr(retVal), false);
}



void vtkOrientationMarkerWidget::SetEnabled(int arg0)
{
  vtk::ConvertManagedToNative<::vtkOrientationMarkerWidget>(m_instance)->SetEnabled(arg0);
}



void vtkOrientationMarkerWidget::ExecuteCameraUpdateEvent(vtkObject^ o, unsigned long event, System::IntPtr calldata)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkOrientationMarkerWidget>(m_instance)->ExecuteCameraUpdateEvent(oWrap, event, calldata.ToPointer());
}



void vtkOrientationMarkerWidget::SetInteractive(int state)
{
  vtk::ConvertManagedToNative<::vtkOrientationMarkerWidget>(m_instance)->SetInteractive(state);
}



int vtkOrientationMarkerWidget::GetInteractive()
{
  int retVal = vtk::ConvertManagedToNative<::vtkOrientationMarkerWidget>(m_instance)->GetInteractive();
  return retVal;
}



void vtkOrientationMarkerWidget::InteractiveOn()
{
  vtk::ConvertManagedToNative<::vtkOrientationMarkerWidget>(m_instance)->InteractiveOn();
}



void vtkOrientationMarkerWidget::InteractiveOff()
{
  vtk::ConvertManagedToNative<::vtkOrientationMarkerWidget>(m_instance)->InteractiveOff();
}



void vtkOrientationMarkerWidget::SetOutlineColor(double r, double g, double b)
{
  vtk::ConvertManagedToNative<::vtkOrientationMarkerWidget>(m_instance)->SetOutlineColor(r, g, b);
}



void vtkOrientationMarkerWidget::SetViewport(double minX, double minY, double maxX, double maxY)
{
  vtk::ConvertManagedToNative<::vtkOrientationMarkerWidget>(m_instance)->SetViewport(minX, minY, maxX, maxY);
}



  vtkOrientationMarkerWidget::vtkOrientationMarkerWidget(System::IntPtr native, bool bConst) : vtkInteractorObserver(native, bConst) {}



  vtkOrientationMarkerWidget::vtkOrientationMarkerWidget(bool donothing) : vtkInteractorObserver(donothing) {}



  vtkOrientationMarkerWidget::vtkOrientationMarkerWidget() : vtkInteractorObserver(false) {
  this->SetNativePointer(IntPtr(::vtkOrientationMarkerWidget::New()));
}



  vtkOrientationMarkerWidget::~vtkOrientationMarkerWidget() { }





} // end namespace vtkWidgets
