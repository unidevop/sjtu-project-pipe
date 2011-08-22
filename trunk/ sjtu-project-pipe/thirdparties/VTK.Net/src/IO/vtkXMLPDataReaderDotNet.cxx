

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLPDataReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLPDataReader.h"
#include "vtkInformation.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLPDataReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLPDataReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLPDataReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPDataReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLPDataReader^ vtkXMLPDataReader::NewInstance()
{
  ::vtkXMLPDataReader* retVal = static_cast<::vtkXMLPDataReader*>(vtk::ConvertManagedToNative<::vtkXMLPDataReader>(m_instance)->NewInstance());
  return gcnew vtkXMLPDataReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLPDataReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLPDataReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLPDataReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLPDataReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkXMLPDataReader::GetNumberOfPieces()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPDataReader>(m_instance)->GetNumberOfPieces();
  return retVal;
}



void vtkXMLPDataReader::CopyOutputInformation(vtkInformation^ outInfo, int port)
{
  ::vtkInformation* outInfoWrap = vtk::ConvertManagedToNative<::vtkInformation>(outInfo->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLPDataReader>(m_instance)->CopyOutputInformation(outInfoWrap, port);
}



  vtkXMLPDataReader::vtkXMLPDataReader(System::IntPtr native, bool bConst) : vtkXMLReader(native, bConst) {}



  vtkXMLPDataReader::vtkXMLPDataReader(bool donothing) : vtkXMLReader(donothing) {}



  vtkXMLPDataReader::vtkXMLPDataReader() : vtkXMLReader(false) {
  this->SetNativePointer(IntPtr(::vtkXMLPDataReader::New()));
}



  vtkXMLPDataReader::~vtkXMLPDataReader() { }





} // end namespace vtkIO
