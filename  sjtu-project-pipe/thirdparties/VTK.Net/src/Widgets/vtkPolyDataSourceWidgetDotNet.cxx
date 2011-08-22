

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPolyDataSourceWidgetDotNet.h"

// native includes
#include "strstream"
#include "vtkPolyDataSourceWidget.h"
#include "vtkPolyDataAlgorithm.h"
#include "vtkPolyDataSource.h"

using namespace System;

namespace vtk {

System::String^ vtkPolyDataSourceWidget::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPolyDataSourceWidget>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPolyDataSourceWidget::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataSourceWidget>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPolyDataSourceWidget^ vtkPolyDataSourceWidget::NewInstance()
{
  ::vtkPolyDataSourceWidget* retVal = static_cast<::vtkPolyDataSourceWidget*>(vtk::ConvertManagedToNative<::vtkPolyDataSourceWidget>(m_instance)->NewInstance());
  return gcnew vtkPolyDataSourceWidget(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPolyDataSourceWidget::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPolyDataSourceWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPolyDataSourceWidget::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPolyDataSourceWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPolyDataSourceWidget::PlaceWidget()
{
  vtk::ConvertManagedToNative<::vtkPolyDataSourceWidget>(m_instance)->PlaceWidget();
}



void vtkPolyDataSourceWidget::PlaceWidget(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkPolyDataSourceWidget>(m_instance)->PlaceWidget(nativeboundsPin);
}



void vtkPolyDataSourceWidget::PlaceWidget(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax)
{
  vtk::ConvertManagedToNative<::vtkPolyDataSourceWidget>(m_instance)->PlaceWidget(xmin, xmax, ymin, ymax, zmin, zmax);
}



vtkPolyDataSource^ vtkPolyDataSourceWidget::GetPolyDataSource()
{
  ::vtkPolyDataSource* retVal = static_cast<::vtkPolyDataSource*>(vtk::ConvertManagedToNative<::vtkPolyDataSourceWidget>(m_instance)->GetPolyDataSource());
  return gcnew vtkPolyDataSource(IntPtr(retVal), false);
}



vtkPolyDataAlgorithm^ vtkPolyDataSourceWidget::GetPolyDataAlgorithm()
{
  ::vtkPolyDataAlgorithm* retVal = static_cast<::vtkPolyDataAlgorithm*>(vtk::ConvertManagedToNative<::vtkPolyDataSourceWidget>(m_instance)->GetPolyDataAlgorithm());
  return gcnew vtkPolyDataAlgorithm(IntPtr(retVal), false);
}



void vtkPolyDataSourceWidget::UpdatePlacement()
{
  vtk::ConvertManagedToNative<::vtkPolyDataSourceWidget>(m_instance)->UpdatePlacement();
}



  vtkPolyDataSourceWidget::vtkPolyDataSourceWidget(System::IntPtr native, bool bConst) : vtk3DWidget(native, bConst) {}



  vtkPolyDataSourceWidget::vtkPolyDataSourceWidget(bool donothing) : vtk3DWidget(donothing) {}



  vtkPolyDataSourceWidget::vtkPolyDataSourceWidget() : vtk3DWidget(false) {
  this->SetNativePointer(IntPtr(::vtkPolyDataSourceWidget::New()));
}



  vtkPolyDataSourceWidget::~vtkPolyDataSourceWidget() { }





} // end namespace vtkWidgets
