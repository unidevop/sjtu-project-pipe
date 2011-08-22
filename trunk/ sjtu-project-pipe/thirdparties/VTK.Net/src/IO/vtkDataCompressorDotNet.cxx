

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataCompressorDotNet.h"

// native includes
#include "strstream"
#include "vtkDataCompressor.h"
#include "vtkUnsignedCharArray.h"

using namespace System;

namespace vtk {

System::String^ vtkDataCompressor::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataCompressor>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataCompressor::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataCompressor>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataCompressor^ vtkDataCompressor::NewInstance()
{
  ::vtkDataCompressor* retVal = static_cast<::vtkDataCompressor*>(vtk::ConvertManagedToNative<::vtkDataCompressor>(m_instance)->NewInstance());
  return gcnew vtkDataCompressor(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataCompressor::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataCompressor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataCompressor::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataCompressor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




unsigned long vtkDataCompressor::GetMaximumCompressionSpace(unsigned long size)
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkDataCompressor>(m_instance)->GetMaximumCompressionSpace(size);
  return retVal;
}



unsigned long vtkDataCompressor::Compress(array<unsigned char>^ uncompressedData, unsigned long uncompressedSize, array<unsigned char>^ compressedData, unsigned long compressionSpace)
{
  pin_ptr<unsigned char> uncompressedDataPin = &uncompressedData[0];
  unsigned char* nativeuncompressedDataPin = uncompressedDataPin;
  pin_ptr<unsigned char> compressedDataPin = &compressedData[0];
  unsigned char* nativecompressedDataPin = compressedDataPin;
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkDataCompressor>(m_instance)->Compress(nativeuncompressedDataPin, uncompressedSize, nativecompressedDataPin, compressionSpace);
  return retVal;
}



unsigned long vtkDataCompressor::Uncompress(array<unsigned char>^ compressedData, unsigned long compressedSize, array<unsigned char>^ uncompressedData, unsigned long uncompressedSize)
{
  pin_ptr<unsigned char> compressedDataPin = &compressedData[0];
  unsigned char* nativecompressedDataPin = compressedDataPin;
  pin_ptr<unsigned char> uncompressedDataPin = &uncompressedData[0];
  unsigned char* nativeuncompressedDataPin = uncompressedDataPin;
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkDataCompressor>(m_instance)->Uncompress(nativecompressedDataPin, compressedSize, nativeuncompressedDataPin, uncompressedSize);
  return retVal;
}



vtkUnsignedCharArray^ vtkDataCompressor::Compress(array<unsigned char>^ uncompressedData, unsigned long uncompressedSize)
{
  pin_ptr<unsigned char> uncompressedDataPin = &uncompressedData[0];
  unsigned char* nativeuncompressedDataPin = uncompressedDataPin;
  ::vtkUnsignedCharArray* retVal = static_cast<::vtkUnsignedCharArray*>(vtk::ConvertManagedToNative<::vtkDataCompressor>(m_instance)->Compress(nativeuncompressedDataPin, uncompressedSize));
  return gcnew vtkUnsignedCharArray(IntPtr(retVal), false);
}



vtkUnsignedCharArray^ vtkDataCompressor::Uncompress(array<unsigned char>^ compressedData, unsigned long compressedSize, unsigned long uncompressedSize)
{
  pin_ptr<unsigned char> compressedDataPin = &compressedData[0];
  unsigned char* nativecompressedDataPin = compressedDataPin;
  ::vtkUnsignedCharArray* retVal = static_cast<::vtkUnsignedCharArray*>(vtk::ConvertManagedToNative<::vtkDataCompressor>(m_instance)->Uncompress(nativecompressedDataPin, compressedSize, uncompressedSize));
  return gcnew vtkUnsignedCharArray(IntPtr(retVal), false);
}



  vtkDataCompressor::vtkDataCompressor(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkDataCompressor::vtkDataCompressor(bool donothing) : vtkObject(donothing) {}



  vtkDataCompressor::vtkDataCompressor() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkDataCompressor::New()));
}



  vtkDataCompressor::~vtkDataCompressor() { }





} // end namespace vtkIO
