

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRayCastImageDisplayHelperDotNet.h"
#include "vtkFixedPointRayCastImageDotNet.h"

// native includes
#include "strstream"
#include "vtkRayCastImageDisplayHelper.h"
#include "vtkFixedPointRayCastImage.h"
#include "vtkRenderer.h"
#include "vtkVolume.h"

using namespace System;

namespace vtk {

System::String^ vtkRayCastImageDisplayHelper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRayCastImageDisplayHelper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRayCastImageDisplayHelper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRayCastImageDisplayHelper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRayCastImageDisplayHelper^ vtkRayCastImageDisplayHelper::NewInstance()
{
  ::vtkRayCastImageDisplayHelper* retVal = static_cast<::vtkRayCastImageDisplayHelper*>(vtk::ConvertManagedToNative<::vtkRayCastImageDisplayHelper>(m_instance)->NewInstance());
  return gcnew vtkRayCastImageDisplayHelper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRayCastImageDisplayHelper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRayCastImageDisplayHelper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRayCastImageDisplayHelper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRayCastImageDisplayHelper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkRayCastImageDisplayHelper::RenderTexture(vtkVolume^ vol, vtkRenderer^ ren, array<int>^ imageMemorySize, array<int>^ imageViewportSize, array<int>^ imageInUseSize, array<int>^ imageOrigin, float requestedDepth, array<unsigned char>^ image)
{
  ::vtkVolume* volWrap = vtk::ConvertManagedToNative<::vtkVolume>(vol->GetNativePointer());
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  pin_ptr<int> imageMemorySizePin = &imageMemorySize[0];
  int* nativeimageMemorySizePin = imageMemorySizePin;
  pin_ptr<int> imageViewportSizePin = &imageViewportSize[0];
  int* nativeimageViewportSizePin = imageViewportSizePin;
  pin_ptr<int> imageInUseSizePin = &imageInUseSize[0];
  int* nativeimageInUseSizePin = imageInUseSizePin;
  pin_ptr<int> imageOriginPin = &imageOrigin[0];
  int* nativeimageOriginPin = imageOriginPin;
  pin_ptr<unsigned char> imagePin = &image[0];
  unsigned char* nativeimagePin = imagePin;
  vtk::ConvertManagedToNative<::vtkRayCastImageDisplayHelper>(m_instance)->RenderTexture(volWrap, renWrap, nativeimageMemorySizePin, nativeimageViewportSizePin, nativeimageInUseSizePin, nativeimageOriginPin, requestedDepth, nativeimagePin);
}



void vtkRayCastImageDisplayHelper::RenderTexture(vtkVolume^ vol, vtkRenderer^ ren, array<int>^ imageMemorySize, array<int>^ imageViewportSize, array<int>^ imageInUseSize, array<int>^ imageOrigin, float requestedDepth, array<unsigned short>^ image)
{
  ::vtkVolume* volWrap = vtk::ConvertManagedToNative<::vtkVolume>(vol->GetNativePointer());
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  pin_ptr<int> imageMemorySizePin = &imageMemorySize[0];
  int* nativeimageMemorySizePin = imageMemorySizePin;
  pin_ptr<int> imageViewportSizePin = &imageViewportSize[0];
  int* nativeimageViewportSizePin = imageViewportSizePin;
  pin_ptr<int> imageInUseSizePin = &imageInUseSize[0];
  int* nativeimageInUseSizePin = imageInUseSizePin;
  pin_ptr<int> imageOriginPin = &imageOrigin[0];
  int* nativeimageOriginPin = imageOriginPin;
  pin_ptr<unsigned short> imagePin = &image[0];
  unsigned short* nativeimagePin = imagePin;
  vtk::ConvertManagedToNative<::vtkRayCastImageDisplayHelper>(m_instance)->RenderTexture(volWrap, renWrap, nativeimageMemorySizePin, nativeimageViewportSizePin, nativeimageInUseSizePin, nativeimageOriginPin, requestedDepth, nativeimagePin);
}



void vtkRayCastImageDisplayHelper::RenderTexture(vtkVolume^ vol, vtkRenderer^ ren, vtkFixedPointRayCastImage^ image, float requestedDepth)
{
  ::vtkVolume* volWrap = vtk::ConvertManagedToNative<::vtkVolume>(vol->GetNativePointer());
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  ::vtkFixedPointRayCastImage* imageWrap = vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(image->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRayCastImageDisplayHelper>(m_instance)->RenderTexture(volWrap, renWrap, imageWrap, requestedDepth);
}



void vtkRayCastImageDisplayHelper::SetPreMultipliedColors(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRayCastImageDisplayHelper>(m_instance)->SetPreMultipliedColors(arg0);
}



int vtkRayCastImageDisplayHelper::GetPreMultipliedColorsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRayCastImageDisplayHelper>(m_instance)->GetPreMultipliedColorsMinValue();
  return retVal;
}



int vtkRayCastImageDisplayHelper::GetPreMultipliedColorsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRayCastImageDisplayHelper>(m_instance)->GetPreMultipliedColorsMaxValue();
  return retVal;
}



int vtkRayCastImageDisplayHelper::GetPreMultipliedColors()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRayCastImageDisplayHelper>(m_instance)->GetPreMultipliedColors();
  return retVal;
}



void vtkRayCastImageDisplayHelper::PreMultipliedColorsOn()
{
  vtk::ConvertManagedToNative<::vtkRayCastImageDisplayHelper>(m_instance)->PreMultipliedColorsOn();
}



void vtkRayCastImageDisplayHelper::PreMultipliedColorsOff()
{
  vtk::ConvertManagedToNative<::vtkRayCastImageDisplayHelper>(m_instance)->PreMultipliedColorsOff();
}



void vtkRayCastImageDisplayHelper::SetPixelScale(float arg0)
{
  vtk::ConvertManagedToNative<::vtkRayCastImageDisplayHelper>(m_instance)->SetPixelScale(arg0);
}



float vtkRayCastImageDisplayHelper::GetPixelScale()
{
  float retVal = vtk::ConvertManagedToNative<::vtkRayCastImageDisplayHelper>(m_instance)->GetPixelScale();
  return retVal;
}



  vtkRayCastImageDisplayHelper::vtkRayCastImageDisplayHelper(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkRayCastImageDisplayHelper::vtkRayCastImageDisplayHelper(bool donothing) : vtkObject(donothing) {}



  vtkRayCastImageDisplayHelper::vtkRayCastImageDisplayHelper() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkRayCastImageDisplayHelper::New()));
}



  vtkRayCastImageDisplayHelper::~vtkRayCastImageDisplayHelper() { }





} // end namespace vtkVolumeRendering
