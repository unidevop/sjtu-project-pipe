

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkVolumeReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkVolumeReader.h"
#include "vtkImageData.h"

using namespace System;

namespace vtk {

System::String^ vtkVolumeReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVolumeReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkVolumeReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkVolumeReader^ vtkVolumeReader::NewInstance()
{
  ::vtkVolumeReader* retVal = static_cast<::vtkVolumeReader*>(vtk::ConvertManagedToNative<::vtkVolumeReader>(m_instance)->NewInstance());
  return gcnew vtkVolumeReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkVolumeReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkVolumeReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkVolumeReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkVolumeReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkVolumeReader::SetFilePrefix(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkVolumeReader>(m_instance)->SetFilePrefix(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkVolumeReader::GetFilePrefix()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVolumeReader>(m_instance)->GetFilePrefix();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkVolumeReader::SetFilePattern(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkVolumeReader>(m_instance)->SetFilePattern(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkVolumeReader::GetFilePattern()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVolumeReader>(m_instance)->GetFilePattern();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkVolumeReader::SetImageRange(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkVolumeReader>(m_instance)->SetImageRange(arg0, arg1);
}



void vtkVolumeReader::SetImageRange(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkVolumeReader>(m_instance)->SetImageRange(nativeaPin);
}



array<int>^ vtkVolumeReader::GetImageRange()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkVolumeReader>(m_instance)->GetImageRange();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkVolumeReader::SetDataSpacing(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkVolumeReader>(m_instance)->SetDataSpacing(arg0, arg1, arg2);
}



void vtkVolumeReader::SetDataSpacing(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkVolumeReader>(m_instance)->SetDataSpacing(nativeaPin);
}



array<double>^ vtkVolumeReader::GetDataSpacing()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkVolumeReader>(m_instance)->GetDataSpacing();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkVolumeReader::SetDataOrigin(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkVolumeReader>(m_instance)->SetDataOrigin(arg0, arg1, arg2);
}



void vtkVolumeReader::SetDataOrigin(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkVolumeReader>(m_instance)->SetDataOrigin(nativeaPin);
}



array<double>^ vtkVolumeReader::GetDataOrigin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkVolumeReader>(m_instance)->GetDataOrigin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



vtkImageData^ vtkVolumeReader::GetImage(int ImageNumber)
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkVolumeReader>(m_instance)->GetImage(ImageNumber));
  return gcnew vtkImageData(IntPtr(retVal), false);
}



  vtkVolumeReader::vtkVolumeReader(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkVolumeReader::vtkVolumeReader(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkVolumeReader::vtkVolumeReader() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkVolumeReader::New()));
}



  vtkVolumeReader::~vtkVolumeReader() { }





} // end namespace vtkIO
