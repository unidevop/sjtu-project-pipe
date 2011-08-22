

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGenericGeometryFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkGenericGeometryFilter.h"
#include "vtkObject.h"
#include "vtkPointLocator.h"

using namespace System;

namespace vtk {

System::String^ vtkGenericGeometryFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGenericGeometryFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGenericGeometryFilter^ vtkGenericGeometryFilter::NewInstance()
{
  ::vtkGenericGeometryFilter* retVal = static_cast<::vtkGenericGeometryFilter*>(vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->NewInstance());
  return gcnew vtkGenericGeometryFilter(IntPtr(retVal), false);
}



vtkGenericGeometryFilter^ vtkGenericGeometryFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGenericGeometryFilter* retVal = static_cast<::vtkGenericGeometryFilter*>(::vtkGenericGeometryFilter::SafeDownCast(oWrap));
  return gcnew vtkGenericGeometryFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGenericGeometryFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGenericGeometryFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkGenericGeometryFilter::SetPointClipping(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->SetPointClipping(arg0);
}



int vtkGenericGeometryFilter::GetPointClipping()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->GetPointClipping();
  return retVal;
}



void vtkGenericGeometryFilter::PointClippingOn()
{
  vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->PointClippingOn();
}



void vtkGenericGeometryFilter::PointClippingOff()
{
  vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->PointClippingOff();
}



void vtkGenericGeometryFilter::SetCellClipping(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->SetCellClipping(arg0);
}



int vtkGenericGeometryFilter::GetCellClipping()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->GetCellClipping();
  return retVal;
}



void vtkGenericGeometryFilter::CellClippingOn()
{
  vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->CellClippingOn();
}



void vtkGenericGeometryFilter::CellClippingOff()
{
  vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->CellClippingOff();
}



void vtkGenericGeometryFilter::SetExtentClipping(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->SetExtentClipping(arg0);
}



int vtkGenericGeometryFilter::GetExtentClipping()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->GetExtentClipping();
  return retVal;
}



void vtkGenericGeometryFilter::ExtentClippingOn()
{
  vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->ExtentClippingOn();
}



void vtkGenericGeometryFilter::ExtentClippingOff()
{
  vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->ExtentClippingOff();
}



void vtkGenericGeometryFilter::SetPointMinimum(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->SetPointMinimum(arg0);
}



int vtkGenericGeometryFilter::GetPointMinimumMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->GetPointMinimumMinValue();
  return retVal;
}



int vtkGenericGeometryFilter::GetPointMinimumMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->GetPointMinimumMaxValue();
  return retVal;
}



int vtkGenericGeometryFilter::GetPointMinimum()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->GetPointMinimum();
  return retVal;
}



void vtkGenericGeometryFilter::SetPointMaximum(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->SetPointMaximum(arg0);
}



int vtkGenericGeometryFilter::GetPointMaximumMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->GetPointMaximumMinValue();
  return retVal;
}



int vtkGenericGeometryFilter::GetPointMaximumMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->GetPointMaximumMaxValue();
  return retVal;
}



int vtkGenericGeometryFilter::GetPointMaximum()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->GetPointMaximum();
  return retVal;
}



void vtkGenericGeometryFilter::SetCellMinimum(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->SetCellMinimum(arg0);
}



int vtkGenericGeometryFilter::GetCellMinimumMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->GetCellMinimumMinValue();
  return retVal;
}



int vtkGenericGeometryFilter::GetCellMinimumMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->GetCellMinimumMaxValue();
  return retVal;
}



int vtkGenericGeometryFilter::GetCellMinimum()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->GetCellMinimum();
  return retVal;
}



void vtkGenericGeometryFilter::SetCellMaximum(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->SetCellMaximum(arg0);
}



int vtkGenericGeometryFilter::GetCellMaximumMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->GetCellMaximumMinValue();
  return retVal;
}



int vtkGenericGeometryFilter::GetCellMaximumMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->GetCellMaximumMaxValue();
  return retVal;
}



int vtkGenericGeometryFilter::GetCellMaximum()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->GetCellMaximum();
  return retVal;
}



void vtkGenericGeometryFilter::SetExtent(double xMin, double xMax, double yMin, double yMax, double zMin, double zMax)
{
  vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->SetExtent(xMin, xMax, yMin, yMax, zMin, zMax);
}



void vtkGenericGeometryFilter::SetExtent(array<double>^ extent)
{
  pin_ptr<double> extentPin = &extent[0];
  double* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->SetExtent(nativeextentPin);
}



void vtkGenericGeometryFilter::SetMerging(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->SetMerging(arg0);
}



int vtkGenericGeometryFilter::GetMerging()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->GetMerging();
  return retVal;
}



void vtkGenericGeometryFilter::MergingOn()
{
  vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->MergingOn();
}



void vtkGenericGeometryFilter::MergingOff()
{
  vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->MergingOff();
}



void vtkGenericGeometryFilter::SetLocator(vtkPointLocator^ locator)
{
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->SetLocator(locatorWrap);
}



vtkPointLocator^ vtkGenericGeometryFilter::GetLocator()
{
  ::vtkPointLocator* retVal = static_cast<::vtkPointLocator*>(vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->GetLocator());
  return gcnew vtkPointLocator(IntPtr(retVal), false);
}



void vtkGenericGeometryFilter::CreateDefaultLocator()
{
  vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->CreateDefaultLocator();
}



unsigned long vtkGenericGeometryFilter::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkGenericGeometryFilter>(m_instance)->GetMTime();
  return retVal;
}



  vtkGenericGeometryFilter::vtkGenericGeometryFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkGenericGeometryFilter::vtkGenericGeometryFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkGenericGeometryFilter::vtkGenericGeometryFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkGenericGeometryFilter::New()));
}



  vtkGenericGeometryFilter::~vtkGenericGeometryFilter() { }





} // end namespace vtkGenericFiltering
