

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageToPolyDataFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkImageToPolyDataFilter.h"
#include "vtkObject.h"
#include "vtkScalarsToColors.h"

using namespace System;

namespace vtk {

System::String^ vtkImageToPolyDataFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageToPolyDataFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageToPolyDataFilter^ vtkImageToPolyDataFilter::NewInstance()
{
  ::vtkImageToPolyDataFilter* retVal = static_cast<::vtkImageToPolyDataFilter*>(vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->NewInstance());
  return gcnew vtkImageToPolyDataFilter(IntPtr(retVal), false);
}



vtkImageToPolyDataFilter^ vtkImageToPolyDataFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageToPolyDataFilter* retVal = static_cast<::vtkImageToPolyDataFilter*>(::vtkImageToPolyDataFilter::SafeDownCast(oWrap));
  return gcnew vtkImageToPolyDataFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageToPolyDataFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageToPolyDataFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageToPolyDataFilter::SetOutputStyle(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->SetOutputStyle(arg0);
}



int vtkImageToPolyDataFilter::GetOutputStyleMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->GetOutputStyleMinValue();
  return retVal;
}



int vtkImageToPolyDataFilter::GetOutputStyleMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->GetOutputStyleMaxValue();
  return retVal;
}



int vtkImageToPolyDataFilter::GetOutputStyle()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->GetOutputStyle();
  return retVal;
}



void vtkImageToPolyDataFilter::SetOutputStyleToPixelize()
{
  vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->SetOutputStyleToPixelize();
}



void vtkImageToPolyDataFilter::SetOutputStyleToPolygonalize()
{
  vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->SetOutputStyleToPolygonalize();
}



void vtkImageToPolyDataFilter::SetOutputStyleToRunLength()
{
  vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->SetOutputStyleToRunLength();
}



void vtkImageToPolyDataFilter::SetColorMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->SetColorMode(arg0);
}



int vtkImageToPolyDataFilter::GetColorModeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->GetColorModeMinValue();
  return retVal;
}



int vtkImageToPolyDataFilter::GetColorModeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->GetColorModeMaxValue();
  return retVal;
}



int vtkImageToPolyDataFilter::GetColorMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->GetColorMode();
  return retVal;
}



void vtkImageToPolyDataFilter::SetColorModeToLUT()
{
  vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->SetColorModeToLUT();
}



void vtkImageToPolyDataFilter::SetColorModeToLinear256()
{
  vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->SetColorModeToLinear256();
}



void vtkImageToPolyDataFilter::SetLookupTable(vtkScalarsToColors^ arg0)
{
  ::vtkScalarsToColors* arg0Wrap = vtk::ConvertManagedToNative<::vtkScalarsToColors>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->SetLookupTable(arg0Wrap);
}



vtkScalarsToColors^ vtkImageToPolyDataFilter::GetLookupTable()
{
  ::vtkScalarsToColors* retVal = static_cast<::vtkScalarsToColors*>(vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->GetLookupTable());
  return gcnew vtkScalarsToColors(IntPtr(retVal), false);
}



void vtkImageToPolyDataFilter::SetSmoothing(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->SetSmoothing(arg0);
}



int vtkImageToPolyDataFilter::GetSmoothing()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->GetSmoothing();
  return retVal;
}



void vtkImageToPolyDataFilter::SmoothingOn()
{
  vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->SmoothingOn();
}



void vtkImageToPolyDataFilter::SmoothingOff()
{
  vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->SmoothingOff();
}



void vtkImageToPolyDataFilter::SetNumberOfSmoothingIterations(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->SetNumberOfSmoothingIterations(arg0);
}



int vtkImageToPolyDataFilter::GetNumberOfSmoothingIterationsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->GetNumberOfSmoothingIterationsMinValue();
  return retVal;
}



int vtkImageToPolyDataFilter::GetNumberOfSmoothingIterationsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->GetNumberOfSmoothingIterationsMaxValue();
  return retVal;
}



int vtkImageToPolyDataFilter::GetNumberOfSmoothingIterations()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->GetNumberOfSmoothingIterations();
  return retVal;
}



void vtkImageToPolyDataFilter::SetDecimation(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->SetDecimation(arg0);
}



int vtkImageToPolyDataFilter::GetDecimation()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->GetDecimation();
  return retVal;
}



void vtkImageToPolyDataFilter::DecimationOn()
{
  vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->DecimationOn();
}



void vtkImageToPolyDataFilter::DecimationOff()
{
  vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->DecimationOff();
}



void vtkImageToPolyDataFilter::SetDecimationError(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->SetDecimationError(arg0);
}



double vtkImageToPolyDataFilter::GetDecimationErrorMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->GetDecimationErrorMinValue();
  return retVal;
}



double vtkImageToPolyDataFilter::GetDecimationErrorMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->GetDecimationErrorMaxValue();
  return retVal;
}



double vtkImageToPolyDataFilter::GetDecimationError()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->GetDecimationError();
  return retVal;
}



void vtkImageToPolyDataFilter::SetError(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->SetError(arg0);
}



int vtkImageToPolyDataFilter::GetErrorMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->GetErrorMinValue();
  return retVal;
}



int vtkImageToPolyDataFilter::GetErrorMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->GetErrorMaxValue();
  return retVal;
}



int vtkImageToPolyDataFilter::GetError()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->GetError();
  return retVal;
}



void vtkImageToPolyDataFilter::SetSubImageSize(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->SetSubImageSize(arg0);
}



int vtkImageToPolyDataFilter::GetSubImageSizeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->GetSubImageSizeMinValue();
  return retVal;
}



int vtkImageToPolyDataFilter::GetSubImageSizeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->GetSubImageSizeMaxValue();
  return retVal;
}



int vtkImageToPolyDataFilter::GetSubImageSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageToPolyDataFilter>(m_instance)->GetSubImageSize();
  return retVal;
}



  vtkImageToPolyDataFilter::vtkImageToPolyDataFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkImageToPolyDataFilter::vtkImageToPolyDataFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkImageToPolyDataFilter::vtkImageToPolyDataFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageToPolyDataFilter::New()));
}



  vtkImageToPolyDataFilter::~vtkImageToPolyDataFilter() { }





} // end namespace vtkHybrid
