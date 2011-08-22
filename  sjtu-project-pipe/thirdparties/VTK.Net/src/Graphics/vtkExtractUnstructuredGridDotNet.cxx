

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkExtractUnstructuredGridDotNet.h"

// native includes
#include "strstream"
#include "vtkExtractUnstructuredGrid.h"
#include "vtkObject.h"
#include "vtkPointLocator.h"

using namespace System;

namespace vtk {

System::String^ vtkExtractUnstructuredGrid::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExtractUnstructuredGrid::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkExtractUnstructuredGrid^ vtkExtractUnstructuredGrid::NewInstance()
{
  ::vtkExtractUnstructuredGrid* retVal = static_cast<::vtkExtractUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->NewInstance());
  return gcnew vtkExtractUnstructuredGrid(IntPtr(retVal), false);
}



vtkExtractUnstructuredGrid^ vtkExtractUnstructuredGrid::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkExtractUnstructuredGrid* retVal = static_cast<::vtkExtractUnstructuredGrid*>(::vtkExtractUnstructuredGrid::SafeDownCast(oWrap));
  return gcnew vtkExtractUnstructuredGrid(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkExtractUnstructuredGrid::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkExtractUnstructuredGrid::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkExtractUnstructuredGrid::SetPointClipping(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->SetPointClipping(arg0);
}



int vtkExtractUnstructuredGrid::GetPointClipping()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->GetPointClipping();
  return retVal;
}



void vtkExtractUnstructuredGrid::PointClippingOn()
{
  vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->PointClippingOn();
}



void vtkExtractUnstructuredGrid::PointClippingOff()
{
  vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->PointClippingOff();
}



void vtkExtractUnstructuredGrid::SetCellClipping(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->SetCellClipping(arg0);
}



int vtkExtractUnstructuredGrid::GetCellClipping()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->GetCellClipping();
  return retVal;
}



void vtkExtractUnstructuredGrid::CellClippingOn()
{
  vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->CellClippingOn();
}



void vtkExtractUnstructuredGrid::CellClippingOff()
{
  vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->CellClippingOff();
}



void vtkExtractUnstructuredGrid::SetExtentClipping(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->SetExtentClipping(arg0);
}



int vtkExtractUnstructuredGrid::GetExtentClipping()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->GetExtentClipping();
  return retVal;
}



void vtkExtractUnstructuredGrid::ExtentClippingOn()
{
  vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->ExtentClippingOn();
}



void vtkExtractUnstructuredGrid::ExtentClippingOff()
{
  vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->ExtentClippingOff();
}



void vtkExtractUnstructuredGrid::SetPointMinimum(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->SetPointMinimum(arg0);
}



int vtkExtractUnstructuredGrid::GetPointMinimumMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->GetPointMinimumMinValue();
  return retVal;
}



int vtkExtractUnstructuredGrid::GetPointMinimumMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->GetPointMinimumMaxValue();
  return retVal;
}



int vtkExtractUnstructuredGrid::GetPointMinimum()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->GetPointMinimum();
  return retVal;
}



void vtkExtractUnstructuredGrid::SetPointMaximum(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->SetPointMaximum(arg0);
}



int vtkExtractUnstructuredGrid::GetPointMaximumMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->GetPointMaximumMinValue();
  return retVal;
}



int vtkExtractUnstructuredGrid::GetPointMaximumMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->GetPointMaximumMaxValue();
  return retVal;
}



int vtkExtractUnstructuredGrid::GetPointMaximum()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->GetPointMaximum();
  return retVal;
}



void vtkExtractUnstructuredGrid::SetCellMinimum(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->SetCellMinimum(arg0);
}



int vtkExtractUnstructuredGrid::GetCellMinimumMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->GetCellMinimumMinValue();
  return retVal;
}



int vtkExtractUnstructuredGrid::GetCellMinimumMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->GetCellMinimumMaxValue();
  return retVal;
}



int vtkExtractUnstructuredGrid::GetCellMinimum()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->GetCellMinimum();
  return retVal;
}



void vtkExtractUnstructuredGrid::SetCellMaximum(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->SetCellMaximum(arg0);
}



int vtkExtractUnstructuredGrid::GetCellMaximumMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->GetCellMaximumMinValue();
  return retVal;
}



int vtkExtractUnstructuredGrid::GetCellMaximumMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->GetCellMaximumMaxValue();
  return retVal;
}



int vtkExtractUnstructuredGrid::GetCellMaximum()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->GetCellMaximum();
  return retVal;
}



void vtkExtractUnstructuredGrid::SetExtent(double xMin, double xMax, double yMin, double yMax, double zMin, double zMax)
{
  vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->SetExtent(xMin, xMax, yMin, yMax, zMin, zMax);
}



void vtkExtractUnstructuredGrid::SetExtent(array<double>^ extent)
{
  pin_ptr<double> extentPin = &extent[0];
  double* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->SetExtent(nativeextentPin);
}



array<double>^ vtkExtractUnstructuredGrid::GetExtent()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->GetExtent();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkExtractUnstructuredGrid::SetMerging(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->SetMerging(arg0);
}



int vtkExtractUnstructuredGrid::GetMerging()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->GetMerging();
  return retVal;
}



void vtkExtractUnstructuredGrid::MergingOn()
{
  vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->MergingOn();
}



void vtkExtractUnstructuredGrid::MergingOff()
{
  vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->MergingOff();
}



void vtkExtractUnstructuredGrid::SetLocator(vtkPointLocator^ locator)
{
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->SetLocator(locatorWrap);
}



vtkPointLocator^ vtkExtractUnstructuredGrid::GetLocator()
{
  ::vtkPointLocator* retVal = static_cast<::vtkPointLocator*>(vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->GetLocator());
  return gcnew vtkPointLocator(IntPtr(retVal), false);
}



void vtkExtractUnstructuredGrid::CreateDefaultLocator()
{
  vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->CreateDefaultLocator();
}



unsigned long vtkExtractUnstructuredGrid::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkExtractUnstructuredGrid>(m_instance)->GetMTime();
  return retVal;
}



  vtkExtractUnstructuredGrid::vtkExtractUnstructuredGrid(System::IntPtr native, bool bConst) : vtkUnstructuredGridAlgorithm(native, bConst) {}



  vtkExtractUnstructuredGrid::vtkExtractUnstructuredGrid(bool donothing) : vtkUnstructuredGridAlgorithm(donothing) {}



  vtkExtractUnstructuredGrid::vtkExtractUnstructuredGrid() : vtkUnstructuredGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkExtractUnstructuredGrid::New()));
}



  vtkExtractUnstructuredGrid::~vtkExtractUnstructuredGrid() { }





} // end namespace vtkGraphics
