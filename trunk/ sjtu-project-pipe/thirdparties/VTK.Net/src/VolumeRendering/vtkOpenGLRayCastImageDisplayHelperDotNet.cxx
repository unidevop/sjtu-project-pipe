

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOpenGLRayCastImageDisplayHelperDotNet.h"
#include "vtkFixedPointRayCastImageDotNet.h"

// native includes
#include "strstream"
#include "vtkOpenGLRayCastImageDisplayHelper.h"
#include "vtkFixedPointRayCastImage.h"
#include "vtkObject.h"
#include "vtkRenderer.h"
#include "vtkVolume.h"

using namespace System;

namespace vtk {

System::String^ vtkOpenGLRayCastImageDisplayHelper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOpenGLRayCastImageDisplayHelper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOpenGLRayCastImageDisplayHelper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLRayCastImageDisplayHelper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOpenGLRayCastImageDisplayHelper^ vtkOpenGLRayCastImageDisplayHelper::NewInstance()
{
  ::vtkOpenGLRayCastImageDisplayHelper* retVal = static_cast<::vtkOpenGLRayCastImageDisplayHelper*>(vtk::ConvertManagedToNative<::vtkOpenGLRayCastImageDisplayHelper>(m_instance)->NewInstance());
  return gcnew vtkOpenGLRayCastImageDisplayHelper(IntPtr(retVal), false);
}



vtkOpenGLRayCastImageDisplayHelper^ vtkOpenGLRayCastImageDisplayHelper::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOpenGLRayCastImageDisplayHelper* retVal = static_cast<::vtkOpenGLRayCastImageDisplayHelper*>(::vtkOpenGLRayCastImageDisplayHelper::SafeDownCast(oWrap));
  return gcnew vtkOpenGLRayCastImageDisplayHelper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOpenGLRayCastImageDisplayHelper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOpenGLRayCastImageDisplayHelper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOpenGLRayCastImageDisplayHelper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOpenGLRayCastImageDisplayHelper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkOpenGLRayCastImageDisplayHelper::RenderTexture(vtkVolume^ vol, vtkRenderer^ ren, array<int>^ imageMemorySize, array<int>^ imageViewportSize, array<int>^ imageInUseSize, array<int>^ imageOrigin, float requestedDepth, array<unsigned char>^ image)
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
  vtk::ConvertManagedToNative<::vtkOpenGLRayCastImageDisplayHelper>(m_instance)->RenderTexture(volWrap, renWrap, nativeimageMemorySizePin, nativeimageViewportSizePin, nativeimageInUseSizePin, nativeimageOriginPin, requestedDepth, nativeimagePin);
}



void vtkOpenGLRayCastImageDisplayHelper::RenderTexture(vtkVolume^ vol, vtkRenderer^ ren, array<int>^ imageMemorySize, array<int>^ imageViewportSize, array<int>^ imageInUseSize, array<int>^ imageOrigin, float requestedDepth, array<unsigned short>^ image)
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
  vtk::ConvertManagedToNative<::vtkOpenGLRayCastImageDisplayHelper>(m_instance)->RenderTexture(volWrap, renWrap, nativeimageMemorySizePin, nativeimageViewportSizePin, nativeimageInUseSizePin, nativeimageOriginPin, requestedDepth, nativeimagePin);
}



void vtkOpenGLRayCastImageDisplayHelper::RenderTexture(vtkVolume^ vol, vtkRenderer^ ren, vtkFixedPointRayCastImage^ image, float requestedDepth)
{
  ::vtkVolume* volWrap = vtk::ConvertManagedToNative<::vtkVolume>(vol->GetNativePointer());
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  ::vtkFixedPointRayCastImage* imageWrap = vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(image->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkOpenGLRayCastImageDisplayHelper>(m_instance)->RenderTexture(volWrap, renWrap, imageWrap, requestedDepth);
}



  vtkOpenGLRayCastImageDisplayHelper::vtkOpenGLRayCastImageDisplayHelper(System::IntPtr native, bool bConst) : vtkRayCastImageDisplayHelper(native, bConst) {}



  vtkOpenGLRayCastImageDisplayHelper::vtkOpenGLRayCastImageDisplayHelper(bool donothing) : vtkRayCastImageDisplayHelper(donothing) {}



  vtkOpenGLRayCastImageDisplayHelper::vtkOpenGLRayCastImageDisplayHelper() : vtkRayCastImageDisplayHelper(false) {
  this->SetNativePointer(IntPtr(::vtkOpenGLRayCastImageDisplayHelper::New()));
}



  vtkOpenGLRayCastImageDisplayHelper::~vtkOpenGLRayCastImageDisplayHelper() { }





} // end namespace vtkVolumeRendering
