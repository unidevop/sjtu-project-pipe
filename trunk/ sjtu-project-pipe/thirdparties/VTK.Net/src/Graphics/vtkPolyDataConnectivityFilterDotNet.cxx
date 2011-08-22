

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPolyDataConnectivityFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkPolyDataConnectivityFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkPolyDataConnectivityFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPolyDataConnectivityFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPolyDataConnectivityFilter^ vtkPolyDataConnectivityFilter::NewInstance()
{
  ::vtkPolyDataConnectivityFilter* retVal = static_cast<::vtkPolyDataConnectivityFilter*>(vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->NewInstance());
  return gcnew vtkPolyDataConnectivityFilter(IntPtr(retVal), false);
}



vtkPolyDataConnectivityFilter^ vtkPolyDataConnectivityFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPolyDataConnectivityFilter* retVal = static_cast<::vtkPolyDataConnectivityFilter*>(::vtkPolyDataConnectivityFilter::SafeDownCast(oWrap));
  return gcnew vtkPolyDataConnectivityFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPolyDataConnectivityFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPolyDataConnectivityFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPolyDataConnectivityFilter::SetScalarConnectivity(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->SetScalarConnectivity(arg0);
}



int vtkPolyDataConnectivityFilter::GetScalarConnectivity()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->GetScalarConnectivity();
  return retVal;
}



void vtkPolyDataConnectivityFilter::ScalarConnectivityOn()
{
  vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->ScalarConnectivityOn();
}



void vtkPolyDataConnectivityFilter::ScalarConnectivityOff()
{
  vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->ScalarConnectivityOff();
}



void vtkPolyDataConnectivityFilter::SetScalarRange(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->SetScalarRange(arg0, arg1);
}



void vtkPolyDataConnectivityFilter::SetScalarRange(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->SetScalarRange(nativeaPin);
}



array<double>^ vtkPolyDataConnectivityFilter::GetScalarRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->GetScalarRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkPolyDataConnectivityFilter::SetExtractionMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->SetExtractionMode(arg0);
}



int vtkPolyDataConnectivityFilter::GetExtractionModeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->GetExtractionModeMinValue();
  return retVal;
}



int vtkPolyDataConnectivityFilter::GetExtractionModeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->GetExtractionModeMaxValue();
  return retVal;
}



int vtkPolyDataConnectivityFilter::GetExtractionMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->GetExtractionMode();
  return retVal;
}



void vtkPolyDataConnectivityFilter::SetExtractionModeToPointSeededRegions()
{
  vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->SetExtractionModeToPointSeededRegions();
}



void vtkPolyDataConnectivityFilter::SetExtractionModeToCellSeededRegions()
{
  vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->SetExtractionModeToCellSeededRegions();
}



void vtkPolyDataConnectivityFilter::SetExtractionModeToLargestRegion()
{
  vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->SetExtractionModeToLargestRegion();
}



void vtkPolyDataConnectivityFilter::SetExtractionModeToSpecifiedRegions()
{
  vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->SetExtractionModeToSpecifiedRegions();
}



void vtkPolyDataConnectivityFilter::SetExtractionModeToClosestPointRegion()
{
  vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->SetExtractionModeToClosestPointRegion();
}



void vtkPolyDataConnectivityFilter::SetExtractionModeToAllRegions()
{
  vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->SetExtractionModeToAllRegions();
}



System::String^ vtkPolyDataConnectivityFilter::GetExtractionModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->GetExtractionModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkPolyDataConnectivityFilter::InitializeSeedList()
{
  vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->InitializeSeedList();
}



void vtkPolyDataConnectivityFilter::AddSeed(int id)
{
  vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->AddSeed(id);
}



void vtkPolyDataConnectivityFilter::DeleteSeed(int id)
{
  vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->DeleteSeed(id);
}



void vtkPolyDataConnectivityFilter::InitializeSpecifiedRegionList()
{
  vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->InitializeSpecifiedRegionList();
}



void vtkPolyDataConnectivityFilter::AddSpecifiedRegion(int id)
{
  vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->AddSpecifiedRegion(id);
}



void vtkPolyDataConnectivityFilter::DeleteSpecifiedRegion(int id)
{
  vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->DeleteSpecifiedRegion(id);
}



void vtkPolyDataConnectivityFilter::SetClosestPoint(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->SetClosestPoint(arg0, arg1, arg2);
}



void vtkPolyDataConnectivityFilter::SetClosestPoint(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->SetClosestPoint(nativeaPin);
}



array<double>^ vtkPolyDataConnectivityFilter::GetClosestPoint()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->GetClosestPoint();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



int vtkPolyDataConnectivityFilter::GetNumberOfExtractedRegions()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->GetNumberOfExtractedRegions();
  return retVal;
}



void vtkPolyDataConnectivityFilter::SetColorRegions(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->SetColorRegions(arg0);
}



int vtkPolyDataConnectivityFilter::GetColorRegions()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->GetColorRegions();
  return retVal;
}



void vtkPolyDataConnectivityFilter::ColorRegionsOn()
{
  vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->ColorRegionsOn();
}



void vtkPolyDataConnectivityFilter::ColorRegionsOff()
{
  vtk::ConvertManagedToNative<::vtkPolyDataConnectivityFilter>(m_instance)->ColorRegionsOff();
}



  vtkPolyDataConnectivityFilter::vtkPolyDataConnectivityFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkPolyDataConnectivityFilter::vtkPolyDataConnectivityFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkPolyDataConnectivityFilter::vtkPolyDataConnectivityFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkPolyDataConnectivityFilter::New()));
}



  vtkPolyDataConnectivityFilter::~vtkPolyDataConnectivityFilter() { }





} // end namespace vtkGraphics
