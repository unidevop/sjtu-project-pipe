

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLUnstructuredDataWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLUnstructuredDataWriter.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLUnstructuredDataWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLUnstructuredDataWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLUnstructuredDataWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLUnstructuredDataWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLUnstructuredDataWriter^ vtkXMLUnstructuredDataWriter::NewInstance()
{
  ::vtkXMLUnstructuredDataWriter* retVal = static_cast<::vtkXMLUnstructuredDataWriter*>(vtk::ConvertManagedToNative<::vtkXMLUnstructuredDataWriter>(m_instance)->NewInstance());
  return gcnew vtkXMLUnstructuredDataWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLUnstructuredDataWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLUnstructuredDataWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLUnstructuredDataWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLUnstructuredDataWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkXMLUnstructuredDataWriter::SetNumberOfPieces(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXMLUnstructuredDataWriter>(m_instance)->SetNumberOfPieces(arg0);
}



int vtkXMLUnstructuredDataWriter::GetNumberOfPieces()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLUnstructuredDataWriter>(m_instance)->GetNumberOfPieces();
  return retVal;
}



void vtkXMLUnstructuredDataWriter::SetWritePiece(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXMLUnstructuredDataWriter>(m_instance)->SetWritePiece(arg0);
}



int vtkXMLUnstructuredDataWriter::GetWritePiece()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLUnstructuredDataWriter>(m_instance)->GetWritePiece();
  return retVal;
}



void vtkXMLUnstructuredDataWriter::SetGhostLevel(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXMLUnstructuredDataWriter>(m_instance)->SetGhostLevel(arg0);
}



int vtkXMLUnstructuredDataWriter::GetGhostLevel()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLUnstructuredDataWriter>(m_instance)->GetGhostLevel();
  return retVal;
}



  vtkXMLUnstructuredDataWriter::vtkXMLUnstructuredDataWriter(System::IntPtr native, bool bConst) : vtkXMLWriter(native, bConst) {}



  vtkXMLUnstructuredDataWriter::vtkXMLUnstructuredDataWriter(bool donothing) : vtkXMLWriter(donothing) {}



  vtkXMLUnstructuredDataWriter::vtkXMLUnstructuredDataWriter() : vtkXMLWriter(false) {
  this->SetNativePointer(IntPtr(::vtkXMLUnstructuredDataWriter::New()));
}



  vtkXMLUnstructuredDataWriter::~vtkXMLUnstructuredDataWriter() { }





} // end namespace vtkIO
