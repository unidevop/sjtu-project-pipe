

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGenericContourFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkGenericContourFilter.h"
#include "vtkObject.h"
#include "vtkPointLocator.h"

using namespace System;

namespace vtk {

System::String^ vtkGenericContourFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGenericContourFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGenericContourFilter^ vtkGenericContourFilter::NewInstance()
{
  ::vtkGenericContourFilter* retVal = static_cast<::vtkGenericContourFilter*>(vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->NewInstance());
  return gcnew vtkGenericContourFilter(IntPtr(retVal), false);
}



vtkGenericContourFilter^ vtkGenericContourFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGenericContourFilter* retVal = static_cast<::vtkGenericContourFilter*>(::vtkGenericContourFilter::SafeDownCast(oWrap));
  return gcnew vtkGenericContourFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGenericContourFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGenericContourFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkGenericContourFilter::SetValue(int i, float value)
{
  vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->SetValue(i, value);
}



double vtkGenericContourFilter::GetValue(int i)
{
  double retVal = vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->GetValue(i);
  return retVal;
}



void vtkGenericContourFilter::GetValues(array<double>^ contourValues)
{
  pin_ptr<double> contourValuesPin = &contourValues[0];
  double* nativecontourValuesPin = contourValuesPin;
  vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->GetValues(nativecontourValuesPin);
}



void vtkGenericContourFilter::SetNumberOfContours(int number)
{
  vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->SetNumberOfContours(number);
}



int vtkGenericContourFilter::GetNumberOfContours()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->GetNumberOfContours();
  return retVal;
}



void vtkGenericContourFilter::GenerateValues(int numContours, array<double>^ range)
{
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->GenerateValues(numContours, nativerangePin);
}



void vtkGenericContourFilter::GenerateValues(int numContours, double rangeStart, double rangeEnd)
{
  vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->GenerateValues(numContours, rangeStart, rangeEnd);
}



unsigned long vtkGenericContourFilter::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->GetMTime();
  return retVal;
}



void vtkGenericContourFilter::SetComputeNormals(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->SetComputeNormals(arg0);
}



int vtkGenericContourFilter::GetComputeNormals()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->GetComputeNormals();
  return retVal;
}



void vtkGenericContourFilter::ComputeNormalsOn()
{
  vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->ComputeNormalsOn();
}



void vtkGenericContourFilter::ComputeNormalsOff()
{
  vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->ComputeNormalsOff();
}



void vtkGenericContourFilter::SetComputeGradients(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->SetComputeGradients(arg0);
}



int vtkGenericContourFilter::GetComputeGradients()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->GetComputeGradients();
  return retVal;
}



void vtkGenericContourFilter::ComputeGradientsOn()
{
  vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->ComputeGradientsOn();
}



void vtkGenericContourFilter::ComputeGradientsOff()
{
  vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->ComputeGradientsOff();
}



void vtkGenericContourFilter::SetComputeScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->SetComputeScalars(arg0);
}



int vtkGenericContourFilter::GetComputeScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->GetComputeScalars();
  return retVal;
}



void vtkGenericContourFilter::ComputeScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->ComputeScalarsOn();
}



void vtkGenericContourFilter::ComputeScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->ComputeScalarsOff();
}



void vtkGenericContourFilter::SetLocator(vtkPointLocator^ locator)
{
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->SetLocator(locatorWrap);
}



vtkPointLocator^ vtkGenericContourFilter::GetLocator()
{
  ::vtkPointLocator* retVal = static_cast<::vtkPointLocator*>(vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->GetLocator());
  return gcnew vtkPointLocator(IntPtr(retVal), false);
}



void vtkGenericContourFilter::CreateDefaultLocator()
{
  vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->CreateDefaultLocator();
}



System::String^ vtkGenericContourFilter::GetInputScalarsSelection()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->GetInputScalarsSelection();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkGenericContourFilter::SelectInputScalars(System::String^ fieldName)
{
  char* fieldNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fieldName).ToPointer());
  vtk::ConvertManagedToNative<::vtkGenericContourFilter>(m_instance)->SelectInputScalars(fieldNameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fieldNameWrap));
}



  vtkGenericContourFilter::vtkGenericContourFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkGenericContourFilter::vtkGenericContourFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkGenericContourFilter::vtkGenericContourFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkGenericContourFilter::New()));
}



  vtkGenericContourFilter::~vtkGenericContourFilter() { }





} // end namespace vtkGenericFiltering
