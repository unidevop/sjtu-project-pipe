

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGeometryFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkGeometryFilter.h"
#include "vtkObject.h"
#include "vtkPointLocator.h"

using namespace System;

namespace vtk {

System::String^ vtkGeometryFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGeometryFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGeometryFilter^ vtkGeometryFilter::NewInstance()
{
  ::vtkGeometryFilter* retVal = static_cast<::vtkGeometryFilter*>(vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->NewInstance());
  return gcnew vtkGeometryFilter(IntPtr(retVal), false);
}



vtkGeometryFilter^ vtkGeometryFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGeometryFilter* retVal = static_cast<::vtkGeometryFilter*>(::vtkGeometryFilter::SafeDownCast(oWrap));
  return gcnew vtkGeometryFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGeometryFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGeometryFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkGeometryFilter::SetPointClipping(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->SetPointClipping(arg0);
}



int vtkGeometryFilter::GetPointClipping()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->GetPointClipping();
  return retVal;
}



void vtkGeometryFilter::PointClippingOn()
{
  vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->PointClippingOn();
}



void vtkGeometryFilter::PointClippingOff()
{
  vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->PointClippingOff();
}



void vtkGeometryFilter::SetCellClipping(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->SetCellClipping(arg0);
}



int vtkGeometryFilter::GetCellClipping()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->GetCellClipping();
  return retVal;
}



void vtkGeometryFilter::CellClippingOn()
{
  vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->CellClippingOn();
}



void vtkGeometryFilter::CellClippingOff()
{
  vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->CellClippingOff();
}



void vtkGeometryFilter::SetExtentClipping(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->SetExtentClipping(arg0);
}



int vtkGeometryFilter::GetExtentClipping()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->GetExtentClipping();
  return retVal;
}



void vtkGeometryFilter::ExtentClippingOn()
{
  vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->ExtentClippingOn();
}



void vtkGeometryFilter::ExtentClippingOff()
{
  vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->ExtentClippingOff();
}



void vtkGeometryFilter::SetPointMinimum(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->SetPointMinimum(arg0);
}



int vtkGeometryFilter::GetPointMinimumMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->GetPointMinimumMinValue();
  return retVal;
}



int vtkGeometryFilter::GetPointMinimumMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->GetPointMinimumMaxValue();
  return retVal;
}



int vtkGeometryFilter::GetPointMinimum()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->GetPointMinimum();
  return retVal;
}



void vtkGeometryFilter::SetPointMaximum(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->SetPointMaximum(arg0);
}



int vtkGeometryFilter::GetPointMaximumMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->GetPointMaximumMinValue();
  return retVal;
}



int vtkGeometryFilter::GetPointMaximumMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->GetPointMaximumMaxValue();
  return retVal;
}



int vtkGeometryFilter::GetPointMaximum()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->GetPointMaximum();
  return retVal;
}



void vtkGeometryFilter::SetCellMinimum(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->SetCellMinimum(arg0);
}



int vtkGeometryFilter::GetCellMinimumMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->GetCellMinimumMinValue();
  return retVal;
}



int vtkGeometryFilter::GetCellMinimumMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->GetCellMinimumMaxValue();
  return retVal;
}



int vtkGeometryFilter::GetCellMinimum()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->GetCellMinimum();
  return retVal;
}



void vtkGeometryFilter::SetCellMaximum(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->SetCellMaximum(arg0);
}



int vtkGeometryFilter::GetCellMaximumMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->GetCellMaximumMinValue();
  return retVal;
}



int vtkGeometryFilter::GetCellMaximumMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->GetCellMaximumMaxValue();
  return retVal;
}



int vtkGeometryFilter::GetCellMaximum()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->GetCellMaximum();
  return retVal;
}



void vtkGeometryFilter::SetExtent(double xMin, double xMax, double yMin, double yMax, double zMin, double zMax)
{
  vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->SetExtent(xMin, xMax, yMin, yMax, zMin, zMax);
}



void vtkGeometryFilter::SetExtent(array<double>^ extent)
{
  pin_ptr<double> extentPin = &extent[0];
  double* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->SetExtent(nativeextentPin);
}



array<double>^ vtkGeometryFilter::GetExtent()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->GetExtent();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkGeometryFilter::SetMerging(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->SetMerging(arg0);
}



int vtkGeometryFilter::GetMerging()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->GetMerging();
  return retVal;
}



void vtkGeometryFilter::MergingOn()
{
  vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->MergingOn();
}



void vtkGeometryFilter::MergingOff()
{
  vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->MergingOff();
}



void vtkGeometryFilter::SetLocator(vtkPointLocator^ locator)
{
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->SetLocator(locatorWrap);
}



vtkPointLocator^ vtkGeometryFilter::GetLocator()
{
  ::vtkPointLocator* retVal = static_cast<::vtkPointLocator*>(vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->GetLocator());
  return gcnew vtkPointLocator(IntPtr(retVal), false);
}



void vtkGeometryFilter::CreateDefaultLocator()
{
  vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->CreateDefaultLocator();
}



unsigned long vtkGeometryFilter::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkGeometryFilter>(m_instance)->GetMTime();
  return retVal;
}



  vtkGeometryFilter::vtkGeometryFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkGeometryFilter::vtkGeometryFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkGeometryFilter::vtkGeometryFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkGeometryFilter::New()));
}



  vtkGeometryFilter::~vtkGeometryFilter() { }





} // end namespace vtkGraphics
