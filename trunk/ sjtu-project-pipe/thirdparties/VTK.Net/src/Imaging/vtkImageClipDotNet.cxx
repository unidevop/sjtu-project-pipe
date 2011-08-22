

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageClipDotNet.h"

// native includes
#include "strstream"
#include "vtkImageClip.h"
#include "vtkInformation.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageClip::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageClip>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageClip::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageClip>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageClip^ vtkImageClip::NewInstance()
{
  ::vtkImageClip* retVal = static_cast<::vtkImageClip*>(vtk::ConvertManagedToNative<::vtkImageClip>(m_instance)->NewInstance());
  return gcnew vtkImageClip(IntPtr(retVal), false);
}



vtkImageClip^ vtkImageClip::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageClip* retVal = static_cast<::vtkImageClip*>(::vtkImageClip::SafeDownCast(oWrap));
  return gcnew vtkImageClip(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageClip::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageClip>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageClip::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageClip>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageClip::SetOutputWholeExtent(array<int>^ extent, vtkInformation^ outInfo)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  ::vtkInformation* outInfoWrap = vtk::ConvertManagedToNative<::vtkInformation>(outInfo->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageClip>(m_instance)->SetOutputWholeExtent(nativeextentPin, outInfoWrap);
}



void vtkImageClip::SetOutputWholeExtent(int minX, int maxX, int minY, int maxY, int minZ, int maxZ)
{
  vtk::ConvertManagedToNative<::vtkImageClip>(m_instance)->SetOutputWholeExtent(minX, maxX, minY, maxY, minZ, maxZ);
}



void vtkImageClip::GetOutputWholeExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkImageClip>(m_instance)->GetOutputWholeExtent(nativeextentPin);
}



array<int>^ vtkImageClip::GetOutputWholeExtent()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageClip>(m_instance)->GetOutputWholeExtent();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageClip::ResetOutputWholeExtent()
{
  vtk::ConvertManagedToNative<::vtkImageClip>(m_instance)->ResetOutputWholeExtent();
}



void vtkImageClip::SetClipData(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageClip>(m_instance)->SetClipData(arg0);
}



int vtkImageClip::GetClipData()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageClip>(m_instance)->GetClipData();
  return retVal;
}



void vtkImageClip::ClipDataOn()
{
  vtk::ConvertManagedToNative<::vtkImageClip>(m_instance)->ClipDataOn();
}



void vtkImageClip::ClipDataOff()
{
  vtk::ConvertManagedToNative<::vtkImageClip>(m_instance)->ClipDataOff();
}



void vtkImageClip::SetOutputWholeExtent(int piece, int numPieces)
{
  vtk::ConvertManagedToNative<::vtkImageClip>(m_instance)->SetOutputWholeExtent(piece, numPieces);
}



  vtkImageClip::vtkImageClip(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkImageClip::vtkImageClip(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkImageClip::vtkImageClip() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageClip::New()));
}



  vtkImageClip::~vtkImageClip() { }





} // end namespace vtkImaging
