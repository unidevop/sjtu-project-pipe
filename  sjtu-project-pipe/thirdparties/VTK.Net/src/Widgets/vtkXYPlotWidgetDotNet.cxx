

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXYPlotWidgetDotNet.h"

// native includes
#include "strstream"
#include "vtkXYPlotWidget.h"
#include "vtkObject.h"
#include "vtkXYPlotActor.h"

using namespace System;

namespace vtk {

System::String^ vtkXYPlotWidget::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXYPlotWidget>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXYPlotWidget::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXYPlotWidget>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXYPlotWidget^ vtkXYPlotWidget::NewInstance()
{
  ::vtkXYPlotWidget* retVal = static_cast<::vtkXYPlotWidget*>(vtk::ConvertManagedToNative<::vtkXYPlotWidget>(m_instance)->NewInstance());
  return gcnew vtkXYPlotWidget(IntPtr(retVal), false);
}



vtkXYPlotWidget^ vtkXYPlotWidget::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXYPlotWidget* retVal = static_cast<::vtkXYPlotWidget*>(::vtkXYPlotWidget::SafeDownCast(oWrap));
  return gcnew vtkXYPlotWidget(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXYPlotWidget::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXYPlotWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXYPlotWidget::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXYPlotWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkXYPlotWidget::SetXYPlotActor(vtkXYPlotActor^ arg0)
{
  ::vtkXYPlotActor* arg0Wrap = vtk::ConvertManagedToNative<::vtkXYPlotActor>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXYPlotWidget>(m_instance)->SetXYPlotActor(arg0Wrap);
}



vtkXYPlotActor^ vtkXYPlotWidget::GetXYPlotActor()
{
  ::vtkXYPlotActor* retVal = static_cast<::vtkXYPlotActor*>(vtk::ConvertManagedToNative<::vtkXYPlotWidget>(m_instance)->GetXYPlotActor());
  return gcnew vtkXYPlotActor(IntPtr(retVal), false);
}



void vtkXYPlotWidget::SetEnabled(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXYPlotWidget>(m_instance)->SetEnabled(arg0);
}



  vtkXYPlotWidget::vtkXYPlotWidget(System::IntPtr native, bool bConst) : vtkInteractorObserver(native, bConst) {}



  vtkXYPlotWidget::vtkXYPlotWidget(bool donothing) : vtkInteractorObserver(donothing) {}



  vtkXYPlotWidget::vtkXYPlotWidget() : vtkInteractorObserver(false) {
  this->SetNativePointer(IntPtr(::vtkXYPlotWidget::New()));
}



  vtkXYPlotWidget::~vtkXYPlotWidget() { }





} // end namespace vtkWidgets
