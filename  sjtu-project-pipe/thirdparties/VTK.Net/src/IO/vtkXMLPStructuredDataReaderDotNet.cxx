

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLPStructuredDataReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLPStructuredDataReader.h"
#include "vtkExtentTranslator.h"
#include "vtkInformation.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLPStructuredDataReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLPStructuredDataReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLPStructuredDataReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPStructuredDataReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLPStructuredDataReader^ vtkXMLPStructuredDataReader::NewInstance()
{
  ::vtkXMLPStructuredDataReader* retVal = static_cast<::vtkXMLPStructuredDataReader*>(vtk::ConvertManagedToNative<::vtkXMLPStructuredDataReader>(m_instance)->NewInstance());
  return gcnew vtkXMLPStructuredDataReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLPStructuredDataReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLPStructuredDataReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLPStructuredDataReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLPStructuredDataReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkExtentTranslator^ vtkXMLPStructuredDataReader::GetExtentTranslator()
{
  ::vtkExtentTranslator* retVal = static_cast<::vtkExtentTranslator*>(vtk::ConvertManagedToNative<::vtkXMLPStructuredDataReader>(m_instance)->GetExtentTranslator());
  return gcnew vtkExtentTranslator(IntPtr(retVal), false);
}



void vtkXMLPStructuredDataReader::CopyOutputInformation(vtkInformation^ outInfo, int port)
{
  ::vtkInformation* outInfoWrap = vtk::ConvertManagedToNative<::vtkInformation>(outInfo->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLPStructuredDataReader>(m_instance)->CopyOutputInformation(outInfoWrap, port);
}



  vtkXMLPStructuredDataReader::vtkXMLPStructuredDataReader(System::IntPtr native, bool bConst) : vtkXMLPDataReader(native, bConst) {}



  vtkXMLPStructuredDataReader::vtkXMLPStructuredDataReader(bool donothing) : vtkXMLPDataReader(donothing) {}



  vtkXMLPStructuredDataReader::vtkXMLPStructuredDataReader() : vtkXMLPDataReader(false) {
  this->SetNativePointer(IntPtr(::vtkXMLPStructuredDataReader::New()));
}



  vtkXMLPStructuredDataReader::~vtkXMLPStructuredDataReader() { }





} // end namespace vtkIO
