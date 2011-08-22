

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMCubesReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkMCubesReader.h"
#include "vtkObject.h"
#include "vtkPointLocator.h"

using namespace System;

namespace vtk {

System::String^ vtkMCubesReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMCubesReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMCubesReader^ vtkMCubesReader::NewInstance()
{
  ::vtkMCubesReader* retVal = static_cast<::vtkMCubesReader*>(vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->NewInstance());
  return gcnew vtkMCubesReader(IntPtr(retVal), false);
}



vtkMCubesReader^ vtkMCubesReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMCubesReader* retVal = static_cast<::vtkMCubesReader*>(::vtkMCubesReader::SafeDownCast(oWrap));
  return gcnew vtkMCubesReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMCubesReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMCubesReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkMCubesReader::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMCubesReader::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMCubesReader::SetLimitsFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->SetLimitsFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMCubesReader::GetLimitsFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->GetLimitsFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMCubesReader::SetHeaderSize(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->SetHeaderSize(arg0);
}



int vtkMCubesReader::GetHeaderSizeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->GetHeaderSizeMinValue();
  return retVal;
}



int vtkMCubesReader::GetHeaderSizeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->GetHeaderSizeMaxValue();
  return retVal;
}



int vtkMCubesReader::GetHeaderSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->GetHeaderSize();
  return retVal;
}



void vtkMCubesReader::SetFlipNormals(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->SetFlipNormals(arg0);
}



int vtkMCubesReader::GetFlipNormals()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->GetFlipNormals();
  return retVal;
}



void vtkMCubesReader::FlipNormalsOn()
{
  vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->FlipNormalsOn();
}



void vtkMCubesReader::FlipNormalsOff()
{
  vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->FlipNormalsOff();
}



void vtkMCubesReader::SetNormals(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->SetNormals(arg0);
}



int vtkMCubesReader::GetNormals()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->GetNormals();
  return retVal;
}



void vtkMCubesReader::NormalsOn()
{
  vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->NormalsOn();
}



void vtkMCubesReader::NormalsOff()
{
  vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->NormalsOff();
}



void vtkMCubesReader::SetDataByteOrderToBigEndian()
{
  vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->SetDataByteOrderToBigEndian();
}



void vtkMCubesReader::SetDataByteOrderToLittleEndian()
{
  vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->SetDataByteOrderToLittleEndian();
}



int vtkMCubesReader::GetDataByteOrder()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->GetDataByteOrder();
  return retVal;
}



void vtkMCubesReader::SetDataByteOrder(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->SetDataByteOrder(arg0);
}



System::String^ vtkMCubesReader::GetDataByteOrderAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->GetDataByteOrderAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMCubesReader::SetSwapBytes(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->SetSwapBytes(arg0);
}



int vtkMCubesReader::GetSwapBytes()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->GetSwapBytes();
  return retVal;
}



void vtkMCubesReader::SwapBytesOn()
{
  vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->SwapBytesOn();
}



void vtkMCubesReader::SwapBytesOff()
{
  vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->SwapBytesOff();
}



void vtkMCubesReader::SetLocator(vtkPointLocator^ locator)
{
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->SetLocator(locatorWrap);
}



vtkPointLocator^ vtkMCubesReader::GetLocator()
{
  ::vtkPointLocator* retVal = static_cast<::vtkPointLocator*>(vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->GetLocator());
  return gcnew vtkPointLocator(IntPtr(retVal), false);
}



void vtkMCubesReader::CreateDefaultLocator()
{
  vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->CreateDefaultLocator();
}



unsigned long vtkMCubesReader::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkMCubesReader>(m_instance)->GetMTime();
  return retVal;
}



  vtkMCubesReader::vtkMCubesReader(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkMCubesReader::vtkMCubesReader(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkMCubesReader::vtkMCubesReader() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkMCubesReader::New()));
}



  vtkMCubesReader::~vtkMCubesReader() { }





} // end namespace vtkIO
