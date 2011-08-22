

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageChangeInformationDotNet.h"

// native includes
#include "strstream"
#include "vtkImageChangeInformation.h"
#include "vtkImageData.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageChangeInformation::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageChangeInformation::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageChangeInformation^ vtkImageChangeInformation::NewInstance()
{
  ::vtkImageChangeInformation* retVal = static_cast<::vtkImageChangeInformation*>(vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->NewInstance());
  return gcnew vtkImageChangeInformation(IntPtr(retVal), false);
}



vtkImageChangeInformation^ vtkImageChangeInformation::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageChangeInformation* retVal = static_cast<::vtkImageChangeInformation*>(::vtkImageChangeInformation::SafeDownCast(oWrap));
  return gcnew vtkImageChangeInformation(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageChangeInformation::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageChangeInformation::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageChangeInformation::SetInformationInput(vtkImageData^ arg0)
{
  ::vtkImageData* arg0Wrap = vtk::ConvertManagedToNative<::vtkImageData>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->SetInformationInput(arg0Wrap);
}



vtkImageData^ vtkImageChangeInformation::GetInformationInput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->GetInformationInput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



void vtkImageChangeInformation::SetOutputExtentStart(int arg0, int arg1, int arg2)
{
  vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->SetOutputExtentStart(arg0, arg1, arg2);
}



void vtkImageChangeInformation::SetOutputExtentStart(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->SetOutputExtentStart(nativeaPin);
}



array<int>^ vtkImageChangeInformation::GetOutputExtentStart()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->GetOutputExtentStart();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageChangeInformation::SetOutputSpacing(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->SetOutputSpacing(arg0, arg1, arg2);
}



void vtkImageChangeInformation::SetOutputSpacing(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->SetOutputSpacing(nativeaPin);
}



array<double>^ vtkImageChangeInformation::GetOutputSpacing()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->GetOutputSpacing();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageChangeInformation::SetOutputOrigin(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->SetOutputOrigin(arg0, arg1, arg2);
}



void vtkImageChangeInformation::SetOutputOrigin(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->SetOutputOrigin(nativeaPin);
}



array<double>^ vtkImageChangeInformation::GetOutputOrigin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->GetOutputOrigin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageChangeInformation::SetCenterImage(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->SetCenterImage(arg0);
}



void vtkImageChangeInformation::CenterImageOn()
{
  vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->CenterImageOn();
}



void vtkImageChangeInformation::CenterImageOff()
{
  vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->CenterImageOff();
}



int vtkImageChangeInformation::GetCenterImage()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->GetCenterImage();
  return retVal;
}



void vtkImageChangeInformation::SetExtentTranslation(int arg0, int arg1, int arg2)
{
  vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->SetExtentTranslation(arg0, arg1, arg2);
}



void vtkImageChangeInformation::SetExtentTranslation(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->SetExtentTranslation(nativeaPin);
}



array<int>^ vtkImageChangeInformation::GetExtentTranslation()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->GetExtentTranslation();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageChangeInformation::SetSpacingScale(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->SetSpacingScale(arg0, arg1, arg2);
}



void vtkImageChangeInformation::SetSpacingScale(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->SetSpacingScale(nativeaPin);
}



array<double>^ vtkImageChangeInformation::GetSpacingScale()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->GetSpacingScale();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageChangeInformation::SetOriginTranslation(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->SetOriginTranslation(arg0, arg1, arg2);
}



void vtkImageChangeInformation::SetOriginTranslation(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->SetOriginTranslation(nativeaPin);
}



array<double>^ vtkImageChangeInformation::GetOriginTranslation()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->GetOriginTranslation();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageChangeInformation::SetOriginScale(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->SetOriginScale(arg0, arg1, arg2);
}



void vtkImageChangeInformation::SetOriginScale(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->SetOriginScale(nativeaPin);
}



array<double>^ vtkImageChangeInformation::GetOriginScale()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageChangeInformation>(m_instance)->GetOriginScale();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkImageChangeInformation::vtkImageChangeInformation(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkImageChangeInformation::vtkImageChangeInformation(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkImageChangeInformation::vtkImageChangeInformation() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageChangeInformation::New()));
}



  vtkImageChangeInformation::~vtkImageChangeInformation() { }





} // end namespace vtkImaging
