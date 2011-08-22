

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkConnectivityFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkConnectivityFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkConnectivityFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkConnectivityFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkConnectivityFilter^ vtkConnectivityFilter::NewInstance()
{
  ::vtkConnectivityFilter* retVal = static_cast<::vtkConnectivityFilter*>(vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->NewInstance());
  return gcnew vtkConnectivityFilter(IntPtr(retVal), false);
}



vtkConnectivityFilter^ vtkConnectivityFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkConnectivityFilter* retVal = static_cast<::vtkConnectivityFilter*>(::vtkConnectivityFilter::SafeDownCast(oWrap));
  return gcnew vtkConnectivityFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkConnectivityFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkConnectivityFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkConnectivityFilter::SetScalarConnectivity(int arg0)
{
  vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->SetScalarConnectivity(arg0);
}



int vtkConnectivityFilter::GetScalarConnectivity()
{
  int retVal = vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->GetScalarConnectivity();
  return retVal;
}



void vtkConnectivityFilter::ScalarConnectivityOn()
{
  vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->ScalarConnectivityOn();
}



void vtkConnectivityFilter::ScalarConnectivityOff()
{
  vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->ScalarConnectivityOff();
}



void vtkConnectivityFilter::SetScalarRange(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->SetScalarRange(arg0, arg1);
}



void vtkConnectivityFilter::SetScalarRange(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->SetScalarRange(nativeaPin);
}



array<double>^ vtkConnectivityFilter::GetScalarRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->GetScalarRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkConnectivityFilter::SetExtractionMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->SetExtractionMode(arg0);
}



int vtkConnectivityFilter::GetExtractionModeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->GetExtractionModeMinValue();
  return retVal;
}



int vtkConnectivityFilter::GetExtractionModeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->GetExtractionModeMaxValue();
  return retVal;
}



int vtkConnectivityFilter::GetExtractionMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->GetExtractionMode();
  return retVal;
}



void vtkConnectivityFilter::SetExtractionModeToPointSeededRegions()
{
  vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->SetExtractionModeToPointSeededRegions();
}



void vtkConnectivityFilter::SetExtractionModeToCellSeededRegions()
{
  vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->SetExtractionModeToCellSeededRegions();
}



void vtkConnectivityFilter::SetExtractionModeToLargestRegion()
{
  vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->SetExtractionModeToLargestRegion();
}



void vtkConnectivityFilter::SetExtractionModeToSpecifiedRegions()
{
  vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->SetExtractionModeToSpecifiedRegions();
}



void vtkConnectivityFilter::SetExtractionModeToClosestPointRegion()
{
  vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->SetExtractionModeToClosestPointRegion();
}



void vtkConnectivityFilter::SetExtractionModeToAllRegions()
{
  vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->SetExtractionModeToAllRegions();
}



System::String^ vtkConnectivityFilter::GetExtractionModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->GetExtractionModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkConnectivityFilter::InitializeSeedList()
{
  vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->InitializeSeedList();
}



void vtkConnectivityFilter::AddSeed(int id)
{
  vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->AddSeed(id);
}



void vtkConnectivityFilter::DeleteSeed(int id)
{
  vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->DeleteSeed(id);
}



void vtkConnectivityFilter::InitializeSpecifiedRegionList()
{
  vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->InitializeSpecifiedRegionList();
}



void vtkConnectivityFilter::AddSpecifiedRegion(int id)
{
  vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->AddSpecifiedRegion(id);
}



void vtkConnectivityFilter::DeleteSpecifiedRegion(int id)
{
  vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->DeleteSpecifiedRegion(id);
}



void vtkConnectivityFilter::SetClosestPoint(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->SetClosestPoint(arg0, arg1, arg2);
}



void vtkConnectivityFilter::SetClosestPoint(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->SetClosestPoint(nativeaPin);
}



array<double>^ vtkConnectivityFilter::GetClosestPoint()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->GetClosestPoint();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



int vtkConnectivityFilter::GetNumberOfExtractedRegions()
{
  int retVal = vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->GetNumberOfExtractedRegions();
  return retVal;
}



void vtkConnectivityFilter::SetColorRegions(int arg0)
{
  vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->SetColorRegions(arg0);
}



int vtkConnectivityFilter::GetColorRegions()
{
  int retVal = vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->GetColorRegions();
  return retVal;
}



void vtkConnectivityFilter::ColorRegionsOn()
{
  vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->ColorRegionsOn();
}



void vtkConnectivityFilter::ColorRegionsOff()
{
  vtk::ConvertManagedToNative<::vtkConnectivityFilter>(m_instance)->ColorRegionsOff();
}



  vtkConnectivityFilter::vtkConnectivityFilter(System::IntPtr native, bool bConst) : vtkUnstructuredGridAlgorithm(native, bConst) {}



  vtkConnectivityFilter::vtkConnectivityFilter(bool donothing) : vtkUnstructuredGridAlgorithm(donothing) {}



  vtkConnectivityFilter::vtkConnectivityFilter() : vtkUnstructuredGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkConnectivityFilter::New()));
}



  vtkConnectivityFilter::~vtkConnectivityFilter() { }





} // end namespace vtkGraphics
