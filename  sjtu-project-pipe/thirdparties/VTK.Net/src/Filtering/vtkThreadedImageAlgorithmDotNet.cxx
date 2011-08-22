

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkThreadedImageAlgorithmDotNet.h"
#include "vtkImageDataDotNet.h"

// native includes
#include "strstream"
#include "vtkThreadedImageAlgorithm.h"
#include "vtkImageData.h"

using namespace System;

namespace vtk {

System::String^ vtkThreadedImageAlgorithm::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkThreadedImageAlgorithm>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkThreadedImageAlgorithm::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkThreadedImageAlgorithm>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkThreadedImageAlgorithm^ vtkThreadedImageAlgorithm::NewInstance()
{
  ::vtkThreadedImageAlgorithm* retVal = static_cast<::vtkThreadedImageAlgorithm*>(vtk::ConvertManagedToNative<::vtkThreadedImageAlgorithm>(m_instance)->NewInstance());
  return gcnew vtkThreadedImageAlgorithm(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkThreadedImageAlgorithm::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkThreadedImageAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkThreadedImageAlgorithm::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkThreadedImageAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkThreadedImageAlgorithm::ThreadedExecute(vtkImageData^ inData, vtkImageData^ outData, array<int>^ extent, int threadId)
{
  ::vtkImageData* inDataWrap = vtk::ConvertManagedToNative<::vtkImageData>(inData->GetNativePointer());
  ::vtkImageData* outDataWrap = vtk::ConvertManagedToNative<::vtkImageData>(outData->GetNativePointer());
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkThreadedImageAlgorithm>(m_instance)->ThreadedExecute(inDataWrap, outDataWrap, nativeextentPin, threadId);
}



void vtkThreadedImageAlgorithm::SetNumberOfThreads(int arg0)
{
  vtk::ConvertManagedToNative<::vtkThreadedImageAlgorithm>(m_instance)->SetNumberOfThreads(arg0);
}



int vtkThreadedImageAlgorithm::GetNumberOfThreadsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkThreadedImageAlgorithm>(m_instance)->GetNumberOfThreadsMinValue();
  return retVal;
}



int vtkThreadedImageAlgorithm::GetNumberOfThreadsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkThreadedImageAlgorithm>(m_instance)->GetNumberOfThreadsMaxValue();
  return retVal;
}



int vtkThreadedImageAlgorithm::GetNumberOfThreads()
{
  int retVal = vtk::ConvertManagedToNative<::vtkThreadedImageAlgorithm>(m_instance)->GetNumberOfThreads();
  return retVal;
}



int vtkThreadedImageAlgorithm::SplitExtent(array<int>^ splitExt, array<int>^ startExt, int num, int total)
{
  pin_ptr<int> splitExtPin = &splitExt[0];
  int* nativesplitExtPin = splitExtPin;
  pin_ptr<int> startExtPin = &startExt[0];
  int* nativestartExtPin = startExtPin;
  int retVal = vtk::ConvertManagedToNative<::vtkThreadedImageAlgorithm>(m_instance)->SplitExtent(nativesplitExtPin, nativestartExtPin, num, total);
  return retVal;
}



  vtkThreadedImageAlgorithm::vtkThreadedImageAlgorithm(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkThreadedImageAlgorithm::vtkThreadedImageAlgorithm(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkThreadedImageAlgorithm::vtkThreadedImageAlgorithm() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkThreadedImageAlgorithm::New()));
}



  vtkThreadedImageAlgorithm::~vtkThreadedImageAlgorithm() { }





} // end namespace vtkFiltering
