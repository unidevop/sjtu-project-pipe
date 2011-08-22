

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageDifferenceDotNet.h"

// native includes
#include "strstream"
#include "vtkImageDifference.h"
#include "vtkDataObject.h"
#include "vtkImageData.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageDifference::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageDifference>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageDifference::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageDifference>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageDifference^ vtkImageDifference::NewInstance()
{
  ::vtkImageDifference* retVal = static_cast<::vtkImageDifference*>(vtk::ConvertManagedToNative<::vtkImageDifference>(m_instance)->NewInstance());
  return gcnew vtkImageDifference(IntPtr(retVal), false);
}



vtkImageDifference^ vtkImageDifference::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageDifference* retVal = static_cast<::vtkImageDifference*>(::vtkImageDifference::SafeDownCast(oWrap));
  return gcnew vtkImageDifference(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageDifference::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageDifference>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageDifference::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageDifference>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageDifference::SetImage(vtkDataObject^ image)
{
  ::vtkDataObject* imageWrap = vtk::ConvertManagedToNative<::vtkDataObject>(image->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageDifference>(m_instance)->SetImage(imageWrap);
}



vtkImageData^ vtkImageDifference::GetImage()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkImageDifference>(m_instance)->GetImage());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



double vtkImageDifference::GetError()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageDifference>(m_instance)->GetError();
  return retVal;
}



void vtkImageDifference::GetError(array<double>^ e)
{
  pin_ptr<double> ePin = &e[0];
  double* nativeePin = ePin;
  vtk::ConvertManagedToNative<::vtkImageDifference>(m_instance)->GetError(nativeePin);
}



double vtkImageDifference::GetThresholdedError()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageDifference>(m_instance)->GetThresholdedError();
  return retVal;
}



void vtkImageDifference::GetThresholdedError(array<double>^ e)
{
  pin_ptr<double> ePin = &e[0];
  double* nativeePin = ePin;
  vtk::ConvertManagedToNative<::vtkImageDifference>(m_instance)->GetThresholdedError(nativeePin);
}



void vtkImageDifference::SetThreshold(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageDifference>(m_instance)->SetThreshold(arg0);
}



int vtkImageDifference::GetThreshold()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageDifference>(m_instance)->GetThreshold();
  return retVal;
}



void vtkImageDifference::SetAllowShift(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageDifference>(m_instance)->SetAllowShift(arg0);
}



int vtkImageDifference::GetAllowShift()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageDifference>(m_instance)->GetAllowShift();
  return retVal;
}



void vtkImageDifference::AllowShiftOn()
{
  vtk::ConvertManagedToNative<::vtkImageDifference>(m_instance)->AllowShiftOn();
}



void vtkImageDifference::AllowShiftOff()
{
  vtk::ConvertManagedToNative<::vtkImageDifference>(m_instance)->AllowShiftOff();
}



void vtkImageDifference::SetAveraging(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageDifference>(m_instance)->SetAveraging(arg0);
}



int vtkImageDifference::GetAveraging()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageDifference>(m_instance)->GetAveraging();
  return retVal;
}



void vtkImageDifference::AveragingOn()
{
  vtk::ConvertManagedToNative<::vtkImageDifference>(m_instance)->AveragingOn();
}



void vtkImageDifference::AveragingOff()
{
  vtk::ConvertManagedToNative<::vtkImageDifference>(m_instance)->AveragingOff();
}



  vtkImageDifference::vtkImageDifference(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageDifference::vtkImageDifference(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageDifference::vtkImageDifference() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageDifference::New()));
}



  vtkImageDifference::~vtkImageDifference() { }





} // end namespace vtkImaging
