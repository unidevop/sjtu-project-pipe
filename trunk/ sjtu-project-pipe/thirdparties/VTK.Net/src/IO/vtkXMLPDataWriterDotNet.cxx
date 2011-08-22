

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLPDataWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLPDataWriter.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLPDataWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLPDataWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLPDataWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPDataWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLPDataWriter^ vtkXMLPDataWriter::NewInstance()
{
  ::vtkXMLPDataWriter* retVal = static_cast<::vtkXMLPDataWriter*>(vtk::ConvertManagedToNative<::vtkXMLPDataWriter>(m_instance)->NewInstance());
  return gcnew vtkXMLPDataWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLPDataWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLPDataWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLPDataWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLPDataWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkXMLPDataWriter::SetNumberOfPieces(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXMLPDataWriter>(m_instance)->SetNumberOfPieces(arg0);
}



int vtkXMLPDataWriter::GetNumberOfPieces()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPDataWriter>(m_instance)->GetNumberOfPieces();
  return retVal;
}



void vtkXMLPDataWriter::SetStartPiece(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXMLPDataWriter>(m_instance)->SetStartPiece(arg0);
}



int vtkXMLPDataWriter::GetStartPiece()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPDataWriter>(m_instance)->GetStartPiece();
  return retVal;
}



void vtkXMLPDataWriter::SetEndPiece(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXMLPDataWriter>(m_instance)->SetEndPiece(arg0);
}



int vtkXMLPDataWriter::GetEndPiece()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPDataWriter>(m_instance)->GetEndPiece();
  return retVal;
}



void vtkXMLPDataWriter::SetGhostLevel(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXMLPDataWriter>(m_instance)->SetGhostLevel(arg0);
}



int vtkXMLPDataWriter::GetGhostLevel()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPDataWriter>(m_instance)->GetGhostLevel();
  return retVal;
}



void vtkXMLPDataWriter::SetWriteSummaryFile(int flag)
{
  vtk::ConvertManagedToNative<::vtkXMLPDataWriter>(m_instance)->SetWriteSummaryFile(flag);
}



int vtkXMLPDataWriter::GetWriteSummaryFile()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPDataWriter>(m_instance)->GetWriteSummaryFile();
  return retVal;
}



void vtkXMLPDataWriter::WriteSummaryFileOn()
{
  vtk::ConvertManagedToNative<::vtkXMLPDataWriter>(m_instance)->WriteSummaryFileOn();
}



void vtkXMLPDataWriter::WriteSummaryFileOff()
{
  vtk::ConvertManagedToNative<::vtkXMLPDataWriter>(m_instance)->WriteSummaryFileOff();
}



  vtkXMLPDataWriter::vtkXMLPDataWriter(System::IntPtr native, bool bConst) : vtkXMLWriter(native, bConst) {}



  vtkXMLPDataWriter::vtkXMLPDataWriter(bool donothing) : vtkXMLWriter(donothing) {}



  vtkXMLPDataWriter::vtkXMLPDataWriter() : vtkXMLWriter(false) {
  this->SetNativePointer(IntPtr(::vtkXMLPDataWriter::New()));
}



  vtkXMLPDataWriter::~vtkXMLPDataWriter() { }





} // end namespace vtkIO
