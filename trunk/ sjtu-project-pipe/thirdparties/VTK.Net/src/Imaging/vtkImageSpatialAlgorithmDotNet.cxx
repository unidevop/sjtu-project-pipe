

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageSpatialAlgorithmDotNet.h"

// native includes
#include "strstream"
#include "vtkImageSpatialAlgorithm.h"

using namespace System;

namespace vtk {

System::String^ vtkImageSpatialAlgorithm::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageSpatialAlgorithm>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageSpatialAlgorithm::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageSpatialAlgorithm>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageSpatialAlgorithm^ vtkImageSpatialAlgorithm::NewInstance()
{
  ::vtkImageSpatialAlgorithm* retVal = static_cast<::vtkImageSpatialAlgorithm*>(vtk::ConvertManagedToNative<::vtkImageSpatialAlgorithm>(m_instance)->NewInstance());
  return gcnew vtkImageSpatialAlgorithm(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageSpatialAlgorithm::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageSpatialAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageSpatialAlgorithm::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageSpatialAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




array<int>^ vtkImageSpatialAlgorithm::GetKernelSize()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageSpatialAlgorithm>(m_instance)->GetKernelSize();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<int>^ vtkImageSpatialAlgorithm::GetKernelMiddle()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageSpatialAlgorithm>(m_instance)->GetKernelMiddle();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkImageSpatialAlgorithm::vtkImageSpatialAlgorithm(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageSpatialAlgorithm::vtkImageSpatialAlgorithm(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageSpatialAlgorithm::vtkImageSpatialAlgorithm() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageSpatialAlgorithm::New()));
}



  vtkImageSpatialAlgorithm::~vtkImageSpatialAlgorithm() { }





} // end namespace vtkImaging
