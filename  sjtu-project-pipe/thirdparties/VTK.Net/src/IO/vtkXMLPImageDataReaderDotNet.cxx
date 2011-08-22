

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLPImageDataReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLPImageDataReader.h"
#include "vtkImageData.h"
#include "vtkInformation.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLPImageDataReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLPImageDataReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLPImageDataReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPImageDataReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLPImageDataReader^ vtkXMLPImageDataReader::NewInstance()
{
  ::vtkXMLPImageDataReader* retVal = static_cast<::vtkXMLPImageDataReader*>(vtk::ConvertManagedToNative<::vtkXMLPImageDataReader>(m_instance)->NewInstance());
  return gcnew vtkXMLPImageDataReader(IntPtr(retVal), false);
}



vtkXMLPImageDataReader^ vtkXMLPImageDataReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLPImageDataReader* retVal = static_cast<::vtkXMLPImageDataReader*>(::vtkXMLPImageDataReader::SafeDownCast(oWrap));
  return gcnew vtkXMLPImageDataReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLPImageDataReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLPImageDataReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLPImageDataReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLPImageDataReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkXMLPImageDataReader::SetOutput(vtkImageData^ output)
{
  ::vtkImageData* outputWrap = vtk::ConvertManagedToNative<::vtkImageData>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLPImageDataReader>(m_instance)->SetOutput(outputWrap);
}



vtkImageData^ vtkXMLPImageDataReader::GetOutput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkXMLPImageDataReader>(m_instance)->GetOutput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



vtkImageData^ vtkXMLPImageDataReader::GetOutput(int idx)
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkXMLPImageDataReader>(m_instance)->GetOutput(idx));
  return gcnew vtkImageData(IntPtr(retVal), false);
}



void vtkXMLPImageDataReader::CopyOutputInformation(vtkInformation^ outInfo, int port)
{
  ::vtkInformation* outInfoWrap = vtk::ConvertManagedToNative<::vtkInformation>(outInfo->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLPImageDataReader>(m_instance)->CopyOutputInformation(outInfoWrap, port);
}



  vtkXMLPImageDataReader::vtkXMLPImageDataReader(System::IntPtr native, bool bConst) : vtkXMLPStructuredDataReader(native, bConst) {}



  vtkXMLPImageDataReader::vtkXMLPImageDataReader(bool donothing) : vtkXMLPStructuredDataReader(donothing) {}



  vtkXMLPImageDataReader::vtkXMLPImageDataReader() : vtkXMLPStructuredDataReader(false) {
  this->SetNativePointer(IntPtr(::vtkXMLPImageDataReader::New()));
}



  vtkXMLPImageDataReader::~vtkXMLPImageDataReader() { }





} // end namespace vtkIO
