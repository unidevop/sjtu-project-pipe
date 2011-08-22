

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkFixedPointRayCastImageDotNet.h"

// native includes
#include "strstream"
#include "vtkFixedPointRayCastImage.h"

using namespace System;

namespace vtk {

System::String^ vtkFixedPointRayCastImage::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkFixedPointRayCastImage::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkFixedPointRayCastImage^ vtkFixedPointRayCastImage::NewInstance()
{
  ::vtkFixedPointRayCastImage* retVal = static_cast<::vtkFixedPointRayCastImage*>(vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->NewInstance());
  return gcnew vtkFixedPointRayCastImage(IntPtr(retVal), false);
}



vtkFixedPointRayCastImage^ vtkFixedPointRayCastImage::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkFixedPointRayCastImage* retVal = static_cast<::vtkFixedPointRayCastImage*>(::vtkFixedPointRayCastImage::SafeDownCast(oWrap));
  return gcnew vtkFixedPointRayCastImage(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkFixedPointRayCastImage::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkFixedPointRayCastImage::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkFixedPointRayCastImage::SetImageViewportSize(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->SetImageViewportSize(arg0, arg1);
}



void vtkFixedPointRayCastImage::SetImageViewportSize(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->SetImageViewportSize(nativeaPin);
}



array<int>^ vtkFixedPointRayCastImage::GetImageViewportSize()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->GetImageViewportSize();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkFixedPointRayCastImage::SetImageMemorySize(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->SetImageMemorySize(arg0, arg1);
}



void vtkFixedPointRayCastImage::SetImageMemorySize(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->SetImageMemorySize(nativeaPin);
}



array<int>^ vtkFixedPointRayCastImage::GetImageMemorySize()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->GetImageMemorySize();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkFixedPointRayCastImage::SetImageInUseSize(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->SetImageInUseSize(arg0, arg1);
}



void vtkFixedPointRayCastImage::SetImageInUseSize(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->SetImageInUseSize(nativeaPin);
}



array<int>^ vtkFixedPointRayCastImage::GetImageInUseSize()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->GetImageInUseSize();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkFixedPointRayCastImage::SetImageOrigin(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->SetImageOrigin(arg0, arg1);
}



void vtkFixedPointRayCastImage::SetImageOrigin(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->SetImageOrigin(nativeaPin);
}



array<int>^ vtkFixedPointRayCastImage::GetImageOrigin()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->GetImageOrigin();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkFixedPointRayCastImage::SetImageSampleDistance(float arg0)
{
  vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->SetImageSampleDistance(arg0);
}



float vtkFixedPointRayCastImage::GetImageSampleDistance()
{
  float retVal = vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->GetImageSampleDistance();
  return retVal;
}



void vtkFixedPointRayCastImage::AllocateImage()
{
  vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->AllocateImage();
}



void vtkFixedPointRayCastImage::ClearImage()
{
  vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->ClearImage();
}



void vtkFixedPointRayCastImage::SetZBufferSize(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->SetZBufferSize(arg0, arg1);
}



void vtkFixedPointRayCastImage::SetZBufferSize(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->SetZBufferSize(nativeaPin);
}



array<int>^ vtkFixedPointRayCastImage::GetZBufferSize()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->GetZBufferSize();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkFixedPointRayCastImage::SetZBufferOrigin(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->SetZBufferOrigin(arg0, arg1);
}



void vtkFixedPointRayCastImage::SetZBufferOrigin(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->SetZBufferOrigin(nativeaPin);
}



array<int>^ vtkFixedPointRayCastImage::GetZBufferOrigin()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->GetZBufferOrigin();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkFixedPointRayCastImage::SetUseZBuffer(int arg0)
{
  vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->SetUseZBuffer(arg0);
}



int vtkFixedPointRayCastImage::GetUseZBufferMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->GetUseZBufferMinValue();
  return retVal;
}



int vtkFixedPointRayCastImage::GetUseZBufferMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->GetUseZBufferMaxValue();
  return retVal;
}



int vtkFixedPointRayCastImage::GetUseZBuffer()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->GetUseZBuffer();
  return retVal;
}



void vtkFixedPointRayCastImage::UseZBufferOn()
{
  vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->UseZBufferOn();
}



void vtkFixedPointRayCastImage::UseZBufferOff()
{
  vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->UseZBufferOff();
}



float vtkFixedPointRayCastImage::GetZBufferValue(int x, int y)
{
  float retVal = vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->GetZBufferValue(x, y);
  return retVal;
}



void vtkFixedPointRayCastImage::AllocateZBuffer()
{
  vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(m_instance)->AllocateZBuffer();
}



  vtkFixedPointRayCastImage::vtkFixedPointRayCastImage(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkFixedPointRayCastImage::vtkFixedPointRayCastImage(bool donothing) : vtkObject(donothing) {}



  vtkFixedPointRayCastImage::vtkFixedPointRayCastImage() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkFixedPointRayCastImage::New()));
}



  vtkFixedPointRayCastImage::~vtkFixedPointRayCastImage() { }





} // end namespace vtkVolumeRendering
