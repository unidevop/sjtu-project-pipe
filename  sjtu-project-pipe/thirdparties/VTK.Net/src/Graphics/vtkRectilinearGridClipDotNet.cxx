

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRectilinearGridClipDotNet.h"

// native includes
#include "strstream"
#include "vtkRectilinearGridClip.h"
#include "vtkInformation.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkRectilinearGridClip::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRectilinearGridClip>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRectilinearGridClip::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearGridClip>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRectilinearGridClip^ vtkRectilinearGridClip::NewInstance()
{
  ::vtkRectilinearGridClip* retVal = static_cast<::vtkRectilinearGridClip*>(vtk::ConvertManagedToNative<::vtkRectilinearGridClip>(m_instance)->NewInstance());
  return gcnew vtkRectilinearGridClip(IntPtr(retVal), false);
}



vtkRectilinearGridClip^ vtkRectilinearGridClip::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRectilinearGridClip* retVal = static_cast<::vtkRectilinearGridClip*>(::vtkRectilinearGridClip::SafeDownCast(oWrap));
  return gcnew vtkRectilinearGridClip(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRectilinearGridClip::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRectilinearGridClip>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRectilinearGridClip::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRectilinearGridClip>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkRectilinearGridClip::SetOutputWholeExtent(array<int>^ extent, vtkInformation^ outInfo)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  ::vtkInformation* outInfoWrap = vtk::ConvertManagedToNative<::vtkInformation>(outInfo->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRectilinearGridClip>(m_instance)->SetOutputWholeExtent(nativeextentPin, outInfoWrap);
}



void vtkRectilinearGridClip::SetOutputWholeExtent(int minX, int maxX, int minY, int maxY, int minZ, int maxZ)
{
  vtk::ConvertManagedToNative<::vtkRectilinearGridClip>(m_instance)->SetOutputWholeExtent(minX, maxX, minY, maxY, minZ, maxZ);
}



void vtkRectilinearGridClip::GetOutputWholeExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkRectilinearGridClip>(m_instance)->GetOutputWholeExtent(nativeextentPin);
}



void vtkRectilinearGridClip::ResetOutputWholeExtent()
{
  vtk::ConvertManagedToNative<::vtkRectilinearGridClip>(m_instance)->ResetOutputWholeExtent();
}



void vtkRectilinearGridClip::SetClipData(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRectilinearGridClip>(m_instance)->SetClipData(arg0);
}



int vtkRectilinearGridClip::GetClipData()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearGridClip>(m_instance)->GetClipData();
  return retVal;
}



void vtkRectilinearGridClip::ClipDataOn()
{
  vtk::ConvertManagedToNative<::vtkRectilinearGridClip>(m_instance)->ClipDataOn();
}



void vtkRectilinearGridClip::ClipDataOff()
{
  vtk::ConvertManagedToNative<::vtkRectilinearGridClip>(m_instance)->ClipDataOff();
}



void vtkRectilinearGridClip::SetOutputWholeExtent(int piece, int numPieces)
{
  vtk::ConvertManagedToNative<::vtkRectilinearGridClip>(m_instance)->SetOutputWholeExtent(piece, numPieces);
}



  vtkRectilinearGridClip::vtkRectilinearGridClip(System::IntPtr native, bool bConst) : vtkRectilinearGridAlgorithm(native, bConst) {}



  vtkRectilinearGridClip::vtkRectilinearGridClip(bool donothing) : vtkRectilinearGridAlgorithm(donothing) {}



  vtkRectilinearGridClip::vtkRectilinearGridClip() : vtkRectilinearGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkRectilinearGridClip::New()));
}



  vtkRectilinearGridClip::~vtkRectilinearGridClip() { }





} // end namespace vtkGraphics
