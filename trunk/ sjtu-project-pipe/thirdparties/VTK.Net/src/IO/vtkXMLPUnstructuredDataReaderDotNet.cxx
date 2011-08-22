

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLPUnstructuredDataReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLPUnstructuredDataReader.h"
#include "vtkInformation.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLPUnstructuredDataReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLPUnstructuredDataReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLPUnstructuredDataReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPUnstructuredDataReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLPUnstructuredDataReader^ vtkXMLPUnstructuredDataReader::NewInstance()
{
  ::vtkXMLPUnstructuredDataReader* retVal = static_cast<::vtkXMLPUnstructuredDataReader*>(vtk::ConvertManagedToNative<::vtkXMLPUnstructuredDataReader>(m_instance)->NewInstance());
  return gcnew vtkXMLPUnstructuredDataReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLPUnstructuredDataReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLPUnstructuredDataReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLPUnstructuredDataReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLPUnstructuredDataReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkXMLPUnstructuredDataReader::CopyOutputInformation(vtkInformation^ outInfo, int port)
{
  ::vtkInformation* outInfoWrap = vtk::ConvertManagedToNative<::vtkInformation>(outInfo->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLPUnstructuredDataReader>(m_instance)->CopyOutputInformation(outInfoWrap, port);
}



  vtkXMLPUnstructuredDataReader::vtkXMLPUnstructuredDataReader(System::IntPtr native, bool bConst) : vtkXMLPDataReader(native, bConst) {}



  vtkXMLPUnstructuredDataReader::vtkXMLPUnstructuredDataReader(bool donothing) : vtkXMLPDataReader(donothing) {}



  vtkXMLPUnstructuredDataReader::vtkXMLPUnstructuredDataReader() : vtkXMLPDataReader(false) {
  this->SetNativePointer(IntPtr(::vtkXMLPUnstructuredDataReader::New()));
}



  vtkXMLPUnstructuredDataReader::~vtkXMLPUnstructuredDataReader() { }





} // end namespace vtkIO
