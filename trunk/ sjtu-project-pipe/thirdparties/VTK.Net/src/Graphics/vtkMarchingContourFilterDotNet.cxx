

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMarchingContourFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkMarchingContourFilter.h"
#include "vtkObject.h"
#include "vtkPointLocator.h"

using namespace System;

namespace vtk {

System::String^ vtkMarchingContourFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMarchingContourFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMarchingContourFilter^ vtkMarchingContourFilter::NewInstance()
{
  ::vtkMarchingContourFilter* retVal = static_cast<::vtkMarchingContourFilter*>(vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->NewInstance());
  return gcnew vtkMarchingContourFilter(IntPtr(retVal), false);
}



vtkMarchingContourFilter^ vtkMarchingContourFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMarchingContourFilter* retVal = static_cast<::vtkMarchingContourFilter*>(::vtkMarchingContourFilter::SafeDownCast(oWrap));
  return gcnew vtkMarchingContourFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMarchingContourFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMarchingContourFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkMarchingContourFilter::SetValue(int i, double value)
{
  vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->SetValue(i, value);
}



double vtkMarchingContourFilter::GetValue(int i)
{
  double retVal = vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->GetValue(i);
  return retVal;
}



void vtkMarchingContourFilter::GetValues(array<double>^ contourValues)
{
  pin_ptr<double> contourValuesPin = &contourValues[0];
  double* nativecontourValuesPin = contourValuesPin;
  vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->GetValues(nativecontourValuesPin);
}



void vtkMarchingContourFilter::SetNumberOfContours(int number)
{
  vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->SetNumberOfContours(number);
}



int vtkMarchingContourFilter::GetNumberOfContours()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->GetNumberOfContours();
  return retVal;
}



void vtkMarchingContourFilter::GenerateValues(int numContours, array<double>^ range)
{
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->GenerateValues(numContours, nativerangePin);
}



void vtkMarchingContourFilter::GenerateValues(int numContours, double rangeStart, double rangeEnd)
{
  vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->GenerateValues(numContours, rangeStart, rangeEnd);
}



unsigned long vtkMarchingContourFilter::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->GetMTime();
  return retVal;
}



void vtkMarchingContourFilter::SetComputeNormals(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->SetComputeNormals(arg0);
}



int vtkMarchingContourFilter::GetComputeNormals()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->GetComputeNormals();
  return retVal;
}



void vtkMarchingContourFilter::ComputeNormalsOn()
{
  vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->ComputeNormalsOn();
}



void vtkMarchingContourFilter::ComputeNormalsOff()
{
  vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->ComputeNormalsOff();
}



void vtkMarchingContourFilter::SetComputeGradients(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->SetComputeGradients(arg0);
}



int vtkMarchingContourFilter::GetComputeGradients()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->GetComputeGradients();
  return retVal;
}



void vtkMarchingContourFilter::ComputeGradientsOn()
{
  vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->ComputeGradientsOn();
}



void vtkMarchingContourFilter::ComputeGradientsOff()
{
  vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->ComputeGradientsOff();
}



void vtkMarchingContourFilter::SetComputeScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->SetComputeScalars(arg0);
}



int vtkMarchingContourFilter::GetComputeScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->GetComputeScalars();
  return retVal;
}



void vtkMarchingContourFilter::ComputeScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->ComputeScalarsOn();
}



void vtkMarchingContourFilter::ComputeScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->ComputeScalarsOff();
}



void vtkMarchingContourFilter::SetUseScalarTree(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->SetUseScalarTree(arg0);
}



int vtkMarchingContourFilter::GetUseScalarTree()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->GetUseScalarTree();
  return retVal;
}



void vtkMarchingContourFilter::UseScalarTreeOn()
{
  vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->UseScalarTreeOn();
}



void vtkMarchingContourFilter::UseScalarTreeOff()
{
  vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->UseScalarTreeOff();
}



void vtkMarchingContourFilter::SetLocator(vtkPointLocator^ locator)
{
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->SetLocator(locatorWrap);
}



vtkPointLocator^ vtkMarchingContourFilter::GetLocator()
{
  ::vtkPointLocator* retVal = static_cast<::vtkPointLocator*>(vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->GetLocator());
  return gcnew vtkPointLocator(IntPtr(retVal), false);
}



void vtkMarchingContourFilter::CreateDefaultLocator()
{
  vtk::ConvertManagedToNative<::vtkMarchingContourFilter>(m_instance)->CreateDefaultLocator();
}



  vtkMarchingContourFilter::vtkMarchingContourFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkMarchingContourFilter::vtkMarchingContourFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkMarchingContourFilter::vtkMarchingContourFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkMarchingContourFilter::New()));
}



  vtkMarchingContourFilter::~vtkMarchingContourFilter() { }





} // end namespace vtkGraphics
