

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkScalarBarWidgetDotNet.h"

// native includes
#include "strstream"
#include "vtkScalarBarWidget.h"
#include "vtkObject.h"
#include "vtkScalarBarActor.h"

using namespace System;

namespace vtk {

System::String^ vtkScalarBarWidget::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkScalarBarWidget>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkScalarBarWidget::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkScalarBarWidget>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkScalarBarWidget^ vtkScalarBarWidget::NewInstance()
{
  ::vtkScalarBarWidget* retVal = static_cast<::vtkScalarBarWidget*>(vtk::ConvertManagedToNative<::vtkScalarBarWidget>(m_instance)->NewInstance());
  return gcnew vtkScalarBarWidget(IntPtr(retVal), false);
}



vtkScalarBarWidget^ vtkScalarBarWidget::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkScalarBarWidget* retVal = static_cast<::vtkScalarBarWidget*>(::vtkScalarBarWidget::SafeDownCast(oWrap));
  return gcnew vtkScalarBarWidget(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkScalarBarWidget::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkScalarBarWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkScalarBarWidget::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkScalarBarWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkScalarBarWidget::SetScalarBarActor(vtkScalarBarActor^ scalarbar)
{
  ::vtkScalarBarActor* scalarbarWrap = vtk::ConvertManagedToNative<::vtkScalarBarActor>(scalarbar->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkScalarBarWidget>(m_instance)->SetScalarBarActor(scalarbarWrap);
}



vtkScalarBarActor^ vtkScalarBarWidget::GetScalarBarActor()
{
  ::vtkScalarBarActor* retVal = static_cast<::vtkScalarBarActor*>(vtk::ConvertManagedToNative<::vtkScalarBarWidget>(m_instance)->GetScalarBarActor());
  return gcnew vtkScalarBarActor(IntPtr(retVal), false);
}



void vtkScalarBarWidget::SetEnabled(int arg0)
{
  vtk::ConvertManagedToNative<::vtkScalarBarWidget>(m_instance)->SetEnabled(arg0);
}



  vtkScalarBarWidget::vtkScalarBarWidget(System::IntPtr native, bool bConst) : vtkInteractorObserver(native, bConst) {}



  vtkScalarBarWidget::vtkScalarBarWidget(bool donothing) : vtkInteractorObserver(donothing) {}



  vtkScalarBarWidget::vtkScalarBarWidget() : vtkInteractorObserver(false) {
  this->SetNativePointer(IntPtr(::vtkScalarBarWidget::New()));
}



  vtkScalarBarWidget::~vtkScalarBarWidget() { }





} // end namespace vtkWidgets
