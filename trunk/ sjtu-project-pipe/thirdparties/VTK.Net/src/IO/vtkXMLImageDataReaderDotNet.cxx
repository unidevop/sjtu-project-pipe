

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLImageDataReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLImageDataReader.h"
#include "vtkImageData.h"
#include "vtkInformation.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLImageDataReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLImageDataReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLImageDataReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLImageDataReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLImageDataReader^ vtkXMLImageDataReader::NewInstance()
{
  ::vtkXMLImageDataReader* retVal = static_cast<::vtkXMLImageDataReader*>(vtk::ConvertManagedToNative<::vtkXMLImageDataReader>(m_instance)->NewInstance());
  return gcnew vtkXMLImageDataReader(IntPtr(retVal), false);
}



vtkXMLImageDataReader^ vtkXMLImageDataReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLImageDataReader* retVal = static_cast<::vtkXMLImageDataReader*>(::vtkXMLImageDataReader::SafeDownCast(oWrap));
  return gcnew vtkXMLImageDataReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLImageDataReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLImageDataReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLImageDataReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLImageDataReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkXMLImageDataReader::SetOutput(vtkImageData^ output)
{
  ::vtkImageData* outputWrap = vtk::ConvertManagedToNative<::vtkImageData>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLImageDataReader>(m_instance)->SetOutput(outputWrap);
}



vtkImageData^ vtkXMLImageDataReader::GetOutput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkXMLImageDataReader>(m_instance)->GetOutput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



vtkImageData^ vtkXMLImageDataReader::GetOutput(int idx)
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkXMLImageDataReader>(m_instance)->GetOutput(idx));
  return gcnew vtkImageData(IntPtr(retVal), false);
}



void vtkXMLImageDataReader::CopyOutputInformation(vtkInformation^ outInfo, int port)
{
  ::vtkInformation* outInfoWrap = vtk::ConvertManagedToNative<::vtkInformation>(outInfo->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLImageDataReader>(m_instance)->CopyOutputInformation(outInfoWrap, port);
}



  vtkXMLImageDataReader::vtkXMLImageDataReader(System::IntPtr native, bool bConst) : vtkXMLStructuredDataReader(native, bConst) {}



  vtkXMLImageDataReader::vtkXMLImageDataReader(bool donothing) : vtkXMLStructuredDataReader(donothing) {}



  vtkXMLImageDataReader::vtkXMLImageDataReader() : vtkXMLStructuredDataReader(false) {
  this->SetNativePointer(IntPtr(::vtkXMLImageDataReader::New()));
}



  vtkXMLImageDataReader::~vtkXMLImageDataReader() { }





} // end namespace vtkIO
