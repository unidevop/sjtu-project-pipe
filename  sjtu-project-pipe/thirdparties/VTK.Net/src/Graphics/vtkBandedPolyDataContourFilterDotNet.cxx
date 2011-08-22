

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkBandedPolyDataContourFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkBandedPolyDataContourFilter.h"
#include "vtkObject.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkBandedPolyDataContourFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkBandedPolyDataContourFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkBandedPolyDataContourFilter^ vtkBandedPolyDataContourFilter::NewInstance()
{
  ::vtkBandedPolyDataContourFilter* retVal = static_cast<::vtkBandedPolyDataContourFilter*>(vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->NewInstance());
  return gcnew vtkBandedPolyDataContourFilter(IntPtr(retVal), false);
}



vtkBandedPolyDataContourFilter^ vtkBandedPolyDataContourFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkBandedPolyDataContourFilter* retVal = static_cast<::vtkBandedPolyDataContourFilter*>(::vtkBandedPolyDataContourFilter::SafeDownCast(oWrap));
  return gcnew vtkBandedPolyDataContourFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkBandedPolyDataContourFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkBandedPolyDataContourFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkBandedPolyDataContourFilter::SetValue(int i, double value)
{
  vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->SetValue(i, value);
}



double vtkBandedPolyDataContourFilter::GetValue(int i)
{
  double retVal = vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->GetValue(i);
  return retVal;
}



void vtkBandedPolyDataContourFilter::GetValues(array<double>^ contourValues)
{
  pin_ptr<double> contourValuesPin = &contourValues[0];
  double* nativecontourValuesPin = contourValuesPin;
  vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->GetValues(nativecontourValuesPin);
}



void vtkBandedPolyDataContourFilter::SetNumberOfContours(int number)
{
  vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->SetNumberOfContours(number);
}



int vtkBandedPolyDataContourFilter::GetNumberOfContours()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->GetNumberOfContours();
  return retVal;
}



void vtkBandedPolyDataContourFilter::GenerateValues(int numContours, array<double>^ range)
{
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->GenerateValues(numContours, nativerangePin);
}



void vtkBandedPolyDataContourFilter::GenerateValues(int numContours, double rangeStart, double rangeEnd)
{
  vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->GenerateValues(numContours, rangeStart, rangeEnd);
}



void vtkBandedPolyDataContourFilter::SetClipping(int arg0)
{
  vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->SetClipping(arg0);
}



int vtkBandedPolyDataContourFilter::GetClipping()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->GetClipping();
  return retVal;
}



void vtkBandedPolyDataContourFilter::ClippingOn()
{
  vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->ClippingOn();
}



void vtkBandedPolyDataContourFilter::ClippingOff()
{
  vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->ClippingOff();
}



void vtkBandedPolyDataContourFilter::SetScalarMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->SetScalarMode(arg0);
}



int vtkBandedPolyDataContourFilter::GetScalarModeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->GetScalarModeMinValue();
  return retVal;
}



int vtkBandedPolyDataContourFilter::GetScalarModeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->GetScalarModeMaxValue();
  return retVal;
}



int vtkBandedPolyDataContourFilter::GetScalarMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->GetScalarMode();
  return retVal;
}



void vtkBandedPolyDataContourFilter::SetScalarModeToIndex()
{
  vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->SetScalarModeToIndex();
}



void vtkBandedPolyDataContourFilter::SetScalarModeToValue()
{
  vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->SetScalarModeToValue();
}



void vtkBandedPolyDataContourFilter::SetGenerateContourEdges(int arg0)
{
  vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->SetGenerateContourEdges(arg0);
}



int vtkBandedPolyDataContourFilter::GetGenerateContourEdges()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->GetGenerateContourEdges();
  return retVal;
}



void vtkBandedPolyDataContourFilter::GenerateContourEdgesOn()
{
  vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->GenerateContourEdgesOn();
}



void vtkBandedPolyDataContourFilter::GenerateContourEdgesOff()
{
  vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->GenerateContourEdgesOff();
}



vtkPolyData^ vtkBandedPolyDataContourFilter::GetContourEdgesOutput()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->GetContourEdgesOutput());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



unsigned long vtkBandedPolyDataContourFilter::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkBandedPolyDataContourFilter>(m_instance)->GetMTime();
  return retVal;
}



  vtkBandedPolyDataContourFilter::vtkBandedPolyDataContourFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkBandedPolyDataContourFilter::vtkBandedPolyDataContourFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkBandedPolyDataContourFilter::vtkBandedPolyDataContourFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkBandedPolyDataContourFilter::New()));
}



  vtkBandedPolyDataContourFilter::~vtkBandedPolyDataContourFilter() { }





} // end namespace vtkGraphics
