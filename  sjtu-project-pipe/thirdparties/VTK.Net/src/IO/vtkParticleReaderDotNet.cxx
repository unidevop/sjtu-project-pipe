

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkParticleReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkParticleReader.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkParticleReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkParticleReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkParticleReader^ vtkParticleReader::NewInstance()
{
  ::vtkParticleReader* retVal = static_cast<::vtkParticleReader*>(vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->NewInstance());
  return gcnew vtkParticleReader(IntPtr(retVal), false);
}



vtkParticleReader^ vtkParticleReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkParticleReader* retVal = static_cast<::vtkParticleReader*>(::vtkParticleReader::SafeDownCast(oWrap));
  return gcnew vtkParticleReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkParticleReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkParticleReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkParticleReader::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkParticleReader::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkParticleReader::SetDataByteOrderToBigEndian()
{
  vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->SetDataByteOrderToBigEndian();
}



void vtkParticleReader::SetDataByteOrderToLittleEndian()
{
  vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->SetDataByteOrderToLittleEndian();
}



int vtkParticleReader::GetDataByteOrder()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->GetDataByteOrder();
  return retVal;
}



void vtkParticleReader::SetDataByteOrder(int arg0)
{
  vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->SetDataByteOrder(arg0);
}



System::String^ vtkParticleReader::GetDataByteOrderAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->GetDataByteOrderAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkParticleReader::SetSwapBytes(int arg0)
{
  vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->SetSwapBytes(arg0);
}



int vtkParticleReader::GetSwapBytes()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->GetSwapBytes();
  return retVal;
}



void vtkParticleReader::SwapBytesOn()
{
  vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->SwapBytesOn();
}



void vtkParticleReader::SwapBytesOff()
{
  vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->SwapBytesOff();
}



void vtkParticleReader::SetHasScalar(int arg0)
{
  vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->SetHasScalar(arg0);
}



int vtkParticleReader::GetHasScalar()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->GetHasScalar();
  return retVal;
}



void vtkParticleReader::HasScalarOn()
{
  vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->HasScalarOn();
}



void vtkParticleReader::HasScalarOff()
{
  vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->HasScalarOff();
}



void vtkParticleReader::SetFileType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->SetFileType(arg0);
}



int vtkParticleReader::GetFileTypeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->GetFileTypeMinValue();
  return retVal;
}



int vtkParticleReader::GetFileTypeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->GetFileTypeMaxValue();
  return retVal;
}



int vtkParticleReader::GetFileType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->GetFileType();
  return retVal;
}



void vtkParticleReader::SetFileTypeToUnknown()
{
  vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->SetFileTypeToUnknown();
}



void vtkParticleReader::SetFileTypeToText()
{
  vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->SetFileTypeToText();
}



void vtkParticleReader::SetFileTypeToBinary()
{
  vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->SetFileTypeToBinary();
}



void vtkParticleReader::SetDataType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->SetDataType(arg0);
}



int vtkParticleReader::GetDataTypeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->GetDataTypeMinValue();
  return retVal;
}



int vtkParticleReader::GetDataTypeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->GetDataTypeMaxValue();
  return retVal;
}



int vtkParticleReader::GetDataType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->GetDataType();
  return retVal;
}



void vtkParticleReader::SetDataTypeToFloat()
{
  vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->SetDataTypeToFloat();
}



void vtkParticleReader::SetDataTypeToDouble()
{
  vtk::ConvertManagedToNative<::vtkParticleReader>(m_instance)->SetDataTypeToDouble();
}



  vtkParticleReader::vtkParticleReader(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkParticleReader::vtkParticleReader(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkParticleReader::vtkParticleReader() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkParticleReader::New()));
}



  vtkParticleReader::~vtkParticleReader() { }





} // end namespace vtkIO
