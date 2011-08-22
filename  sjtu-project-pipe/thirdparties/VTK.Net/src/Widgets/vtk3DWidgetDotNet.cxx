

// managed includes
#include "vtkDotNetConvert.h"
#include "vtk3DWidgetDotNet.h"

// native includes
#include "strstream"
#include "vtk3DWidget.h"
#include "vtkDataSet.h"
#include "vtkProp3D.h"

using namespace System;

namespace vtk {

System::String^ vtk3DWidget::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtk3DWidget>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtk3DWidget::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtk3DWidget>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtk3DWidget^ vtk3DWidget::NewInstance()
{
  ::vtk3DWidget* retVal = static_cast<::vtk3DWidget*>(vtk::ConvertManagedToNative<::vtk3DWidget>(m_instance)->NewInstance());
  return gcnew vtk3DWidget(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtk3DWidget::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtk3DWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtk3DWidget::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtk3DWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtk3DWidget::PlaceWidget(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtk3DWidget>(m_instance)->PlaceWidget(nativeboundsPin);
}



void vtk3DWidget::PlaceWidget()
{
  vtk::ConvertManagedToNative<::vtk3DWidget>(m_instance)->PlaceWidget();
}



void vtk3DWidget::PlaceWidget(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax)
{
  vtk::ConvertManagedToNative<::vtk3DWidget>(m_instance)->PlaceWidget(xmin, xmax, ymin, ymax, zmin, zmax);
}



void vtk3DWidget::SetProp3D(vtkProp3D^ arg0)
{
  ::vtkProp3D* arg0Wrap = vtk::ConvertManagedToNative<::vtkProp3D>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtk3DWidget>(m_instance)->SetProp3D(arg0Wrap);
}



vtkProp3D^ vtk3DWidget::GetProp3D()
{
  ::vtkProp3D* retVal = static_cast<::vtkProp3D*>(vtk::ConvertManagedToNative<::vtk3DWidget>(m_instance)->GetProp3D());
  return gcnew vtkProp3D(IntPtr(retVal), false);
}



void vtk3DWidget::SetInput(vtkDataSet^ arg0)
{
  ::vtkDataSet* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataSet>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtk3DWidget>(m_instance)->SetInput(arg0Wrap);
}



vtkDataSet^ vtk3DWidget::GetInput()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtk3DWidget>(m_instance)->GetInput());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



void vtk3DWidget::SetPlaceFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtk3DWidget>(m_instance)->SetPlaceFactor(arg0);
}



double vtk3DWidget::GetPlaceFactorMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtk3DWidget>(m_instance)->GetPlaceFactorMinValue();
  return retVal;
}



double vtk3DWidget::GetPlaceFactorMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtk3DWidget>(m_instance)->GetPlaceFactorMaxValue();
  return retVal;
}



double vtk3DWidget::GetPlaceFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtk3DWidget>(m_instance)->GetPlaceFactor();
  return retVal;
}



void vtk3DWidget::SetHandleSize(double arg0)
{
  vtk::ConvertManagedToNative<::vtk3DWidget>(m_instance)->SetHandleSize(arg0);
}



double vtk3DWidget::GetHandleSizeMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtk3DWidget>(m_instance)->GetHandleSizeMinValue();
  return retVal;
}



double vtk3DWidget::GetHandleSizeMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtk3DWidget>(m_instance)->GetHandleSizeMaxValue();
  return retVal;
}



double vtk3DWidget::GetHandleSize()
{
  double retVal = vtk::ConvertManagedToNative<::vtk3DWidget>(m_instance)->GetHandleSize();
  return retVal;
}



  vtk3DWidget::vtk3DWidget(System::IntPtr native, bool bConst) : vtkInteractorObserver(native, bConst) {}



  vtk3DWidget::vtk3DWidget(bool donothing) : vtkInteractorObserver(donothing) {}



  vtk3DWidget::vtk3DWidget() : vtkInteractorObserver(false) {
  this->SetNativePointer(IntPtr(::vtk3DWidget::New()));
}



  vtk3DWidget::~vtk3DWidget() { }





} // end namespace vtkWidgets
