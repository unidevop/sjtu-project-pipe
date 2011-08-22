

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImagePadFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkImagePadFilter.h"

using namespace System;

namespace vtk {

System::String^ vtkImagePadFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImagePadFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImagePadFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImagePadFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImagePadFilter^ vtkImagePadFilter::NewInstance()
{
  ::vtkImagePadFilter* retVal = static_cast<::vtkImagePadFilter*>(vtk::ConvertManagedToNative<::vtkImagePadFilter>(m_instance)->NewInstance());
  return gcnew vtkImagePadFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImagePadFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImagePadFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImagePadFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImagePadFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImagePadFilter::SetOutputWholeExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkImagePadFilter>(m_instance)->SetOutputWholeExtent(nativeextentPin);
}



void vtkImagePadFilter::SetOutputWholeExtent(int minX, int maxX, int minY, int maxY, int minZ, int maxZ)
{
  vtk::ConvertManagedToNative<::vtkImagePadFilter>(m_instance)->SetOutputWholeExtent(minX, maxX, minY, maxY, minZ, maxZ);
}



void vtkImagePadFilter::GetOutputWholeExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkImagePadFilter>(m_instance)->GetOutputWholeExtent(nativeextentPin);
}



array<int>^ vtkImagePadFilter::GetOutputWholeExtent()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImagePadFilter>(m_instance)->GetOutputWholeExtent();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImagePadFilter::SetOutputNumberOfScalarComponents(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImagePadFilter>(m_instance)->SetOutputNumberOfScalarComponents(arg0);
}



int vtkImagePadFilter::GetOutputNumberOfScalarComponents()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePadFilter>(m_instance)->GetOutputNumberOfScalarComponents();
  return retVal;
}



  vtkImagePadFilter::vtkImagePadFilter(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImagePadFilter::vtkImagePadFilter(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImagePadFilter::vtkImagePadFilter() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImagePadFilter::New()));
}



  vtkImagePadFilter::~vtkImagePadFilter() { }





} // end namespace vtkImaging
