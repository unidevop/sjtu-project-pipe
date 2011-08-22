

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLPStructuredDataWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLPStructuredDataWriter.h"
#include "vtkExtentTranslator.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLPStructuredDataWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLPStructuredDataWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLPStructuredDataWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPStructuredDataWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLPStructuredDataWriter^ vtkXMLPStructuredDataWriter::NewInstance()
{
  ::vtkXMLPStructuredDataWriter* retVal = static_cast<::vtkXMLPStructuredDataWriter*>(vtk::ConvertManagedToNative<::vtkXMLPStructuredDataWriter>(m_instance)->NewInstance());
  return gcnew vtkXMLPStructuredDataWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLPStructuredDataWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLPStructuredDataWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLPStructuredDataWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLPStructuredDataWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkXMLPStructuredDataWriter::SetExtentTranslator(vtkExtentTranslator^ arg0)
{
  ::vtkExtentTranslator* arg0Wrap = vtk::ConvertManagedToNative<::vtkExtentTranslator>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLPStructuredDataWriter>(m_instance)->SetExtentTranslator(arg0Wrap);
}



vtkExtentTranslator^ vtkXMLPStructuredDataWriter::GetExtentTranslator()
{
  ::vtkExtentTranslator* retVal = static_cast<::vtkExtentTranslator*>(vtk::ConvertManagedToNative<::vtkXMLPStructuredDataWriter>(m_instance)->GetExtentTranslator());
  return gcnew vtkExtentTranslator(IntPtr(retVal), false);
}



  vtkXMLPStructuredDataWriter::vtkXMLPStructuredDataWriter(System::IntPtr native, bool bConst) : vtkXMLPDataWriter(native, bConst) {}



  vtkXMLPStructuredDataWriter::vtkXMLPStructuredDataWriter(bool donothing) : vtkXMLPDataWriter(donothing) {}



  vtkXMLPStructuredDataWriter::vtkXMLPStructuredDataWriter() : vtkXMLPDataWriter(false) {
  this->SetNativePointer(IntPtr(::vtkXMLPStructuredDataWriter::New()));
}



  vtkXMLPStructuredDataWriter::~vtkXMLPStructuredDataWriter() { }





} // end namespace vtkIO
