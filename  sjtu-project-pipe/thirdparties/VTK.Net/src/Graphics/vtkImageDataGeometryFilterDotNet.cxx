

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageDataGeometryFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkImageDataGeometryFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageDataGeometryFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageDataGeometryFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageDataGeometryFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageDataGeometryFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageDataGeometryFilter^ vtkImageDataGeometryFilter::NewInstance()
{
  ::vtkImageDataGeometryFilter* retVal = static_cast<::vtkImageDataGeometryFilter*>(vtk::ConvertManagedToNative<::vtkImageDataGeometryFilter>(m_instance)->NewInstance());
  return gcnew vtkImageDataGeometryFilter(IntPtr(retVal), false);
}



vtkImageDataGeometryFilter^ vtkImageDataGeometryFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageDataGeometryFilter* retVal = static_cast<::vtkImageDataGeometryFilter*>(::vtkImageDataGeometryFilter::SafeDownCast(oWrap));
  return gcnew vtkImageDataGeometryFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageDataGeometryFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageDataGeometryFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageDataGeometryFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageDataGeometryFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageDataGeometryFilter::SetExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkImageDataGeometryFilter>(m_instance)->SetExtent(nativeextentPin);
}



void vtkImageDataGeometryFilter::SetExtent(int iMin, int iMax, int jMin, int jMax, int kMin, int kMax)
{
  vtk::ConvertManagedToNative<::vtkImageDataGeometryFilter>(m_instance)->SetExtent(iMin, iMax, jMin, jMax, kMin, kMax);
}



void vtkImageDataGeometryFilter::SetThresholdCells(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageDataGeometryFilter>(m_instance)->SetThresholdCells(arg0);
}



int vtkImageDataGeometryFilter::GetThresholdCells()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageDataGeometryFilter>(m_instance)->GetThresholdCells();
  return retVal;
}



void vtkImageDataGeometryFilter::ThresholdCellsOn()
{
  vtk::ConvertManagedToNative<::vtkImageDataGeometryFilter>(m_instance)->ThresholdCellsOn();
}



void vtkImageDataGeometryFilter::ThresholdCellsOff()
{
  vtk::ConvertManagedToNative<::vtkImageDataGeometryFilter>(m_instance)->ThresholdCellsOff();
}



void vtkImageDataGeometryFilter::SetThresholdValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageDataGeometryFilter>(m_instance)->SetThresholdValue(arg0);
}



double vtkImageDataGeometryFilter::GetThresholdValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageDataGeometryFilter>(m_instance)->GetThresholdValue();
  return retVal;
}



void vtkImageDataGeometryFilter::ThresholdValueOn()
{
  vtk::ConvertManagedToNative<::vtkImageDataGeometryFilter>(m_instance)->ThresholdValueOn();
}



void vtkImageDataGeometryFilter::ThresholdValueOff()
{
  vtk::ConvertManagedToNative<::vtkImageDataGeometryFilter>(m_instance)->ThresholdValueOff();
}



void vtkImageDataGeometryFilter::SetOutputTriangles(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageDataGeometryFilter>(m_instance)->SetOutputTriangles(arg0);
}



int vtkImageDataGeometryFilter::GetOutputTriangles()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageDataGeometryFilter>(m_instance)->GetOutputTriangles();
  return retVal;
}



void vtkImageDataGeometryFilter::OutputTrianglesOn()
{
  vtk::ConvertManagedToNative<::vtkImageDataGeometryFilter>(m_instance)->OutputTrianglesOn();
}



void vtkImageDataGeometryFilter::OutputTrianglesOff()
{
  vtk::ConvertManagedToNative<::vtkImageDataGeometryFilter>(m_instance)->OutputTrianglesOff();
}



  vtkImageDataGeometryFilter::vtkImageDataGeometryFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkImageDataGeometryFilter::vtkImageDataGeometryFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkImageDataGeometryFilter::vtkImageDataGeometryFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageDataGeometryFilter::New()));
}



  vtkImageDataGeometryFilter::~vtkImageDataGeometryFilter() { }





} // end namespace vtkGraphics
