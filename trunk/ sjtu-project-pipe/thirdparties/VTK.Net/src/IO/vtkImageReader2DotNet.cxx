

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageReader2DotNet.h"

// native includes
#include "strstream"
#include "vtkImageReader2.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageReader2::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageReader2::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageReader2^ vtkImageReader2::NewInstance()
{
  ::vtkImageReader2* retVal = static_cast<::vtkImageReader2*>(vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->NewInstance());
  return gcnew vtkImageReader2(IntPtr(retVal), false);
}



vtkImageReader2^ vtkImageReader2::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageReader2* retVal = static_cast<::vtkImageReader2*>(::vtkImageReader2::SafeDownCast(oWrap));
  return gcnew vtkImageReader2(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageReader2::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageReader2::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageReader2::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SetFileName(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkImageReader2::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkImageReader2::SetFilePrefix(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SetFilePrefix(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkImageReader2::GetFilePrefix()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->GetFilePrefix();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkImageReader2::SetFilePattern(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SetFilePattern(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkImageReader2::GetFilePattern()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->GetFilePattern();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkImageReader2::SetDataScalarType(int type)
{
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SetDataScalarType(type);
}



void vtkImageReader2::SetDataScalarTypeToFloat()
{
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SetDataScalarTypeToFloat();
}



void vtkImageReader2::SetDataScalarTypeToDouble()
{
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SetDataScalarTypeToDouble();
}



void vtkImageReader2::SetDataScalarTypeToInt()
{
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SetDataScalarTypeToInt();
}



void vtkImageReader2::SetDataScalarTypeToShort()
{
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SetDataScalarTypeToShort();
}



void vtkImageReader2::SetDataScalarTypeToUnsignedShort()
{
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SetDataScalarTypeToUnsignedShort();
}



void vtkImageReader2::SetDataScalarTypeToUnsignedChar()
{
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SetDataScalarTypeToUnsignedChar();
}



int vtkImageReader2::GetDataScalarType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->GetDataScalarType();
  return retVal;
}



void vtkImageReader2::SetNumberOfScalarComponents(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SetNumberOfScalarComponents(arg0);
}



int vtkImageReader2::GetNumberOfScalarComponents()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->GetNumberOfScalarComponents();
  return retVal;
}



void vtkImageReader2::SetDataExtent(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5)
{
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SetDataExtent(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkImageReader2::SetDataExtent(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SetDataExtent(nativeaPin);
}



array<int>^ vtkImageReader2::GetDataExtent()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->GetDataExtent();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageReader2::SetFileDimensionality(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SetFileDimensionality(arg0);
}



int vtkImageReader2::GetFileDimensionality()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->GetFileDimensionality();
  return retVal;
}



void vtkImageReader2::SetDataSpacing(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SetDataSpacing(arg0, arg1, arg2);
}



void vtkImageReader2::SetDataSpacing(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SetDataSpacing(nativeaPin);
}



array<double>^ vtkImageReader2::GetDataSpacing()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->GetDataSpacing();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageReader2::SetDataOrigin(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SetDataOrigin(arg0, arg1, arg2);
}



void vtkImageReader2::SetDataOrigin(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SetDataOrigin(nativeaPin);
}



array<double>^ vtkImageReader2::GetDataOrigin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->GetDataOrigin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



unsigned long vtkImageReader2::GetHeaderSize()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->GetHeaderSize();
  return retVal;
}



unsigned long vtkImageReader2::GetHeaderSize(unsigned long slice)
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->GetHeaderSize(slice);
  return retVal;
}



void vtkImageReader2::SetHeaderSize(unsigned long size)
{
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SetHeaderSize(size);
}



void vtkImageReader2::SetDataByteOrderToBigEndian()
{
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SetDataByteOrderToBigEndian();
}



void vtkImageReader2::SetDataByteOrderToLittleEndian()
{
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SetDataByteOrderToLittleEndian();
}



int vtkImageReader2::GetDataByteOrder()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->GetDataByteOrder();
  return retVal;
}



void vtkImageReader2::SetDataByteOrder(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SetDataByteOrder(arg0);
}



System::String^ vtkImageReader2::GetDataByteOrderAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->GetDataByteOrderAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkImageReader2::SetFileNameSliceOffset(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SetFileNameSliceOffset(arg0);
}



int vtkImageReader2::GetFileNameSliceOffset()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->GetFileNameSliceOffset();
  return retVal;
}



void vtkImageReader2::SetFileNameSliceSpacing(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SetFileNameSliceSpacing(arg0);
}



int vtkImageReader2::GetFileNameSliceSpacing()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->GetFileNameSliceSpacing();
  return retVal;
}



void vtkImageReader2::SetSwapBytes(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SetSwapBytes(arg0);
}



int vtkImageReader2::GetSwapBytes()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->GetSwapBytes();
  return retVal;
}



void vtkImageReader2::SwapBytesOn()
{
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SwapBytesOn();
}



void vtkImageReader2::SwapBytesOff()
{
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SwapBytesOff();
}



int vtkImageReader2::OpenFile()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->OpenFile();
  return retVal;
}



void vtkImageReader2::SeekFile(int i, int j, int k)
{
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SeekFile(i, j, k);
}



void vtkImageReader2::FileLowerLeftOn()
{
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->FileLowerLeftOn();
}



void vtkImageReader2::FileLowerLeftOff()
{
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->FileLowerLeftOff();
}



int vtkImageReader2::GetFileLowerLeft()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->GetFileLowerLeft();
  return retVal;
}



void vtkImageReader2::SetFileLowerLeft(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->SetFileLowerLeft(arg0);
}



void vtkImageReader2::ComputeInternalFileName(int slice)
{
  vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->ComputeInternalFileName(slice);
}



System::String^ vtkImageReader2::GetInternalFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->GetInternalFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageReader2::CanReadFile(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->CanReadFile(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
  return retVal;
}



System::String^ vtkImageReader2::GetFileExtensions()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->GetFileExtensions();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkImageReader2::GetDescriptiveName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageReader2>(m_instance)->GetDescriptiveName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkImageReader2::vtkImageReader2(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkImageReader2::vtkImageReader2(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkImageReader2::vtkImageReader2() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageReader2::New()));
}



  vtkImageReader2::~vtkImageReader2() { }





} // end namespace vtkIO
