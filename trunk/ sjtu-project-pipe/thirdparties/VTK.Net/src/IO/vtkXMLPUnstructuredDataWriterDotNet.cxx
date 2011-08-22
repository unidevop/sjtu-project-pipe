

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLPUnstructuredDataWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLPUnstructuredDataWriter.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLPUnstructuredDataWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLPUnstructuredDataWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLPUnstructuredDataWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPUnstructuredDataWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLPUnstructuredDataWriter^ vtkXMLPUnstructuredDataWriter::NewInstance()
{
  ::vtkXMLPUnstructuredDataWriter* retVal = static_cast<::vtkXMLPUnstructuredDataWriter*>(vtk::ConvertManagedToNative<::vtkXMLPUnstructuredDataWriter>(m_instance)->NewInstance());
  return gcnew vtkXMLPUnstructuredDataWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLPUnstructuredDataWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLPUnstructuredDataWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLPUnstructuredDataWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLPUnstructuredDataWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkXMLPUnstructuredDataWriter::vtkXMLPUnstructuredDataWriter(System::IntPtr native, bool bConst) : vtkXMLPDataWriter(native, bConst) {}



  vtkXMLPUnstructuredDataWriter::vtkXMLPUnstructuredDataWriter(bool donothing) : vtkXMLPDataWriter(donothing) {}



  vtkXMLPUnstructuredDataWriter::vtkXMLPUnstructuredDataWriter() : vtkXMLPDataWriter(false) {
  this->SetNativePointer(IntPtr(::vtkXMLPUnstructuredDataWriter::New()));
}



  vtkXMLPUnstructuredDataWriter::~vtkXMLPUnstructuredDataWriter() { }





} // end namespace vtkIO
