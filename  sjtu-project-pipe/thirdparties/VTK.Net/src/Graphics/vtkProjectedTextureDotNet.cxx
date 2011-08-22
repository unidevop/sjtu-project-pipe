

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkProjectedTextureDotNet.h"

// native includes
#include "strstream"
#include "vtkProjectedTexture.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkProjectedTexture::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkProjectedTexture::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkProjectedTexture^ vtkProjectedTexture::NewInstance()
{
  ::vtkProjectedTexture* retVal = static_cast<::vtkProjectedTexture*>(vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->NewInstance());
  return gcnew vtkProjectedTexture(IntPtr(retVal), false);
}



vtkProjectedTexture^ vtkProjectedTexture::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkProjectedTexture* retVal = static_cast<::vtkProjectedTexture*>(::vtkProjectedTexture::SafeDownCast(oWrap));
  return gcnew vtkProjectedTexture(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkProjectedTexture::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkProjectedTexture::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkProjectedTexture::SetPosition(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->SetPosition(arg0, arg1, arg2);
}



void vtkProjectedTexture::SetPosition(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->SetPosition(nativeaPin);
}



array<double>^ vtkProjectedTexture::GetPosition()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->GetPosition();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkProjectedTexture::SetFocalPoint(array<double>^ focalPoint)
{
  pin_ptr<double> focalPointPin = &focalPoint[0];
  double* nativefocalPointPin = focalPointPin;
  vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->SetFocalPoint(nativefocalPointPin);
}



void vtkProjectedTexture::SetFocalPoint(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->SetFocalPoint(x, y, z);
}



array<double>^ vtkProjectedTexture::GetFocalPoint()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->GetFocalPoint();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkProjectedTexture::SetCameraMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->SetCameraMode(arg0);
}



int vtkProjectedTexture::GetCameraMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->GetCameraMode();
  return retVal;
}



void vtkProjectedTexture::SetCameraModeToPinhole()
{
  vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->SetCameraModeToPinhole();
}



void vtkProjectedTexture::SetCameraModeToTwoMirror()
{
  vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->SetCameraModeToTwoMirror();
}



void vtkProjectedTexture::SetMirrorSeparation(double arg0)
{
  vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->SetMirrorSeparation(arg0);
}



double vtkProjectedTexture::GetMirrorSeparation()
{
  double retVal = vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->GetMirrorSeparation();
  return retVal;
}



array<double>^ vtkProjectedTexture::GetOrientation()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->GetOrientation();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkProjectedTexture::SetUp(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->SetUp(arg0, arg1, arg2);
}



void vtkProjectedTexture::SetUp(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->SetUp(nativeaPin);
}



array<double>^ vtkProjectedTexture::GetUp()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->GetUp();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkProjectedTexture::SetAspectRatio(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->SetAspectRatio(arg0, arg1, arg2);
}



void vtkProjectedTexture::SetAspectRatio(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->SetAspectRatio(nativeaPin);
}



array<double>^ vtkProjectedTexture::GetAspectRatio()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->GetAspectRatio();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkProjectedTexture::SetSRange(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->SetSRange(arg0, arg1);
}



void vtkProjectedTexture::SetSRange(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->SetSRange(nativeaPin);
}



array<double>^ vtkProjectedTexture::GetSRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->GetSRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkProjectedTexture::SetTRange(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->SetTRange(arg0, arg1);
}



void vtkProjectedTexture::SetTRange(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->SetTRange(nativeaPin);
}



array<double>^ vtkProjectedTexture::GetTRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkProjectedTexture>(m_instance)->GetTRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkProjectedTexture::vtkProjectedTexture(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkProjectedTexture::vtkProjectedTexture(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkProjectedTexture::vtkProjectedTexture() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkProjectedTexture::New()));
}



  vtkProjectedTexture::~vtkProjectedTexture() { }





} // end namespace vtkGraphics
