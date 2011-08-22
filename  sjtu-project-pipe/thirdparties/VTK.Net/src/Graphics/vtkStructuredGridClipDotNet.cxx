

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStructuredGridClipDotNet.h"

// native includes
#include "strstream"
#include "vtkStructuredGridClip.h"
#include "vtkInformation.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkStructuredGridClip::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStructuredGridClip>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStructuredGridClip::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredGridClip>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStructuredGridClip^ vtkStructuredGridClip::NewInstance()
{
  ::vtkStructuredGridClip* retVal = static_cast<::vtkStructuredGridClip*>(vtk::ConvertManagedToNative<::vtkStructuredGridClip>(m_instance)->NewInstance());
  return gcnew vtkStructuredGridClip(IntPtr(retVal), false);
}



vtkStructuredGridClip^ vtkStructuredGridClip::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkStructuredGridClip* retVal = static_cast<::vtkStructuredGridClip*>(::vtkStructuredGridClip::SafeDownCast(oWrap));
  return gcnew vtkStructuredGridClip(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkStructuredGridClip::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkStructuredGridClip>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkStructuredGridClip::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkStructuredGridClip>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkStructuredGridClip::SetOutputWholeExtent(array<int>^ extent, vtkInformation^ outInfo)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  ::vtkInformation* outInfoWrap = vtk::ConvertManagedToNative<::vtkInformation>(outInfo->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredGridClip>(m_instance)->SetOutputWholeExtent(nativeextentPin, outInfoWrap);
}



void vtkStructuredGridClip::SetOutputWholeExtent(int minX, int maxX, int minY, int maxY, int minZ, int maxZ)
{
  vtk::ConvertManagedToNative<::vtkStructuredGridClip>(m_instance)->SetOutputWholeExtent(minX, maxX, minY, maxY, minZ, maxZ);
}



void vtkStructuredGridClip::GetOutputWholeExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkStructuredGridClip>(m_instance)->GetOutputWholeExtent(nativeextentPin);
}



void vtkStructuredGridClip::ResetOutputWholeExtent()
{
  vtk::ConvertManagedToNative<::vtkStructuredGridClip>(m_instance)->ResetOutputWholeExtent();
}



void vtkStructuredGridClip::SetClipData(int arg0)
{
  vtk::ConvertManagedToNative<::vtkStructuredGridClip>(m_instance)->SetClipData(arg0);
}



int vtkStructuredGridClip::GetClipData()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredGridClip>(m_instance)->GetClipData();
  return retVal;
}



void vtkStructuredGridClip::ClipDataOn()
{
  vtk::ConvertManagedToNative<::vtkStructuredGridClip>(m_instance)->ClipDataOn();
}



void vtkStructuredGridClip::ClipDataOff()
{
  vtk::ConvertManagedToNative<::vtkStructuredGridClip>(m_instance)->ClipDataOff();
}



void vtkStructuredGridClip::SetOutputWholeExtent(int piece, int numPieces)
{
  vtk::ConvertManagedToNative<::vtkStructuredGridClip>(m_instance)->SetOutputWholeExtent(piece, numPieces);
}



  vtkStructuredGridClip::vtkStructuredGridClip(System::IntPtr native, bool bConst) : vtkStructuredGridAlgorithm(native, bConst) {}



  vtkStructuredGridClip::vtkStructuredGridClip(bool donothing) : vtkStructuredGridAlgorithm(donothing) {}



  vtkStructuredGridClip::vtkStructuredGridClip() : vtkStructuredGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkStructuredGridClip::New()));
}



  vtkStructuredGridClip::~vtkStructuredGridClip() { }





} // end namespace vtkGraphics
